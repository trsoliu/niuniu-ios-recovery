; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; +[ColorManager sharedManager]
; entry 0x1000a8eb0; next boundary 0x1000a8ef0 (exclusive)
; Objective-C encoding: @16@0:8
00000001000a8eb0  fd7bbfa9  stp x29, x30, [sp, #-0x10]!
00000001000a8eb4  fd030091  mov x29, sp
00000001000a8eb8  a81c01f0  adrp x8, 9111
00000001000a8ebc  08a540f9  ldr x8, [x8, #0x148]
00000001000a8ec0  1f0500b1  cmn x8, #0x1
00000001000a8ec4  a1000054  b.ne 0x1000a8ed8
00000001000a8ec8  a81c01f0  adrp x8, 9111
00000001000a8ecc  00a140f9  ldr x0, [x8, #0x140]
00000001000a8ed0  fd7bc1a8  ldp x29, x30, [sp], #0x10
00000001000a8ed4  e22e5114  b 0x1014f4a5c
00000001000a8ed8  a01c01f0  adrp x0, 9111
00000001000a8edc  00200591  add x0, x0, #0x148
00000001000a8ee0  a1e600b0  adrp x1, 7381
00000001000a8ee4  21401f91  add x1, x1, #0x7d0
00000001000a8ee8  d32c5194  bl 0x1014f4234
00000001000a8eec  f7ffff17  b 0x1000a8ec8

; -[ColorManager bgColo]
; entry 0x1000a8f20; next boundary 0x1000a8f48 (exclusive)
; Objective-C encoding: @16@0:8
00000001000a8f20  481501d0  adrp x8, 8874
00000001000a8f24  003141f9  ldr x0, [x8, #0x260]
00000001000a8f28  a8c800b0  adrp x8, 6421
00000001000a8f2c  008d46fd  ldr d0, [x8, #0xd18]
00000001000a8f30  a8c800b0  adrp x8, 6421
00000001000a8f34  019146fd  ldr d1, [x8, #0xd20]
00000001000a8f38  a8c800b0  adrp x8, 6421
00000001000a8f3c  029546fd  ldr d2, [x8, #0xd28]
00000001000a8f40  03106e1e  fmov d3, #1.00000000
00000001000a8f44  514c5214  b 0x10153c088

; -[ColorManager titleColo]
; entry 0x1000a8f48; next boundary 0x1000a8f70 (exclusive)
; Objective-C encoding: @16@0:8
00000001000a8f48  481501d0  adrp x8, 8874
00000001000a8f4c  003141f9  ldr x0, [x8, #0x260]
00000001000a8f50  a8c800b0  adrp x8, 6421
00000001000a8f54  008d46fd  ldr d0, [x8, #0xd18]
00000001000a8f58  a8c800b0  adrp x8, 6421
00000001000a8f5c  019146fd  ldr d1, [x8, #0xd20]
00000001000a8f60  a8c800b0  adrp x8, 6421
00000001000a8f64  029546fd  ldr d2, [x8, #0xd28]
00000001000a8f68  03106e1e  fmov d3, #1.00000000
00000001000a8f6c  474c5214  b 0x10153c088
