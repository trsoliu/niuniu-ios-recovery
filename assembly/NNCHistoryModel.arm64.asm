; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCHistoryModel item]
; entry 0x1000be498; next boundary 0x1000be4a0 (exclusive)
; Objective-C encoding: @16@0:8
00000001000be498  000440f9  ldr x0, [x0, #0x8]
00000001000be49c  c0035fd6  ret

; -[NNCHistoryModel setItem:]
; entry 0x1000be4a0; next boundary 0x1000be4ac (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000be4a0  e10302aa  mov x1, x2
00000001000be4a4  00200091  add x0, x0, #0x8
00000001000be4a8  88d95014  b 0x1014f4ac8

; -[NNCHistoryModel title]
; entry 0x1000be4ac; next boundary 0x1000be4b4 (exclusive)
; Objective-C encoding: @16@0:8
00000001000be4ac  000840f9  ldr x0, [x0, #0x10]
00000001000be4b0  c0035fd6  ret

; -[NNCHistoryModel setTitle:]
; entry 0x1000be4b4; next boundary 0x1000be4bc (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000be4b4  03028052  mov w3, #0x10
00000001000be4b8  81d95014  b 0x1014f4abc

; -[NNCHistoryModel .cxx_destruct]
; entry 0x1000be4bc; next boundary 0x1000be4ec (exclusive)
; Objective-C encoding: v16@0:8
00000001000be4bc  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000be4c0  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000be4c4  fd430091  add x29, sp, #0x10
00000001000be4c8  f30300aa  mov x19, x0
00000001000be4cc  00400091  add x0, x0, #0x10
00000001000be4d0  010080d2  mov x1, #0x0
00000001000be4d4  7dd95094  bl 0x1014f4ac8
00000001000be4d8  60220091  add x0, x19, #0x8
00000001000be4dc  010080d2  mov x1, #0x0
00000001000be4e0  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000be4e4  f44fc2a8  ldp x20, x19, [sp], #0x20
00000001000be4e8  78d95014  b 0x1014f4ac8
