; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; +[DownloadModel getVideoBeanWithBeanString:]
; entry 0x1000b0818; next boundary 0x1000b089c (exclusive)
; Objective-C encoding: @24@0:8@16
00000001000b0818  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000b081c  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000b0820  fd430091  add x29, sp, #0x10
00000001000b0824  e00302aa  mov x0, x2
00000001000b0828  081501d0  adrp x8, 8866
00000001000b082c  13bd41f9  ldr x19, [x8, #0x378]
00000001000b0830  82008052  mov w2, #0x4
00000001000b0834  fd4f5294  bl 0x101544828
00000001000b0838  fd031daa  mov x29, x29
00000001000b083c  8b105194  bl 0x1014f4a68
00000001000b0840  f40300aa  mov x20, x0
00000001000b0844  e00313aa  mov x0, x19
00000001000b0848  e20314aa  mov x2, x20
00000001000b084c  23008052  mov w3, #0x1
00000001000b0850  040080d2  mov x4, #0x0
00000001000b0854  1d5b5194  bl 0x1015074c8
00000001000b0858  fd031daa  mov x29, x29
00000001000b085c  83105194  bl 0x1014f4a68
00000001000b0860  f30300aa  mov x19, x0
00000001000b0864  e00314aa  mov x0, x20
00000001000b0868  74105194  bl 0x1014f4a38
00000001000b086c  081501d0  adrp x8, 8866
00000001000b0870  002542f9  ldr x0, [x8, #0x448]
00000001000b0874  d5425394  bl 0x1015813c8
00000001000b0878  f40300aa  mov x20, x0
00000001000b087c  e20313aa  mov x2, x19
00000001000b0880  52ac5494  bl 0x1015db9c8
00000001000b0884  e00313aa  mov x0, x19
00000001000b0888  6c105194  bl 0x1014f4a38
00000001000b088c  e00314aa  mov x0, x20
00000001000b0890  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000b0894  f44fc2a8  ldp x20, x19, [sp], #0x20
00000001000b0898  26105114  b 0x1014f4930

; +[DownloadModel getVideoBeanDataString:]
; entry 0x1000b089c; next boundary 0x1000b0a60 (exclusive)
; Objective-C encoding: @24@0:8@16
00000001000b089c  ff4303d1  sub sp, sp, #0xd0
00000001000b08a0  f6570aa9  stp x22, x21, [sp, #0xa0]
00000001000b08a4  f44f0ba9  stp x20, x19, [sp, #0xb0]
00000001000b08a8  fd7b0ca9  stp x29, x30, [sp, #0xc0]
00000001000b08ac  fd030391  add x29, sp, #0xc0
00000001000b08b0  e00302aa  mov x0, x2
00000001000b08b4  48e60090  adrp x8, 7368
00000001000b08b8  089d44f9  ldr x8, [x8, #0x938]
00000001000b08bc  080140f9  ldr x8, [x8]
00000001000b08c0  a8831df8  stur x8, [x29, #-0x28]
00000001000b08c4  081501d0  adrp x8, 8866
00000001000b08c8  13bd41f9  ldr x19, [x8, #0x378]
00000001000b08cc  a8e900d0  adrp x8, 7478
00000001000b08d0  08012891  add x8, x8, #0xa00
00000001000b08d4  a9e900d0  adrp x9, 7478
00000001000b08d8  29812891  add x9, x9, #0xa20
00000001000b08dc  e82700a9  stp x8, x9, [sp]
00000001000b08e0  a8e900d0  adrp x8, 7478
00000001000b08e4  08012991  add x8, x8, #0xa40
00000001000b08e8  a9e900d0  adrp x9, 7478
00000001000b08ec  29812991  add x9, x9, #0xa60
00000001000b08f0  e82701a9  stp x8, x9, [sp, #0x10]
00000001000b08f4  a8e900d0  adrp x8, 7478
00000001000b08f8  08012a91  add x8, x8, #0xa80
00000001000b08fc  a9e900d0  adrp x9, 7478
00000001000b0900  29812a91  add x9, x9, #0xaa0
00000001000b0904  e82702a9  stp x8, x9, [sp, #0x20]
00000001000b0908  a8e900d0  adrp x8, 7478
00000001000b090c  08012b91  add x8, x8, #0xac0
00000001000b0910  a9e900d0  adrp x9, 7478
00000001000b0914  29812b91  add x9, x9, #0xae0
00000001000b0918  e82703a9  stp x8, x9, [sp, #0x30]
00000001000b091c  a8e900d0  adrp x8, 7478
00000001000b0920  08012c91  add x8, x8, #0xb00
00000001000b0924  89e900b0  adrp x9, 7473
00000001000b0928  29812f91  add x9, x9, #0xbe0
00000001000b092c  e82704a9  stp x8, x9, [sp, #0x40]
00000001000b0930  a8e900d0  adrp x8, 7478
00000001000b0934  08812c91  add x8, x8, #0xb20
00000001000b0938  a9e900d0  adrp x9, 7478
00000001000b093c  29012d91  add x9, x9, #0xb40
00000001000b0940  e82705a9  stp x8, x9, [sp, #0x50]
00000001000b0944  a8e900d0  adrp x8, 7478
00000001000b0948  08812d91  add x8, x8, #0xb60
00000001000b094c  89e900b0  adrp x9, 7473
00000001000b0950  29812e91  add x9, x9, #0xba0
00000001000b0954  e82706a9  stp x8, x9, [sp, #0x60]
00000001000b0958  68e900f0  adrp x8, 7471
00000001000b095c  08811491  add x8, x8, #0x520
00000001000b0960  a9e900d0  adrp x9, 7478
00000001000b0964  29012e91  add x9, x9, #0xb80
00000001000b0968  e82707a9  stp x8, x9, [sp, #0x70]
00000001000b096c  a8e900d0  adrp x8, 7478
00000001000b0970  08812e91  add x8, x8, #0xba0
00000001000b0974  a9e900d0  adrp x9, 7478
00000001000b0978  29012f91  add x9, x9, #0xbc0
00000001000b097c  e82708a9  stp x8, x9, [sp, #0x80]
00000001000b0980  a8e900d0  adrp x8, 7478
00000001000b0984  08812f91  add x8, x8, #0xbe0
00000001000b0988  e84b00f9  str x8, [sp, #0x90]
00000001000b098c  081501d0  adrp x8, 8866
00000001000b0990  146141f9  ldr x20, [x8, #0x2c0]
00000001000b0994  2c105194  bl 0x1014f4a44
00000001000b0998  f50300aa  mov x21, x0
00000001000b099c  e2030091  mov x2, sp
00000001000b09a0  e00314aa  mov x0, x20
00000001000b09a4  63028052  mov w3, #0x13
00000001000b09a8  88ec5194  bl 0x10152bbc8
00000001000b09ac  fd031daa  mov x29, x29
00000001000b09b0  2e105194  bl 0x1014f4a68
00000001000b09b4  f40300aa  mov x20, x0
00000001000b09b8  e00315aa  mov x0, x21
00000001000b09bc  e20314aa  mov x2, x20
00000001000b09c0  225e5294  bl 0x101548248
00000001000b09c4  fd031daa  mov x29, x29
00000001000b09c8  28105194  bl 0x1014f4a68
00000001000b09cc  f60300aa  mov x22, x0
00000001000b09d0  e00315aa  mov x0, x21
00000001000b09d4  19105194  bl 0x1014f4a38
00000001000b09d8  e00313aa  mov x0, x19
00000001000b09dc  e20316aa  mov x2, x22
00000001000b09e0  23008052  mov w3, #0x1
00000001000b09e4  040080d2  mov x4, #0x0
00000001000b09e8  00505294  bl 0x1015449e8
00000001000b09ec  fd031daa  mov x29, x29
00000001000b09f0  1e105194  bl 0x1014f4a68
00000001000b09f4  f50300aa  mov x21, x0
00000001000b09f8  e00316aa  mov x0, x22
00000001000b09fc  0f105194  bl 0x1014f4a38
00000001000b0a00  e00314aa  mov x0, x20
00000001000b0a04  0d105194  bl 0x1014f4a38
00000001000b0a08  081501d0  adrp x8, 8866
00000001000b0a0c  002141f9  ldr x0, [x8, #0x240]
00000001000b0a10  b60f5194  bl 0x1014f48e8
00000001000b0a14  e20315aa  mov x2, x21
00000001000b0a18  83008052  mov w3, #0x4
00000001000b0a1c  b3ce5294  bl 0x1015644e8
00000001000b0a20  f30300aa  mov x19, x0
00000001000b0a24  e00315aa  mov x0, x21
00000001000b0a28  04105194  bl 0x1014f4a38
00000001000b0a2c  a8835df8  ldur x8, [x29, #-0x28]
00000001000b0a30  49e60090  adrp x9, 7368
00000001000b0a34  299d44f9  ldr x9, [x9, #0x938]
00000001000b0a38  290140f9  ldr x9, [x9]
00000001000b0a3c  3f0108eb  cmp x9, x8
00000001000b0a40  e1000054  b.ne 0x1000b0a5c
00000001000b0a44  e00313aa  mov x0, x19
00000001000b0a48  fd7b4ca9  ldp x29, x30, [sp, #0xc0]
00000001000b0a4c  f44f4ba9  ldp x20, x19, [sp, #0xb0]
00000001000b0a50  f6574aa9  ldp x22, x21, [sp, #0xa0]
00000001000b0a54  ff430391  add sp, sp, #0xd0
00000001000b0a58  b60f5114  b 0x1014f4930
00000001000b0a5c  0d212894  bl 0x100ab8e90

; -[DownloadModel VIDEO_URL]
; entry 0x1000b0a60; next boundary 0x1000b0a68 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0a60  001840f9  ldr x0, [x0, #0x30]
00000001000b0a64  c0035fd6  ret

; -[DownloadModel setVIDEO_URL:]
; entry 0x1000b0a68; next boundary 0x1000b0a70 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0a68  03068052  mov w3, #0x30
00000001000b0a6c  14105114  b 0x1014f4abc

; -[DownloadModel MIME_TYPE]
; entry 0x1000b0a70; next boundary 0x1000b0a78 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0a70  001c40f9  ldr x0, [x0, #0x38]
00000001000b0a74  c0035fd6  ret

; -[DownloadModel setMIME_TYPE:]
; entry 0x1000b0a78; next boundary 0x1000b0a80 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0a78  03078052  mov w3, #0x38
00000001000b0a7c  10105114  b 0x1014f4abc

; -[DownloadModel PLAYER_ID]
; entry 0x1000b0a80; next boundary 0x1000b0a88 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0a80  002040f9  ldr x0, [x0, #0x40]
00000001000b0a84  c0035fd6  ret

; -[DownloadModel setPLAYER_ID:]
; entry 0x1000b0a88; next boundary 0x1000b0a90 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0a88  03088052  mov w3, #0x40
00000001000b0a8c  0c105114  b 0x1014f4abc

; -[DownloadModel EPISODE_TITLE]
; entry 0x1000b0a90; next boundary 0x1000b0a98 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0a90  002440f9  ldr x0, [x0, #0x48]
00000001000b0a94  c0035fd6  ret

; -[DownloadModel setEPISODE_TITLE:]
; entry 0x1000b0a98; next boundary 0x1000b0aa0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0a98  03098052  mov w3, #0x48
00000001000b0a9c  08105114  b 0x1014f4abc

; -[DownloadModel BEAN_STRING]
; entry 0x1000b0aa0; next boundary 0x1000b0aa8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0aa0  002840f9  ldr x0, [x0, #0x50]
00000001000b0aa4  c0035fd6  ret

; -[DownloadModel setBEAN_STRING:]
; entry 0x1000b0aa8; next boundary 0x1000b0ab0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0aa8  030a8052  mov w3, #0x50
00000001000b0aac  04105114  b 0x1014f4abc

; -[DownloadModel VIDEO_ID_STRING]
; entry 0x1000b0ab0; next boundary 0x1000b0ab8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0ab0  002c40f9  ldr x0, [x0, #0x58]
00000001000b0ab4  c0035fd6  ret

; -[DownloadModel setVIDEO_ID_STRING:]
; entry 0x1000b0ab8; next boundary 0x1000b0ac0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0ab8  030b8052  mov w3, #0x58
00000001000b0abc  00105114  b 0x1014f4abc

; -[DownloadModel GROUP_NAME]
; entry 0x1000b0ac0; next boundary 0x1000b0ac8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0ac0  003040f9  ldr x0, [x0, #0x60]
00000001000b0ac4  c0035fd6  ret

; -[DownloadModel setGROUP_NAME:]
; entry 0x1000b0ac8; next boundary 0x1000b0ad0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0ac8  030c8052  mov w3, #0x60
00000001000b0acc  fc0f5114  b 0x1014f4abc

; -[DownloadModel VIDEO_TITLE]
; entry 0x1000b0ad0; next boundary 0x1000b0ad8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0ad0  003440f9  ldr x0, [x0, #0x68]
00000001000b0ad4  c0035fd6  ret

; -[DownloadModel setVIDEO_TITLE:]
; entry 0x1000b0ad8; next boundary 0x1000b0ae0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0ad8  030d8052  mov w3, #0x68
00000001000b0adc  f80f5114  b 0x1014f4abc

; -[DownloadModel COVER_URL]
; entry 0x1000b0ae0; next boundary 0x1000b0ae8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0ae0  003840f9  ldr x0, [x0, #0x70]
00000001000b0ae4  c0035fd6  ret

; -[DownloadModel setCOVER_URL:]
; entry 0x1000b0ae8; next boundary 0x1000b0af0 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0ae8  030e8052  mov w3, #0x70
00000001000b0aec  f40f5114  b 0x1014f4abc

; -[DownloadModel FILE_NAME]
; entry 0x1000b0af0; next boundary 0x1000b0af8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0af0  003c40f9  ldr x0, [x0, #0x78]
00000001000b0af4  c0035fd6  ret

; -[DownloadModel setFILE_NAME:]
; entry 0x1000b0af8; next boundary 0x1000b0b00 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0af8  030f8052  mov w3, #0x78
00000001000b0afc  f00f5114  b 0x1014f4abc

; -[DownloadModel FILE_PATH]
; entry 0x1000b0b00; next boundary 0x1000b0b08 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0b00  004040f9  ldr x0, [x0, #0x80]
00000001000b0b04  c0035fd6  ret

; -[DownloadModel setFILE_PATH:]
; entry 0x1000b0b08; next boundary 0x1000b0b10 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0b08  03108052  mov w3, #0x80
00000001000b0b0c  ec0f5114  b 0x1014f4abc

; -[DownloadModel VIDEO_ID]
; entry 0x1000b0b10; next boundary 0x1000b0b18 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b10  000840b9  ldr w0, [x0, #0x8]
00000001000b0b14  c0035fd6  ret

; -[DownloadModel setVIDEO_ID:]
; entry 0x1000b0b18; next boundary 0x1000b0b20 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b18  020800b9  str w2, [x0, #0x8]
00000001000b0b1c  c0035fd6  ret

; -[DownloadModel EPISODE_INDEX]
; entry 0x1000b0b20; next boundary 0x1000b0b28 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b20  000c40b9  ldr w0, [x0, #0xc]
00000001000b0b24  c0035fd6  ret

; -[DownloadModel setEPISODE_INDEX:]
; entry 0x1000b0b28; next boundary 0x1000b0b30 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b28  020c00b9  str w2, [x0, #0xc]
00000001000b0b2c  c0035fd6  ret

; -[DownloadModel COMPLETED]
; entry 0x1000b0b30; next boundary 0x1000b0b38 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b30  001040b9  ldr w0, [x0, #0x10]
00000001000b0b34  c0035fd6  ret

; -[DownloadModel setCOMPLETED:]
; entry 0x1000b0b38; next boundary 0x1000b0b40 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b38  021000b9  str w2, [x0, #0x10]
00000001000b0b3c  c0035fd6  ret

; -[DownloadModel CACHED_TS]
; entry 0x1000b0b40; next boundary 0x1000b0b48 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b40  001440b9  ldr w0, [x0, #0x14]
00000001000b0b44  c0035fd6  ret

; -[DownloadModel setCACHED_TS:]
; entry 0x1000b0b48; next boundary 0x1000b0b50 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b48  021400b9  str w2, [x0, #0x14]
00000001000b0b4c  c0035fd6  ret

; -[DownloadModel TOTAL_TS]
; entry 0x1000b0b50; next boundary 0x1000b0b58 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b50  001840b9  ldr w0, [x0, #0x18]
00000001000b0b54  c0035fd6  ret

; -[DownloadModel setTOTAL_TS:]
; entry 0x1000b0b58; next boundary 0x1000b0b60 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b58  021800b9  str w2, [x0, #0x18]
00000001000b0b5c  c0035fd6  ret

; -[DownloadModel VIDEO_TYPE]
; entry 0x1000b0b60; next boundary 0x1000b0b68 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b60  001c40b9  ldr w0, [x0, #0x1c]
00000001000b0b64  c0035fd6  ret

; -[DownloadModel setVIDEO_TYPE:]
; entry 0x1000b0b68; next boundary 0x1000b0b70 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b68  021c00b9  str w2, [x0, #0x1c]
00000001000b0b6c  c0035fd6  ret

; -[DownloadModel TASK_STATE]
; entry 0x1000b0b70; next boundary 0x1000b0b78 (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0b70  002040b9  ldr w0, [x0, #0x20]
00000001000b0b74  c0035fd6  ret

; -[DownloadModel setTASK_STATE:]
; entry 0x1000b0b78; next boundary 0x1000b0b80 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0b78  022000b9  str w2, [x0, #0x20]
00000001000b0b7c  c0035fd6  ret

; -[DownloadModel CACHED_LENGTH]
; entry 0x1000b0b80; next boundary 0x1000b0b88 (exclusive)
; Objective-C encoding: q16@0:8
00000001000b0b80  004440f9  ldr x0, [x0, #0x88]
00000001000b0b84  c0035fd6  ret

; -[DownloadModel setCACHED_LENGTH:]
; entry 0x1000b0b88; next boundary 0x1000b0b90 (exclusive)
; Objective-C encoding: v24@0:8q16
00000001000b0b88  024400f9  str x2, [x0, #0x88]
00000001000b0b8c  c0035fd6  ret

; -[DownloadModel TOTAL_LENGTH]
; entry 0x1000b0b90; next boundary 0x1000b0b98 (exclusive)
; Objective-C encoding: q16@0:8
00000001000b0b90  004840f9  ldr x0, [x0, #0x90]
00000001000b0b94  c0035fd6  ret

; -[DownloadModel setTOTAL_LENGTH:]
; entry 0x1000b0b98; next boundary 0x1000b0ba0 (exclusive)
; Objective-C encoding: v24@0:8q16
00000001000b0b98  024800f9  str x2, [x0, #0x90]
00000001000b0b9c  c0035fd6  ret

; -[DownloadModel DOWNLOAD_TIME]
; entry 0x1000b0ba0; next boundary 0x1000b0ba8 (exclusive)
; Objective-C encoding: q16@0:8
00000001000b0ba0  004c40f9  ldr x0, [x0, #0x98]
00000001000b0ba4  c0035fd6  ret

; -[DownloadModel setDOWNLOAD_TIME:]
; entry 0x1000b0ba8; next boundary 0x1000b0bb0 (exclusive)
; Objective-C encoding: v24@0:8q16
00000001000b0ba8  024c00f9  str x2, [x0, #0x98]
00000001000b0bac  c0035fd6  ret

; -[DownloadModel PERCENT]
; entry 0x1000b0bb0; next boundary 0x1000b0bb8 (exclusive)
; Objective-C encoding: f16@0:8
00000001000b0bb0  002440bd  ldr s0, [x0, #0x24]
00000001000b0bb4  c0035fd6  ret

; -[DownloadModel setPERCENT:]
; entry 0x1000b0bb8; next boundary 0x1000b0bc0 (exclusive)
; Objective-C encoding: v20@0:8f16
00000001000b0bb8  002400bd  str s0, [x0, #0x24]
00000001000b0bbc  c0035fd6  ret

; -[DownloadModel RESUME_DATA]
; entry 0x1000b0bc0; next boundary 0x1000b0bc8 (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0bc0  005040f9  ldr x0, [x0, #0xa0]
00000001000b0bc4  c0035fd6  ret

; -[DownloadModel setRESUME_DATA:]
; entry 0x1000b0bc8; next boundary 0x1000b0bd4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0bc8  e10302aa  mov x1, x2
00000001000b0bcc  00800291  add x0, x0, #0xa0
00000001000b0bd0  be0f5114  b 0x1014f4ac8

; -[DownloadModel i0]
; entry 0x1000b0bd4; next boundary 0x1000b0bdc (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0bd4  002840b9  ldr w0, [x0, #0x28]
00000001000b0bd8  c0035fd6  ret

; -[DownloadModel setI0:]
; entry 0x1000b0bdc; next boundary 0x1000b0be4 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0bdc  022800b9  str w2, [x0, #0x28]
00000001000b0be0  c0035fd6  ret

; -[DownloadModel i1]
; entry 0x1000b0be4; next boundary 0x1000b0bec (exclusive)
; Objective-C encoding: i16@0:8
00000001000b0be4  002c40b9  ldr w0, [x0, #0x2c]
00000001000b0be8  c0035fd6  ret

; -[DownloadModel setI1:]
; entry 0x1000b0bec; next boundary 0x1000b0bf4 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000b0bec  022c00b9  str w2, [x0, #0x2c]
00000001000b0bf0  c0035fd6  ret

; -[DownloadModel s0]
; entry 0x1000b0bf4; next boundary 0x1000b0bfc (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0bf4  005440f9  ldr x0, [x0, #0xa8]
00000001000b0bf8  c0035fd6  ret

; -[DownloadModel setS0:]
; entry 0x1000b0bfc; next boundary 0x1000b0c04 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0bfc  03158052  mov w3, #0xa8
00000001000b0c00  af0f5114  b 0x1014f4abc

; -[DownloadModel s1]
; entry 0x1000b0c04; next boundary 0x1000b0c0c (exclusive)
; Objective-C encoding: @16@0:8
00000001000b0c04  005840f9  ldr x0, [x0, #0xb0]
00000001000b0c08  c0035fd6  ret

; -[DownloadModel setS1:]
; entry 0x1000b0c0c; next boundary 0x1000b0c14 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000b0c0c  03168052  mov w3, #0xb0
00000001000b0c10  ab0f5114  b 0x1014f4abc

; -[DownloadModel .cxx_destruct]
; entry 0x1000b0c14; next boundary 0x1000b0cd4 (exclusive)
; Objective-C encoding: v16@0:8
00000001000b0c14  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000b0c18  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000b0c1c  fd430091  add x29, sp, #0x10
00000001000b0c20  f30300aa  mov x19, x0
00000001000b0c24  00c00291  add x0, x0, #0xb0
00000001000b0c28  010080d2  mov x1, #0x0
00000001000b0c2c  a70f5194  bl 0x1014f4ac8
00000001000b0c30  60a20291  add x0, x19, #0xa8
00000001000b0c34  010080d2  mov x1, #0x0
00000001000b0c38  a40f5194  bl 0x1014f4ac8
00000001000b0c3c  60820291  add x0, x19, #0xa0
00000001000b0c40  010080d2  mov x1, #0x0
00000001000b0c44  a10f5194  bl 0x1014f4ac8
00000001000b0c48  60020291  add x0, x19, #0x80
00000001000b0c4c  010080d2  mov x1, #0x0
00000001000b0c50  9e0f5194  bl 0x1014f4ac8
00000001000b0c54  60e20191  add x0, x19, #0x78
00000001000b0c58  010080d2  mov x1, #0x0
00000001000b0c5c  9b0f5194  bl 0x1014f4ac8
00000001000b0c60  60c20191  add x0, x19, #0x70
00000001000b0c64  010080d2  mov x1, #0x0
00000001000b0c68  980f5194  bl 0x1014f4ac8
00000001000b0c6c  60a20191  add x0, x19, #0x68
00000001000b0c70  010080d2  mov x1, #0x0
00000001000b0c74  950f5194  bl 0x1014f4ac8
00000001000b0c78  60820191  add x0, x19, #0x60
00000001000b0c7c  010080d2  mov x1, #0x0
00000001000b0c80  920f5194  bl 0x1014f4ac8
00000001000b0c84  60620191  add x0, x19, #0x58
00000001000b0c88  010080d2  mov x1, #0x0
00000001000b0c8c  8f0f5194  bl 0x1014f4ac8
00000001000b0c90  60420191  add x0, x19, #0x50
00000001000b0c94  010080d2  mov x1, #0x0
00000001000b0c98  8c0f5194  bl 0x1014f4ac8
00000001000b0c9c  60220191  add x0, x19, #0x48
00000001000b0ca0  010080d2  mov x1, #0x0
00000001000b0ca4  890f5194  bl 0x1014f4ac8
00000001000b0ca8  60020191  add x0, x19, #0x40
00000001000b0cac  010080d2  mov x1, #0x0
00000001000b0cb0  860f5194  bl 0x1014f4ac8
00000001000b0cb4  60e20091  add x0, x19, #0x38
00000001000b0cb8  010080d2  mov x1, #0x0
00000001000b0cbc  830f5194  bl 0x1014f4ac8
00000001000b0cc0  60c20091  add x0, x19, #0x30
00000001000b0cc4  010080d2  mov x1, #0x0
00000001000b0cc8  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000b0ccc  f44fc2a8  ldp x20, x19, [sp], #0x20
00000001000b0cd0  7e0f5114  b 0x1014f4ac8
