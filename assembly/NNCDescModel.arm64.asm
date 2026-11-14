; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCDescModel title]
; entry 0x1000224bc; next boundary 0x1000224c4 (exclusive)
; Objective-C encoding: @16@0:8
00000001000224bc  000440f9  ldr x0, [x0, #0x8]
00000001000224c0  c0035fd6  ret

; -[NNCDescModel setTitle:]
; entry 0x1000224c4; next boundary 0x1000224cc (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000224c4  03018052  mov w3, #0x8
00000001000224c8  7d495314  b 0x1014f4abc

; -[NNCDescModel content]
; entry 0x1000224cc; next boundary 0x1000224d4 (exclusive)
; Objective-C encoding: @16@0:8
00000001000224cc  000840f9  ldr x0, [x0, #0x10]
00000001000224d0  c0035fd6  ret

; -[NNCDescModel setContent:]
; entry 0x1000224d4; next boundary 0x1000224dc (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000224d4  03028052  mov w3, #0x10
00000001000224d8  79495314  b 0x1014f4abc

; -[NNCDescModel .cxx_destruct]
; entry 0x1000224dc; next boundary 0x10002250c (exclusive)
; Objective-C encoding: v16@0:8
00000001000224dc  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000224e0  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000224e4  fd430091  add x29, sp, #0x10
00000001000224e8  f30300aa  mov x19, x0
00000001000224ec  00400091  add x0, x0, #0x10
00000001000224f0  010080d2  mov x1, #0x0
00000001000224f4  75495394  bl 0x1014f4ac8
00000001000224f8  60220091  add x0, x19, #0x8
00000001000224fc  010080d2  mov x1, #0x0
0000000100022500  fd7b41a9  ldp x29, x30, [sp, #0x10]
0000000100022504  f44fc2a8  ldp x20, x19, [sp], #0x20
0000000100022508  70495314  b 0x1014f4ac8
