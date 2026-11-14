; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCSpHmSourceIdModel episodeModelList]
; entry 0x10005c42c; next boundary 0x10005c434 (exclusive)
; Objective-C encoding: @16@0:8
000000010005c42c  000440f9  ldr x0, [x0, #0x8]
000000010005c430  c0035fd6  ret

; -[NNCSpHmSourceIdModel setEpisodeModelList:]
; entry 0x10005c434; next boundary 0x10005c440 (exclusive)
; Objective-C encoding: v24@0:8@16
000000010005c434  e10302aa  mov x1, x2
000000010005c438  00200091  add x0, x0, #0x8
000000010005c43c  a3615214  b 0x1014f4ac8

; -[NNCSpHmSourceIdModel .cxx_destruct]
; entry 0x10005c440; next boundary 0x10005c44c (exclusive)
; Objective-C encoding: v16@0:8
000000010005c440  00200091  add x0, x0, #0x8
000000010005c444  010080d2  mov x1, #0x0
000000010005c448  a0615214  b 0x1014f4ac8
