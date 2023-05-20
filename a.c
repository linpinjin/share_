// 可能在遍历对象 called by 3DCC94
void __fastcall sub_443560(
        _QWORD *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        unsigned int a12,
        __int64 a13,
        unsigned __int8 a14)
{
  __syscall_slong_t v16; // r12
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r11
  int v22; // esi
  int v23; // r12d
  int v24; // ecx
  __int64 i; // rbx
  int v26; // ebp
  int v27; // r14d
  int v28; // edx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  __int64 v33; // r14
  int v34; // r11d
  __int64 v35; // r10
  __int64 v36; // r15
  int v37; // esi
  __int64 v38; // rdi
  int v39; // r8d
  int v40; // r11d
  int v41; // ecx
  unsigned __int8 v42; // bp
  __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  signed int v46; // esi
  int v47; // r9d
  unsigned int v48; // ebx
  int v49; // esi
  unsigned int v50; // esi
  signed int v51; // edi
  int v52; // r11d
  int v53; // edx
  int v54; // edi
  int v55; // r8d
  int v56; // esi
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // r12
  _QWORD *v62; // r13
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rbx
  char *v66; // rax
  __int64 v67; // rdx
  char *v68; // rcx
  __int64 v69; // r15
  __int64 v70; // rcx
  bool v71; // zf
  __int64 *v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rcx
  unsigned int *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int *v78; // rcx
  __m128i *v79; // r14
  int v80; // r14d
  int v81; // ecx
  bool v82; // cc
  int v83; // eax
  int v84; // ecx
  __int64 v85; // r9
  __int64 v86; // rcx
  __m128i *v87; // r12
  unsigned __int64 v88; // rdx
  __int64 v89; // rsi
  __m128i si128; // xmm0
  volatile signed __int32 **v91; // rbp
  volatile signed __int32 **v92; // r13
  __m128i *v93; // r12
  volatile signed __int32 *v94; // rbx
  __int64 v95; // rcx
  __int64 *v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rcx
  unsigned int *v99; // rcx
  volatile signed __int32 *v100; // rbx
  _DWORD *v101; // r8
  __int64 v102; // r10
  __int64 v103; // r11
  __int64 v104; // r14
  int v105; // r13d
  int v106; // r12d
  __int64 v107; // rsi
  _QWORD *v108; // rcx
  unsigned int v109; // eax
  int v110; // ebp
  int v111; // ebp
  int v112; // edi
  __int64 v113; // rsi
  int v114; // edi
  unsigned int v115; // eax
  unsigned int v116; // ecx
  int v117; // ebx
  int v118; // edi
  __int64 v119; // r12
  _DWORD *v120; // r11
  __int64 v121; // r13
  int v122; // r8d
  __int64 v123; // rbx
  __int64 v124; // rdi
  int v125; // esi
  __int64 v126; // rcx
  int v127; // edx
  __int64 v128; // rax
  int v129; // ebp
  int v130; // r9d
  int v131; // r10d
  int v132; // ecx
  int v137; // [rsp+24h] [rbp-94h]
  int v138; // [rsp+28h] [rbp-90h]
  __int64 v139; // [rsp+28h] [rbp-90h]
  __int64 v140[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v141; // [rsp+40h] [rbp-78h]
  __syscall_slong_t v142; // [rsp+48h] [rbp-70h]
  __int64 v143; // [rsp+50h] [rbp-68h]
  __int64 v144; // [rsp+58h] [rbp-60h]
  int v145; // [rsp+60h] [rbp-58h] BYREF
  int v146; // [rsp+64h] [rbp-54h] BYREF
  __int64 v147; // [rsp+68h] [rbp-50h]
  __int64 v148[9]; // [rsp+70h] [rbp-48h] BYREF

  v145 = a3;
  v16 = tt_clock_gettime_sub_7A2910();
  (**(void (__fastcall ***)(__int64 *, __int64, _QWORD))a2)(v140, a2, a12);
  v17 = v140[1];
  if ( !v140[1] )
    goto LABEL_100;
  if ( *(_DWORD *)(v140[1] + 0x1F4) != 1 )
  {
    v142 = v16;
    *(_QWORD *)(v140[1] + 0x1F4) = 1LL;
    *(_DWORD *)(v17 + 8) = 0;
    *(_DWORD *)(v17 + 0x1FC) = 0;
    v18 = *(int *)(v17 + 0xC);
    if ( v18 <= 0 )
    {
      v23 = 0;
      v24 = 0;
      v22 = 0;
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 0x20);
      v20 = *(_QWORD *)(v17 + 0x38);
      v21 = *(_QWORD *)(v17 + 0x50);
      v22 = 0;
      v23 = 0;
      v24 = 0;
      for ( i = 0LL; i != v18; ++i )
      {
        v26 = *(_DWORD *)(v19 + 4 * i);
        v27 = *(_DWORD *)(v20 + 4 * i);
        v28 = *(_DWORD *)(v21 + 4 * i);
        if ( v24 < -v27 )
        {
          *(_DWORD *)(v17 + 8) = -v27;
          v24 = -v27;
        }
        if ( v27 > v23 )
        {
          *(_DWORD *)(v17 + 0x1F8) = v27;
          v23 = v27;
        }
        v29 = v26 * v26 + v28 * v28;
        if ( v29 > v22 )
        {
          *(_DWORD *)(v17 + 0x1FC) = v29;
          v22 = v29;
        }
      }
    }
    v30 = (int)(sqrt((double)v22) + 0.99);
    *(_DWORD *)(v17 + 0x1FC) = v30;
    v31 = v30 * v30;
    v32 = (int)(sqrt((double)(v31 + v24 * v24)) + 0.99);
    *(_DWORD *)(v17 + 0x204) = v32;
    *(_DWORD *)(v17 + 0x200) = (int)(sqrt((double)(v31 + v23 * v23)) + 0.99) + v32 + 1;
    v16 = v142;
  }
  sub_42A780(v17, a3);
  v33 = v140[1];
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v140[1] + 8);
  v34 = *(_DWORD *)(v33 + 0x1FC);
  v35 = a7;
  v36 = (unsigned int)((int)(a4 * a9 + a5 * ((int)(a7 * a10 - a6 * a8) >> 0x10)) >> 0x10);
  v37 = v36 + (((int)a5 * v34) >> 0x10);
  if ( v37 < 0x33 )
    goto LABEL_100;
  v38 = a1[0xC472D];
  if ( (int)v36 >= *(_DWORD *)(v38 + 0x70) )
    goto LABEL_100;
  v39 = *(_DWORD *)(v38 + 0x10);
  if ( v39 * (((int)(a6 * a10 + a7 * a8) >> 0x10) - v34) / v37 >= *(_DWORD *)(v38 + 0x28) )
    goto LABEL_100;
  if ( v39 * (v34 + ((int)(a6 * a10 + a7 * a8) >> 0x10)) / v37 <= *(_DWORD *)(v38 + 0x24) )
    goto LABEL_100;
  v40 = (int)(a4 * v34) >> 0x10;
  v41 = (int)(a5 * a9 - a4 * ((int)(a7 * a10 - a6 * a8) >> 0x10)) >> 0x10;
  if ( v39 * ((((int)a5 * *(_DWORD *)(v33 + 0x1F8)) >> 0x10) + v40 + v41) / v37 <= *(_DWORD *)(v38 + 0x2C)
    || v39 * (v41 - v40 - (((int)a5 * *(_DWORD *)(v33 + 8)) >> 0x10)) / v37 >= *(_DWORD *)(v38 + 0x30) )
  {
    goto LABEL_100;
  }
  v142 = v16;
  v42 = a14;
  v43 = a11;
  v147 = a3;
  if ( a11 && (a11 & 0x80000) == 0 && byte_399E004[0] && !a14 )
  {
    v146 = a3;
    sub_441BB0((_DWORD *)v38);
    sub_458A70((__int64)v148, v33 + 0x208, &v146);
    v44 = a8 + *(_DWORD *)(v148[0] + 4);
    v45 = dword_399E014 - v44;
    v46 = v44 - dword_399E014;
    if ( (int)(v44 - dword_399E014) < 1 )
      v46 = dword_399E014 - v44;
    v47 = *(_DWORD *)(v148[0] + 0x10);
    if ( v46 > dword_399E02C + v47 )
      goto LABEL_39;
    v48 = dword_399E018 - (a9 + *(_DWORD *)(v148[0] + 8));
    v49 = a9 + *(_DWORD *)(v148[0] + 8) - dword_399E018;
    if ( v49 < 1 )
      v49 = dword_399E018 - (a9 + *(_DWORD *)(v148[0] + 8));
    if ( v49 > dword_399E030 + *(_DWORD *)(v148[0] + 0x14) )
      goto LABEL_39;
    v50 = dword_399E01C - (a10 + *(_DWORD *)(v148[0] + 0xC));
    v51 = a10 + *(_DWORD *)(v148[0] + 0xC) - dword_399E01C;
    if ( v51 < 1 )
      v51 = dword_399E01C - (a10 + *(_DWORD *)(v148[0] + 0xC));
    v52 = *(_DWORD *)(v148[0] + 0x18);
    if ( v51 > dword_399E034 + v52 )
      goto LABEL_39;
    v53 = *(_DWORD *)(v148[0] + 0x14);
    v54 = v48 * dword_399E028 - v50 * dword_399E024;
    if ( v54 < 1 )
      v54 = v50 * dword_399E024 - v48 * dword_399E028;
    if ( v54 > v53 * dword_399E034 + v52 * dword_399E030 )
      goto LABEL_39;
    v55 = v45 * dword_399E028 - dword_399E020 * v50;
    v56 = -v55;
    if ( -v55 < 1 )
      v56 = v55;
    if ( v56 > dword_399E02C * v52 + v47 * dword_399E034 )
    {
LABEL_39:
      v35 = a7;
      v43 = a11;
LABEL_40:
      v42 = 0;
      goto LABEL_41;
    }
    v80 = v48 * dword_399E020 - v45 * dword_399E024;
    v81 = -v80;
    if ( -v80 < 1 )
      v81 = v80;
    v82 = v81 <= v47 * dword_399E030 + v53 * dword_399E02C;
    v35 = a7;
    v43 = a11;
    v42 = 0;
    if ( v82 )
    {
      sub_458A70((__int64)v148, v140[1] + 0x208, &v145);
      v35 = a7;
      v83 = *(_DWORD *)(v148[0] + 0x18);
      v43 = a11;
      if ( (int)(a10 - v83) <= 5184 )
      {
        v84 = *(_DWORD *)(v148[0] + 0x10);
        v43 = a11;
        if ( (int)(v84 + a8) >= -5184 )
        {
          v43 = a11;
          if ( (int)(a8 - v84) <= 5184 && (int)(a10 + v83) >= -5184 )
          {
            v85 = v140[1];
            if ( *(_BYTE *)(v140[1] + 0x1E0) )
            {
LABEL_69:
              v86 = tt_selected_obj_count_unk_399E038;
              ++tt_selected_obj_count_unk_399E038;
              v43 = a11;
              *(_QWORD *)(unk_399E040 + 8 * v86) = a11;// 添加被点击对象id
              v35 = a7;
              goto LABEL_40;
            }
            v35 = a7;
            v43 = a11;
            v42 = 0;
            if ( *(int *)(v140[1] + 0x200) <= 5999 )
            {
              if ( *(int *)(v140[1] + 0xC) > 0 )
              {
                v101 = (_DWORD *)a1[0xC472D];
                v138 = v101[5];
                LODWORD(v141) = v101[6];
                v102 = *(_QWORD *)(v140[1] + 0x20);
                v103 = *(_QWORD *)(v140[1] + 0x38);
                v104 = *(_QWORD *)(v140[1] + 0x50);
                if ( a3 )
                {
                  v105 = dword_39A27B8[v147];
                  v106 = dword_39A47B8[v147];
                  v107 = 0LL;
                  do
                  {
                    v110 = a4 * (a9 + *(_DWORD *)(v103 + 4 * v107))
                         + a5
                         * ((int)(a7
                                * (a10
                                 + ((v106 * *(_DWORD *)(v104 + 4 * v107) - v105 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))
                                - a6
                                * (a8
                                 + ((v105 * *(_DWORD *)(v104 + 4 * v107) + v106 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))) >> 0x10);
                    if ( v110 < 0x320000 )
                    {
                      v108 = a1;
                      *((_DWORD *)a1 + v107 + 0xCB4) = 0xFFFFFFFF;
                      v109 = 0xFFFFFFFF;
                    }
                    else
                    {
                      v111 = v110 >> 0x10;
                      v112 = (int)(a5 * (a9 + *(_DWORD *)(v103 + 4 * v107))
                                 - a4
                                 * ((int)(a7
                                        * (a10
                                         + ((v106 * *(_DWORD *)(v104 + 4 * v107) - v105 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))
                                        - a6
                                        * (a8
                                         + ((v105 * *(_DWORD *)(v104 + 4 * v107) + v106 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))) >> 0x10)) >> 0x10;
                      v108 = a1;
                      *((_DWORD *)a1 + v107 + 0xCB4) = v138
                                                     + v101[4]
                                                     * ((int)(a6
                                                            * (a10
                                                             + ((v106 * *(_DWORD *)(v104 + 4 * v107)
                                                               - v105 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))
                                                            + a7
                                                            * (a8
                                                             + ((v105 * *(_DWORD *)(v104 + 4 * v107)
                                                               + v106 * *(_DWORD *)(v102 + 4 * v107)) >> 0x10))) >> 0x10)
                                                     / v111;
                      v109 = v141 + v101[4] * v112 / v111;
                    }
                    *((_DWORD *)v108 + v107++ + 0x2618) = v109;
                  }
                  while ( v107 < *(int *)(v85 + 0xC) );
                }
                else
                {
                  v113 = 0LL;
                  do
                  {
                    v116 = a9 + *(_DWORD *)(v103 + 4 * v113);
                    v117 = (int)(a7 * (a10 + *(_DWORD *)(v104 + 4 * v113)) - a6 * (a8 + *(_DWORD *)(v102 + 4 * v113))) >> 0x10;
                    v118 = a4 * v116 + a5 * v117;
                    if ( v118 > 0x31FFFF )
                    {
                      v114 = v118 >> 0x10;
                      *((_DWORD *)a1 + v113 + 0xCB4) = v138
                                                     + v101[4]
                                                     * ((int)(a6 * (a10 + *(_DWORD *)(v104 + 4 * v113))
                                                            + a7 * (a8 + *(_DWORD *)(v102 + 4 * v113))) >> 0x10)
                                                     / v114;
                      v115 = v141 + v101[4] * ((int)(a5 * v116 - a4 * v117) >> 0x10) / v114;
                    }
                    else
                    {
                      *((_DWORD *)a1 + v113 + 0xCB4) = 0xFFFFFFFF;
                      v115 = 0xFFFFFFFF;
                    }
                    *((_DWORD *)a1 + v113++ + 0x2618) = v115;
                  }
                  while ( v113 < *(int *)(v85 + 0xC) );
                }
              }
              v119 = *(int *)(v85 + 0x58);
              v35 = a7;
              v43 = a11;
              v42 = 0;
              if ( v119 > 0 )
              {
                v120 = *(_DWORD **)(v85 + 0xE8);
                v121 = *(_QWORD *)(v85 + 0x70);
                v139 = *(_QWORD *)(v85 + 0x88);
                v141 = *(_QWORD *)(v85 + 0xA0);
                v122 = tt_click_y_unk_399E00C + 5;
                v144 = (unsigned int)(tt_click_y_unk_399E00C - 5);
                v137 = tt_click_x_unk_399E008 + 5;
                v143 = (unsigned int)(tt_click_x_unk_399E008 - 5);
                v123 = 0LL;
                if ( *v120 != 0xFFFFFFFE )
                  goto LABEL_122;
                while ( 1 )
                {
                  ++v123;
                  v35 = a7;
                  v43 = a11;
                  v42 = 0;
                  if ( v119 == v123 )
                    break;
                  if ( v120[v123] != 0xFFFFFFFE )
                  {
LABEL_122:
                    v124 = *(int *)(v121 + 4 * v123);
                    v125 = *((_DWORD *)a1 + v124 + 0xCB4);
                    if ( v125 != 0xFFFFFFFF )
                    {
                      v126 = *(int *)(v139 + 4 * v123);
                      v127 = *((_DWORD *)a1 + v126 + 0xCB4);
                      if ( v127 != 0xFFFFFFFF )
                      {
                        v128 = *(int *)(v141 + 4 * v123);
                        v129 = *((_DWORD *)a1 + v128 + 0xCB4);
                        if ( v129 != 0xFFFFFFFF )
                        {
                          v130 = *((_DWORD *)a1 + v124 + 0x2618);
                          v131 = *((_DWORD *)a1 + v126 + 0x2618);
                          v132 = *((_DWORD *)a1 + v128 + 0x2618);
                          if ( (v122 >= v132 || v122 >= v130 || v122 >= v131)// 判断点击坐标是不是包含在此对象的显示范围中
                            && ((int)v144 <= v132 || (int)v144 <= v130 || (int)v144 <= v131)
                            && (v137 >= v129 || v137 >= v125 || v137 >= v127)
                            && ((int)v143 <= v129 || (int)v143 <= v125 || (int)v143 <= v127) )
                          {
                            goto LABEL_69;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_41:
  v57 = v140[1];
  v58 = *(unsigned int *)(v140[1] + 0x200);
  v59 = a8;
  if ( (int)v58 <= 5999 )
  {
    v60 = (unsigned int)dword_39A27B8[v147];
    v61 = (unsigned int)dword_39A47B8[v147];
    v62 = a1;
    if ( *(_BYTE *)(v140[1] + 0x1E8) )
    {
      v63 = v43;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 0x18LL))(a1);
      v43 = v63;
      v59 = a8;
      v35 = a7;
      v57 = v140[1];
      v58 = *(unsigned int *)(v140[1] + 0x200);
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64))(*a1 + 0x28LL))(
      a1,
      *(unsigned int *)(v57 + 0x1E4),
      v43,
      v58,
      *(unsigned int *)(v57 + 0x204),
      a4,
      a5,
      a6,
      v35,
      v60,
      v61,
      v59,
      a9,
      a10,
      v36,
      0LL,
      v42,
      a13);
    v64 = v140[1];
    v65 = v142;
    if ( *(_BYTE *)(v140[1] + 0x1F0) )
      goto LABEL_99;
    if ( *(_DWORD *)(v140[1] + 0x1EC) != 0xFFFFFFFF )
    {
LABEL_98:
      *(_DWORD *)(v140[1] + 0x1EC) = *((_DWORD *)v62 + 0x18DAA6);
LABEL_99:
      unk_398A720 = tt_clock_gettime_sub_7A2910() - v65;
      ++qword_398A718;
      goto LABEL_100;
    }
    v66 = (char *)a1[0xC6D55];
    if ( (unsigned __int64)v66 < a1[0xC6D56] )
    {
      a1[0xC6D55] = v66 + 0x10;
      v67 = v140[0];
      *(_QWORD *)v66 = v140[0];
      *((_QWORD *)v66 + 1) = v64;
      if ( v67 )
        _InterlockedAdd((volatile signed __int32 *)(v67 + 8), 1u);
      goto LABEL_98;
    }
    v68 = (char *)a1[0xC6D54];
    v69 = 1LL;
    if ( v66 != v68 )
      v69 = (v66 - v68) >> 3;
    if ( v69 )
    {
      if ( p_memory_pool )
      {
        v70 = p_memory_pool[0x23];
        v71 = p_memory_pool[0x22] == v70;
        v72 = (__int64 *)(v70 - 8);
        if ( v71 )
          v72 = p_memory_pool + 0x36;
        v73 = *v72;
        v74 = p_memory_pool[1];
        v71 = *p_memory_pool == v74;
        v75 = (unsigned int *)(v74 - 4);
        if ( v71 )
          v75 = (unsigned int *)(p_memory_pool + 0xC);
        v76 = *v75;
        v77 = p_memory_pool[0x38];
        v71 = p_memory_pool[0x37] == v77;
        v78 = (unsigned int *)(v77 - 4);
        if ( v71 )
          v78 = (unsigned int *)(p_memory_pool + 0x43);
        v79 = (__m128i *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v73 + 0x18LL))(
                           v73,
                           0x10 * v69,
                           v76,
                           0x10LL,
                           *v78);
        if ( !v79 )
        {
LABEL_140:
          sub_68A080(
            (__int64)"pMem",
            (__int64)aVarBambooHomeB,
            0x69u,
            0,
            (__int64)"Failed to allocate %llu bytes with alignment %llu",
            0x10 * v69,
            0x10LL);
          BUG();
        }
      }
      else
      {
        v79 = (__m128i *)memalign(0x10uLL, 0x10 * v69);
        if ( !v79 )
          goto LABEL_140;
      }
      v68 = (char *)a1[0xC6D54];
      v66 = (char *)a1[0xC6D55];
      v87 = v79;
      if ( v68 == v66 )
      {
LABEL_79:
        si128 = _mm_load_si128((const __m128i *)v140);
        *v87 = si128;
        if ( si128.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)(si128.m128i_i64[0] + 8), 1u);
        v91 = (volatile signed __int32 **)a1[0xC6D54];
        v92 = (volatile signed __int32 **)a1[0xC6D55];
        if ( v91 == v92 )
        {
          v62 = a1;
          v93 = v87 + 1;
          if ( !v91 )
          {
LABEL_97:
            v62[0xC6D54] = v79;
            v62[0xC6D55] = v93;
            v62[0xC6D56] = &v79[v69];
            v65 = v142;
            goto LABEL_98;
          }
        }
        else
        {
          do
          {
            v94 = *v91;
            if ( *v91 )
            {
              if ( !_InterlockedSub(v94 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 0x10LL))(v94);
                if ( !_InterlockedSub(v94 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v94 + 0x18LL))(v94);
              }
            }
            v91 += 2;
          }
          while ( v92 != v91 );
          v62 = a1;
          v91 = (volatile signed __int32 **)a1[0xC6D54];
          v93 = v87 + 1;
          if ( !v91 )
            goto LABEL_97;
        }
        if ( p_memory_pool )
        {
          v95 = p_memory_pool[0x23];
          v71 = p_memory_pool[0x22] == v95;
          v96 = (__int64 *)(v95 - 8);
          if ( v71 )
            v96 = p_memory_pool + 0x36;
          v97 = *v96;
          v98 = p_memory_pool[0x38];
          v71 = p_memory_pool[0x37] == v98;
          v99 = (unsigned int *)(v98 - 4);
          if ( v71 )
            v99 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, volatile signed __int32 **, _QWORD))(*(_QWORD *)v97 + 0x28LL))(
            v97,
            v91,
            *v99);
        }
        else
        {
          free(v91);
        }
        goto LABEL_97;
      }
    }
    else
    {
      v79 = 0LL;
      v87 = 0LL;
      if ( v68 == v66 )
        goto LABEL_79;
    }
    v88 = v66 - v68 - 0x10;
    if ( (((unsigned __int8)((unsigned int)((_DWORD)v66 - (_DWORD)v68 - 0x10) >> 4) + 1) & 7) != 0 )
    {
      v89 = -(__int64)(((unsigned __int8)((unsigned int)((_DWORD)v66 - (_DWORD)v68 - 0x10) >> 4) + 1) & 7);
      v87 = v79;
      do
      {
        *v87 = *(__m128i *)v68;
        *(_OWORD *)v68 = 0LL;
        v68 += 0x10;
        ++v87;
        ++v89;
      }
      while ( v89 );
    }
    else
    {
      v87 = v79;
    }
    if ( v88 >= 0x70 )
    {
      do
      {
        *v87 = *(__m128i *)v68;
        *(_OWORD *)v68 = 0LL;
        v87[1] = *((__m128i *)v68 + 1);
        *((_OWORD *)v68 + 1) = 0LL;
        v87[2] = *((__m128i *)v68 + 2);
        *((_OWORD *)v68 + 2) = 0LL;
        v87[3] = *((__m128i *)v68 + 3);
        *((_OWORD *)v68 + 3) = 0LL;
        v87[4] = *((__m128i *)v68 + 4);
        *((_OWORD *)v68 + 4) = 0LL;
        v87[5] = *((__m128i *)v68 + 5);
        *((_OWORD *)v68 + 5) = 0LL;
        v87[6] = *((__m128i *)v68 + 6);
        *((_OWORD *)v68 + 6) = 0LL;
        v87[7] = *((__m128i *)v68 + 7);
        *((_OWORD *)v68 + 7) = 0LL;
        v87 += 8;
        v68 += 0x80;
      }
      while ( v68 != v66 );
    }
    goto LABEL_79;
  }
LABEL_100:
  v100 = (volatile signed __int32 *)v140[0];
  if ( v140[0] && !_InterlockedSub((volatile signed __int32 *)(v140[0] + 8), 1u) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 0x10LL))(v100);
    if ( !_InterlockedSub(v100 + 3, 1u) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 0x18LL))(v100);
  }
}