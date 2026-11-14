; Raw ARM64 disassembly, not original source or assembler input.
; Decoded literals and all otool comments are omitted.
; Only contiguous method-entry slices are exported; this is not CFG/body completeness.
; source main-image SHA-256: 5e484a2abb718a6f32fbd0f0780c07ef55673e2d6705d775afefee54680b91dd

; +[M3U8Seg segWithUrl:duration:index:sequence:hasDiscontinuity:]
; entry 0x1000ab7e8; next boundary 0x1000ab8a8 (exclusive)
; Objective-C encoding: @40@0:8@16f24i28i32i36
00000001000ab7e8  e923bb6d  stp d9, d8, [sp, #-0x50]!
00000001000ab7ec  f85f01a9  stp x24, x23, [sp, #0x10]
00000001000ab7f0  f65702a9  stp x22, x21, [sp, #0x20]
00000001000ab7f4  f44f03a9  stp x20, x19, [sp, #0x30]
00000001000ab7f8  fd7b04a9  stp x29, x30, [sp, #0x40]
00000001000ab7fc  fd030191  add x29, sp, #0x40
00000001000ab800  f30305aa  mov x19, x5
00000001000ab804  f40304aa  mov x20, x4
00000001000ab808  f50303aa  mov x21, x3
00000001000ab80c  0840201e  fmov s8, s0
00000001000ab810  e00302aa  mov x0, x2
00000001000ab814  281501f0  adrp x8, 8871
00000001000ab818  164d45f9  ldr x22, [x8, #0xa98]
00000001000ab81c  8a245194  bl 0x1014f4a44
00000001000ab820  f70300aa  mov x23, x0
00000001000ab824  e00316aa  mov x0, x22
00000001000ab828  e8565394  bl 0x1015813c8
00000001000ab82c  f60300aa  mov x22, x0
00000001000ab830  e20317aa  mov x2, x23
00000001000ab834  05bc5494  bl 0x1015da848
00000001000ab838  e00316aa  mov x0, x22
00000001000ab83c  e20317aa  mov x2, x23
00000001000ab840  c2635494  bl 0x1015c4748
00000001000ab844  e00317aa  mov x0, x23
00000001000ab848  7c245194  bl 0x1014f4a38
00000001000ab84c  e00316aa  mov x0, x22
00000001000ab850  0041201e  fmov s0, s8
00000001000ab854  4d165494  bl 0x1015b1188
00000001000ab858  e00316aa  mov x0, x22
00000001000ab85c  e20315aa  mov x2, x21
00000001000ab860  22355494  bl 0x1015b8ce8
00000001000ab864  e00316aa  mov x0, x22
00000001000ab868  e20314aa  mov x2, x20
00000001000ab86c  47945494  bl 0x1015d0988
00000001000ab870  7f020071  cmp w19, #0x0
00000001000ab874  e2079f1a  cset w2, ne
00000001000ab878  e00316aa  mov x0, x22
00000001000ab87c  5b2b5494  bl 0x1015b65e8
00000001000ab880  e00316aa  mov x0, x22
00000001000ab884  020080d2  mov x2, #0x0
00000001000ab888  70b65494  bl 0x1015d9248
00000001000ab88c  e00316aa  mov x0, x22
00000001000ab890  fd7b44a9  ldp x29, x30, [sp, #0x40]
00000001000ab894  f44f43a9  ldp x20, x19, [sp, #0x30]
00000001000ab898  f65742a9  ldp x22, x21, [sp, #0x20]
00000001000ab89c  f85f41a9  ldp x24, x23, [sp, #0x10]
00000001000ab8a0  e923c56c  ldp d9, d8, [sp], #0x50
00000001000ab8a4  23245114  b 0x1014f4930

; -[M3U8Seg setKeyConfigWithMethod:keyUri:keyIV:]
; entry 0x1000ab8a8; next boundary 0x1000ab93c (exclusive)
; Objective-C encoding: v40@0:8@16@24@32
00000001000ab8a8  f657bda9  stp x22, x21, [sp, #-0x30]!
00000001000ab8ac  f44f01a9  stp x20, x19, [sp, #0x10]
00000001000ab8b0  fd7b02a9  stp x29, x30, [sp, #0x20]
00000001000ab8b4  fd830091  add x29, sp, #0x20
00000001000ab8b8  f30303aa  mov x19, x3
00000001000ab8bc  f40302aa  mov x20, x2
00000001000ab8c0  f50300aa  mov x21, x0
00000001000ab8c4  e00304aa  mov x0, x4
00000001000ab8c8  5f245194  bl 0x1014f4a44
00000001000ab8cc  f60300aa  mov x22, x0
00000001000ab8d0  e00313aa  mov x0, x19
00000001000ab8d4  5c245194  bl 0x1014f4a44
00000001000ab8d8  f30300aa  mov x19, x0
00000001000ab8dc  e00314aa  mov x0, x20
00000001000ab8e0  59245194  bl 0x1014f4a44
00000001000ab8e4  f40300aa  mov x20, x0
00000001000ab8e8  e00315aa  mov x0, x21
00000001000ab8ec  22008052  mov w2, #0x1
00000001000ab8f0  a62b5494  bl 0x1015b6788
00000001000ab8f4  e00315aa  mov x0, x21
00000001000ab8f8  e20314aa  mov x2, x20
00000001000ab8fc  0b5f5494  bl 0x1015c3528
00000001000ab900  e00314aa  mov x0, x20
00000001000ab904  4d245194  bl 0x1014f4a38
00000001000ab908  e00315aa  mov x0, x21
00000001000ab90c  e20316aa  mov x2, x22
00000001000ab910  8e4b5494  bl 0x1015be748
00000001000ab914  e00316aa  mov x0, x22
00000001000ab918  48245194  bl 0x1014f4a38
00000001000ab91c  e00315aa  mov x0, x21
00000001000ab920  e20313aa  mov x2, x19
00000001000ab924  b14b5494  bl 0x1015be7e8
00000001000ab928  e00313aa  mov x0, x19
00000001000ab92c  fd7b42a9  ldp x29, x30, [sp, #0x20]
00000001000ab930  f44f41a9  ldp x20, x19, [sp, #0x10]
00000001000ab934  f657c3a8  ldp x22, x21, [sp], #0x30
00000001000ab938  40245114  b 0x1014f4a38

; -[M3U8Seg setOriginSegmentInfoWithUri:segmentByteRange:]
; entry 0x1000ab93c; next boundary 0x1000ab9ac (exclusive)
; Objective-C encoding: v32@0:8@16@24
00000001000ab93c  f657bda9  stp x22, x21, [sp, #-0x30]!
00000001000ab940  f44f01a9  stp x20, x19, [sp, #0x10]
00000001000ab944  fd7b02a9  stp x29, x30, [sp, #0x20]
00000001000ab948  fd830091  add x29, sp, #0x20
00000001000ab94c  f30302aa  mov x19, x2
00000001000ab950  f40300aa  mov x20, x0
00000001000ab954  e00303aa  mov x0, x3
00000001000ab958  3b245194  bl 0x1014f4a44
00000001000ab95c  f50300aa  mov x21, x0
00000001000ab960  e00313aa  mov x0, x19
00000001000ab964  38245194  bl 0x1014f4a44
00000001000ab968  f30300aa  mov x19, x0
00000001000ab96c  e00314aa  mov x0, x20
00000001000ab970  22008052  mov w2, #0x1
00000001000ab974  6d2b5494  bl 0x1015b6728
00000001000ab978  e00314aa  mov x0, x20
00000001000ab97c  e20313aa  mov x2, x19
00000001000ab980  1a6e5494  bl 0x1015c71e8
00000001000ab984  e00313aa  mov x0, x19
00000001000ab988  2c245194  bl 0x1014f4a38
00000001000ab98c  e00314aa  mov x0, x20
00000001000ab990  e20315aa  mov x2, x21
00000001000ab994  f5915494  bl 0x1015d0168
00000001000ab998  e00315aa  mov x0, x21
00000001000ab99c  fd7b42a9  ldp x29, x30, [sp, #0x20]
00000001000ab9a0  f44f41a9  ldp x20, x19, [sp, #0x10]
00000001000ab9a4  f657c3a8  ldp x22, x21, [sp], #0x30
00000001000ab9a8  24245114  b 0x1014f4a38

; -[M3U8Seg getLocalKeyUri]
; entry 0x1000ab9ac; next boundary 0x1000ab9ec (exclusive)
; Objective-C encoding: @16@0:8
00000001000ab9ac  ffc300d1  sub sp, sp, #0x30
00000001000ab9b0  f44f01a9  stp x20, x19, [sp, #0x10]
00000001000ab9b4  fd7b02a9  stp x29, x30, [sp, #0x20]
00000001000ab9b8  fd830091  add x29, sp, #0x20
00000001000ab9bc  281501f0  adrp x8, 8871
00000001000ab9c0  132141f9  ldr x19, [x8, #0x240]
00000001000ab9c4  91d75294  bl 0x101561808
00000001000ab9c8  e00300f9  str x0, [sp]
00000001000ab9cc  c2e900f0  adrp x2, 7483
00000001000ab9d0  42801c91  add x2, x2, #0x720
00000001000ab9d4  e00313aa  mov x0, x19
00000001000ab9d8  bc005594  bl 0x1015ebcc8
00000001000ab9dc  fd7b42a9  ldp x29, x30, [sp, #0x20]
00000001000ab9e0  f44f41a9  ldp x20, x19, [sp, #0x10]
00000001000ab9e4  ffc30091  add sp, sp, #0x30
00000001000ab9e8  c0035fd6  ret

; -[M3U8Seg getIndexName]
; entry 0x1000ab9ec; next boundary 0x1000abae0 (exclusive)
; Objective-C encoding: @16@0:8
00000001000ab9ec  ff4301d1  sub sp, sp, #0x50
00000001000ab9f0  f65702a9  stp x22, x21, [sp, #0x20]
00000001000ab9f4  f44f03a9  stp x20, x19, [sp, #0x30]
00000001000ab9f8  fd7b04a9  stp x29, x30, [sp, #0x40]
00000001000ab9fc  fd030191  add x29, sp, #0x40
00000001000aba00  f30300aa  mov x19, x0
00000001000aba04  002440f9  ldr x0, [x0, #0x48]
00000001000aba08  a8255394  bl 0x1015750a8
00000001000aba0c  c00200b4  cbz x0, 0x1000aba64
00000001000aba10  281501f0  adrp x8, 8871
00000001000aba14  005141f9  ldr x0, [x8, #0x2a0]
00000001000aba18  622640f9  ldr x2, [x19, #0x48]
00000001000aba1c  23a75194  bl 0x1015156a8
00000001000aba20  fd031daa  mov x29, x29
00000001000aba24  11245194  bl 0x1014f4a68
00000001000aba28  f50300aa  mov x21, x0
00000001000aba2c  8f215394  bl 0x101574068
00000001000aba30  fd031daa  mov x29, x29
00000001000aba34  0d245194  bl 0x1014f4a68
00000001000aba38  f60300aa  mov x22, x0
00000001000aba3c  9b255394  bl 0x1015750a8
00000001000aba40  800100b4  cbz x0, 0x1000aba70
00000001000aba44  281501f0  adrp x8, 8871
00000001000aba48  002d41f9  ldr x0, [x8, #0x258]
00000001000aba4c  e20316aa  mov x2, x22
00000001000aba50  96ba5294  bl 0x10155a4a8
00000001000aba54  fd031daa  mov x29, x29
00000001000aba58  04245194  bl 0x1014f4a68
00000001000aba5c  f40300aa  mov x20, x0
00000001000aba60  06000014  b 0x1000aba78
00000001000aba64  94e900d0  adrp x20, 7474
00000001000aba68  94822b91  add x20, x20, #0xae0
00000001000aba6c  07000014  b 0x1000aba88
00000001000aba70  94e900d0  adrp x20, 7474
00000001000aba74  94822b91  add x20, x20, #0xae0
00000001000aba78  e00316aa  mov x0, x22
00000001000aba7c  ef235194  bl 0x1014f4a38
00000001000aba80  e00315aa  mov x0, x21
00000001000aba84  ed235194  bl 0x1014f4a38
00000001000aba88  281501f0  adrp x8, 8871
00000001000aba8c  002141f9  ldr x0, [x8, #0x240]
00000001000aba90  88e600f0  adrp x8, 7379
00000001000aba94  08c10091  add x8, x8, #0x30
00000001000aba98  080140f9  ldr x8, [x8]
00000001000aba9c  691240b9  ldr w9, [x19, #0x10]
00000001000abaa0  e9d300a9  stp x9, x20, [sp, #0x8]
00000001000abaa4  e80300f9  str x8, [sp]
00000001000abaa8  c2e900f0  adrp x2, 7483
00000001000abaac  42001d91  add x2, x2, #0x740
00000001000abab0  86005594  bl 0x1015ebcc8
00000001000abab4  fd031daa  mov x29, x29
00000001000abab8  ec235194  bl 0x1014f4a68
00000001000ababc  f30300aa  mov x19, x0
00000001000abac0  e00314aa  mov x0, x20
00000001000abac4  dd235194  bl 0x1014f4a38
00000001000abac8  e00313aa  mov x0, x19
00000001000abacc  fd7b44a9  ldp x29, x30, [sp, #0x40]
00000001000abad0  f44f43a9  ldp x20, x19, [sp, #0x30]
00000001000abad4  f65742a9  ldp x22, x21, [sp, #0x20]
00000001000abad8  ff430191  add sp, sp, #0x50
00000001000abadc  95235114  b 0x1014f4930

; -[M3U8Seg getOriginSegmentName]
; entry 0x1000abae0; next boundary 0x1000abbd4 (exclusive)
; Objective-C encoding: @16@0:8
00000001000abae0  ff4301d1  sub sp, sp, #0x50
00000001000abae4  f65702a9  stp x22, x21, [sp, #0x20]
00000001000abae8  f44f03a9  stp x20, x19, [sp, #0x30]
00000001000abaec  fd7b04a9  stp x29, x30, [sp, #0x40]
00000001000abaf0  fd030191  add x29, sp, #0x40
00000001000abaf4  f30300aa  mov x19, x0
00000001000abaf8  002c40f9  ldr x0, [x0, #0x58]
00000001000abafc  6b255394  bl 0x1015750a8
00000001000abb00  c00200b4  cbz x0, 0x1000abb58
00000001000abb04  281501f0  adrp x8, 8871
00000001000abb08  005141f9  ldr x0, [x8, #0x2a0]
00000001000abb0c  622e40f9  ldr x2, [x19, #0x58]
00000001000abb10  e6a65194  bl 0x1015156a8
00000001000abb14  fd031daa  mov x29, x29
00000001000abb18  d4235194  bl 0x1014f4a68
00000001000abb1c  f50300aa  mov x21, x0
00000001000abb20  52215394  bl 0x101574068
00000001000abb24  fd031daa  mov x29, x29
00000001000abb28  d0235194  bl 0x1014f4a68
00000001000abb2c  f60300aa  mov x22, x0
00000001000abb30  5e255394  bl 0x1015750a8
00000001000abb34  800100b4  cbz x0, 0x1000abb64
00000001000abb38  281501f0  adrp x8, 8871
00000001000abb3c  002d41f9  ldr x0, [x8, #0x258]
00000001000abb40  e20316aa  mov x2, x22
00000001000abb44  59ba5294  bl 0x10155a4a8
00000001000abb48  fd031daa  mov x29, x29
00000001000abb4c  c7235194  bl 0x1014f4a68
00000001000abb50  f40300aa  mov x20, x0
00000001000abb54  06000014  b 0x1000abb6c
00000001000abb58  94e900d0  adrp x20, 7474
00000001000abb5c  94822b91  add x20, x20, #0xae0
00000001000abb60  07000014  b 0x1000abb7c
00000001000abb64  94e900d0  adrp x20, 7474
00000001000abb68  94822b91  add x20, x20, #0xae0
00000001000abb6c  e00316aa  mov x0, x22
00000001000abb70  b2235194  bl 0x1014f4a38
00000001000abb74  e00315aa  mov x0, x21
00000001000abb78  b0235194  bl 0x1014f4a38
00000001000abb7c  281501f0  adrp x8, 8871
00000001000abb80  002141f9  ldr x0, [x8, #0x240]
00000001000abb84  88e600f0  adrp x8, 7379
00000001000abb88  08e10091  add x8, x8, #0x38
00000001000abb8c  080140f9  ldr x8, [x8]
00000001000abb90  691240b9  ldr w9, [x19, #0x10]
00000001000abb94  e9d300a9  stp x9, x20, [sp, #0x8]
00000001000abb98  e80300f9  str x8, [sp]
00000001000abb9c  c2e900f0  adrp x2, 7483
00000001000abba0  42801d91  add x2, x2, #0x760
00000001000abba4  49005594  bl 0x1015ebcc8
00000001000abba8  fd031daa  mov x29, x29
00000001000abbac  af235194  bl 0x1014f4a68
00000001000abbb0  f30300aa  mov x19, x0
00000001000abbb4  e00314aa  mov x0, x20
00000001000abbb8  a0235194  bl 0x1014f4a38
00000001000abbbc  e00313aa  mov x0, x19
00000001000abbc0  fd7b44a9  ldp x29, x30, [sp, #0x40]
00000001000abbc4  f44f43a9  ldp x20, x19, [sp, #0x30]
00000001000abbc8  f65742a9  ldp x22, x21, [sp, #0x20]
00000001000abbcc  ff430191  add sp, sp, #0x50
00000001000abbd0  58235114  b 0x1014f4930

; -[M3U8Seg duration]
; entry 0x1000abbd4; next boundary 0x1000abbdc (exclusive)
; Objective-C encoding: f16@0:8
00000001000abbd4  000c40bd  ldr s0, [x0, #0xc]
00000001000abbd8  c0035fd6  ret

; -[M3U8Seg setDuration:]
; entry 0x1000abbdc; next boundary 0x1000abbe4 (exclusive)
; Objective-C encoding: v20@0:8f16
00000001000abbdc  000c00bd  str s0, [x0, #0xc]
00000001000abbe0  c0035fd6  ret

; -[M3U8Seg contentLength]
; entry 0x1000abbe4; next boundary 0x1000abbec (exclusive)
; Objective-C encoding: q16@0:8
00000001000abbe4  001040f9  ldr x0, [x0, #0x20]
00000001000abbe8  c0035fd6  ret

; -[M3U8Seg setContentLength:]
; entry 0x1000abbec; next boundary 0x1000abbf4 (exclusive)
; Objective-C encoding: v24@0:8q16
00000001000abbec  021000f9  str x2, [x0, #0x20]
00000001000abbf0  c0035fd6  ret

; -[M3U8Seg tsSize]
; entry 0x1000abbf4; next boundary 0x1000abbfc (exclusive)
; Objective-C encoding: q16@0:8
00000001000abbf4  001440f9  ldr x0, [x0, #0x28]
00000001000abbf8  c0035fd6  ret

; -[M3U8Seg setTsSize:]
; entry 0x1000abbfc; next boundary 0x1000abc04 (exclusive)
; Objective-C encoding: v24@0:8q16
00000001000abbfc  021400f9  str x2, [x0, #0x28]
00000001000abc00  c0035fd6  ret

; -[M3U8Seg index]
; entry 0x1000abc04; next boundary 0x1000abc0c (exclusive)
; Objective-C encoding: i16@0:8
00000001000abc04  001040b9  ldr w0, [x0, #0x10]
00000001000abc08  c0035fd6  ret

; -[M3U8Seg setIndex:]
; entry 0x1000abc0c; next boundary 0x1000abc14 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000abc0c  021000b9  str w2, [x0, #0x10]
00000001000abc10  c0035fd6  ret

; -[M3U8Seg sequence]
; entry 0x1000abc14; next boundary 0x1000abc1c (exclusive)
; Objective-C encoding: i16@0:8
00000001000abc14  001440b9  ldr w0, [x0, #0x14]
00000001000abc18  c0035fd6  ret

; -[M3U8Seg setSequence:]
; entry 0x1000abc1c; next boundary 0x1000abc24 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000abc1c  021400b9  str w2, [x0, #0x14]
00000001000abc20  c0035fd6  ret

; -[M3U8Seg retryCount]
; entry 0x1000abc24; next boundary 0x1000abc2c (exclusive)
; Objective-C encoding: i16@0:8
00000001000abc24  001840b9  ldr w0, [x0, #0x18]
00000001000abc28  c0035fd6  ret

; -[M3U8Seg setRetryCount:]
; entry 0x1000abc2c; next boundary 0x1000abc34 (exclusive)
; Objective-C encoding: v20@0:8i16
00000001000abc2c  021800b9  str w2, [x0, #0x18]
00000001000abc30  c0035fd6  ret

; -[M3U8Seg hasDiscontinuity]
; entry 0x1000abc34; next boundary 0x1000abc3c (exclusive)
; Objective-C encoding: B16@0:8
00000001000abc34  00204039  ldrb w0, [x0, #0x8]
00000001000abc38  c0035fd6  ret

; -[M3U8Seg setHasDiscontinuity:]
; entry 0x1000abc3c; next boundary 0x1000abc44 (exclusive)
; Objective-C encoding: v20@0:8B16
00000001000abc3c  02200039  strb w2, [x0, #0x8]
00000001000abc40  c0035fd6  ret

; -[M3U8Seg hasKey]
; entry 0x1000abc44; next boundary 0x1000abc4c (exclusive)
; Objective-C encoding: B16@0:8
00000001000abc44  00244039  ldrb w0, [x0, #0x9]
00000001000abc48  c0035fd6  ret

; -[M3U8Seg setHasKey:]
; entry 0x1000abc4c; next boundary 0x1000abc54 (exclusive)
; Objective-C encoding: v20@0:8B16
00000001000abc4c  02240039  strb w2, [x0, #0x9]
00000001000abc50  c0035fd6  ret

; -[M3U8Seg hasInitSegment]
; entry 0x1000abc54; next boundary 0x1000abc5c (exclusive)
; Objective-C encoding: B16@0:8
00000001000abc54  00284039  ldrb w0, [x0, #0xa]
00000001000abc58  c0035fd6  ret

; -[M3U8Seg setHasInitSegment:]
; entry 0x1000abc5c; next boundary 0x1000abc64 (exclusive)
; Objective-C encoding: v20@0:8B16
00000001000abc5c  02280039  strb w2, [x0, #0xa]
00000001000abc60  c0035fd6  ret

; -[M3U8Seg method]
; entry 0x1000abc64; next boundary 0x1000abc6c (exclusive)
; Objective-C encoding: @16@0:8
00000001000abc64  001840f9  ldr x0, [x0, #0x30]
00000001000abc68  c0035fd6  ret

; -[M3U8Seg setMethod:]
; entry 0x1000abc6c; next boundary 0x1000abc74 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abc6c  03068052  mov w3, #0x30
00000001000abc70  93235114  b 0x1014f4abc

; -[M3U8Seg keyUri]
; entry 0x1000abc74; next boundary 0x1000abc7c (exclusive)
; Objective-C encoding: @16@0:8
00000001000abc74  001c40f9  ldr x0, [x0, #0x38]
00000001000abc78  c0035fd6  ret

; -[M3U8Seg setKeyUri:]
; entry 0x1000abc7c; next boundary 0x1000abc84 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abc7c  03078052  mov w3, #0x38
00000001000abc80  8f235114  b 0x1014f4abc

; -[M3U8Seg keyIV]
; entry 0x1000abc84; next boundary 0x1000abc8c (exclusive)
; Objective-C encoding: @16@0:8
00000001000abc84  002040f9  ldr x0, [x0, #0x40]
00000001000abc88  c0035fd6  ret

; -[M3U8Seg setKeyIV:]
; entry 0x1000abc8c; next boundary 0x1000abc94 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abc8c  03088052  mov w3, #0x40
00000001000abc90  8b235114  b 0x1014f4abc

; -[M3U8Seg url]
; entry 0x1000abc94; next boundary 0x1000abc9c (exclusive)
; Objective-C encoding: @16@0:8
00000001000abc94  002440f9  ldr x0, [x0, #0x48]
00000001000abc98  c0035fd6  ret

; -[M3U8Seg setUrl:]
; entry 0x1000abc9c; next boundary 0x1000abca4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abc9c  03098052  mov w3, #0x48
00000001000abca0  87235114  b 0x1014f4abc

; -[M3U8Seg name]
; entry 0x1000abca4; next boundary 0x1000abcac (exclusive)
; Objective-C encoding: @16@0:8
00000001000abca4  002840f9  ldr x0, [x0, #0x50]
00000001000abca8  c0035fd6  ret

; -[M3U8Seg setName:]
; entry 0x1000abcac; next boundary 0x1000abcb4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abcac  030a8052  mov w3, #0x50
00000001000abcb0  83235114  b 0x1014f4abc

; -[M3U8Seg originSegmentUri]
; entry 0x1000abcb4; next boundary 0x1000abcbc (exclusive)
; Objective-C encoding: @16@0:8
00000001000abcb4  002c40f9  ldr x0, [x0, #0x58]
00000001000abcb8  c0035fd6  ret

; -[M3U8Seg setOriginSegmentUri:]
; entry 0x1000abcbc; next boundary 0x1000abcc4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abcbc  030b8052  mov w3, #0x58
00000001000abcc0  7f235114  b 0x1014f4abc

; -[M3U8Seg segmentByteRange]
; entry 0x1000abcc4; next boundary 0x1000abccc (exclusive)
; Objective-C encoding: @16@0:8
00000001000abcc4  003040f9  ldr x0, [x0, #0x60]
00000001000abcc8  c0035fd6  ret

; -[M3U8Seg setSegmentByteRange:]
; entry 0x1000abccc; next boundary 0x1000abcd4 (exclusive)
; Objective-C encoding: v24@0:8@16
00000001000abccc  030c8052  mov w3, #0x60
00000001000abcd0  7b235114  b 0x1014f4abc

; -[M3U8Seg .cxx_destruct]
; entry 0x1000abcd4; next boundary 0x1000abd40 (exclusive)
; Objective-C encoding: v16@0:8
00000001000abcd4  f44fbea9  stp x20, x19, [sp, #-0x20]!
00000001000abcd8  fd7b01a9  stp x29, x30, [sp, #0x10]
00000001000abcdc  fd430091  add x29, sp, #0x10
00000001000abce0  f30300aa  mov x19, x0
00000001000abce4  00800191  add x0, x0, #0x60
00000001000abce8  010080d2  mov x1, #0x0
00000001000abcec  77235194  bl 0x1014f4ac8
00000001000abcf0  60620191  add x0, x19, #0x58
00000001000abcf4  010080d2  mov x1, #0x0
00000001000abcf8  74235194  bl 0x1014f4ac8
00000001000abcfc  60420191  add x0, x19, #0x50
00000001000abd00  010080d2  mov x1, #0x0
00000001000abd04  71235194  bl 0x1014f4ac8
00000001000abd08  60220191  add x0, x19, #0x48
00000001000abd0c  010080d2  mov x1, #0x0
00000001000abd10  6e235194  bl 0x1014f4ac8
00000001000abd14  60020191  add x0, x19, #0x40
00000001000abd18  010080d2  mov x1, #0x0
00000001000abd1c  6b235194  bl 0x1014f4ac8
00000001000abd20  60e20091  add x0, x19, #0x38
00000001000abd24  010080d2  mov x1, #0x0
00000001000abd28  68235194  bl 0x1014f4ac8
00000001000abd2c  60c20091  add x0, x19, #0x30
00000001000abd30  010080d2  mov x1, #0x0
00000001000abd34  fd7b41a9  ldp x29, x30, [sp, #0x10]
00000001000abd38  f44fc2a8  ldp x20, x19, [sp], #0x20
00000001000abd3c  63235114  b 0x1014f4ac8
