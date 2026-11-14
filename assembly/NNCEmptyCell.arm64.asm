; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCEmptyCell awakeFromNib]
; entry 0x1000c184c; next boundary 0x1000c1880 (exclusive)
; Objective-C encoding: v16@0:8
00000001000c184c  ff8300d1  sub sp, sp, #0x20
00000001000c1850  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000c1854  fd430091  add x29, sp, #0x10
00000001000c1858  c81401b0  adrp x8, 8857
00000001000c185c  087545f9  ldr x8, [x8, #0xae8]
00000001000c1860  e02300a9  stp x0, x8, [sp]
00000001000c1864  681201d0  adrp x8, 8782
00000001000c1868  01a541f9  ldr x1, [x8, #0x348]
00000001000c186c  e0030091  mov x0, sp
00000001000c1870  6ccc5094  bl 0x1014f4a20
00000001000c1874  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000c1878  ff830091  add sp, sp, #0x20
00000001000c187c  c0035fd6  ret

; -[NNCEmptyCell setSelected:animated:]
; entry 0x1000c1880; next boundary 0x1000c1884 (exclusive)
; Objective-C encoding: v24@0:8B16B20
00000001000c1880  c0035fd6  ret

; -[NNCEmptyCell setHighlighted:animated:]
; entry 0x1000c1884; next boundary 0x1000c1888 (exclusive)
; Objective-C encoding: v24@0:8B16B20
00000001000c1884  c0035fd6  ret
