; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[InsetLabel init]
; entry 0x1000ae3cc; next boundary 0x1000ae420 (exclusive)
; Objective-C encoding: @16@0:8
00000001000ae3cc  ff8300d1  sub sp, sp, #0x20
00000001000ae3d0  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000ae3d4  fd430091  add x29, sp, #0x10
00000001000ae3d8  68150190  adrp x8, 8876
00000001000ae3dc  083145f9  ldr x8, [x8, #0xa60]
00000001000ae3e0  e02300a9  stp x0, x8, [sp]
00000001000ae3e4  881301b0  adrp x8, 8817
00000001000ae3e8  01ad44f9  ldr x1, [x8, #0x958]
00000001000ae3ec  e0030091  mov x0, sp
00000001000ae3f0  8c195194  bl 0x1014f4a20
00000001000ae3f4  000100b4  cbz x0, 0x1000ae414
00000001000ae3f8  881501f0  adrp x8, 8883
00000001000ae3fc  085182b9  ldrsw x8, [x8, #0x250]
00000001000ae400  0800088b  add x8, x0, x8
00000001000ae404  49e600d0  adrp x9, 7370
00000001000ae408  290943f9  ldr x9, [x9, #0x610]
00000001000ae40c  200540ad  ldp q0, q1, [x9]
00000001000ae410  000500ad  stp q0, q1, [x8]
00000001000ae414  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000ae418  ff830091  add sp, sp, #0x20
00000001000ae41c  c0035fd6  ret

; -[InsetLabel initWithFrame:]
; entry 0x1000ae420; next boundary 0x1000ae474 (exclusive)
; Objective-C encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
00000001000ae420  ff8300d1  sub sp, sp, #0x20
00000001000ae424  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000ae428  fd430091  add x29, sp, #0x10
00000001000ae42c  68150190  adrp x8, 8876
00000001000ae430  083145f9  ldr x8, [x8, #0xa60]
00000001000ae434  e02300a9  stp x0, x8, [sp]
00000001000ae438  881301d0  adrp x8, 8818
00000001000ae43c  017944f9  ldr x1, [x8, #0x8f0]
00000001000ae440  e0030091  mov x0, sp
00000001000ae444  77195194  bl 0x1014f4a20
00000001000ae448  000100b4  cbz x0, 0x1000ae468
00000001000ae44c  881501f0  adrp x8, 8883
00000001000ae450  085182b9  ldrsw x8, [x8, #0x250]
00000001000ae454  0800088b  add x8, x0, x8
00000001000ae458  49e600d0  adrp x9, 7370
00000001000ae45c  290943f9  ldr x9, [x9, #0x610]
00000001000ae460  200540ad  ldp q0, q1, [x9]
00000001000ae464  000500ad  stp q0, q1, [x8]
00000001000ae468  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000ae46c  ff830091  add sp, sp, #0x20
00000001000ae470  c0035fd6  ret

; -[InsetLabel drawTextInRect:]
; entry 0x1000ae474; next boundary 0x1000ae4d4 (exclusive)
; Objective-C encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
00000001000ae474  ff8300d1  sub sp, sp, #0x20
00000001000ae478  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000ae47c  fd430091  add x29, sp, #0x10
00000001000ae480  881501f0  adrp x8, 8883
00000001000ae484  085182b9  ldrsw x8, [x8, #0x250]
00000001000ae488  0800088b  add x8, x0, x8
00000001000ae48c  0415406d  ldp d4, d5, [x8]
00000001000ae490  061d416d  ldp d6, d7, [x8, #0x10]
00000001000ae494  0028651e  fadd d0, d0, d5
00000001000ae498  2128641e  fadd d1, d1, d4
00000001000ae49c  a528671e  fadd d5, d5, d7
00000001000ae4a0  4238651e  fsub d2, d2, d5
00000001000ae4a4  8428661e  fadd d4, d4, d6
00000001000ae4a8  6338641e  fsub d3, d3, d4
00000001000ae4ac  68150190  adrp x8, 8876
00000001000ae4b0  083145f9  ldr x8, [x8, #0xa60]
00000001000ae4b4  e02300a9  stp x0, x8, [sp]
00000001000ae4b8  481301d0  adrp x8, 8810
00000001000ae4bc  011546f9  ldr x1, [x8, #0xc28]
00000001000ae4c0  e0030091  mov x0, sp
00000001000ae4c4  57195194  bl 0x1014f4a20
00000001000ae4c8  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000ae4cc  ff830091  add sp, sp, #0x20
00000001000ae4d0  c0035fd6  ret

; -[InsetLabel textInsets]
; entry 0x1000ae4d4; next boundary 0x1000ae4ec (exclusive)
; Objective-C encoding: {UIEdgeInsets=dddd}16@0:8
00000001000ae4d4  881501f0  adrp x8, 8883
00000001000ae4d8  085182b9  ldrsw x8, [x8, #0x250]
00000001000ae4dc  0800088b  add x8, x0, x8
00000001000ae4e0  0005406d  ldp d0, d1, [x8]
00000001000ae4e4  020d416d  ldp d2, d3, [x8, #0x10]
00000001000ae4e8  c0035fd6  ret

; -[InsetLabel setTextInsets:]
; entry 0x1000ae4ec; next boundary 0x1000ae504 (exclusive)
; Objective-C encoding: v48@0:8{UIEdgeInsets=dddd}16
00000001000ae4ec  881501f0  adrp x8, 8883
00000001000ae4f0  085182b9  ldrsw x8, [x8, #0x250]
00000001000ae4f4  0800088b  add x8, x0, x8
00000001000ae4f8  0005006d  stp d0, d1, [x8]
00000001000ae4fc  020d016d  stp d2, d3, [x8, #0x10]
00000001000ae500  c0035fd6  ret
