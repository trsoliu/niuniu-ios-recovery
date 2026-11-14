; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCFontButton setSelected:]
; entry 0x1000c2a24; next boundary 0x1000c2acc (exclusive)
; Objective-C encoding: v20@0:8B16
00000001000c2a24  ffc300d1  sub sp, sp, #0x30
00000001000c2a28  f44f01a9  stp x20, x19, [sp, #0x10]
00000001000c2a2c  fd7b02a9  stp x29, x30, [sp, #0x20]
00000001000c2a30  fd830091  add x29, sp, #0x20
00000001000c2a34  f40302aa  mov x20, x2
00000001000c2a38  f30300aa  mov x19, x0
00000001000c2a3c  c8140190  adrp x8, 8856
00000001000c2a40  087d45f9  ldr x8, [x8, #0xaf8]
00000001000c2a44  e02300a9  stp x0, x8, [sp]
00000001000c2a48  081401b0  adrp x8, 8833
00000001000c2a4c  017543f9  ldr x1, [x8, #0x6e8]
00000001000c2a50  e0030091  mov x0, sp
00000001000c2a54  f3c75094  bl 0x1014f4a20
00000001000c2a58  88140190  adrp x8, 8848
00000001000c2a5c  003d41f9  ldr x0, [x8, #0x278]
00000001000c2a60  94000034  cbz w20, 0x1000c2a70
00000001000c2a64  e81401f0  adrp x8, 8863
00000001000c2a68  08d584b9  ldrsw x8, [x8, #0x4d4]
00000001000c2a6c  03000014  b 0x1000c2a78
00000001000c2a70  e81401f0  adrp x8, 8863
00000001000c2a74  08d984b9  ldrsw x8, [x8, #0x4d8]
00000001000c2a78  686a68b8  ldr w8, [x19, x8]
00000001000c2a7c  0001621e  scvtf d0, w8
00000001000c2a80  3aab5494  bl 0x1015ed768
00000001000c2a84  fd031daa  mov x29, x29
00000001000c2a88  f8c75094  bl 0x1014f4a68
00000001000c2a8c  f40300aa  mov x20, x0
00000001000c2a90  e00313aa  mov x0, x19
00000001000c2a94  25b65494  bl 0x1015f0328
00000001000c2a98  fd031daa  mov x29, x29
00000001000c2a9c  f3c75094  bl 0x1014f4a68
00000001000c2aa0  f30300aa  mov x19, x0
00000001000c2aa4  e20314aa  mov x2, x20
00000001000c2aa8  38c75394  bl 0x1015b4788
00000001000c2aac  e00313aa  mov x0, x19
00000001000c2ab0  e2c75094  bl 0x1014f4a38
00000001000c2ab4  e00314aa  mov x0, x20
00000001000c2ab8  e0c75094  bl 0x1014f4a38
00000001000c2abc  fd7b42a9  ldp x29, x30, [sp, #0x20]
00000001000c2ac0  f44f41a9  ldp x20, x19, [sp, #0x10]
00000001000c2ac4  ffc30091  add sp, sp, #0x30
00000001000c2ac8  c0035fd6  ret

; -[NNCFontButton normalSize]
; entry 0x1000c2acc; next boundary 0x1000c2adc (exclusive)
; Objective-C encoding: i16@0:8
00000001000c2acc  e81401f0  adrp x8, 8863
00000001000c2ad0  08d984b9  ldrsw x8, [x8, #0x4d8]
00000001000c2ad4  006868b8  ldr w0, [x0, x8]
00000001000c2ad8  c0035fd6  ret

; -[NNCFontButton setNormalSize:]
; entry 0x1000c2adc; next boundary 0x1000c2aec (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000c2adc  e81401f0  adrp x8, 8863
00000001000c2ae0  08d984b9  ldrsw x8, [x8, #0x4d8]
00000001000c2ae4  026828b8  str w2, [x0, x8]
00000001000c2ae8  c0035fd6  ret

; -[NNCFontButton selectedSize]
; entry 0x1000c2aec; next boundary 0x1000c2afc (exclusive)
; Objective-C encoding: i16@0:8
00000001000c2aec  e81401f0  adrp x8, 8863
00000001000c2af0  08d584b9  ldrsw x8, [x8, #0x4d4]
00000001000c2af4  006868b8  ldr w0, [x0, x8]
00000001000c2af8  c0035fd6  ret

; -[NNCFontButton setSelectedSize:]
; entry 0x1000c2afc; next boundary 0x1000c2b0c (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000c2afc  e81401f0  adrp x8, 8863
00000001000c2b00  08d584b9  ldrsw x8, [x8, #0x4d4]
00000001000c2b04  026828b8  str w2, [x0, x8]
00000001000c2b08  c0035fd6  ret
