; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCFileHistoryUpdateModel callback]
; entry 0x1000b0138; next boundary 0x1000b0150 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0138  fd7bbfa9  stp x29, x30, [sp, #-0x10]!
00000001000b013c  fd030091  mov x29, sp
00000001000b0140  00200091  add x0, x0, #0x8
00000001000b0144  2b125194  bl 0x1014f49f0
00000001000b0148  fd7bc1a8  ldp x29, x30, [sp], #0x10
00000001000b014c  f9115114  b 0x1014f4930

; -[NNCFileHistoryUpdateModel setCallback:]
; entry 0x1000b0150; next boundary 0x1000b015c (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0150  e10302aa  mov x1, x2
00000001000b0154  00200091  add x0, x0, #0x8
00000001000b0158  5f125114  b 0x1014f4ad4

; -[NNCFileHistoryUpdateModel .cxx_destruct]
; entry 0x1000b015c; next boundary 0x1000b0164 (exclusive)
; Objective-C encoding: v16@0:8
00000001000b015c  00200091  add x0, x0, #0x8
00000001000b0160  00125114  b 0x1014f4960
