; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCMulitDownloadItem item]
; entry 0x1000623ac; next boundary 0x1000623b4 (exclusive)
; Objective-C encoding: @16@0:8
00000001000623ac  000440f9  ldr x0, [x0, #0x8]
00000001000623b0  c0035fd6  ret

; -[NNCMulitDownloadItem setItem:]
; entry 0x1000623b4; next boundary 0x1000623c0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000623b4  e10302aa  mov x1, x2
00000001000623b8  00200091  add x0, x0, #0x8
00000001000623bc  c3495214  b 0x1014f4ac8

; -[NNCMulitDownloadItem allItemList]
; entry 0x1000623c0; next boundary 0x1000623c8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000623c0  000840f9  ldr x0, [x0, #0x10]
00000001000623c4  c0035fd6  ret

; -[NNCMulitDownloadItem setAllItemList:]
; entry 0x1000623c8; next boundary 0x1000623d4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000623c8  e10302aa  mov x1, x2
00000001000623cc  00400091  add x0, x0, #0x10
00000001000623d0  be495214  b 0x1014f4ac8

; -[NNCMulitDownloadItem .cxx_destruct]
; entry 0x1000623d4; next boundary 0x100062404 (exclusive)
; Objective-C encoding: v16@0:8
00000001000623d4  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000623d8  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000623dc  fd430091  add x29, sp, #0x10
00000001000623e0  f30300aa  mov x19, x0
00000001000623e4  00400091  add x0, x0, #0x10
00000001000623e8  010080d2  mov x1, #0x0
00000001000623ec  b7495294  bl 0x1014f4ac8
00000001000623f0  60220091  add x0, x19, #0x8
00000001000623f4  010080d2  mov x1, #0x0
00000001000623f8  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000623fc  f44fc2a8  ldp x20, x19, [sp], #0x20
0000000100062400  b2495214  b 0x1014f4ac8
