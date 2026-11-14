; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; -[NNCSpSourceIdModel playerId]
; entry 0x1000a7460; next boundary 0x1000a7468 (exclusive)
; Objective-C encoding: @16@0:8
00000001000a7460  000840f9  ldr x0, [x0, #0x10]
00000001000a7464  c0035fd6  ret

; -[NNCSpSourceIdModel setPlayerId:]
; entry 0x1000a7468; next boundary 0x1000a7470 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000a7468  03028052  mov w3, #0x10
00000001000a746c  94355114  b 0x1014f4abc

; -[NNCSpSourceIdModel thirdVodId]
; entry 0x1000a7470; next boundary 0x1000a7478 (exclusive)
; Objective-C encoding: i16@0:8
00000001000a7470  000840b9  ldr w0, [x0, #0x8]
00000001000a7474  c0035fd6  ret

; -[NNCSpSourceIdModel setThirdVodId:]
; entry 0x1000a7478; next boundary 0x1000a7480 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000a7478  020800b9  str w2, [x0, #0x8]
00000001000a747c  c0035fd6  ret

; -[NNCSpSourceIdModel episodeModelList]
; entry 0x1000a7480; next boundary 0x1000a7488 (exclusive)
; Objective-C encoding: @16@0:8
00000001000a7480  000c40f9  ldr x0, [x0, #0x18]
00000001000a7484  c0035fd6  ret

; -[NNCSpSourceIdModel setEpisodeModelList:]
; entry 0x1000a7488; next boundary 0x1000a7494 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000a7488  e10302aa  mov x1, x2
00000001000a748c  00600091  add x0, x0, #0x18
00000001000a7490  8e355114  b 0x1014f4ac8

; -[NNCSpSourceIdModel .cxx_destruct]
; entry 0x1000a7494; next boundary 0x1000a74c4 (exclusive)
; Objective-C encoding: v16@0:8
00000001000a7494  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000a7498  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000a749c  fd430091  add x29, sp, #0x10
00000001000a74a0  f30300aa  mov x19, x0
00000001000a74a4  00600091  add x0, x0, #0x18
00000001000a74a8  010080d2  mov x1, #0x0
00000001000a74ac  87355194  bl 0x1014f4ac8
00000001000a74b0  60420091  add x0, x19, #0x10
00000001000a74b4  010080d2  mov x1, #0x0
00000001000a74b8  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000a74bc  f44fc2a8  ldp x20, x19, [sp], #0x20
00000001000a74c0  82355114  b 0x1014f4ac8
