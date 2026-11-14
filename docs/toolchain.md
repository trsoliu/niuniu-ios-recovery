# 本地分析工具链

- REA `rea-agents@6.5.0`，通过本地 stdio MCP 持久会话使用 Ghidra provider。
- Ghidra `12.1.4` 官方发行包 SHA-256：`ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db`。macOS arm64 原生 decompiler 从该发行包内 C++ 源码以 Apple clang 构建，目标 `ghidra_opt`。
- Eclipse Temurin JDK `21.0.13+9` macOS aarch64，官方发行包 SHA-256：`bf036b35b071bfb2f54f2c0af8ee8d88afa95ee6eb3dce02c0f94cfc2524d04a`。
- Apple `otool -ov` 用于从验证通过的主程序直接读取 Objective-C runtime 元数据。

工具安装包、原生工具构建目录、Java 环境、Ghidra 数据库和原始日志均不随仓库上传。原 IPA 本身不上传。解码器告警和每方法缺失保留在覆盖率及恢复说明中。

下载来源：[Ghidra 官方发行](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build)、[Temurin 官方发行](https://github.com/adoptium/temurin21-binaries/releases/tag/jdk-21.0.13%2B9)。

## 本次分析配置

设置 `REA_GHIDRA_DISABLED_ANALYZERS='Decompiler Switch Analysis,Basic Constant Reference Analyzer,Objective-C Message Analyzer'`。这三个全局分析步骤对整个主程序（含第三方 SDK）的 switch 发现耗时较长。此次保留已认证的 Objective-C 方法地址并逐方法请求 Ghidra 反编译；自动发现未选中的回调、其他间接控制流和函数的完整性因此仍未建立。此设置和每方法限制写入覆盖率文件。

部分原包类型使用的 `long double` 编码触发了 Ghidra ObjC 类型分析告警。原始编码保留于元数据；伪代码中的类型推断不应视为完整或精确源码类型。

全局常量引用传播关闭后，跨指令的常量引用与间接调用解析可能减少；字符串和选择器应结合原始地址、汇编和运行时元数据核对。

全程序 Objective-C Message Analyzer 关闭后，不对全部 objc_msgSend 调用做自动签名覆盖；方法声明和选择器元数据作为独立证据保留。伪代码中的动态派发及参数类型需要人工核对。
