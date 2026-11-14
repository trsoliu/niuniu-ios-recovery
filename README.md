# 牛牛视频 iOS 恢复资料

从用户提供并确认有权上传的个人 IPA 中恢复的 Objective-C 接口、REA/Ghidra 伪代码和资源。这里是**工程重建资料**，并非完整原始源码，也不是已可编译或发布 TestFlight 的项目。

## 内容

- `interfaces/`：从 Objective-C runtime 元数据恢复的类、方法与属性声明。
- `pseudocode/`：REA 6.5.0 / Ghidra 12.1.4 对所选方法的反编译文本。扩展名为 `.c.txt`，避免被当作可编译源文件。
- `assembly/`：按方法入口和下一个已知函数边界导出的 ARM64 连续指令片段，不能替代完整控制流图。
- `metadata/`：方法地址、原始类型编码、资源摘要和恢复覆盖率。
- `resources/`：从原包提取且经过范围检查的应用资源。
- `tools/`：可复现的本地恢复工具。原 IPA、REA/Ghidra/Java 不随仓库分发。

## 本次恢复结果

- 139 个选定类，3,453 条方法记录。
- 3,453 个方法均返回 REA/Ghidra 伪代码，分为 139 个类文件。
- 139,774 条入口汇编指令已与原 IPA 逐条核对。
- 1,995 个 Objective-C 调用桩名称已从原始指令、选择器指针和符号绑定验证，可在 `metadata/objc-selector-stubs.json` 查询未知 `FUN_*` 名称。
- 184 个资源文件，39 个界面解码文档。
- 4,418 个未选中类仅列入未恢复清单；不以这些统计声称完整原源码、完整函数控制流或可编译工程。

## 恢复边界

原包版本为 1.2.1（20），包含编译后的 arm64 Mach-O。反编译可获得部分控制流、对象调用和字符串引用，但不能自动恢复原注释、完整变量名、Xcode 构建配置、未打包源码、后端实现或全部依赖源码。类选择规则和每个方法的成功、失败与限制见覆盖率记录。

恢复的接口声明不含方法实现；Ghidra 的 `undefined*`、`FUN_*`、`DAT_*`、间接调用及未知结构体均是分析结果中的未解信息。不得把这些文本直接改扩展名后称为原始 `.m` 文件。Interface Builder 的解码图也不是原始 XIB/Storyboard 工程。

部分方法仍保留未恢复跳转表和间接跳转警告，详见 `metadata/pseudocode-quality.json`。3,453 个方法返回伪代码表示调用返回覆盖率，不表示业务逻辑精度或可重编译率。

## TestFlight

原二进制由 Xcode 15 / iOS 17.5 SDK 构建。当前 Apple 上传要求需要 Xcode 26 / iOS 26 SDK 或更新版本。要发布 TestFlight，仍须基于这些资料补齐可编译实现和依赖、使用当前 SDK 重新构建、完成签名与设备功能验证，再上传 App Store Connect。本仓库没有声称完成这些步骤。

官方依据：[REA](https://github.com/morluto/rea)、[Apple SDK 要求](https://developer.apple.com/news/upcoming-requirements/?id=04282026a)。

## 本地复现

使用自己有权处理的原 IPA。资源/元数据工具的参数见 `python3 tools/recover_metadata.py --help`；反编译工具的必需参数为 `--rea-root`、`--target`、`--methods`、`--out`、`--local-log`。`--rea-root` 指安装了 `rea-agents@6.5.0` 的 npm 项目根目录，`--target` 指提取出的主程序，`--methods` 指方法地址映射。通过环境变量 `GHIDRA_INSTALL_DIR`、`JAVA_HOME` 配置匹配架构的 Ghidra 12.1.4 和完整 JDK 21 或更新版本。分析日志、可选 `--snapshot` 均应放在仓库外。

分析不运行原应用、不请求其中的业务接口。发布资料会隐藏本机开发路径、URL 内的账号密码和可识别凭据；这些隐藏会降低对应位置的复现精度。

## 验证

在持有原始 IPA 的 macOS 上运行：

```sh
python3 tools/test_recovery_provenance.py /path/to/original.ipa --analysis-dir /path/to/local-analysis
node --check tools/decompile_rea.mjs
node tools/test_decompile_guards.mjs
python3 tools/test_assembly_provenance.py /path/to/original.ipa
python3 tools/test_selector_stubs.py /path/to/original.ipa
python3 tools/verify_export.py
```

来源测试涵盖伪造缓存、主程序摘要不匹配、界面档案摘要/覆盖范围不匹配。测试通过证明恢复输入校验工作，不证明恢复的逻辑与原程序行为等价。
