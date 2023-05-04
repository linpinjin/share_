__int64 __fastcall tt_maybe_packet_handle_sub_23FC00(__int64 a1, __int64 a2)
{
  // [COLLAPSED LOCAL DECLARATIONS. PRESS KEYPAD CTRL-"+" TO EXPAND]

  v1840 = (unsigned int *)a1;
  *(_OWORD *)ptr = 0LL;
  v1847 = 0LL;
  v1849 = 0LL;
  if ( !(unsigned __int8)tt_paser_packetType_sub_1D8030(a2, (__int64)&packetType) )
  {
    if ( *(_DWORD *)(a2 + 0x84) != 3 )
    {
      if ( *(int *)(a1 + 0xD30C) > 0
        || ((v12 = tt_clock_gettime_sub_7A2910() / 0xF4240, qword_398A280 <= v12)
          ? (v13 = qword_398A288)
          : (v13 = qword_398A288 + qword_398A280 - v12, qword_398A288 = v13),
            qword_398A280 = v12,
            v12 + v13 > unk_39E6AF0 + 0xEA60LL) )
      {
LABEL_16:
        sub_27BC60(a1);
        LODWORD(v2) = 0;
        goto LABEL_17;
      }
      if ( *(_QWORD *)((char *)sub_10D850 + a1) != 0xFFFFFFFFFFFFFFFFLL )
      {
        v22 = tt_clock_gettime_sub_7A2910() / 0xF4240;
        if ( qword_398A280 <= v22 )
        {
          v23 = qword_398A288;
        }
        else
        {
          v23 = qword_398A288 + qword_398A280 - v22;
          qword_398A288 = v23;
        }
        qword_398A280 = v22;
        *(_QWORD *)((char *)&loc_10D868 + a1) = v22 + v23 - *(_QWORD *)((char *)sub_10D850 + a1);
        *(_QWORD *)((char *)sub_10D850 + a1) = 0xFFFFFFFFFFFFFFFFLL;
      }
      tt_mayby_set_action_sub_1E7490(a1, 0x28);
    }
LABEL_5:
    LODWORD(v2) = 0;
    v6 = ptr[1];
    ptr[1] = 0LL;
    if ( !v6 )
      goto LABEL_28;
    goto LABEL_18;
  }
  v4 = tt_clock_gettime_sub_7A2910() / 0xF4240;
  if ( qword_398A280 <= v4 )
  {
    v5 = qword_398A288;
  }
  else
  {
    v5 = qword_398A288 + qword_398A280 - v4;
    qword_398A288 = v5;
  }
  qword_398A280 = v4;
  *(_QWORD *)((char *)sub_10D850 + a1) = v4 + v5;
  LOBYTE(v2) = 1;
  switch ( packetType )
  {
    case 0u:
      *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v7 = (char *)ptr[0];
      v8 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v9 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v9 )
      {
        v10 = v9;
        sub_134D30(v8, (unsigned int)v9, dest);
        v11 = (char *)ptr[0] + v10 + 1;
      }
      else
      {
        v11 = v7 + 1;
      }
      ptr[0] = v11;
      v971 = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
      (*(void (__fastcall **)(_QWORD, _BYTE *, __int64))(**(_QWORD **)(v971 + 8) + 0xC0LL))(
        *(_QWORD *)(v971 + 8),
        dest,
        1LL);
      v410 = *(char **)dest;
      if ( !*(_QWORD *)dest || (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) < 2 )
        goto LABEL_17;
      goto LABEL_1059;
    case 1u:
      v62 = 8LL;
      goto LABEL_789;
    case 2u:
      v2 = *((_QWORD *)&v1847 + 1);
      v379 = (unsigned __int8 *)ptr[0];
      v380 = ++ptr[0];
      v381 = v379[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v379 + 2;
      if ( !v379[*((_QWORD *)&v1847 + 1) + 1] )
      {
        v2 = (unsigned __int64)&p_memory_pool;
        if ( p_memory_pool )
        {
          v962 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v962;
          v963 = (__int64 *)(v962 - 8);
          if ( v15 )
            v963 = p_memory_pool + 0x36;
          v964 = *v963;
          v965 = p_memory_pool[1];
          v15 = *p_memory_pool == v965;
          v966 = (unsigned int *)(v965 - 4);
          if ( v15 )
            v966 = (unsigned int *)(p_memory_pool + 0xC);
          v967 = *v966;
          v968 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v968;
          v969 = (unsigned int *)(v968 - 4);
          if ( v15 )
            v969 = (unsigned int *)(p_memory_pool + 0x43);
          v970 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v964 + 0x18LL))(
                           v964,
                           0x20LL,
                           v967,
                           0x10LL,
                           *v969);
          if ( !v970 )
            goto LABEL_1871;
        }
        else
        {
          v970 = (char *)memalign(0x10uLL, 0x20uLL);
          if ( !v970 )
            goto LABEL_1871;
        }
        *(_WORD *)v970 = 0x100;
        *((_DWORD *)v970 + 7) = 0;
        *(_OWORD *)(v970 + 4) = 0LL;
        *(_QWORD *)(v970 + 0x11) = 0LL;
        v1287 = *(char **)&v1840[2 * v381 + 0x3370];
        if ( v1287 != v970 )
        {
          if ( v1287 )
          {
            if ( p_memory_pool )
            {
              v1288 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1288;
              v1289 = (__int64 *)(v1288 - 8);
              if ( v15 )
                v1289 = p_memory_pool + 0x36;
              v1290 = *v1289;
              v1291 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1291;
              v1292 = (unsigned int *)(v1291 - 4);
              if ( v15 )
                v1292 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v1290 + 0x28LL))(v1290, v1287, *v1292);
            }
            else
            {
              free(*(void **)&v1840[2 * v381 + 0x3370]);
            }
          }
          *(_QWORD *)&v1840[2 * v381 + 0x3370] = v970;
        }
        ptr[0] = v379 + 0x14;
        LOBYTE(v2) = 1;
        v1155 = v1840;
LABEL_1904:
        v1155[0x83BE0] = *(_DWORD *)((char *)&loc_20ED58 + (_QWORD)v1155);
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( !v6 )
          goto LABEL_28;
        goto LABEL_18;
      }
      ptr[0] = v380;
      if ( p_memory_pool )
      {
        v382 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v382;
        v383 = (__int64 *)(v382 - 8);
        if ( v15 )
          v383 = p_memory_pool + 0x36;
        v384 = *v383;
        v385 = p_memory_pool[1];
        v15 = *p_memory_pool == v385;
        v386 = (unsigned int *)(v385 - 4);
        if ( v15 )
          v386 = (unsigned int *)(p_memory_pool + 0xC);
        v387 = *v386;
        v388 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v388;
        v389 = (unsigned int *)(v388 - 4);
        if ( v15 )
          v389 = (unsigned int *)(p_memory_pool + 0x43);
        v390 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v384 + 0x18LL))(
                         v384,
                         0x20LL,
                         v387,
                         0x10LL,
                         *v389);
        if ( !v390 )
          goto LABEL_1871;
        goto LABEL_1282;
      }
      v390 = (char *)memalign(0x10uLL, 0x20uLL);
      if ( v390 )
      {
LABEL_1282:
        *(_WORD *)v390 = 0x100;
        *((_DWORD *)v390 + 7) = 0;
        *(_OWORD *)(v390 + 4) = 0LL;
        *(_QWORD *)(v390 + 0x11) = 0LL;
        ptr[0] = v379 + 2;
        v1154 = v379[v2 + 1];
        *v390 = v1154 & 7;
        v390[1] = (v1154 & 8) != 0;
        ptr[0] = v379 + 4;
        *((_DWORD *)v390 + 1) = (unsigned __int16)__ROL2__(*(_WORD *)&v379[v2 + 2], 8);
        ptr[0] = v379 + 8;
        *((_DWORD *)v390 + 2) = _byteswap_ulong(*(_DWORD *)&v379[v2 + 4]);
        ptr[0] = v379 + 0xC;
        *((_DWORD *)v390 + 3) = _byteswap_ulong(*(_DWORD *)&v379[v2 + 8]);
        ptr[0] = v379 + 0x10;
        *((_DWORD *)v390 + 4) = _byteswap_ulong(*(_DWORD *)&v379[v2 + 0xC]);
        ptr[0] = v379 + 0x14;
        *((_DWORD *)v390 + 5) = _byteswap_ulong(*(_DWORD *)&v379[v2 + 0x10]);
        v1155 = v1840;
        v1156 = *(char **)&v1840[2 * v381 + 0x3370];
        LOBYTE(v2) = 1;
        if ( v1156 != v390 )
        {
          if ( v1156 )
          {
            if ( p_memory_pool )
            {
              v1157 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1157;
              v1158 = (__int64 *)(v1157 - 8);
              if ( v15 )
                v1158 = p_memory_pool + 0x36;
              v1159 = *v1158;
              v1160 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1160;
              v1161 = (unsigned int *)(v1160 - 4);
              if ( v15 )
                v1161 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v1159 + 0x28LL))(v1159, v1156, *v1161);
            }
            else
            {
              free(*(void **)&v1840[2 * v381 + 0x3370]);
            }
          }
          *(_QWORD *)&v1840[2 * v381 + 0x3370] = v390;
        }
        goto LABEL_1904;
      }
      goto LABEL_1871;
    case 3u:
      v467 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v468 = __ROL2__(*(_WORD *)&v467[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v467 + 4;
      v469 = *(_WORD *)&v467[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v467 + 8;
      v334 = *(_QWORD *)(a1 + 0x10LL * v468 + 0xD740);
      if ( !v334 )
        goto LABEL_17;
      v470 = _byteswap_ulong(*(_DWORD *)&v467[*((_QWORD *)&v1847 + 1) + 4]);
      v336 = (unsigned __int16)__ROL2__(v469, 8);
      v337 = (unsigned __int16)v470;
      v338 = (unsigned int)(v470 >> 0x10);
      v339 = v1840[0x837];
      v331 = 0LL;
      goto LABEL_465;
    case 4u:
      v536 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      *(_DWORD *)(a1 + 0xCF94) = 0x1E * *(unsigned __int16 *)&v536[*((_QWORD *)&v1847 + 1)];
      *(_DWORD *)((char *)&loc_20EF88 + a1) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 5u:
      v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)v1856 = v1850;
      v1857 = &::a2[1];
      v430 = *((_QWORD *)&v1847 + 1);
      v431 = (char *)ptr[0];
      v432 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v433 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v433 )
      {
        v434 = v433;
        sub_134D30(v432, (unsigned int)v433, v1856);
        v430 = *((_QWORD *)&v1847 + 1);
        v435 = (char *)ptr[0] + v434 + 1;
      }
      else
      {
        v435 = v431 + 1;
      }
      ptr[0] = v435 + 2;
      v1013 = __ROL2__(*(_WORD *)&v435[v430], 8);
      ptr[0] = v435 + 5;
      v1014 = (unsigned __int64)(unsigned __int8)v435[v430 + 2] << 0x10;
      v1015 = (unsigned __int64)(unsigned __int8)v435[v430 + 3] << 8;
      v1016 = (unsigned __int8)v435[v430 + 4];
      ptr[0] = v435 + 6;
      v1852.m128i_i64[0] = (unsigned __int8)v435[v430 + 5];
      v2 = v1016 | v1015 | v1014 | ((unsigned __int64)v1013 << 0x20);
      v1017 = 0x1A01LL;
      while ( 1 )
      {
        v1018 = 1;
        if ( *(_QWORD *)(a1 + 8 * v1017 - 0x20) == v2
          || *(_QWORD *)(a1 + 8 * v1017 - 0x18) == v2
          || *(_QWORD *)(a1 + 8 * v1017 - 0x10) == v2
          || *(_QWORD *)(a1 + 8 * v1017 - 8) == v2
          || *(_QWORD *)(a1 + 8 * v1017) == v2 )
        {
          break;
        }
        v1017 += 5LL;
        if ( v1017 == 0x1A65 )
        {
          v1018 = 0;
          break;
        }
      }
      v1019 = *(_QWORD *)(a1 + 0xCDB0) + 0xC0LL;
      sub_36F0A0((__int64)dest, (__int64)v1856, *(_DWORD *)(a1 + 0xD31C));
      v1020 = sub_1054F0(v1019, dest);
      if ( !*(_QWORD *)&dest[0x20] || (__int64)(*(_QWORD *)&dest[0x30] - *(_QWORD *)&dest[0x20]) < 2 )
        goto LABEL_1362;
      if ( p_memory_pool )
      {
        v1021 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1021;
        v1022 = (__int64 *)(v1021 - 8);
        if ( v15 )
          v1022 = p_memory_pool + 0x36;
        v1023 = *v1022;
        v1024 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1024;
        v1025 = (unsigned int *)(v1024 - 4);
        if ( v15 )
          v1025 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1023 + 0x28LL))(
          v1023,
          *(_QWORD *)&dest[0x20],
          *v1025);
        v1026 = *(void **)dest;
        if ( !*(_QWORD *)dest )
          goto LABEL_1372;
      }
      else
      {
        free(*(void **)&dest[0x20]);
LABEL_1362:
        v1026 = *(void **)dest;
        if ( !*(_QWORD *)dest )
        {
LABEL_1372:
          v15 = (v1020 | (unsigned __int8)v1018) == 0;
          v1198 = v1840;
          if ( !v15 )
            goto LABEL_2121;
          goto LABEL_1373;
        }
      }
      if ( (__int64)(*(_QWORD *)&dest[0x10] - (_QWORD)v1026) < 2 )
        goto LABEL_1372;
      if ( !p_memory_pool )
      {
        free(v1026);
        goto LABEL_1372;
      }
      v1193 = p_memory_pool[0x23];
      v15 = p_memory_pool[0x22] == v1193;
      v1194 = (__int64 *)(v1193 - 8);
      if ( v15 )
        v1194 = p_memory_pool + 0x36;
      v1195 = *v1194;
      v1196 = p_memory_pool[0x38];
      v15 = p_memory_pool[0x37] == v1196;
      v1197 = (unsigned int *)(v1196 - 4);
      if ( v15 )
        v1197 = (unsigned int *)(p_memory_pool + 0x43);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1195 + 0x28LL))(v1195, v1026, *v1197);
      v15 = (v1020 | (unsigned __int8)v1018) == 0;
      v1198 = v1840;
      if ( !v15 )
        goto LABEL_2121;
LABEL_1373:
      if ( v1198[0x331A] )
        goto LABEL_2121;
      v1199 = (int)v1198[0x34C2];
      *(_QWORD *)&v1198[2 * v1199 + 0x33FA] = v2;
      v1198[0x34C2] = ((int)v1199 + 1) % 0x64;
      *(__m128i *)dest = _mm_load_si128(&v1850);
      *(_QWORD *)&dest[0x10] = &::a2[1];
      sub_48DAE0(*((_QWORD *)v1198 + 0x1A64), dest, v1846);
      sub_3A32E0(src, *(_QWORD *)dest, *(_QWORD *)&dest[8] - *(_QWORD *)dest);
      sub_124390(src);
      v1200 = 4 * *((unsigned __int8 *)&unk_1706B70 + 0xC * v1852.m128i_i64[0] + 5) + 3;
      if ( *((_DWORD *)&unk_1706B70 + 3 * v1852.m128i_i64[0]) == 0xFFFFFFFF )
      {
        sub_229930(v1198, v1200, v1856, src);
        v1524 = src[0];
        if ( src[0] )
          goto LABEL_2109;
LABEL_2118:
        v1670 = *(_QWORD *)dest;
        if ( !*(_QWORD *)dest )
          goto LABEL_2121;
        goto LABEL_2119;
      }
      LODWORD(v2) = (_DWORD)v1198;
      sub_124750(v1865);
      sub_1355D0((__int64)v1865, (char *)v1856[0], (char *)v1856[1]);
      *(_OWORD *)v1861 = *(_OWORD *)v1865;
      v1862 = v1866;
      *(__m128i *)v1865 = _mm_load_si128(&v1850);
      v1866 = &::a2[1];
      sub_229930(v1198, v1200, v1861, src);
      v1201 = v1861[0];
      if ( !v1861[0] || v1862 - (char *)v1861[0] < 2 )
        goto LABEL_2098;
      v1202 = p_memory_pool;
      if ( p_memory_pool )
        goto LABEL_2092;
LABEL_1378:
      free(v1201);
LABEL_2098:
      v1523 = v1865[0];
      if ( !v1865[0] )
        goto LABEL_2108;
LABEL_2099:
      if ( v1866 - v1523 < 2 )
        goto LABEL_2108;
LABEL_2100:
      if ( p_memory_pool )
      {
        v1660 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1660;
        v1661 = (__int64 *)(v1660 - 8);
        if ( v15 )
          v1661 = p_memory_pool + 0x36;
        v1662 = *v1661;
        v1663 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1663;
        v1664 = (unsigned int *)(v1663 - 4);
        if ( v15 )
          v1664 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v1662 + 0x28LL))(v1662, v1523, *v1664);
        v1524 = src[0];
        if ( !src[0] )
          goto LABEL_2118;
      }
      else
      {
        free(v1523);
LABEL_2108:
        v1524 = src[0];
        if ( !src[0] )
          goto LABEL_2118;
      }
LABEL_2109:
      if ( v1855 - v1524 < 2 )
        goto LABEL_2118;
      if ( !p_memory_pool )
      {
        free(v1524);
        goto LABEL_2118;
      }
      v1665 = p_memory_pool[0x23];
      v15 = p_memory_pool[0x22] == v1665;
      v1666 = (__int64 *)(v1665 - 8);
      if ( v15 )
        v1666 = p_memory_pool + 0x36;
      v1667 = *v1666;
      v1668 = p_memory_pool[0x38];
      v15 = p_memory_pool[0x37] == v1668;
      v1669 = (unsigned int *)(v1668 - 4);
      if ( v15 )
        v1669 = (unsigned int *)(p_memory_pool + 0x43);
      (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v1667 + 0x28LL))(v1667, v1524, *v1669);
      v1670 = *(_QWORD *)dest;
      if ( *(_QWORD *)dest )
      {
LABEL_2119:
        if ( (__int64)(*(_QWORD *)&dest[0x10] - v1670) >= 2 )
          sub_687320(v1670);
        goto LABEL_2121;
      }
      goto LABEL_2121;
    case 6u:
      v547 = ::a2;
      *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      v548 = &::a2[1];
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v549 = (char *)ptr[0]++;
      v1850.m128i_i32[0] = (unsigned __int8)-v549[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v549 + 2;
      v550 = 0x80 - v549[*((_QWORD *)&v1847 + 1) + 1];
      *(_OWORD *)v1856 = *(_OWORD *)dest;
      v1857 = &::a2[1];
      v2 = (unsigned __int64)&v549[*((_QWORD *)&v1847 + 1) + 2];
      v551 = strlen((const char *)v2);
      if ( v551 )
      {
        v552 = v551;
        sub_134D30(v2, (unsigned int)v551, v1856);
        ptr[0] = (char *)ptr[0] + v552 + 1;
        v553 = *(char **)dest;
        v554 = *(char **)&dest[8];
        v555 = (char *)v1856[0];
        v547 = (char *)v1856[1];
        v556 = *(char **)&dest[0x10];
        v548 = v1857;
      }
      else
      {
        ptr[0] = v549 + 3;
        v556 = &::a2[1];
        v554 = ::a2;
        v555 = ::a2;
        v553 = ::a2;
      }
      v1051 = v1850.m128i_u8[0];
      *(_QWORD *)dest = v555;
      v1856[0] = v553;
      *(_QWORD *)&dest[8] = v547;
      v1856[1] = v554;
      *(_QWORD *)&dest[0x10] = v548;
      v1857 = v556;
      LOBYTE(v2) = 1;
      if ( v553 && v556 - v553 >= 2 )
      {
        if ( p_memory_pool )
        {
          v1052 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1052;
          v1053 = (__int64 *)(v1052 - 8);
          if ( v15 )
            v1053 = p_memory_pool + 0x36;
          v1054 = *v1053;
          v1055 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1055;
          v1056 = (unsigned int *)(v1055 - 4);
          if ( v15 )
            v1056 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v1054 + 0x28LL))(v1054, v553, *v1056);
        }
        else
        {
          free(v553);
        }
      }
      sub_1914F0(*((_QWORD *)v1840 + 0x1981), v1051, dest, v550);
      v410 = *(char **)dest;
      if ( *(_QWORD *)dest )
        goto LABEL_1448;
      goto LABEL_17;
    case 7u:
      v398 = *((_QWORD *)&v1847 + 1);
      v2 = (unsigned __int64)ptr[0]++;
      if ( *(_BYTE *)(*((_QWORD *)&v1847 + 1) + v2) != 1 )
      {
        v853 = a1;
        sub_220E50(a1 + 0xCE00, 0LL);
        LOBYTE(v2) = 1;
        goto LABEL_1350;
      }
      v399 = tt_clock_gettime_sub_7A2910() / 0xF4240;
      if ( qword_398A280 <= v399 )
      {
        v400 = qword_398A288;
      }
      else
      {
        v400 = qword_398A288 + qword_398A280 - v399;
        qword_398A288 = v400;
      }
      qword_398A280 = v399;
      ptr[0] = (void *)(v2 + 9);
      *(_QWORD *)(a1 + 0xCE08) = v399 + v400 - _byteswap_uint64(*(_QWORD *)(v398 + v2 + 1));
      if ( p_memory_pool )
      {
        v1145 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1145;
        v1146 = (__int64 *)(v1145 - 8);
        if ( v15 )
          v1146 = p_memory_pool + 0x36;
        v1147 = *v1146;
        v1148 = p_memory_pool[1];
        v15 = *p_memory_pool == v1148;
        v1149 = (unsigned int *)(v1148 - 4);
        if ( v15 )
          v1149 = (unsigned int *)(p_memory_pool + 0xC);
        v1150 = *v1149;
        v1151 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1151;
        v1152 = (unsigned int *)(v1151 - 4);
        if ( v15 )
          v1152 = (unsigned int *)(p_memory_pool + 0x43);
        v1153 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1147 + 0x18LL))(
                          v1147,
                          0x20LL,
                          v1150,
                          0x10LL,
                          *v1152);
        LOBYTE(v2) = 1;
        if ( !v1153 )
          goto LABEL_1871;
        goto LABEL_1349;
      }
      v1153 = memalign(0x10uLL, 0x20uLL);
      LOBYTE(v2) = 1;
      if ( v1153 )
      {
LABEL_1349:
        sub_316CD0(v1153, v1846, 1LL);
        v853 = (__int64)v1840;
        sub_220E50(v1840 + 0x3380, v1153);
LABEL_1350:
        *(_DWORD *)(v853 + 0x20EF84) = *(_DWORD *)((char *)&loc_20ED58 + v853);
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( !v6 )
          goto LABEL_28;
        goto LABEL_18;
      }
      goto LABEL_1871;
    case 8u:
      v545 = *(_QWORD *)(a1 + 0x1FA0);
      v546 = (unsigned __int8 *)ptr[0]++;
      *(_DWORD *)(v545 + 0x64B0) = v546[*((_QWORD *)&v1847 + 1)];
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 9u:
      v353 = *((_QWORD *)&v1847 + 1);
      v354 = (unsigned __int8 *)ptr[0]++;
      v355 = v354[*((_QWORD *)&v1847 + 1)];
      v356 = a1;
      *(_DWORD *)(a1 + 0x1103E4) = v355;
      ptr[0] = v354 + 2;
      v357 = v354[v353 + 1];
      *(_DWORD *)(a1 + 0x1103E8) = v357;
      while ( 1 )
      {
        v359 = v357;
        v1852.m128i_i64[0] = v355;
        do
        {
          v2 = v356 + 0x3F600LL * *(int *)(v356 + 0xCAA0) + 0x9C0 * v355;
          v363 = (_QWORD **)(v2 + 0x18 * v359 + 0x111240);
          v1850.m128i_i64[0] = 3 * v359;
          v364 = *v363;
          if ( *v363 != v363 )
          {
            while ( 1 )
            {
              v370 = v364;
              v364 = (_QWORD *)*v364;
              v371 = (volatile signed __int32 *)v370[2];
              if ( v371 )
              {
                if ( !_InterlockedSub(v371 + 2, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v371 + 0x10LL))(v371);
                  if ( !_InterlockedSub(v371 + 3, 1u) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v371 + 0x18LL))(v371);
                }
              }
              if ( !v370 )
                goto LABEL_347;
              if ( p_memory_pool )
              {
                v365 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v365;
                v366 = (__int64 *)(v365 - 8);
                if ( v15 )
                  v366 = p_memory_pool + 0x36;
                v367 = *v366;
                v368 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v368;
                v369 = (unsigned int *)(v368 - 4);
                if ( v15 )
                  v369 = (unsigned int *)(p_memory_pool + 0x43);
                (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v367 + 0x28LL))(v367, v370, *v369);
LABEL_347:
                if ( v364 == v363 )
                  goto LABEL_338;
              }
              else
              {
                free(v370);
                if ( v364 == v363 )
                {
LABEL_338:
                  *v363 = v363;
                  *(_QWORD *)(v2 + 8 * v1850.m128i_i64[0] + 0x111248) = v363;
                  v356 = (__int64)v1840;
                  v355 = v1852.m128i_i64[0];
                  sub_23E790(v1840, v1852.m128i_u32[0], (unsigned int)v359);
                  v360 = v355 + v1840[0x33D9];
                  v361 = v359 + v1840[0x33DA];
                  dword_9D8E70[0x89A0] = v1840[0x32A8];
                  dword_9D8E70[0x89A1] = v360;
                  dword_9D8E70[0x89A2] = v361;
                  sub_125800(dword_9D8E70, 0x2DLL, 0xFFFFFFFFLL, 0xFFFFFFFFLL, &loc_7A120, 0LL);
                  v357 = v1840[0x440FA];
                  break;
                }
              }
            }
          }
          v362 = v359++ < v357 + 7;
        }
        while ( v362 );
        v358 = *(_DWORD *)(v356 + 0x1103E4);
        if ( v358 + 8 <= (int)++v355 )
        {
          v372 = v356 + 0x20EA40;
          v373 = *(__int64 **)(v356 + 0x20EA40);
          if ( v373 == (__int64 *)(v356 + 0x20EA40) )
            goto LABEL_2193;
          LOBYTE(v2) = 1;
          v374 = *((_DWORD *)v373 + 5);
          if ( v374 >= v358 )
            goto LABEL_360;
LABEL_358:
          while ( 1 )
          {
            v373 = (__int64 *)*v373;
            if ( v373 == (__int64 *)v372 )
              goto LABEL_17;
            while ( 1 )
            {
              v374 = *((_DWORD *)v373 + 5);
              if ( v374 < v358 )
                break;
LABEL_360:
              if ( v374 >= v358 + 8 )
                goto LABEL_358;
              v375 = *((_DWORD *)v373 + 6);
              if ( v375 < v357 || v375 >= v357 + 8 || *((_DWORD *)v373 + 4) != v1840[0x32A8] )
                goto LABEL_358;
              *((_DWORD *)v373 + 0x11) = 0;
              v373 = (__int64 *)*v373;
              if ( v373 == (__int64 *)v372 )
                goto LABEL_17;
            }
          }
        }
      }
    case 0xAu:
      sub_27D660(a1);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0xBu:
      v522 = *((_QWORD *)&v1847 + 1);
      v1852.m128i_i64[0] = v1847;
      v523 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v524 = __ROL2__(*(_WORD *)&v523[*((_QWORD *)&v1847 + 1)], 8);
      v525 = v524;
      v526 = v523 + 4;
      ptr[0] = v523 + 4;
      v527 = *(_WORD *)&v523[*((_QWORD *)&v1847 + 1) + 2];
      if ( *(_DWORD *)(a1 + 0xCF60) == v524 )
        goto LABEL_1777;
      *(_DWORD *)(a1 + 0xCF60) = v524;
      v528 = *(_QWORD *)(a1 + 0x80);
      v1850.m128i_i32[0] = *(_DWORD *)(v528 + 0x6C);
      v529 = *(_DWORD *)(v528 + 0x70);
      if ( (unsigned __int8)sub_3051D0(v524) )
        sub_266510(a1, LODWORD(qword_10207A0[2]) + 0x18 * v525, 0xFFFFFFFF, v1850.m128i_i32[0], v529, 0, 0);
      v530 = *(_DWORD *)(a1 + 0xCF60);
      if ( !(unsigned __int8)sub_3051D0(v530) )
        goto LABEL_1776;
      v531 = qword_10207A0[2];
      v532 = *(_QWORD *)(v531 + 0x18LL * (int)v530 + 8);
      if ( !v532 )
        goto LABEL_1776;
      v533 = *(_QWORD *)(v531 + 0x18LL * (int)v530 + 0x10);
      v534 = v532 & 1;
      if ( v532 == 1 )
      {
        v535 = 0LL;
        goto LABEL_1773;
      }
      v1469 = v532 - v534;
      v1470 = v533 + 0x18;
      v535 = 0LL;
      v1471 = *(_QWORD *)(v533 + 8);
      if ( !v1471 )
        goto LABEL_1771;
LABEL_1770:
      *(_QWORD *)(v1471 + 0x7C8) = 0LL;
      while ( 1 )
      {
LABEL_1771:
        if ( *(_QWORD *)v1470 )
          *(_QWORD *)(*(_QWORD *)v1470 + 0x7C8LL) = 0LL;
        v535 += 2LL;
        v1470 += 0x20LL;
        if ( v1469 == v535 )
          break;
        v1471 = *(_QWORD *)(v1470 - 0x10);
        if ( v1471 )
          goto LABEL_1770;
      }
LABEL_1773:
      if ( v534 )
      {
        v1472 = *(_QWORD *)(v533 + 0x10 * v535 + 8);
        if ( v1472 )
          *(_QWORD *)(v1472 + 0x7C8) = 0LL;
      }
LABEL_1776:
      sub_125E20((__int64)dword_9D8E70, v1840[0x33D8]);
      *(_OWORD *)((char *)&loc_20F080 + (_QWORD)v1840) = xmmword_806230;
      *((_OWORD *)v1840 + 0x20F07) = xmmword_806230;
      *((_OWORD *)v1840 + 0x20F06) = xmmword_806230;
      *((_OWORD *)v1840 + 0x20F05) = xmmword_806230;
      *((_OWORD *)v1840 + 0x20F04) = xmmword_806230;
      *((_OWORD *)v1840 + 0x20F03) = xmmword_806230;
      v1840[0x83C24] = (unsigned int)&unk_1010101;
LABEL_1777:
      if ( !v527 )
      {
LABEL_1788:
        *(_QWORD *)dest = dest;
        *(_QWORD *)&dest[8] = dest;
        v1481 = v1840;
        v1482 = (_QWORD *)*((_QWORD *)v1840 + 0x19E7);
        v1483 = *v1482;
        v1484 = v1482;
        if ( !*v1482 )
        {
          v1484 = (_QWORD *)*((_QWORD *)v1840 + 0x19E7);
          do
          {
            v1483 = v1484[1];
            ++v1484;
          }
          while ( !v1483 );
          v1481 = v1840;
        }
        v2 = v1482[*((_QWORD *)v1481 + 0x19E8)];
        v1485 = dest;
        if ( v2 != v1483 )
        {
          do
          {
            if ( *(_BYTE *)(v1483 + 0xC) )
            {
              *(_BYTE *)(v1483 + 0xC) = 0;
              v1483 = *(_QWORD *)(v1483 + 0x10);
            }
            else
            {
              if ( p_memory_pool )
              {
                v1486 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1486;
                v1487 = (__int64 *)(v1486 - 8);
                if ( v15 )
                  v1487 = p_memory_pool + 0x36;
                v1488 = *v1487;
                v1489 = p_memory_pool[1];
                v15 = *p_memory_pool == v1489;
                v1490 = (unsigned int *)(v1489 - 4);
                if ( v15 )
                  v1490 = (unsigned int *)(p_memory_pool + 0xC);
                v1491 = *v1490;
                v1492 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1492;
                v1493 = (unsigned int *)(v1492 - 4);
                if ( v15 )
                  v1493 = (unsigned int *)(p_memory_pool + 0x43);
                v1494 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1488 + 0x18LL))(
                                    v1488,
                                    0x18LL,
                                    v1491,
                                    0x10LL,
                                    *v1493);
                if ( !v1494 )
                {
LABEL_2388:
                  v1144 = 0x18LL;
                  goto LABEL_2390;
                }
              }
              else
              {
                v1494 = memalign(0x10uLL, 0x18uLL);
                if ( !v1494 )
                  goto LABEL_2388;
              }
              v1494[4] = *(_DWORD *)v1483;
              *(_QWORD *)v1494 = dest;
              *((_QWORD *)v1494 + 1) = *(_QWORD *)&dest[8];
              **(_QWORD **)&dest[8] = v1494;
              *(_QWORD *)&dest[8] = v1494;
              v1483 = *(_QWORD *)(v1483 + 0x10);
            }
            while ( !v1483 )
            {
              v1483 = v1484[1];
              ++v1484;
            }
          }
          while ( v2 != v1483 );
          v1485 = *(_BYTE **)dest;
        }
        for ( i = v1840; v1485 != dest; v1485 = *(_BYTE **)v1485 )
        {
          v1496 = *((int *)v1485 + 4);
          v1497 = i[0x19E7];
          v1498 = i[0x19E8];
          i = v1840;
          v1499 = *(_QWORD *)(v1497 + 8 * (v1496 % (unsigned int)v1498));
          if ( v1499 )
          {
            while ( (_DWORD)v1496 != *(_DWORD *)v1499 )
            {
              v1499 = *(_QWORD *)(v1499 + 0x10);
              if ( !v1499 )
                goto LABEL_1812;
            }
            if ( v1499 != *(_QWORD *)(v1497 + 8 * v1498) )
              sub_276930(v1840, v1496, *(unsigned int *)(v1499 + 4), 1LL);
          }
LABEL_1812:
          ;
        }
        v1500 = i[0x41E01];
        if ( v1500 )
        {
          v2 = *(_QWORD *)((char *)&loc_20F000 + (_QWORD)v1840);
          v1501 = 0LL;
          v1502 = *(_QWORD **)v2;
          if ( *(_QWORD *)v2 )
            goto LABEL_1825;
LABEL_1821:
          while ( 1 )
          {
            *(_QWORD *)(v2 + 8 * v1501++) = 0LL;
            if ( v1501 == v1500 )
              break;
            v1502 = *(_QWORD **)(v2 + 8 * v1501);
            if ( v1502 )
            {
              do
              {
LABEL_1825:
                while ( 1 )
                {
                  v1503 = (_QWORD *)v1502[2];
                  if ( p_memory_pool )
                    break;
                  free(v1502);
                  v1502 = v1503;
                  if ( !v1503 )
                    goto LABEL_1821;
                }
                v1504 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1504;
                v1505 = (__int64 *)(v1504 - 8);
                if ( v15 )
                  v1505 = p_memory_pool + 0x36;
                v1506 = *v1505;
                v1507 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1507;
                v1508 = (unsigned int *)(v1507 - 4);
                if ( v15 )
                  v1508 = (unsigned int *)(p_memory_pool + 0x43);
                (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v1506 + 0x28LL))(v1506, v1502, *v1508);
                v1502 = v1503;
              }
              while ( v1503 );
            }
          }
        }
        *((_QWORD *)v1840 + 0x41E02) = 0LL;
        v1509 = (char *)ptr[0];
        if ( ptr[0] < (void *)v1852.m128i_i64[0] )
        {
          v2 = (unsigned __int64)v1856;
          do
          {
            ptr[0] = v1509 + 4;
            v1510 = *(_DWORD *)&v1509[*((_QWORD *)&v1847 + 1)];
            ptr[0] = v1509 + 6;
            LOWORD(v1511) = __ROL2__(*(_WORD *)&v1509[*((_QWORD *)&v1847 + 1) + 4], 8);
            ptr[0] = v1509 + 8;
            v1512 = __ROL2__(*(_WORD *)&v1509[*((_QWORD *)&v1847 + 1) + 6], 8);
            v1513 = v1509 + 0xC;
            ptr[0] = v1509 + 0xC;
            LODWORD(v1861[0]) = _byteswap_ulong(*(_DWORD *)&v1509[*((_QWORD *)&v1847 + 1) + 8]);
            if ( (unsigned __int16)v1511 <= v1512 )
            {
              v1850.m128i_i64[0] = (unsigned __int64)_byteswap_ulong(v1510) << 0x20;
              v1511 = (unsigned __int16)v1511;
              v1514 = v1512;
              do
              {
                src[0] = (void *)(v1850.m128i_i64[0] | v1511);
                sub_2B4C50(v1856, v1840 + 0x83BFE, src, v1861);
              }
              while ( v1511++ < v1514 );
              v1513 = (char *)ptr[0];
            }
            v1509 = v1513;
          }
          while ( (unsigned __int64)v1513 < v1852.m128i_i64[0] );
        }
        LOBYTE(v2) = 1;
        if ( *(_BYTE **)dest != dest )
        {
          v1516 = *(void **)dest;
          v1517 = **(_BYTE ***)dest;
          if ( *(_QWORD *)dest )
            goto LABEL_1845;
LABEL_1843:
          while ( v1517 != dest )
          {
            while ( 1 )
            {
              v1516 = v1517;
              v1517 = *(_BYTE **)v1517;
              if ( !v1516 )
                break;
LABEL_1845:
              if ( !p_memory_pool )
              {
                free(v1516);
                goto LABEL_1843;
              }
              v1518 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1518;
              v1519 = (__int64 *)(v1518 - 8);
              if ( v15 )
                v1519 = p_memory_pool + 0x36;
              v1520 = *v1519;
              v1521 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1521;
              v1522 = (unsigned int *)(v1521 - 4);
              if ( v15 )
                v1522 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1520 + 0x28LL))(v1520, v1516, *v1522);
              if ( v1517 == dest )
                goto LABEL_17;
            }
          }
        }
        goto LABEL_17;
      }
      v1473 = (unsigned __int16)__ROL2__(v527, 8);
      while ( 1 )
      {
        v1474 = v526;
        --v1473;
        ptr[0] = v526 + 4;
        v1475 = _byteswap_ulong(*(_DWORD *)&v526[v522]);
        ptr[0] = v526 + 6;
        v1476 = (unsigned __int16)__ROL2__(*(_WORD *)&v526[v522 + 4], 8);
        v526 += 7;
        ptr[0] = v526;
        v1477 = (unsigned __int8)v1474[v522 + 6];
        v1478 = *((_QWORD *)v1840 + 0x19E7);
        v1479 = *(_QWORD *)(v1478 + 8 * ((int)v1475 % (unsigned __int64)(unsigned int)*((_QWORD *)v1840 + 0x19E8)));
        if ( !v1479 )
          goto LABEL_1780;
        while ( v1475 != *(_DWORD *)v1479 )
        {
          v1479 = *(_QWORD *)(v1479 + 0x10);
          if ( !v1479 )
            goto LABEL_1780;
        }
        if ( v1479 == *(_QWORD *)(v1478 + 8LL * *((_QWORD *)v1840 + 0x19E8)) )
          goto LABEL_1780;
        v1480 = *(unsigned int *)(v1479 + 4);
        if ( (_DWORD)v1480 == v1476 )
        {
          *(_BYTE *)(v1479 + 0xC) = 1;
          if ( v1473 <= 0 )
            goto LABEL_1788;
        }
        else
        {
          sub_276930(v1840, v1475, v1480, 1LL);
LABEL_1780:
          *(_BYTE *)(sub_276E60(v1840, v1475, v1476, v1477) + 8) = 1;
          if ( v1473 <= 0 )
            goto LABEL_1788;
        }
      }
    case 0xCu:
      v62 = 0xALL;
      goto LABEL_789;
    case 0xDu:
      dest[0] = 1;
      *(_DWORD *)&dest[4] = 0;
      *(__m128i *)&dest[8] = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(_QWORD *)&dest[0x18] = &::a2[1];
      *(_DWORD *)&dest[0x28] = 0;
      v300 = a1;
      sub_111170(*(_QWORD *)(a1 + 0xCDB0), v1846, (unsigned int)v1847, dest);
      goto LABEL_410;
    case 0xEu:
      v284 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      LODWORD(v285) = _byteswap_ulong(*(_DWORD *)&v284[*((_QWORD *)&v1847 + 1)]);
      ptr[0] = v284 + 8;
      v286 = (unsigned __int64)(unsigned __int8)v284[*((_QWORD *)&v1847 + 1) + 4] << 8;
      v1850.m128i_i64[0] = ((unsigned __int64)(unsigned __int8)v284[*((_QWORD *)&v1847 + 1) + 7] << 0x10) | ((unsigned __int8)v284[*((_QWORD *)&v1847 + 1) + 6] << 0x18);
      v287 = v1850.m128i_i64[0] | v286 | (unsigned __int8)v284[*((_QWORD *)&v1847 + 1) + 5];
      LODWORD(v1856[0]) = v1850.m128i_i32[0] | v286 | (unsigned __int8)v284[*((_QWORD *)&v1847 + 1) + 5];
      v288 = *(_QWORD *)(a1 + 0xCF38);
      v289 = *(_QWORD *)(a1 + 0xCF40);
      v290 = *(_QWORD *)(v288 + 8 * ((int)v285 % (unsigned __int64)(unsigned int)*((_QWORD *)v1840 + 0x19E8)));
      if ( !v290 )
        goto LABEL_264;
      while ( (_DWORD)v285 != *(_DWORD *)v290 )
      {
        v290 = *(_QWORD *)(v290 + 0x10);
        if ( !v290 )
        {
LABEL_264:
          v290 = *(_QWORD *)(v288 + 8 * v289);
LABEL_265:
          v291 = 0xFFFFFFFFLL;
          v292 = v290;
          goto LABEL_266;
        }
      }
      v292 = *(_QWORD *)(v288 + 8 * v289);
      if ( v290 == v292 )
        goto LABEL_265;
      v291 = *(unsigned int *)(v290 + 4);
LABEL_266:
      v293 = *(_QWORD *)(v288 + 8 * (v287 % (unsigned int)*((_QWORD *)v1840 + 0x19E8)));
      if ( v293 )
      {
        while ( (_DWORD)v287 != *(_DWORD *)v293 )
        {
          v293 = *(_QWORD *)(v293 + 0x10);
          if ( !v293 )
            goto LABEL_1181;
        }
        if ( v293 != v292 )
        {
          sub_276930(
            v1840,
            (unsigned int)v287,
            *(unsigned int *)(v293 + 4),
            ((_DWORD)v291 == 0xFFFFFFFF) | (unsigned __int8)(*(_DWORD *)(v293 + 4) != (_DWORD)v291));
          v288 = *((_QWORD *)v1840 + 0x19E8);
          v292 = *(_QWORD *)(*((_QWORD *)v1840 + 0x19E7) + 8 * v288);
        }
      }
LABEL_1181:
      if ( v290 != v292 )
      {
        LODWORD(v2) = (_DWORD)v1840;
        v1085 = *(_QWORD *)(v290 + 4);
        v1086 = *(_BYTE *)(v290 + 0xC);
        sub_2B29D0(dest, v1840 + 0x33CC, v1856, v288, v291);
        v1087 = *(_QWORD *)dest;
        *(_QWORD *)(*(_QWORD *)dest + 4LL) = v1085;
        *(_BYTE *)(v1087 + 0xC) = v1086;
        v1088 = (int)v285 % (unsigned __int64)v1840[0x33D0];
        v1089 = *((_QWORD *)v1840 + 0x19E7);
        v1090 = *(_QWORD **)(v1089 + 8 * v1088);
        if ( v1090 )
        {
          if ( (_DWORD)v285 == *(_DWORD *)v1090 )
          {
            v1091 = (_QWORD *)(v1089 + 8 * v1088);
            if ( (_DWORD)v285 == *(_DWORD *)v1090 )
            {
              do
              {
LABEL_1193:
                *v1091 = v1090[2];
                if ( p_memory_pool )
                {
                  v1093 = p_memory_pool[0x23];
                  v15 = p_memory_pool[0x22] == v1093;
                  v1094 = (__int64 *)(v1093 - 8);
                  if ( v15 )
                    v1094 = p_memory_pool + 0x36;
                  v1095 = *v1094;
                  v1096 = p_memory_pool[0x38];
                  v15 = p_memory_pool[0x37] == v1096;
                  v1097 = (unsigned int *)(v1096 - 4);
                  if ( v15 )
                    v1097 = (unsigned int *)(p_memory_pool + 0x43);
                  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v1095 + 0x28LL))(v1095, v1090, *v1097);
                }
                else
                {
                  free(v1090);
                }
                --*((_QWORD *)v1840 + 0x19E9);
                v1090 = (_QWORD *)*v1091;
              }
              while ( *v1091 && (_DWORD)v285 == *(_DWORD *)v1090 );
            }
          }
          else
          {
            while ( 1 )
            {
              v1092 = v1090;
              v1090 = (_QWORD *)v1090[2];
              if ( !v1090 )
                break;
              if ( (_DWORD)v285 == *(_DWORD *)v1090 )
              {
                v1091 = v1092 + 2;
                if ( (_DWORD)v285 == *(_DWORD *)v1090 )
                  goto LABEL_1193;
                break;
              }
            }
          }
        }
      }
      v1098 = qword_1026F30;
      if ( (v285 & 0x80000000) != 0LL )
        goto LABEL_1207;
      v1099 = (unsigned int)((int)v285 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v1099 )
        goto LABEL_1207;
      v1100 = qword_10207A0[2];
      v1101 = *(_QWORD *)(v1100 + 0x18LL * (int)v1099 + 8);
      v285 = (unsigned __int16)v285;
      if ( !v1101 )
        goto LABEL_1204;
      if ( v1101 <= v285 )
        goto LABEL_1207;
      v1102 = *(_QWORD *)(v1100 + 0x18LL * (int)v1099 + 0x10);
      if ( *(_QWORD *)(v1102 + 0x10 * v285 + 8) )
        goto LABEL_1206;
LABEL_1204:
      if ( (unsigned __int8)sub_3051D0(v1099) )
      {
        v1102 = *(_QWORD *)(v1100 + 0x18LL * (int)v1099 + 0x10);
LABEL_1206:
        v1098 = (_QWORD *)(v1102 + 0x10 * v285);
      }
LABEL_1207:
      v1103 = v1098[1];
      if ( v1103 && *(_DWORD *)(v1103 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        *((_BYTE *)v1840 + *(int *)(v1103 + 0x7FC) + 0x20F030) = 1;
      v1104 = qword_1026F30;
      if ( (v287 & 0x80000000) != 0LL )
        goto LABEL_1218;
      v1105 = (unsigned int)v1850.m128i_i16[1];
      if ( qword_10207A0[1] <= (unsigned __int64)v1850.m128i_i16[1] )
        goto LABEL_1218;
      v1106 = qword_10207A0[2];
      v1107 = *(_QWORD *)(v1106 + 0x18LL * v1850.m128i_i16[1] + 8);
      if ( !v1107 )
        goto LABEL_1215;
      if ( v1107 <= (unsigned __int16)v287 )
        goto LABEL_1218;
      v1108 = *(_QWORD *)(v1106 + 0x18LL * v1850.m128i_i16[1] + 0x10);
      if ( *(_QWORD *)(v1108 + 0x10LL * (unsigned __int16)v287 + 8) )
        goto LABEL_1217;
LABEL_1215:
      if ( (unsigned __int8)sub_3051D0(v1105) )
      {
        v1108 = *(_QWORD *)(v1106 + 0x18LL * (int)v1105 + 0x10);
LABEL_1217:
        v1104 = (_QWORD *)(v1108 + 0x10LL * (unsigned __int16)v287);
      }
LABEL_1218:
      v1109 = (int *)v1104[1];
      LOBYTE(v2) = 1;
      if ( v1109 )
      {
        if ( v1109[0x200] == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          *((_BYTE *)v1840 + v1109[0x1FF] + 0x20F030) = 1;
        sub_2663E0(v1840, qword_10207A0[2] + 0x18LL * (v1109[1] >> 0x10), v1104, 1LL, v291);
      }
      v1110 = (int)v1840[0x33D8];
      if ( v1110 == 0xFFFFFFFFFFFFFFFFLL || !(unsigned __int8)sub_3051D0((unsigned int)v1110) )
        goto LABEL_17;
      v122 = qword_10207A0[2] + 0x18 * v1110;
      a1 = (__int64)v1840;
      v123 = 0x18LL;
LABEL_1225:
      sub_266EC0(a1, v122, v123);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0xFu:
      v444 = (char *)ptr[0]++;
      v445 = (unsigned __int8)-v444[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v444 + 3;
      v446 = (unsigned __int8)v444[*((_QWORD *)&v1847 + 1) + 1];
      v447 = (unsigned __int8)v444[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v444 + 6;
      v448 = (unsigned __int8)v444[*((_QWORD *)&v1847 + 1) + 3] + (v444[*((_QWORD *)&v1847 + 1) + 5] & 7);
      if ( v448 > 0x66 )
        goto LABEL_17;
      v449 = (unsigned __int8)v444[*((_QWORD *)&v1847 + 1) + 4]
           + (((unsigned __int8)v444[*((_QWORD *)&v1847 + 1) + 5] >> 4) & 7);
      if ( v449 > 0x66 )
        goto LABEL_17;
      v450 = (unsigned __int8)v445 >> 2;
      v451 = (unsigned __int8)v445 >> 2;
      v452 = v445 & 3;
      v453 = (v446 << 8) | v447 ^ 0x80;
      switch ( byte_85BCC0[2 * ((unsigned __int8)v445 >> 2)] )
      {
        case 0:
          v454 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5548LL)
                           + 0x10LL
                           * (int)(v448
                                 + *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5530LL)
                                 * (v449 + *(_DWORD *)(a1 + 0xCAA0) * *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x552CLL)))
                           + 8);
          if ( !v454 )
            goto LABEL_17;
          v455 = *(volatile signed __int32 **)(v454 + 0x50);
          v456 = *(_QWORD *)(v454 + 0x58);
          if ( *(double *)&v455 == 0.0 )
          {
            *(double *)&v455 = 0.0;
            if ( !v456 )
              goto LABEL_2382;
          }
          else
          {
            _InterlockedAdd(v455 + 2, 1u);
            if ( !v456 )
              goto LABEL_2382;
          }
          *(_QWORD *)&v1851 = *(_QWORD *)(v456 + 0x38) >> 0x14;
          v1850.m128i_i64[0] = v452;
          v1853 = *(double *)&v455;
          if ( v450 != 2 )
          {
            v1852.m128i_i32[0] = v451;
            if ( p_memory_pool )
            {
              v1676 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1676;
              v1677 = (__int64 *)(v1676 - 8);
              if ( v15 )
                v1677 = p_memory_pool + 0x36;
              v1678 = *v1677;
              v1679 = p_memory_pool[1];
              v15 = *p_memory_pool == v1679;
              v1680 = (unsigned int *)(v1679 - 4);
              if ( v15 )
                v1680 = (unsigned int *)(p_memory_pool + 0xC);
              v1681 = *v1680;
              v1682 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1682;
              v1683 = (unsigned int *)(v1682 - 4);
              if ( v15 )
                v1683 = (unsigned int *)(p_memory_pool + 0x43);
              v1684 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1678 + 0x18LL))(
                                  v1678,
                                  0x60LL,
                                  v1681,
                                  8LL,
                                  *v1683);
              if ( !v1684 )
                goto LABEL_2387;
            }
            else
            {
              v1684 = memalign(8uLL, 0x60uLL);
              if ( !v1684 )
                goto LABEL_2387;
            }
            v2 = (unsigned __int64)(v1684 + 4);
            v1757 = v1840[0x32A8];
            v1758 = _mm_loadu_si128((const __m128i *)(v456 + 0x18));
            *(__m128i *)dest = v1758;
            if ( v1758.m128i_i64[0] )
              _InterlockedAdd((volatile signed __int32 *)(v1758.m128i_i64[0] + 8), 1u);
            sub_41FC60(
              (_DWORD)v1684 + 0x20,
              LODWORD(v1851),
              v1852.m128i_i32[0],
              v1850.m128i_i32[0],
              v1757,
              v449,
              v448,
              v453,
              0,
              (__int64)dest,
              v1840[0x837]);
            v1759 = *(volatile signed __int32 **)dest;
            if ( *(_QWORD *)dest )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1759 + 0x10LL))(v1759);
                if ( !_InterlockedSub(v1759 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1759 + 0x18LL))(v1759);
              }
            }
            v1684[1] = 0x100000001LL;
            *v1684 = off_978C70;
            v1684[2] = 1LL;
            v1684[3] = v2;
            v1760 = *(volatile signed __int32 **)(v456 + 0x18);
            *(_QWORD *)(v456 + 0x18) = v1684;
            *(_QWORD *)(v456 + 0x20) = v2;
            LOBYTE(v2) = 1;
            *(double *)&v455 = v1853;
            if ( !v1760 )
              goto LABEL_2382;
            goto LABEL_2273;
          }
          v1852.m128i_i64[0] = v453;
          if ( p_memory_pool )
          {
            v1636 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1636;
            v1637 = (__int64 *)(v1636 - 8);
            if ( v15 )
              v1637 = p_memory_pool + 0x36;
            v1638 = *v1637;
            v1639 = p_memory_pool[1];
            v15 = *p_memory_pool == v1639;
            v1640 = (unsigned int *)(v1639 - 4);
            if ( v15 )
              v1640 = (unsigned int *)(p_memory_pool + 0xC);
            v1641 = *v1640;
            v1642 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1642;
            v1643 = (unsigned int *)(v1642 - 4);
            if ( v15 )
              v1643 = (unsigned int *)(p_memory_pool + 0x43);
            v1644 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1638 + 0x18LL))(
                                v1638,
                                0x60LL,
                                v1641,
                                8LL,
                                *v1643);
            if ( !v1644 )
              goto LABEL_2387;
          }
          else
          {
            v1644 = memalign(8uLL, 0x60uLL);
            if ( !v1644 )
              goto LABEL_2387;
          }
          v1739 = v1850.m128i_i32[0] + 4;
          v1740 = v1644 + 4;
          v1741 = v1840[0x32A8];
          v1742 = _mm_loadu_si128((const __m128i *)(v456 + 0x18));
          *(__m128i *)dest = v1742;
          if ( v1742.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)(v1742.m128i_i64[0] + 8), 1u);
          sub_41FC60(
            (_DWORD)v1644 + 0x20,
            LODWORD(v1851),
            2,
            v1739,
            v1741,
            v449,
            v448,
            v1852.m128i_i32[0],
            0,
            (__int64)dest,
            v1840[0x837]);
          v1743 = *(volatile signed __int32 **)dest;
          if ( *(_QWORD *)dest )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1743 + 0x10LL))(v1743);
              if ( !_InterlockedSub(v1743 + 3, 1u) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1743 + 0x18LL))(v1743);
            }
          }
          v1644[1] = 0x100000001LL;
          *v1644 = off_978C70;
          v1644[2] = 1LL;
          v1644[3] = v1740;
          v1744 = *(volatile signed __int32 **)(v456 + 0x18);
          *(_QWORD *)(v456 + 0x18) = v1644;
          *(_QWORD *)(v456 + 0x20) = v1740;
          if ( v1744 )
          {
            if ( !_InterlockedSub(v1744 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1744 + 0x10LL))(v1744);
              if ( !_InterlockedSub(v1744 + 3, 1u) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1744 + 0x18LL))(v1744);
            }
          }
          if ( p_memory_pool )
          {
            v1745 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1745;
            v1746 = (__int64 *)(v1745 - 8);
            if ( v15 )
              v1746 = p_memory_pool + 0x36;
            v1747 = *v1746;
            v1748 = p_memory_pool[1];
            v15 = *p_memory_pool == v1748;
            v1749 = (unsigned int *)(v1748 - 4);
            if ( v15 )
              v1749 = (unsigned int *)(p_memory_pool + 0xC);
            v1750 = *v1749;
            v1751 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1751;
            v1752 = (unsigned int *)(v1751 - 4);
            if ( v15 )
              v1752 = (unsigned int *)(p_memory_pool + 0x43);
            v1753 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1747 + 0x18LL))(
                                v1747,
                                0x60LL,
                                v1750,
                                8LL,
                                *v1752);
            if ( !v1753 )
              goto LABEL_2387;
LABEL_2266:
            v1761 = (v1850.m128i_i8[0] + 1) & 3;
            v2 = (unsigned __int64)(v1753 + 4);
            v1762 = v1840[0x32A8];
            v1763 = _mm_loadu_si128((const __m128i *)(v456 + 0x28));
            *(__m128i *)dest = v1763;
            if ( v1763.m128i_i64[0] )
              _InterlockedAdd((volatile signed __int32 *)(v1763.m128i_i64[0] + 8), 1u);
            sub_41FC60(
              (_DWORD)v1753 + 0x20,
              LODWORD(v1851),
              2,
              v1761,
              v1762,
              v449,
              v448,
              v1852.m128i_i32[0],
              0,
              (__int64)dest,
              v1840[0x837]);
            v1764 = *(volatile signed __int32 **)dest;
            if ( *(_QWORD *)dest )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1764 + 0x10LL))(v1764);
                if ( !_InterlockedSub(v1764 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1764 + 0x18LL))(v1764);
              }
            }
            v1753[1] = 0x100000001LL;
            *v1753 = off_978C70;
            v1753[2] = 1LL;
            v1753[3] = v2;
            v1760 = *(volatile signed __int32 **)(v456 + 0x28);
            *(_QWORD *)(v456 + 0x28) = v1753;
            *(_QWORD *)(v456 + 0x30) = v2;
            LOBYTE(v2) = 1;
            *(double *)&v455 = v1853;
            if ( !v1760 )
              goto LABEL_2382;
LABEL_2273:
            if ( !_InterlockedSub(v1760 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1760 + 0x10LL))(v1760);
              if ( !_InterlockedSub(v1760 + 3, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1760 + 0x18LL))(v1760);
                if ( *(double *)&v455 == 0.0 )
                  goto LABEL_17;
                goto LABEL_2383;
              }
            }
LABEL_2382:
            if ( *(double *)&v455 == 0.0 )
              goto LABEL_17;
LABEL_2383:
            if ( _InterlockedSub(v455 + 2, 1u) )
              goto LABEL_17;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v455 + 0x10LL))(v455);
            if ( _InterlockedSub(v455 + 3, 1u) )
              goto LABEL_17;
            v594 = v455;
            v593 = *(_QWORD *)v455;
            goto LABEL_1696;
          }
          v1753 = memalign(8uLL, 0x60uLL);
          if ( v1753 )
            goto LABEL_2266;
          goto LABEL_2387;
        case 1:
          v1414 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5548LL)
                            + 0x10LL
                            * (int)(v448
                                  + *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5530LL)
                                  * (v449 + *(_DWORD *)(a1 + 0xCAA0) * *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x552CLL)))
                            + 8);
          if ( !v1414 )
            goto LABEL_17;
          v455 = *(volatile signed __int32 **)(v1414 + 0x60);
          v1415 = *(_QWORD *)(v1414 + 0x68);
          if ( *(double *)&v455 == 0.0 )
          {
            *(double *)&v455 = 0.0;
            if ( !v1415 )
              goto LABEL_2382;
          }
          else
          {
            _InterlockedAdd(v455 + 2, 1u);
            if ( !v1415 )
              goto LABEL_2382;
          }
          *(_QWORD *)&v1853 = *(_QWORD *)(v1415 + 0x40) >> 0x14;
          v1852.m128i_i64[0] = v1415;
          v1850.m128i_i64[0] = v452;
          v1851 = *(double *)&v455;
          if ( (v450 | 1) == 5 )
          {
            if ( p_memory_pool )
            {
              v1645 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1645;
              v1646 = (__int64 *)(v1645 - 8);
              if ( v15 )
                v1646 = p_memory_pool + 0x36;
              v1647 = *v1646;
              v1648 = p_memory_pool[1];
              v15 = *p_memory_pool == v1648;
              v1649 = (unsigned int *)(v1648 - 4);
              if ( v15 )
                v1649 = (unsigned int *)(p_memory_pool + 0xC);
              v1650 = *v1649;
              v1651 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1651;
              v1652 = (unsigned int *)(v1651 - 4);
              if ( v15 )
                v1652 = (unsigned int *)(p_memory_pool + 0x43);
              v1653 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1647 + 0x18LL))(
                                  v1647,
                                  0x60LL,
                                  v1650,
                                  8LL,
                                  *v1652);
              if ( !v1653 )
                goto LABEL_2387;
            }
            else
            {
              v1653 = memalign(8uLL, 0x60uLL);
              if ( !v1653 )
                goto LABEL_2387;
            }
            v2 = (unsigned __int64)(v1653 + 4);
            v1754 = v1840[0x32A8];
            v1755 = _mm_loadu_si128((const __m128i *)(v1852.m128i_i64[0] + 0x20));
            *(__m128i *)dest = v1755;
            if ( v1755.m128i_i64[0] )
              _InterlockedAdd((volatile signed __int32 *)(v1755.m128i_i64[0] + 8), 1u);
            sub_41FC60(
              (_DWORD)v1653 + 0x20,
              LODWORD(v1853),
              4,
              v1850.m128i_i32[0],
              v1754,
              v449,
              v448,
              v453,
              0,
              (__int64)dest,
              v1840[0x837]);
            v1756 = *(volatile signed __int32 **)dest;
            if ( *(_QWORD *)dest )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1756 + 0x10LL))(v1756);
                if ( !_InterlockedSub(v1756 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1756 + 0x18LL))(v1756);
              }
            }
            v1653[1] = 0x100000001LL;
          }
          else
          {
            if ( v450 == 8 )
            {
              if ( p_memory_pool )
              {
                v1765 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1765;
                v1766 = (__int64 *)(v1765 - 8);
                if ( v15 )
                  v1766 = p_memory_pool + 0x36;
                v1767 = *v1766;
                v1768 = p_memory_pool[1];
                v15 = *p_memory_pool == v1768;
                v1769 = (unsigned int *)(v1768 - 4);
                if ( v15 )
                  v1769 = (unsigned int *)(p_memory_pool + 0xC);
                v1770 = *v1769;
                v1771 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1771;
                v1772 = (unsigned int *)(v1771 - 4);
                if ( v15 )
                  v1772 = (unsigned int *)(p_memory_pool + 0x43);
                v1773 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1767 + 0x18LL))(
                                    v1767,
                                    0x60LL,
                                    v1770,
                                    8LL,
                                    *v1772);
                if ( !v1773 )
                  goto LABEL_2387;
              }
              else
              {
                v1773 = memalign(8uLL, 0x60uLL);
                if ( !v1773 )
                  goto LABEL_2387;
              }
              v1819 = v1850.m128i_i32[0] + 4;
              v1820 = v1773 + 4;
              v1821 = v1840[0x32A8];
              v1822 = _mm_loadu_si128((const __m128i *)(v1852.m128i_i64[0] + 0x20));
              *(__m128i *)dest = v1822;
              if ( v1822.m128i_i64[0] )
                _InterlockedAdd((volatile signed __int32 *)(v1822.m128i_i64[0] + 8), 1u);
              sub_41FC60(
                (_DWORD)v1773 + 0x20,
                LODWORD(v1853),
                4,
                v1819,
                v1821,
                v449,
                v448,
                v453,
                0,
                (__int64)dest,
                v1840[0x837]);
              v1823 = *(volatile signed __int32 **)dest;
              if ( *(_QWORD *)dest )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1823 + 0x10LL))(v1823);
                  if ( !_InterlockedSub(v1823 + 3, 1u) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1823 + 0x18LL))(v1823);
                }
              }
              v1773[1] = 0x100000001LL;
              *v1773 = off_978C70;
              v1773[2] = 1LL;
              v1773[3] = v1820;
              v1824 = v1852.m128i_i64[0];
              v1825 = *(volatile signed __int32 **)(v1852.m128i_i64[0] + 0x20);
              *(_QWORD *)(v1852.m128i_i64[0] + 0x20) = v1773;
              *(_QWORD *)(v1824 + 0x28) = v1820;
              if ( v1825 )
              {
                if ( !_InterlockedSub(v1825 + 2, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1825 + 0x10LL))(v1825);
                  if ( !_InterlockedSub(v1825 + 3, 1u) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1825 + 0x18LL))(v1825);
                }
              }
              if ( p_memory_pool )
              {
                v1826 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1826;
                v1827 = (__int64 *)(v1826 - 8);
                if ( v15 )
                  v1827 = p_memory_pool + 0x36;
                v1828 = *v1827;
                v1829 = p_memory_pool[1];
                v15 = *p_memory_pool == v1829;
                v1830 = (unsigned int *)(v1829 - 4);
                if ( v15 )
                  v1830 = (unsigned int *)(p_memory_pool + 0xC);
                v1831 = *v1830;
                v1832 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1832;
                v1833 = (unsigned int *)(v1832 - 4);
                if ( v15 )
                  v1833 = (unsigned int *)(p_memory_pool + 0x43);
                v1834 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1828 + 0x18LL))(
                                    v1828,
                                    0x60LL,
                                    v1831,
                                    8LL,
                                    *v1833);
                if ( !v1834 )
                  goto LABEL_2387;
              }
              else
              {
                v1834 = memalign(8uLL, 0x60uLL);
                if ( !v1834 )
                  goto LABEL_2387;
              }
              v1835 = (v1850.m128i_i32[0] + 2) | 4;
              v2 = (unsigned __int64)(v1834 + 4);
              v1836 = v1840[0x32A8];
              v1837 = _mm_loadu_si128((const __m128i *)(v1852.m128i_i64[0] + 0x30));
              *(__m128i *)dest = v1837;
              if ( v1837.m128i_i64[0] )
                _InterlockedAdd((volatile signed __int32 *)(v1837.m128i_i64[0] + 8), 1u);
              sub_41FC60(
                (_DWORD)v1834 + 0x20,
                LODWORD(v1853),
                4,
                v1835,
                v1836,
                v449,
                v448,
                v453,
                0,
                (__int64)dest,
                v1840[0x837]);
              v1838 = *(volatile signed __int32 **)dest;
              if ( *(_QWORD *)dest )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1838 + 0x10LL))(v1838);
                  if ( !_InterlockedSub(v1838 + 3, 1u) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1838 + 0x18LL))(v1838);
                }
              }
              v1834[1] = 0x100000001LL;
              *v1834 = off_978C70;
              v1834[2] = 1LL;
              v1834[3] = v2;
              v1839 = v1852.m128i_i64[0];
              v1818 = *(volatile signed __int32 **)(v1852.m128i_i64[0] + 0x30);
              *(_QWORD *)(v1852.m128i_i64[0] + 0x30) = v1834;
              *(_QWORD *)(v1839 + 0x38) = v2;
              LOBYTE(v2) = 1;
              *(double *)&v455 = v1851;
              if ( !v1818 )
                goto LABEL_2382;
LABEL_2352:
              if ( !_InterlockedSub(v1818 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1818 + 0x10LL))(v1818);
                if ( !_InterlockedSub(v1818 + 3, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1818 + 0x18LL))(v1818);
                  if ( *(double *)&v455 == 0.0 )
                    goto LABEL_17;
                  goto LABEL_2383;
                }
              }
              goto LABEL_2382;
            }
            if ( v450 == 7 )
            {
              if ( p_memory_pool )
              {
                v1774 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1774;
                v1775 = (__int64 *)(v1774 - 8);
                if ( v15 )
                  v1775 = p_memory_pool + 0x36;
                v1776 = *v1775;
                v1777 = p_memory_pool[1];
                v15 = *p_memory_pool == v1777;
                v1778 = (unsigned int *)(v1777 - 4);
                if ( v15 )
                  v1778 = (unsigned int *)(p_memory_pool + 0xC);
                v1779 = *v1778;
                v1780 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1780;
                v1781 = (unsigned int *)(v1780 - 4);
                if ( v15 )
                  v1781 = (unsigned int *)(p_memory_pool + 0x43);
                v1653 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1776 + 0x18LL))(
                                    v1776,
                                    0x60LL,
                                    v1779,
                                    8LL,
                                    *v1781);
                if ( !v1653 )
                  goto LABEL_2387;
              }
              else
              {
                v1653 = memalign(8uLL, 0x60uLL);
                if ( !v1653 )
                  goto LABEL_2387;
              }
              v1809 = (v1850.m128i_i32[0] + 2) | 4;
              v2 = (unsigned __int64)(v1653 + 4);
              v1810 = v1840[0x32A8];
              v1811 = _mm_loadu_si128((const __m128i *)(v1852.m128i_i64[0] + 0x20));
              *(__m128i *)dest = v1811;
              if ( v1811.m128i_i64[0] )
                _InterlockedAdd((volatile signed __int32 *)(v1811.m128i_i64[0] + 8), 1u);
              v1812 = v1840[0x837];
              v1813 = (_DWORD)v1653 + 0x20;
              v1814 = LODWORD(v1853);
            }
            else
            {
              LOBYTE(v2) = 1;
              *(double *)&v455 = v1851;
              if ( v450 != 6 )
                goto LABEL_2382;
              if ( p_memory_pool )
              {
                v1685 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1685;
                v1686 = (__int64 *)(v1685 - 8);
                if ( v15 )
                  v1686 = p_memory_pool + 0x36;
                v1687 = *v1686;
                v1688 = p_memory_pool[1];
                v15 = *p_memory_pool == v1688;
                v1689 = (unsigned int *)(v1688 - 4);
                if ( v15 )
                  v1689 = (unsigned int *)(p_memory_pool + 0xC);
                v1690 = *v1689;
                v1691 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1691;
                v1692 = (unsigned int *)(v1691 - 4);
                if ( v15 )
                  v1692 = (unsigned int *)(p_memory_pool + 0x43);
                v1653 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1687 + 0x18LL))(
                                    v1687,
                                    0x60LL,
                                    v1690,
                                    8LL,
                                    *v1692);
                if ( !v1653 )
                  goto LABEL_2387;
              }
              else
              {
                v1653 = memalign(8uLL, 0x60uLL);
                if ( !v1653 )
                  goto LABEL_2387;
              }
              v1850.m128i_i64[0] = v1850.m128i_i32[0] | 4u;
              v2 = (unsigned __int64)(v1653 + 4);
              v1810 = v1840[0x32A8];
              v1815 = _mm_loadu_si128((const __m128i *)(v1852.m128i_i64[0] + 0x20));
              *(__m128i *)dest = v1815;
              if ( v1815.m128i_i64[0] )
                _InterlockedAdd((volatile signed __int32 *)(v1815.m128i_i64[0] + 8), 1u);
              v1812 = v1840[0x837];
              v1813 = (_DWORD)v1653 + 0x20;
              v1814 = LODWORD(v1853);
              v1809 = v1850.m128i_i32[0];
            }
            sub_41FC60(v1813, v1814, 4, v1809, v1810, v449, v448, v453, 0, (__int64)dest, v1812);
            v1816 = *(volatile signed __int32 **)dest;
            if ( *(_QWORD *)dest )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1816 + 0x10LL))(v1816);
                if ( !_InterlockedSub(v1816 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1816 + 0x18LL))(v1816);
              }
            }
            v1653[1] = 0x100000001LL;
          }
          *v1653 = off_978C70;
          v1653[2] = 1LL;
          v1653[3] = v2;
          v1817 = v1852.m128i_i64[0];
          v1818 = *(volatile signed __int32 **)(v1852.m128i_i64[0] + 0x20);
          *(_QWORD *)(v1852.m128i_i64[0] + 0x20) = v1653;
          *(_QWORD *)(v1817 + 0x28) = v2;
          LOBYTE(v2) = 1;
          *(double *)&v455 = v1851;
          if ( !v1818 )
            goto LABEL_2382;
          goto LABEL_2352;
        case 2:
          v1406 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5548LL)
                            + 0x10LL
                            * (int)(v448
                                  + *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5530LL)
                                  * (v449 + *(_DWORD *)(a1 + 0xCAA0) * *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x552CLL)))
                            + 8);
          if ( !v1406 )
            goto LABEL_17;
          v1407 = *(int *)(v1406 + 0x98);
          if ( v1407 <= 0 )
            goto LABEL_17;
          v1408 = *(_QWORD *)(v1406 + 0xA0);
          v1409 = (unsigned __int64 *)(v1408 + 8);
          v1410 = 0LL;
          while ( 1 )
          {
            v2 = *v1409;
            if ( (*(_QWORD *)(*v1409 + 0x50) & 0x70000LL) == 0x20000
              && *(_DWORD *)(v2 + 0x34) == v449
              && *(_DWORD *)(v2 + 0x3C) == v448 )
            {
              break;
            }
            ++v1410;
            v1409 += 2;
            if ( v1407 == v1410 )
              goto LABEL_2193;
          }
          v1852.m128i_i32[0] = v451;
          v1850.m128i_i64[0] = v452;
          v1851 = *(double *)(v1408 + 0x10LL * (unsigned int)v1410);
          if ( v1851 == 0.0 )
            v1851 = 0.0;
          else
            _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)&v1851 + 8LL), 1u);
          v1782 = v1852.m128i_i32[0];
          if ( v450 == 0xB )
            v1782 = 0xA;
          v1852.m128i_i32[0] = v1782;
          v1853 = *(double *)(v2 + 0x50);
          if ( p_memory_pool )
          {
            v1783 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1783;
            v1784 = (__int64 *)(v1783 - 8);
            if ( v15 )
              v1784 = p_memory_pool + 0x36;
            v1785 = *v1784;
            v1786 = p_memory_pool[1];
            v15 = *p_memory_pool == v1786;
            v1787 = (unsigned int *)(v1786 - 4);
            if ( v15 )
              v1787 = (unsigned int *)(p_memory_pool + 0xC);
            v1788 = *v1787;
            v1789 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1789;
            v1790 = (unsigned int *)(v1789 - 4);
            if ( v15 )
              v1790 = (unsigned int *)(p_memory_pool + 0x43);
            v1791 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1785 + 0x18LL))(
                                v1785,
                                0x60LL,
                                v1788,
                                8LL,
                                *v1790);
            if ( !v1791 )
              goto LABEL_2387;
          }
          else
          {
            v1791 = memalign(8uLL, 0x60uLL);
            if ( !v1791 )
              goto LABEL_2387;
          }
          *(_QWORD *)&v1853 >>= 0x14;
          v1792 = v1791 + 4;
          v1793 = v1840[0x32A8];
          v1794 = _mm_loadu_si128((const __m128i *)(v2 + 0x20));
          *(__m128i *)dest = v1794;
          if ( v1794.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)(v1794.m128i_i64[0] + 8), 1u);
          sub_41FC60(
            (_DWORD)v1791 + 0x20,
            LODWORD(v1853),
            v1852.m128i_i32[0],
            v1850.m128i_i32[0],
            v1793,
            v449,
            v448,
            v453,
            0,
            (__int64)dest,
            v1840[0x837]);
          v1795 = *(volatile signed __int32 **)dest;
          if ( *(_QWORD *)dest )
          {
            if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1795 + 0x10LL))(v1795);
              if ( !_InterlockedSub(v1795 + 3, 1u) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1795 + 0x18LL))(v1795);
            }
          }
          v1791[1] = 0x100000001LL;
          *v1791 = off_978C70;
          v1791[2] = 1LL;
          v1791[3] = v1792;
          v1796 = *(volatile signed __int32 **)(v2 + 0x20);
          *(_QWORD *)(v2 + 0x20) = v1791;
          *(_QWORD *)(v2 + 0x28) = v1792;
          if ( v1796 )
          {
            if ( !_InterlockedSub(v1796 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1796 + 0x10LL))(v1796);
              if ( !_InterlockedSub(v1796 + 3, 1u) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1796 + 0x18LL))(v1796);
            }
          }
          if ( v1851 == 0.0 || _InterlockedSub((volatile signed __int32 *)(*(_QWORD *)&v1851 + 8LL), 1u) )
            goto LABEL_2193;
          v1738 = *(volatile signed __int32 **)&v1851;
          goto LABEL_2226;
        case 3:
          v1411 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5548LL)
                            + 0x10LL
                            * (int)(v448
                                  + *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x5530LL)
                                  * (v449 + *(_DWORD *)(a1 + 0xCAA0) * *(_DWORD *)(*(_QWORD *)(a1 + 0x4A90) + 0x552CLL)))
                            + 8);
          if ( !v1411 )
            goto LABEL_17;
          v1412 = *(const __m128i **)(v1411 + 0x78);
          if ( !v1412 )
            goto LABEL_17;
          v1413 = *(double *)(v1411 + 0x70);
          if ( v1413 == 0.0 )
            v1413 = 0.0;
          else
            _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)&v1413 + 8LL), 1u);
          v1851 = v1413;
          v1850.m128i_i64[0] = v445 & 3;
          v1852.m128i_i64[0] = v453;
          v1723 = v1412[2].m128i_u64[0];
          if ( p_memory_pool )
          {
            v1724 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1724;
            v1725 = (__int64 *)(v1724 - 8);
            if ( v15 )
              v1725 = p_memory_pool + 0x36;
            v1726 = *v1725;
            v1727 = p_memory_pool[1];
            v15 = *p_memory_pool == v1727;
            v1728 = (unsigned int *)(v1727 - 4);
            if ( v15 )
              v1728 = (unsigned int *)(p_memory_pool + 0xC);
            v1729 = *v1728;
            v1730 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1730;
            v1731 = (unsigned int *)(v1730 - 4);
            if ( v15 )
              v1731 = (unsigned int *)(p_memory_pool + 0x43);
            v1732 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1726 + 0x18LL))(
                                v1726,
                                0x60LL,
                                v1729,
                                8LL,
                                *v1731);
            if ( !v1732 )
              goto LABEL_2387;
LABEL_2214:
            v1733 = v1723 >> 0x14;
            v2 = (unsigned __int64)(v1732 + 4);
            v1734 = v1840[0x32A8];
            v1735 = _mm_loadu_si128(v1412 + 1);
            *(__m128i *)dest = v1735;
            if ( v1735.m128i_i64[0] )
              _InterlockedAdd((volatile signed __int32 *)(v1735.m128i_i64[0] + 8), 1u);
            sub_41FC60(
              (_DWORD)v1732 + 0x20,
              v1733,
              0x16,
              v1850.m128i_i32[0],
              v1734,
              v449,
              v448,
              v1852.m128i_i32[0],
              0,
              (__int64)dest,
              v1840[0x837]);
            v1736 = *(volatile signed __int32 **)dest;
            if ( *(_QWORD *)dest )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1736 + 0x10LL))(v1736);
                if ( !_InterlockedSub(v1736 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1736 + 0x18LL))(v1736);
              }
            }
            v1732[1] = 0x100000001LL;
            *v1732 = off_978C70;
            v1732[2] = 1LL;
            v1732[3] = v2;
            v1737 = (volatile signed __int32 *)v1412[1].m128i_i64[0];
            v1412[1].m128i_i64[0] = (__int64)v1732;
            v1412[1].m128i_i64[1] = v2;
            if ( v1737 )
            {
              if ( !_InterlockedSub(v1737 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1737 + 0x10LL))(v1737);
                if ( !_InterlockedSub(v1737 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1737 + 0x18LL))(v1737);
              }
            }
            v1738 = *(volatile signed __int32 **)&v1851;
            if ( v1851 != 0.0 && !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)&v1851 + 8LL), 1u) )
            {
LABEL_2226:
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1738 + 0x10LL))(v1738);
              if ( _InterlockedSub(v1738 + 3, 1u) )
                goto LABEL_2193;
              v1719 = v1851;
              v1718 = **(_QWORD **)&v1851;
LABEL_2192:
              (*(void (__fastcall **)(double))(v1718 + 0x18))(COERCE_DOUBLE(*(_QWORD *)&v1719));
            }
LABEL_2193:
            LOBYTE(v2) = 1;
            v6 = ptr[1];
            ptr[1] = 0LL;
            if ( !v6 )
              goto LABEL_28;
            goto LABEL_18;
          }
          v1732 = memalign(8uLL, 0x60uLL);
          if ( v1732 )
            goto LABEL_2214;
          break;
        default:
          goto LABEL_17;
      }
      goto LABEL_2387;
    case 0x10u:
      v537 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v538 = _byteswap_ulong(*(_DWORD *)&v537[*((_QWORD *)&v1847 + 1)]);
      ptr[0] = v537 + 5;
      v539 = v537[*((_QWORD *)&v1847 + 1) + 4];
      v540 = qword_1026F30;
      if ( v538 < 0 )
        goto LABEL_531;
      v541 = (unsigned int)(v538 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v541 )
        goto LABEL_531;
      v542 = (unsigned __int16)v538;
      v2 = qword_10207A0[2];
      v543 = *(_QWORD *)(v2 + 0x18LL * (int)v541 + 8);
      if ( !v543 )
        goto LABEL_528;
      if ( v543 <= v542 )
        goto LABEL_531;
      v544 = *(_QWORD *)(v2 + 0x18LL * (int)v541 + 0x10);
      if ( *(_QWORD *)(v544 + 0x10LL * v542 + 8) )
        goto LABEL_530;
LABEL_528:
      if ( (unsigned __int8)sub_3051D0(v541) )
      {
        v544 = *(_QWORD *)(v2 + 0x18LL * (int)v541 + 0x10);
LABEL_530:
        v540 = (_QWORD *)(v544 + 0x10LL * v542);
      }
LABEL_531:
      v101 = v540[1];
      if ( *(_BYTE *)(v101 + 0x5C) == (v539 == 0x7F) )
        goto LABEL_2193;
      *(_BYTE *)(v101 + 0x5C) = v539 == 0x7F;
      LOBYTE(v2) = 1;
      if ( !v101 )
        goto LABEL_17;
      goto LABEL_1666;
    case 0x11u:
      v636 = (unsigned __int8 *)ptr[0]++;
      *(_DWORD *)(a1 + 0xCC40) = v636[*((_QWORD *)&v1847 + 1)];
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x12u:
      dest[0] = 1;
      *(_DWORD *)&dest[4] = 0;
      *(__m128i *)&dest[8] = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(_QWORD *)&dest[0x18] = &::a2[1];
      *(_DWORD *)&dest[0x28] = 0;
      sub_142360(*(_QWORD *)(a1 + 0xCDB8), v1846, dest);
      v410 = *(char **)&dest[8];
      if ( !*(_QWORD *)&dest[8] || (__int64)(*(_QWORD *)&dest[0x18] - *(_QWORD *)&dest[8]) < 2 )
        goto LABEL_17;
      goto LABEL_1059;
    case 0x13u:
      *(_QWORD *)dest = 0LL;
      *(_DWORD *)&dest[8] = 0;
      v511 = ::a2;
      *(__m128i *)&dest[0x10] = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      v512 = &::a2[1];
      *(_QWORD *)&dest[0x20] = &::a2[1];
      *(_OWORD *)&dest[0x30] = *(_OWORD *)&dest[0x10];
      *(_QWORD *)&v1872 = &::a2[1];
      v1873 = 0LL;
      *(_OWORD *)v1856 = *(_OWORD *)&dest[0x10];
      v1857 = &::a2[1];
      v513 = (char *)ptr[0];
      v514 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v515 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v515 )
      {
        v516 = v515;
        sub_134D30(v514, (unsigned int)v515, v1856);
        v517 = (char *)ptr[0] + v516 + 1;
        ptr[0] = v517;
        v518 = *(char **)&dest[0x10];
        v519 = *(char **)&dest[0x18];
        v520 = (char *)v1856[0];
        v511 = (char *)v1856[1];
        v521 = *(char **)&dest[0x20];
        v512 = v1857;
      }
      else
      {
        v517 = v513 + 1;
        ptr[0] = v517;
        v521 = &::a2[1];
        v519 = ::a2;
        v520 = ::a2;
        v518 = ::a2;
      }
      *(_QWORD *)&dest[0x10] = v520;
      v1856[0] = v518;
      *(_QWORD *)&dest[0x18] = v511;
      v1856[1] = v519;
      *(_QWORD *)&dest[0x20] = v512;
      v1857 = v521;
      if ( v518 && v521 - v518 >= 2 )
      {
        if ( p_memory_pool )
        {
          v1046 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1046;
          v1047 = (__int64 *)(v1046 - 8);
          if ( v15 )
            v1047 = p_memory_pool + 0x36;
          v1048 = *v1047;
          v1049 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1049;
          v1050 = (unsigned int *)(v1049 - 4);
          if ( v15 )
            v1050 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v1048 + 0x28LL))(v1048, v518, *v1050);
        }
        else
        {
          free(v518);
        }
        v517 = (char *)ptr[0];
      }
      ptr[0] = v517 + 2;
      *(_DWORD *)dest = (unsigned __int16)__ROL2__(*(_WORD *)&v517[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v517 + 6;
      *(_DWORD *)&dest[4] = _byteswap_ulong(*(_DWORD *)&v517[*((_QWORD *)&v1847 + 1) + 2]);
      sub_1A3750(
        (_DWORD)v1840 + 0x20FAC0,
        (_UNKNOWN *)((char *)&loc_2108C0 + (_QWORD)v1840),
        (_DWORD)v1840 + 0x2108F0,
        (_DWORD)v1840 + 0x210920,
        (_DWORD)v1840 + 0x210950,
        (_DWORD)v1840 + 0x210980,
        (__int64)(v1840 + 0x8426C),
        (__int64)(v1840 + 0xCF26C),
        (__int64)&loc_4689B0 + (_QWORD)v1840,
        (__int64)(v1840 + 0x83F50));
      tt_mayby_set_action_sub_1E7490((__int64)v1840, 0x2D);
      sub_1D7A70(*((_QWORD *)v1840 + 0x94B));
      v1228 = (void *)*((_QWORD *)v1840 + 0x94B);
      *((_QWORD *)v1840 + 0x94B) = 0LL;
      if ( v1228 )
      {
        sub_2B3270(v1228);
        if ( p_memory_pool )
        {
          v1229 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1229;
          v1230 = (__int64 *)(v1229 - 8);
          if ( v15 )
            v1230 = p_memory_pool + 0x36;
          v1231 = *v1230;
          v1232 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1232;
          v1233 = (unsigned int *)(v1232 - 4);
          if ( v15 )
            v1233 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1231 + 0x28LL))(v1231, v1228, *v1233);
        }
        else
        {
          free(v1228);
        }
      }
      sub_225B40(dest);
      if ( !*(_QWORD *)&dest[0x30] || (__int64)(v1872 - *(_QWORD *)&dest[0x30]) < 2 )
        goto LABEL_1437;
      if ( p_memory_pool )
      {
        v1234 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1234;
        v1235 = (__int64 *)(v1234 - 8);
        if ( v15 )
          v1235 = p_memory_pool + 0x36;
        v1236 = *v1235;
        v1237 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1237;
        v1238 = (unsigned int *)(v1237 - 4);
        if ( v15 )
          v1238 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1236 + 0x28LL))(
          v1236,
          *(_QWORD *)&dest[0x30],
          *v1238);
        v1239 = *(void **)&dest[0x10];
        if ( !*(_QWORD *)&dest[0x10] )
          goto LABEL_5;
LABEL_1438:
        if ( (__int64)(*(_QWORD *)&dest[0x20] - (_QWORD)v1239) >= 2 )
        {
          if ( p_memory_pool )
          {
            v1240 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1240;
            v1241 = (__int64 *)(v1240 - 8);
            if ( v15 )
              v1241 = p_memory_pool + 0x36;
            v1242 = *v1241;
            v1243 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1243;
            v1244 = (unsigned int *)(v1243 - 4);
            if ( v15 )
              v1244 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1242 + 0x28LL))(v1242, v1239, *v1244);
          }
          else
          {
            free(v1239);
          }
        }
        goto LABEL_5;
      }
      free(*(void **)&dest[0x30]);
LABEL_1437:
      v1239 = *(void **)&dest[0x10];
      if ( *(_QWORD *)&dest[0x10] )
        goto LABEL_1438;
      goto LABEL_5;
    case 0x14u:
      v584 = (unsigned __int8 *)ptr[0]++;
      v585 = v584[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v584 + 2;
      v586 = v584[*((_QWORD *)&v1847 + 1) + 1];
      ptr[0] = v584 + 3;
      v587 = v584[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v584 + 4;
      if ( v585 > 4 )
        goto LABEL_17;
      v588 = v584[*((_QWORD *)&v1847 + 1) + 3];
      *((_BYTE *)&loc_20F910 + (_QWORD)v1840 + v585) = 1;
      v1840[v585 + 0x83E46] = v586;
      v1840[v585 + 0x83E4B] = v587;
      *(_DWORD *)((char *)&loc_20F940 + (_QWORD)&v1840[v585]) = v588;
      v1840[v585 + 0x83E55] = 0;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x15u:
      *(_DWORD *)(a1 + 0x111218) = 0;
      *(_DWORD *)(a1 + 0x10D758) = 0;
      sub_2814A0(a1, v1846);
      sub_281BF0(a1, 0LL, v1846);
      sub_282BE0(a1, v1846);
      v653 = *(_DWORD *)(a1 + 0x111218);
      if ( v653 > 0 )
      {
        for ( j = 0LL; j < v653; ++j )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 0x10LL * *(int *)(*(_QWORD *)(a1 + 0x111230) + 4 * j) + 0xD740) + 0x15CLL) != *(_DWORD *)(a1 + 0x20DC) )
          {
            sub_285A90(a1);
            v653 = *(_DWORD *)(a1 + 0x111218);
          }
        }
      }
      goto LABEL_17;
    case 0x16u:
      v404 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v405 = (v404[*((_QWORD *)&v1847 + 1)] << 8) | v404[*((_QWORD *)&v1847 + 1) + 1] ^ 0x80;
      ptr[0] = v404 + 3;
      v406 = (unsigned __int8)(0x80 - v404[*((_QWORD *)&v1847 + 1) + 2]);
      ptr[0] = v404 + 7;
      v407 = ((unsigned __int64)v404[*((_QWORD *)&v1847 + 1) + 3] << 0x10) | (v404[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | ((unsigned __int64)v404[*((_QWORD *)&v1847 + 1) + 6] << 8) | v404[*((_QWORD *)&v1847 + 1) + 5];
      v408 = *(_QWORD *)(a1 + 0xCF38);
      v409 = *(_QWORD *)(v408 + 8 * (v407 % (unsigned int)*(_QWORD *)(a1 + 0xCF40)));
      if ( !v409 )
        goto LABEL_1229;
      while ( (_DWORD)v407 != *(_DWORD *)v409 )
      {
        v409 = *(_QWORD *)(v409 + 0x10);
        if ( !v409 )
          goto LABEL_1229;
      }
      if ( v409 != *(_QWORD *)(v408 + 8LL * *(_QWORD *)(a1 + 0xCF40)) )
        sub_276930(a1, (unsigned int)v407, *(unsigned int *)(v409 + 4), *(_DWORD *)(v409 + 4) != v405);
LABEL_1229:
      sub_276E60(a1, (unsigned int)v407, v405, v406);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x17u:
      v401 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v352 = (unsigned __int16)__ROL2__(*(_WORD *)&v401[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v401 + 6;
      v351 = ((unsigned __int8)v401[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | ((unsigned __int8)v401[*((_QWORD *)&v1847 + 1)
                                                                                                 + 5] << 0x10) | ((unsigned __int8)v401[*((_QWORD *)&v1847 + 1) + 2] << 8) | (unsigned __int8)v401[*((_QWORD *)&v1847 + 1) + 3];
      goto LABEL_401;
    case 0x18u:
      v668 = *((_QWORD *)&v1847 + 1);
      v669 = (unsigned __int8 *)ptr[0]++;
      *(_DWORD *)(a1 + 0x1103E4) = v669[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v669 + 2;
      *(_DWORD *)(a1 + 0x1103E8) = v669[v668 + 1];
      if ( (unsigned __int64)(v669 + 2) < (unsigned __int64)v1847 )
      {
        ptr[0] = v669 + 3;
        for ( k = v669[v668 + 2]; ; k = v671[*((_QWORD *)&v1847 + 1)] )
        {
          sub_27DEA0(a1, k, v1846);
          v671 = (unsigned __int8 *)ptr[0];
          if ( ptr[0] >= (void *)v1847 )
            break;
          ++ptr[0];
        }
      }
      goto LABEL_17;
    case 0x19u:
      v260 = *((_QWORD *)&v1847 + 1);
      v2 = (unsigned __int64)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v261 = *(_DWORD *)(*((_QWORD *)&v1847 + 1) + v2);
      ptr[0] = (void *)(v2 + 6);
      v262 = _byteswap_ulong(v261);
      v263 = (unsigned __int16)__ROL2__(*(_WORD *)(*((_QWORD *)&v1847 + 1) + v2 + 4), 8);
      v264 = (unsigned __int16)v263 + 0x8000;
      if ( v262 >= (int)0xFFFEEE90 )
        v264 = v263;
      v265 = qword_1026F30;
      if ( v262 < 0 )
        goto LABEL_1670;
      v266 = HIWORD(v262);
      if ( qword_10207A0[1] <= v266 )
        goto LABEL_1670;
      v267 = (unsigned __int16)v262;
      v268 = qword_10207A0[2];
      v269 = *(_QWORD *)(v268 + 0x18 * v266 + 8);
      v270 = v267;
      if ( !v269 )
        goto LABEL_245;
      if ( v269 <= v267 )
      {
        v265 = qword_1026F30;
      }
      else
      {
        v271 = *(_QWORD *)(v268 + 0x18 * v266 + 0x10);
        if ( !*(_QWORD *)(v271 + 0x10LL * v267 + 8) )
        {
LABEL_245:
          v272 = sub_3051D0(v266);
          v265 = qword_1026F30;
          if ( !v272 )
            goto LABEL_1670;
          v271 = *(_QWORD *)(v268 + 0x18 * v266 + 0x10);
        }
        v265 = (_QWORD *)(v271 + 0x10 * v270);
      }
LABEL_1670:
      v1852.m128i_i64[0] = (__int64)v265;
      v1850.m128i_i64[0] = v265[1];
      v1418 = v1840;
      if ( !v1850.m128i_i64[0] )
        goto LABEL_1912;
      v1419 = *(_QWORD *)(v1850.m128i_i64[0] + 0x798);
      if ( !v1419 )
        goto LABEL_1912;
      v1420 = *(_QWORD *)(v1850.m128i_i64[0] + 0x7A0);
      v1421 = *(_QWORD *)(v1850.m128i_i64[0] + 0x7B8);
      if ( v1419 < 8 || v1420 < v1421 + 4 * v1419 && v1421 < v1420 + 4 * v1419 )
      {
        v1422 = 0LL;
        goto LABEL_1676;
      }
      v1422 = v1419 & 0xFFFFFFFFFFFFFFF8LL;
      v1425 = ((unsigned __int8)(((v1419 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3;
      if ( (v1419 & 0xFFFFFFFFFFFFFFF8LL) - 8 < 0x18 )
      {
        v1426 = 0LL;
        if ( (((unsigned __int8)(((v1419 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) == 0 )
          goto LABEL_1911;
        goto LABEL_1909;
      }
      v1546 = (((v1419 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1 - v1425;
      v1426 = 0LL;
      do
      {
        *(_OWORD *)(v1420 + 4 * v1426) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x10) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x10) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x20) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x30) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x20) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x30) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x40) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x50) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x40) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x50) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x60) = 0LL;
        *(_OWORD *)(v1420 + 4 * v1426 + 0x70) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x60) = 0LL;
        *(_OWORD *)(v1421 + 4 * v1426 + 0x70) = 0LL;
        v1426 += 0x20LL;
        v1546 -= 4LL;
      }
      while ( v1546 );
      if ( (((unsigned __int8)(((v1419 & 0xFFFFFFFFFFFFFFF8LL) - 8) >> 3) + 1) & 3) != 0 )
      {
LABEL_1909:
        v1547 = 4 * v1426 + 0x10;
        v1548 = -v1425;
        do
        {
          *(_OWORD *)(v1420 + v1547 - 0x10) = 0LL;
          *(_OWORD *)(v1420 + v1547) = 0LL;
          *(_OWORD *)(v1421 + v1547 - 0x10) = 0LL;
          *(_OWORD *)(v1421 + v1547) = 0LL;
          v1547 += 0x20LL;
          ++v1548;
        }
        while ( v1548 );
      }
LABEL_1911:
      if ( v1419 == v1422 )
        goto LABEL_1912;
LABEL_1676:
      v1423 = v1419 + ~v1422;
      v1424 = v1419 & 3;
      if ( (v1419 & 3) != 0 )
      {
        do
        {
          *(_DWORD *)(v1420 + 4 * v1422) = 0;
          *(_DWORD *)(v1421 + 4 * v1422++) = 0;
          --v1424;
        }
        while ( v1424 );
      }
      if ( v1423 >= 3 )
      {
        do
        {
          *(_DWORD *)(v1420 + 4 * v1422) = 0;
          *(_DWORD *)(v1421 + 4 * v1422) = 0;
          *(_DWORD *)(v1420 + 4 * v1422 + 4) = 0;
          *(_DWORD *)(v1421 + 4 * v1422 + 4) = 0;
          *(_DWORD *)(v1420 + 4 * v1422 + 8) = 0;
          *(_DWORD *)(v1421 + 4 * v1422 + 8) = 0;
          *(_DWORD *)(v1420 + 4 * v1422 + 0xC) = 0;
          *(_DWORD *)(v1421 + 4 * v1422 + 0xC) = 0;
          v1422 += 4LL;
        }
        while ( v1419 != v1422 );
      }
LABEL_1912:
      v1549 = qword_9BD3E0[1];
      v1550 = qword_9BD3E0[2];
      v1551 = *(_QWORD *)(v1549 + 8LL * (v264 % (unsigned int)v1550));
      if ( !v1551 )
        goto LABEL_1915;
      while ( *(_DWORD *)v1551 != v264 )
      {
        v1551 = *(_QWORD *)(v1551 + 0x48);
        if ( !v1551 )
          goto LABEL_1915;
      }
      if ( v1551 == *(_QWORD *)(v1549 + 8 * v1550) )
        goto LABEL_1915;
      v1561 = *(_QWORD *)(v1551 + 8);
      v1562 = (*(_QWORD *)(v1551 + 0x10) - v1561) >> 2;
      if ( (int)v1562 <= 0 )
        goto LABEL_1915;
      v1563 = *(_QWORD *)(v1551 + 0x28);
      v1564 = 1LL;
      if ( (unsigned __int64)(int)v1562 < 8 )
      {
        v1565 = 0LL;
        goto LABEL_2201;
      }
      if ( (int)v1562 > 0LL )
        v1564 = (int)v1562;
      if ( v1561 < v1563 + 4 * v1564 && v1563 < v1561 + 4 * v1564 )
      {
        v1565 = 0LL;
        goto LABEL_2201;
      }
      v1565 = (int)v1562 & 0x7FFFFFFFFFFFFFF8LL;
      v1601 = ((unsigned __int8)((unsigned __int64)(v1565 - 8) >> 3) + 1) & 3;
      if ( (unsigned __int64)(v1565 - 8) >= 0x18 )
      {
        v1720 = v1601 - (((((int)v1562 & 0x7FFFFFFFFFFFFFF8uLL) - 8) >> 3) + 1);
        v1602 = 0LL;
        do
        {
          *(_OWORD *)(v1561 + 4 * v1602) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x10) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1563 + 4 * v1602) = 0LL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x10) = 0LL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x20) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x30) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x20) = 0LL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x30) = 0LL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x40) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x50) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x40) = 0LL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x50) = 0LL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x60) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1561 + 4 * v1602 + 0x70) = (__int64)0xFFFFFFFFFFFFFFFFLL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x60) = 0LL;
          *(_OWORD *)(v1563 + 4 * v1602 + 0x70) = 0LL;
          v1602 += 0x20LL;
          v1720 += 4LL;
        }
        while ( v1720 );
        if ( (((unsigned __int8)((((int)v1562 & 0x7FFFFFFFFFFFFFF8uLL) - 8) >> 3) + 1) & 3) == 0 )
        {
LABEL_2200:
          v1418 = v1840;
          if ( (int)v1562 == v1565 )
          {
LABEL_1915:
            v1552 = v2 + 8;
            ptr[0] = (void *)(v2 + 8);
            v1553 = *(_WORD *)(v260 + v2 + 6);
            if ( v1553 )
            {
              v1554 = (unsigned __int16)__ROL2__(v1553, 8);
              if ( v1850.m128i_i64[0] )
              {
                v1555 = 0LL;
                do
                {
                  ptr[0] = (void *)(v1552 + 2);
                  v1556 = *(unsigned __int8 *)(v260 + v1552 + 1) << 8;
                  v1557 = *(unsigned __int8 *)(v260 + v1552) ^ 0x80;
                  v2 = v1552 + 3;
                  ptr[0] = (void *)(v1552 + 3);
                  v1558 = *(unsigned __int8 *)(v260 + v1552 + 2);
                  if ( v1558 == 0xFF )
                  {
                    v2 = v1552 + 7;
                    ptr[0] = (void *)(v1552 + 7);
                    v1558 = (*(unsigned __int8 *)(v260 + v1552 + 5) << 0x18) | (*(unsigned __int8 *)(v260 + v1552 + 6) << 0x10) | (*(unsigned __int8 *)(v260 + v1552 + 3) << 8) | *(unsigned __int8 *)(v260 + v1552 + 4);
                    v1418 = v1840;
                  }
                  v1559 = v1557 | v1556;
                  if ( v1555 < *(int *)(v1850.m128i_i64[0] + 0x798) )
                  {
                    v1560 = v1850.m128i_i64[0];
                    *(_DWORD *)(*(_QWORD *)(v1850.m128i_i64[0] + 0x7A0) + 4 * v1555) = v1559;
                    *(_DWORD *)(*(_QWORD *)(v1560 + 0x7B8) + 4 * v1555) = v1558;
                  }
                  sub_1078C0(v264, (unsigned int)v1555++, (unsigned int)(v1559 - 1));
                  v1552 = v2;
                }
                while ( v1554 != v1555 );
              }
              else
              {
                v1566 = 0;
                do
                {
                  ptr[0] = (void *)(v1552 + 2);
                  v1567 = (*(unsigned __int8 *)(v260 + v1552 + 1) << 8) | *(unsigned __int8 *)(v260 + v1552) ^ 0x80;
                  v1568 = v1552 + 3;
                  ptr[0] = (void *)(v1552 + 3);
                  if ( *(unsigned __int8 *)(v260 + v1552 + 2) == 0xFF )
                  {
                    v1568 = v1552 + 7;
                    ptr[0] = (void *)(v1552 + 7);
                  }
                  sub_1078C0(v264, v1566++, (unsigned int)(v1567 - 1));
                  v1552 = v1568;
                  v1418 = v1840;
                }
                while ( v1554 != v1566 );
              }
            }
            if ( v1850.m128i_i64[0] )
            {
              v1569 = *(_QWORD *)(v1852.m128i_i64[0] + 8);
              if ( v1569 )
              {
                if ( *(_DWORD *)(v1569 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1418) )
                  *((_BYTE *)v1418 + *(int *)(v1569 + 0x7FC) + 0x20F030) = 1;
              }
            }
            sub_267820(v1418);
            v1570 = v1418[0x83B98];
            v1418[0x83B98] = v1570 + 1;
            v1418[(v1570 & 0x1F) + 0x83B78] = v264 & 0x7FFF;
            goto LABEL_2193;
          }
          do
          {
LABEL_2201:
            *(_DWORD *)(v1561 + 4 * v1565) = 0xFFFFFFFF;
            *(_DWORD *)(v1563 + 4 * v1565++) = 0;
          }
          while ( v1565 < (int)v1562 );
          goto LABEL_1915;
        }
      }
      else
      {
        v1602 = 0LL;
        if ( (((unsigned __int8)((((int)v1562 & 0x7FFFFFFFFFFFFFF8uLL) - 8) >> 3) + 1) & 3) == 0 )
          goto LABEL_2200;
      }
      v1721 = 4 * v1602 + 0x10;
      v1722 = -v1601;
      do
      {
        *(_OWORD *)(v1561 + v1721 - 0x10) = (__int64)0xFFFFFFFFFFFFFFFFLL;
        *(_OWORD *)(v1561 + v1721) = (__int64)0xFFFFFFFFFFFFFFFFLL;
        *(_OWORD *)(v1563 + v1721 - 0x10) = 0LL;
        *(_OWORD *)(v1563 + v1721) = 0LL;
        v1721 += 0x20LL;
        ++v1722;
      }
      while ( v1722 );
      goto LABEL_2200;
    case 0x1Au:
      *(_DWORD *)(a1 + 0x111218) = 0;
      *(_DWORD *)(a1 + 0x10D758) = 0;
      sub_2814A0(a1, v1846);
      sub_281BF0(a1, 1LL, v1846);
      sub_282BE0(a1, v1846);
      v655 = *(_DWORD *)(a1 + 0x111218);
      if ( v655 > 0 )
      {
        for ( m = 0LL; m < v655; ++m )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 0x10LL * *(int *)(*(_QWORD *)(a1 + 0x111230) + 4 * m) + 0xD740) + 0x15CLL) != *(_DWORD *)(a1 + 0x20DC) )
          {
            sub_285A90(a1);
            v655 = *(_DWORD *)(a1 + 0x111218);
          }
        }
      }
      goto LABEL_17;
    case 0x1Bu:
      v62 = 4LL;
      goto LABEL_789;
    case 0x1Cu:
      *(_DWORD *)(a1 + 0xCE8D) = 0;
      *(_OWORD *)(a1 + 0xCE94) = 0LL;
      *(_OWORD *)(a1 + 0xCEA4) = 0LL;
      *(_QWORD *)(a1 + 0xCEB4) = 0LL;
      v557 = *(_QWORD *)(a1 + 0xCED0);
      *((_QWORD *)v1840 + 0x19DA) = 0LL;
      if ( v557 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v557 + 8LL))(v557);
      v558 = *((_QWORD *)v1840 + 0x19DB);
      *((_QWORD *)v1840 + 0x19DB) = 0LL;
      if ( v558 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v558 + 8LL))(v558);
      v559 = *((_QWORD *)v1840 + 0x19DC);
      *((_QWORD *)v1840 + 0x19DC) = 0LL;
      if ( v559 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v559 + 8LL))(v559);
      *((_BYTE *)v1840 + 0xCE8C) = 0;
      *(_DWORD *)((char *)&loc_20F910 + (_QWORD)v1840) = 0;
      *((_BYTE *)v1840 + 0x20F914) = 0;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x1Du:
      v441 = (char *)ptr[0];
      v442 = *((unsigned __int8 *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( (v442 & 0x80u) != 0 )
      {
        ptr[0] = (char *)ptr[0] + 2;
        v442 = __ROL2__(*(_WORD *)&v441[*((_QWORD *)&v1847 + 1)] ^ 0x80, 8);
        v443 = v441 + 2;
      }
      else
      {
        v443 = (char *)++ptr[0];
      }
      ptr[0] = v443 + 1;
      v1027 = v443[*((_QWORD *)&v1847 + 1)];
      *(_OWORD *)v1856 = 0LL;
      v1857 = 0LL;
      v1028 = __strlen_chk(&byte_80A521, 1LL);
      v1029 = v1028 + 1;
      if ( v1028 + 1 < 2 )
      {
        v1038 = ::a2;
        v1039 = &::a2[1];
LABEL_1093:
        v1856[0] = v1038;
        v1856[1] = v1038;
        v1857 = v1039;
        LODWORD(v2) = 0;
        memset(v1038, 0, v1028);
        v1856[1] = &v1038[v1028];
        v1038[v1028] = 0;
        if ( v1027 != 1 )
          goto LABEL_1718;
        v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
        *(__m128i *)dest = v1850;
        v1040 = &::a2[1];
        *(_QWORD *)&dest[0x10] = &::a2[1];
        v1041 = (char *)ptr[0];
        v1042 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
        v1043 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
        if ( v1043 )
        {
          v1044 = v1043;
          sub_134D30(v1042, (unsigned int)v1043, dest);
          ptr[0] = (char *)ptr[0] + v1044 + 1;
          v1045 = *(__m128i *)dest;
          v1040 = *(char **)&dest[0x10];
        }
        else
        {
          ptr[0] = v1041 + 1;
          v1045 = v1850;
        }
        v1203 = v1856[0];
        v1204 = v1856[1];
        *(void **)dest = v1856[0];
        *(__m128i *)v1856 = v1045;
        *(_QWORD *)&dest[8] = v1204;
        v1205 = v1857;
        v1857 = v1040;
        *(_QWORD *)&dest[0x10] = v1205;
        if ( *(_QWORD *)dest && v1205 - (_BYTE *)v1203 >= 2 )
        {
          if ( p_memory_pool )
          {
            v1206 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1206;
            v1207 = (__int64 *)(v1206 - 8);
            if ( v15 )
              v1207 = p_memory_pool + 0x36;
            v1208 = *v1207;
            v1209 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1209;
            v1210 = (unsigned int *)(v1209 - 4);
            if ( v15 )
              v1210 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1208 + 0x28LL))(v1208, v1203, *v1210);
          }
          else
          {
            free(v1203);
          }
        }
        v1430 = *((_QWORD *)v1840 + 0x19B6) + 0xC0LL;
        sub_36F0A0((__int64)dest, (__int64)v1856, v1840[0x34C7]);
        LODWORD(v2) = sub_1054F0(v1430, dest);
        if ( *(_QWORD *)&dest[0x20] && (__int64)(*(_QWORD *)&dest[0x30] - *(_QWORD *)&dest[0x20]) >= 2 )
        {
          if ( p_memory_pool )
          {
            v1431 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1431;
            v1432 = (__int64 *)(v1431 - 8);
            if ( v15 )
              v1432 = p_memory_pool + 0x36;
            v1433 = *v1432;
            v1434 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1434;
            v1435 = (unsigned int *)(v1434 - 4);
            if ( v15 )
              v1435 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1433 + 0x28LL))(
              v1433,
              *(_QWORD *)&dest[0x20],
              *v1435);
            v1436 = *(void **)dest;
            if ( !*(_QWORD *)dest )
            {
LABEL_1718:
              *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
              *(_QWORD *)&dest[0x10] = &::a2[1];
              v1442 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
              v1443 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
              if ( v1443 )
              {
                v1444 = v1443;
                sub_134D30(v1442, (unsigned int)v1443, dest);
                ptr[0] = (char *)ptr[0] + v1444 + 1;
                v1445 = v1840;
                if ( (_BYTE)v2 )
                  goto LABEL_1725;
              }
              else
              {
                ++ptr[0];
                v1445 = v1840;
                if ( *(_QWORD *)dest != *(_QWORD *)&dest[8] )
                {
                  **(_BYTE **)dest = 0;
                  *(_QWORD *)&dest[8] = *(_QWORD *)dest;
                }
                if ( (_BYTE)v2 )
                {
LABEL_1725:
                  LOBYTE(v2) = 1;
                  if ( *(_QWORD *)dest && (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) >= 2 )
                  {
                    if ( p_memory_pool )
                    {
                      v1446 = p_memory_pool[0x23];
                      v15 = p_memory_pool[0x22] == v1446;
                      v1447 = (__int64 *)(v1446 - 8);
                      if ( v15 )
                        v1447 = p_memory_pool + 0x36;
                      v1448 = *v1447;
                      v1449 = p_memory_pool[0x38];
                      v15 = p_memory_pool[0x37] == v1449;
                      v1450 = (unsigned int *)(v1449 - 4);
                      if ( v15 )
                        v1450 = (unsigned int *)(p_memory_pool + 0x43);
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1448 + 0x28LL))(
                        v1448,
                        *(_QWORD *)dest,
                        *v1450);
                      v410 = (char *)v1856[0];
                      if ( !v1856[0] )
                        goto LABEL_17;
                      goto LABEL_1736;
                    }
                    free(*(void **)dest);
                  }
                  v410 = (char *)v1856[0];
                  if ( !v1856[0] )
                    goto LABEL_17;
LABEL_1736:
                  if ( v1857 - v410 < 2 )
                    goto LABEL_17;
                  goto LABEL_1737;
                }
              }
              sub_229930(v1445, v442, v1856, dest);
              goto LABEL_1725;
            }
LABEL_1710:
            if ( (__int64)(*(_QWORD *)&dest[0x10] - (_QWORD)v1436) >= 2 )
            {
              if ( p_memory_pool )
              {
                v1437 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1437;
                v1438 = (__int64 *)(v1437 - 8);
                if ( v15 )
                  v1438 = p_memory_pool + 0x36;
                v1439 = *v1438;
                v1440 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1440;
                v1441 = (unsigned int *)(v1440 - 4);
                if ( v15 )
                  v1441 = (unsigned int *)(p_memory_pool + 0x43);
                (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1439 + 0x28LL))(v1439, v1436, *v1441);
              }
              else
              {
                free(v1436);
              }
            }
            goto LABEL_1718;
          }
          free(*(void **)&dest[0x20]);
        }
        v1436 = *(void **)dest;
        if ( !*(_QWORD *)dest )
          goto LABEL_1718;
        goto LABEL_1710;
      }
      if ( p_memory_pool )
      {
        v1030 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1030;
        v1031 = (__int64 *)(v1030 - 8);
        if ( v15 )
          v1031 = p_memory_pool + 0x36;
        v1032 = *v1031;
        v1033 = p_memory_pool[1];
        v15 = *p_memory_pool == v1033;
        v1034 = (unsigned int *)(v1033 - 4);
        if ( v15 )
          v1034 = (unsigned int *)(p_memory_pool + 0xC);
        v1035 = *v1034;
        v1036 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1036;
        v1037 = (unsigned int *)(v1036 - 4);
        if ( v15 )
          v1037 = (unsigned int *)(p_memory_pool + 0x43);
        v1038 = (char *)(*(__int64 (__fastcall **)(__int64, size_t, __int64, __int64, _QWORD))(*(_QWORD *)v1032 + 0x18LL))(
                          v1032,
                          v1029,
                          v1035,
                          0x10LL,
                          *v1037);
        if ( v1038 )
          goto LABEL_1091;
      }
      else
      {
        v1038 = (char *)memalign(0x10uLL, v1029);
        if ( v1038 )
        {
LABEL_1091:
          v1039 = &v1038[v1029];
          goto LABEL_1093;
        }
      }
      sub_68A080(
        (__int64)"pMem",
        (__int64)aVarBambooHomeB,
        0x69u,
        0,
        (__int64)"Failed to allocate %llu bytes with alignment %llu",
        v1029,
        0x10LL);
      goto LABEL_2391;
    case 0x1Eu:
      v62 = 6LL;
      goto LABEL_789;
    case 0x1Fu:
      v310 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v311 = __ROL2__(*(_WORD *)&v310[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v310 + 4;
      v312 = ((unsigned __int8)v310[*((_QWORD *)&v1847 + 1) + 2] << 8) | (unsigned __int8)v310[*((_QWORD *)&v1847 + 1)
                                                                                             + 3] ^ 0x80;
      v313 = 0xFFFFFFFF;
      if ( v312 != (__int16)0xFFFF )
        v313 = ((unsigned __int8)v310[*((_QWORD *)&v1847 + 1) + 2] << 8) | (unsigned __int8)v310[*((_QWORD *)&v1847 + 1)
                                                                                               + 3] ^ 0x80;
      ptr[0] = v310 + 5;
      LODWORD(v2) = (unsigned __int8)-v310[*((_QWORD *)&v1847 + 1) + 4];
      v314 = *(_QWORD *)(a1 + 0x10LL * v311 + 0xD740);
      v315 = *(_DWORD *)(v314 + 0x12C);
      if ( v313 != v315 || v313 == 0xFFFFFFFF )
      {
        if ( v312 == (__int16)0xFFFF || v315 == 0xFFFFFFFF )
          goto LABEL_848;
        sub_358F90(dest, v313);
        v839 = *(_DWORD *)(*(_QWORD *)&dest[8] + 0xDCLL);
        sub_358F90(v1856, *(unsigned int *)(v314 + 0x12C));
        v840 = (volatile signed __int32 *)v1856[0];
        v841 = *((_DWORD *)v1856[1] + 0x37);
        if ( v1856[0] )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)v1856[0] + 2, 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v840 + 0x10LL))(v840);
            if ( !_InterlockedSub(v840 + 3, 1u) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v840 + 0x18LL))(v840);
          }
        }
        v842 = *(volatile signed __int32 **)dest;
        if ( *(_QWORD *)dest )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v842 + 0x10LL))(v842);
            if ( !_InterlockedSub(v842 + 3, 1u) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v842 + 0x18LL))(v842);
          }
        }
        if ( v839 >= v841 )
        {
LABEL_848:
          *(_DWORD *)(v314 + 0x12C) = v313;
          *(_QWORD *)(v314 + 0x130) = 0LL;
          *(_DWORD *)(v314 + 0x138) = v2;
          *(_DWORD *)(v314 + 0x13C) = 0;
          *(_DWORD *)(v314 + 0x1D4) = *(_DWORD *)(v314 + 0x170);
        }
      }
      else
      {
        sub_358F90(dest, v313);
        v316 = *(volatile signed __int32 **)dest;
        v317 = *(_DWORD *)(*(_QWORD *)&dest[8] + 0xF8LL);
        if ( *(_QWORD *)dest )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v316 + 0x10LL))(v316);
            if ( !_InterlockedSub(v316 + 3, 1u) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v316 + 0x18LL))(v316);
          }
        }
        if ( v317 != 2 )
        {
          if ( v317 != 1 )
            goto LABEL_2193;
          *(_QWORD *)(v314 + 0x130) = 0LL;
          *(_DWORD *)(v314 + 0x138) = v2;
        }
        *(_DWORD *)(v314 + 0x13C) = 0;
      }
      goto LABEL_2193;
    case 0x20u:
      v273 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v274 = (v273[*((_QWORD *)&v1847 + 1) + 3] << 0x18) | (v273[*((_QWORD *)&v1847 + 1) + 2] << 0x10);
      v275 = v274 | (v273[*((_QWORD *)&v1847 + 1) + 1] << 8) | v273[*((_QWORD *)&v1847 + 1)];
      v276 = qword_1026F30;
      if ( v275 < 0 )
        goto LABEL_256;
      v277 = (unsigned int)(v274 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v277 )
        goto LABEL_256;
      v278 = (unsigned __int16)v275;
      v279 = qword_10207A0[2];
      LODWORD(v2) = 3 * v277;
      v280 = *(_QWORD *)(v279 + 0x18LL * (int)v277 + 8);
      if ( !v280 )
        goto LABEL_253;
      if ( v280 <= v278 )
        goto LABEL_256;
      v281 = *(_QWORD *)(v279 + 0x18LL * (int)v277 + 0x10);
      if ( *(_QWORD *)(v281 + 0x10 * v278 + 8) )
        goto LABEL_255;
LABEL_253:
      if ( (unsigned __int8)sub_3051D0(v277) )
      {
        v281 = *(_QWORD *)(v279 + 0x18LL * (int)v277 + 0x10);
        v278 = (unsigned int)v278;
LABEL_255:
        v276 = (_QWORD *)(v281 + 0x10 * v278);
      }
LABEL_256:
      v282 = v276[1];
      v283 = *(_QWORD *)(v282 + 0x798);
      if ( v283 )
        memset(*(void **)(v282 + 0x7A0), 0, 4 * v283);
      LOBYTE(v2) = 1;
      if ( *(_DWORD *)(v282 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        goto LABEL_17;
      *((_BYTE *)v1840 + *(int *)(v282 + 0x7FC) + 0x20F030) = 1;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x21u:
      v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)v1856 = v1850;
      v1857 = &::a2[1];
      v252 = *((_QWORD *)&v1847 + 1);
      v253 = (char *)ptr[0];
      v254 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v255 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v255 )
      {
        v2 = v255;
        sub_134D30(v254, (unsigned int)v255, v1856);
        v252 = *((_QWORD *)&v1847 + 1);
        v256 = (char *)ptr[0] + v2 + 1;
      }
      else
      {
        v256 = v253 + 1;
      }
      ptr[0] = v256 + 8;
      v1852.m128i_i64[0] = _byteswap_uint64(*(_QWORD *)&v256[v252]);
      ptr[0] = v256 + 0xA;
      v946 = (unsigned __int16)__ROL2__(*(_WORD *)&v256[v252 + 8], 8);
      ptr[0] = v256 + 0xD;
      v947 = (unsigned __int64)(unsigned __int8)v256[v252 + 0xA] << 0x10;
      v948 = (unsigned __int64)(unsigned __int8)v256[v252 + 0xB] << 8;
      v949 = (unsigned __int8)v256[v252 + 0xC];
      ptr[0] = v256 + 0xE;
      v950 = (unsigned __int8)v256[v252 + 0xD];
      v951 = v949 | v948 | v947 | (v946 << 0x20);
      v952 = 0LL;
      v953 = a1;
      v954 = _mm_load_si128(&v1850);
      while ( 1 )
      {
        LOBYTE(v2) = 1;
        if ( *(_QWORD *)(a1 + 8 * v952 + 0xCFE8) == v951
          || *(_QWORD *)(a1 + 8 * v952 + 0xCFF0) == v951
          || *(_QWORD *)(a1 + 8 * v952 + 0xCFF8) == v951
          || *(_QWORD *)(a1 + 8 * v952 + 0xD000) == v951
          || *(_QWORD *)(a1 + 8 * v952 + 0xD008) == v951 )
        {
          break;
        }
        v952 += 5LL;
        if ( v952 == 0x64 )
        {
          LODWORD(v2) = 0;
          break;
        }
      }
      *(_QWORD *)&v1851 = 3 * v950;
      if ( *((_BYTE *)&unk_1706B70 + 0xC * v950 + 6) )
      {
        v955 = *(_QWORD *)(a1 + 0xCDB0) + 0xC0LL;
        sub_36F0A0((__int64)dest, (__int64)v1856, *(_DWORD *)(a1 + 0xD31C));
        v956 = sub_1054F0(v955, dest);
        if ( *(_QWORD *)&dest[0x20] && (__int64)(*(_QWORD *)&dest[0x30] - *(_QWORD *)&dest[0x20]) >= 2 )
        {
          if ( p_memory_pool )
          {
            v957 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v957;
            v958 = (__int64 *)(v957 - 8);
            if ( v15 )
              v958 = p_memory_pool + 0x36;
            v959 = *v958;
            v960 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v960;
            v961 = (unsigned int *)(v960 - 4);
            if ( v15 )
              v961 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, double))(*(_QWORD *)v959 + 0x28LL))(
              v959,
              *(_QWORD *)&dest[0x20],
              *v961,
              *(double *)v954.m128i_i64);
          }
          else
          {
            free(*(void **)&dest[0x20]);
          }
        }
        v953 = (__int64)v1840;
        v954 = _mm_load_si128(&v1850);
        if ( *(_QWORD *)dest && (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) >= 2 )
        {
          if ( p_memory_pool )
          {
            v1379 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1379;
            v1380 = (__int64 *)(v1379 - 8);
            if ( v15 )
              v1380 = p_memory_pool + 0x36;
            v1381 = *v1380;
            v1382 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1382;
            v1383 = (unsigned int *)(v1382 - 4);
            if ( v15 )
              v1383 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, double))(*(_QWORD *)v1381 + 0x28LL))(
              v1381,
              *(_QWORD *)dest,
              *v1383,
              *(double *)v954.m128i_i64);
          }
          else
          {
            free(*(void **)dest);
          }
          v954 = _mm_load_si128(&v1850);
        }
        v1384 = (unsigned __int8)v2;
        LODWORD(v2) = 1;
        if ( !v956 )
          LODWORD(v2) = v1384;
      }
      if ( (_BYTE)v2 || *(_DWORD *)(v953 + 0xCC68) )
        goto LABEL_2121;
      v1385 = *(int *)(v953 + 0xD308);
      *(_QWORD *)(v953 + 8 * v1385 + 0xCFE8) = v951;
      *(_DWORD *)(v953 + 0xD308) = ((int)v1385 + 1) % 0x64;
      *(__m128i *)dest = v954;
      *(_QWORD *)&dest[0x10] = &::a2[1];
      sub_48DAE0(*(_QWORD *)(v953 + 0xD320), dest, v1846);
      sub_3A32E0(src, *(_QWORD *)dest, *(_QWORD *)&dest[8] - *(_QWORD *)dest);
      sub_124390(src);
      if ( *((_DWORD *)&unk_1706B70 + *(_QWORD *)&v1851) == 0xFFFFFFFF )
      {
        sub_421C00(v1861, v1852.m128i_i64[0]);
        sub_102A60(9LL, v1856, src, v1861);
        v1523 = v1861[0];
        if ( v1861[0] && v1862 - (char *)v1861[0] >= 2 )
          goto LABEL_2100;
        goto LABEL_2108;
      }
      sub_124750(v1865);
      sub_1355D0((__int64)v1865, (char *)v1856[0], (char *)v1856[1]);
      *(_OWORD *)v1861 = *(_OWORD *)v1865;
      v1862 = v1866;
      *(__m128i *)v1865 = _mm_load_si128(&v1850);
      v1866 = &::a2[1];
      sub_421C00(v1877, v1852.m128i_i64[0]);
      sub_102A60(9LL, v1861, src, v1877);
      if ( !v1877[0] || v1877[2] - v1877[0] < 2 )
        goto LABEL_2089;
      if ( p_memory_pool )
      {
        v1386 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1386;
        v1387 = (__int64 *)(v1386 - 8);
        if ( v15 )
          v1387 = p_memory_pool + 0x36;
        v1388 = *v1387;
        v1389 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1389;
        v1390 = (unsigned int *)(v1389 - 4);
        if ( v15 )
          v1390 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1388 + 0x28LL))(v1388, v1877[0], *v1390);
        v1201 = v1861[0];
        if ( !v1861[0] )
          goto LABEL_2098;
      }
      else
      {
        free(v1877[0]);
LABEL_2089:
        v1201 = v1861[0];
        if ( !v1861[0] )
          goto LABEL_2098;
      }
      if ( v1862 - (_BYTE *)v1201 < 2 )
        goto LABEL_2098;
      v1202 = p_memory_pool;
      if ( !p_memory_pool )
        goto LABEL_1378;
LABEL_2092:
      v1654 = v1202[0x23];
      v15 = v1202[0x22] == v1654;
      v1655 = (__int64 *)(v1654 - 8);
      if ( v15 )
        v1655 = v1202 + 0x36;
      v1656 = *v1655;
      v1657 = v1202[0x38];
      v15 = v1202[0x37] == v1657;
      v1658 = (unsigned int *)(v1657 - 4);
      v1659 = (unsigned int *)(v1202 + 0x43);
      if ( v15 )
        v1658 = v1659;
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1656 + 0x28LL))(v1656, v1201, *v1658);
      v1523 = v1865[0];
      if ( v1865[0] )
        goto LABEL_2099;
      goto LABEL_2108;
    case 0x22u:
      v257 = *((_QWORD *)&v1847 + 1);
      v258 = (unsigned __int8 *)ptr[0]++;
      v259 = v258[*((_QWORD *)&v1847 + 1)];
      *(_DWORD *)(a1 + 0xD5D8) = v259;
      if ( v259 == 1 )
      {
        ptr[0] = v258 + 3;
        *(_DWORD *)(a1 + 0xD5DC) = (unsigned __int16)__ROL2__(*(_WORD *)&v258[v257 + 1], 8);
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( v6 )
          goto LABEL_18;
        goto LABEL_28;
      }
      if ( (unsigned int)(v259 - 2) <= 4 )
      {
        *(_QWORD *)(a1 + 0xD5F0) = qword_858710[v259];
        *(_DWORD *)(a1 + 0xD5D8) = 2;
        ptr[0] = v258 + 3;
        *(_DWORD *)(a1 + 0xD5E4) = (unsigned __int16)__ROL2__(*(_WORD *)&v258[v257 + 1], 8);
        ptr[0] = v258 + 5;
        *(_DWORD *)(a1 + 0xD5E8) = (unsigned __int16)__ROL2__(*(_WORD *)&v258[v257 + 3], 8);
        ptr[0] = v258 + 6;
        *(_DWORD *)(a1 + 0xD5EC) = v258[v257 + 5];
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( v6 )
          goto LABEL_18;
        goto LABEL_28;
      }
      if ( (_BYTE)v259 != 0xA )
        goto LABEL_17;
      ptr[0] = v258 + 3;
      *(_DWORD *)(a1 + 0xD5E0) = (unsigned __int16)__ROL2__(*(_WORD *)&v258[v257 + 1], 8);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x23u:
      v182 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v183 = v182[*((_QWORD *)&v1847 + 1)] << 8;
      v184 = v182[*((_QWORD *)&v1847 + 1) + 1] ^ 0x80;
      ptr[0] = v182 + 6;
      v185 = (v182[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | (v182[*((_QWORD *)&v1847 + 1) + 5] << 0x10);
      v186 = v185 | (v182[*((_QWORD *)&v1847 + 1) + 2] << 8) | v182[*((_QWORD *)&v1847 + 1) + 3];
      v187 = qword_1026F30;
      if ( v186 < 0 )
        goto LABEL_188;
      v188 = (unsigned int)(v185 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v188 )
        goto LABEL_188;
      v2 = (unsigned __int16)v186;
      v189 = qword_10207A0[2];
      v190 = *(_QWORD *)(v189 + 0x18LL * (int)v188 + 8);
      if ( !v190 )
        goto LABEL_185;
      if ( v190 <= v2 )
        goto LABEL_188;
      v191 = *(_QWORD *)(v189 + 0x18LL * (int)v188 + 0x10);
      if ( *(_QWORD *)(v191 + 0x10 * v2 + 8) )
        goto LABEL_187;
LABEL_185:
      if ( (unsigned __int8)sub_3051D0(v188) )
      {
        v191 = *(_QWORD *)(v189 + 0x18LL * (int)v188 + 0x10);
        v2 = (unsigned int)v2;
LABEL_187:
        v2 = v191 + 0x10 * v2;
        v187 = (_QWORD *)v2;
      }
LABEL_188:
      v192 = v184 | v183;
      v101 = v187[1];
      if ( *(_DWORD *)(v101 + 0xE4) != 2 )
      {
        *(_DWORD *)(v101 + 0xE4) = 2;
        goto LABEL_850;
      }
      LOBYTE(v2) = 1;
      v193 = v1840;
      if ( *(_DWORD *)(v101 + 0xE8) != v192 )
      {
        *(_DWORD *)(v101 + 0xE4) = 2;
        *(_DWORD *)(v101 + 0xE8) = v192;
        if ( *(_DWORD *)(v101 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          goto LABEL_1667;
      }
      goto LABEL_17;
    case 0x24u:
      if ( !*(_BYTE *)(a1 + 0xCE8D) )
        goto LABEL_17;
      *(_BYTE *)(a1 + 0xCE8C) = 1;
      *(_WORD *)(a1 + 0xCE8E) = 0;
      v666 = *((_QWORD *)&v1847 + 1);
      v667 = (unsigned __int8 *)ptr[0]++;
      *(_DWORD *)(a1 + 0xCEA0) = v667[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v667 + 2;
      *(_DWORD *)(a1 + 0xCEA4) = v667[v666 + 1];
      ptr[0] = v667 + 3;
      *(_DWORD *)(a1 + 0xCEB4) = v667[v666 + 2];
      ptr[0] = v667 + 4;
      *(_DWORD *)(a1 + 0xCEB8) = v667[v666 + 3];
      *(_DWORD *)((char *)&loc_20F910 + a1) = 0;
      *(_BYTE *)(a1 + 0x20F914) = 0;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x25u:
      v2 = (unsigned __int64)::a2;
      *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v630 = *((_QWORD *)&v1847 + 1);
      v631 = (char *)ptr[0];
      v632 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v633 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v633 )
      {
        v634 = v633;
        sub_134D30(v632, (unsigned int)v633, dest);
        v630 = *((_QWORD *)&v1847 + 1);
        v635 = (char *)ptr[0] + v634 + 1;
        ptr[0] = v635;
        v247 = *(char **)dest;
        v2 = *(_QWORD *)&dest[8];
        v1850.m128i_i64[0] = *(_QWORD *)&dest[0x10];
      }
      else
      {
        v1850.m128i_i64[0] = (__int64)&::a2[1];
        v635 = v631 + 1;
        ptr[0] = v635;
        v247 = ::a2;
      }
      ptr[0] = v635 + 4;
      v1057 = _byteswap_ulong(*(_DWORD *)&v635[v630]);
      v1058 = qword_1026F30;
      if ( v1057 < 0 )
        goto LABEL_1123;
      v1059 = (unsigned int)(v1057 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v1059 )
        goto LABEL_1123;
      v1060 = (unsigned __int16)v1057;
      v1061 = qword_10207A0[2];
      v1062 = *(_QWORD *)(v1061 + 0x18LL * (int)v1059 + 8);
      if ( !v1062 )
        goto LABEL_1120;
      if ( v1062 <= v1060 )
        goto LABEL_1123;
      v1063 = *(_QWORD *)(v1061 + 0x18LL * (int)v1059 + 0x10);
      if ( *(_QWORD *)(v1063 + 0x10LL * v1060 + 8) )
        goto LABEL_1122;
LABEL_1120:
      if ( (unsigned __int8)sub_3051D0(v1059) )
      {
        v1063 = *(_QWORD *)(v1061 + 0x18LL * (int)v1059 + 0x10);
LABEL_1122:
        v1058 = (_QWORD *)(v1063 + 0x10LL * v1060);
      }
LABEL_1123:
      v1064 = v1058[1];
      v1065 = *(const void **)(v1064 + 0x140);
      if ( v2 - (_QWORD)v247 != *(_QWORD *)(v1064 + 0x148) - (_QWORD)v1065 || memcmp(v247, v1065, v2 - (_QWORD)v247) )
      {
        tt_memmove_sub_136200(v1064 + 0x140, v247, v2);
        v1066 = v1058[1];
        if ( v1066 )
        {
          if ( *(_DWORD *)(v1066 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
            *((_BYTE *)v1840 + *(int *)(v1066 + 0x7FC) + 0x20F030) = 1;
        }
      }
      if ( !v247 )
        goto LABEL_2193;
      LOBYTE(v2) = 1;
      if ( v1850.m128i_i64[0] - (__int64)v247 < 2 )
        goto LABEL_17;
      v937 = p_memory_pool;
      if ( !p_memory_pool )
        goto LABEL_1131;
      goto LABEL_971;
    case 0x26u:
    case 0x35u:
      goto LABEL_17;
    case 0x27u:
      *(_DWORD *)(a1 + 0x20EF78) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      *(_BYTE *)(a1 + 0x5EA1AB) = 1;
      v391 = (char *)ptr[0]++;
      v2 = v391[*((_QWORD *)&v1847 + 1)];
      if ( (_QWORD)v1847 == 1LL )
      {
        if ( (v2 & 0x80u) != 0LL )
        {
          v226 = *(volatile signed __int32 **)(a1 + 0xCCD8);
          *(_OWORD *)(a1 + 0xCCD8) = 0LL;
          if ( !v226 )
            goto LABEL_2193;
        }
        else
        {
          v2 *= 0x10LL;
          v226 = *(volatile signed __int32 **)(a1 + v2 + 0xCCE8);
          *(_OWORD *)(a1 + v2 + 0xCCE8) = 0LL;
          if ( !v226 )
            goto LABEL_2193;
        }
        LOBYTE(v2) = 1;
        if ( !_InterlockedSub(v226 + 2, 1u) )
        {
LABEL_1694:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v226 + 0x10LL))(v226);
          if ( _InterlockedSub(v226 + 3, 1u) )
            goto LABEL_17;
          v593 = *(_QWORD *)v226;
          v594 = v226;
          goto LABEL_1696;
        }
LABEL_17:
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( !v6 )
          goto LABEL_28;
        goto LABEL_18;
      }
      if ( p_memory_pool )
      {
        v843 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v843;
        v844 = (__int64 *)(v843 - 8);
        if ( v15 )
          v844 = p_memory_pool + 0x36;
        v845 = *v844;
        v846 = p_memory_pool[1];
        v15 = *p_memory_pool == v846;
        v847 = (unsigned int *)(v846 - 4);
        if ( v15 )
          v847 = (unsigned int *)(p_memory_pool + 0xC);
        v848 = *v847;
        v849 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v849;
        v850 = (unsigned int *)(v849 - 4);
        if ( v15 )
          v850 = (unsigned int *)(p_memory_pool + 0x43);
        v226 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v845 + 0x18LL))(
                                            v845,
                                            0x1C0LL,
                                            v848,
                                            8LL,
                                            *v850);
        if ( v226 )
        {
LABEL_861:
          v851 = (char *)(v226 + 8);
          sub_374710(v226 + 8, v1846);
          *((_QWORD *)v226 + 1) = 0x100000001LL;
          *(_QWORD *)v226 = off_978D30;
          *((_QWORD *)v226 + 2) = 1LL;
          *((_QWORD *)v226 + 3) = v226 + 8;
          if ( (v2 & 0x80u) != 0LL )
          {
            v1192 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x199B);
            *((_QWORD *)v1840 + 0x199B) = v226;
            *((_QWORD *)v1840 + 0x199C) = v851;
            if ( v1192 )
            {
              LOBYTE(v2) = 1;
              if ( !_InterlockedSub(v1192 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1192 + 0x10LL))(v1192);
                if ( !_InterlockedSub(v1192 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1192 + 0x18LL))(v1192);
              }
              v226 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x199B);
              if ( !v226 )
                goto LABEL_17;
              goto LABEL_1359;
            }
          }
          else
          {
            v2 *= 0x10LL;
            v852 = *(volatile signed __int32 **)((char *)v1840 + v2 + 0xCCE8);
            *(_QWORD *)((char *)v1840 + v2 + 0xCCE8) = v226;
            *(_QWORD *)((char *)v1840 + v2 + 0xCCF0) = v851;
            if ( v852 )
            {
              if ( !_InterlockedSub(v852 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v852 + 0x10LL))(v852);
                if ( !_InterlockedSub(v852 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v852 + 0x18LL))(v852);
              }
              v226 = *(volatile signed __int32 **)((char *)v1840 + v2 + 0xCCE8);
            }
          }
          LOBYTE(v2) = 1;
          if ( !v226 )
            goto LABEL_17;
LABEL_1359:
          _InterlockedAdd(v226 + 2, 1u);
          if ( _InterlockedSub(v226 + 2, 1u) )
            goto LABEL_17;
          goto LABEL_1694;
        }
      }
      else
      {
        v226 = (volatile signed __int32 *)memalign(8uLL, 0x1C0uLL);
        if ( v226 )
          goto LABEL_861;
      }
      sub_68A080(
        (__int64)"pMem",
        (__int64)aVarBambooHomeB,
        0x69u,
        0,
        (__int64)"Failed to allocate %llu bytes with alignment %llu",
        0x1C0LL,
        8LL);
      goto LABEL_2394;
    case 0x28u:
      v463 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 5;
      v464 = *(_WORD *)&v463[*((_QWORD *)&v1847 + 1) + 3];
      v465 = (unsigned __int16)__ROL2__(v464, 8);
      v466 = 0xFFFFFFFFLL;
      if ( v464 != (__int16)0xFFFF )
        v466 = v465;
      sub_23F690(a1, v466);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x29u:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      v643 = *((_QWORD *)&v1847 + 1);
      v644 = (unsigned __int8 *)ptr[0]++;
      v645 = v644[*((_QWORD *)&v1847 + 1)];
      v1840[0x33AA] = v645;
      ptr[0] = v644 + 2;
      v646 = v644[v643 + 1];
      v1840[0x33AB] = v646;
      ptr[0] = v644 + 4;
      v647 = (unsigned __int16)__ROL2__(*(_WORD *)&v644[v643 + 2], 8);
      v1840[0x33AC] = v647;
      ptr[0] = v644 + 5;
      v1840[0x33AD] = v644[v643 + 4];
      ptr[0] = v644 + 6;
      LODWORD(v643) = v644[v643 + 5];
      v1840[0x33AE] = v643;
      if ( (unsigned int)v643 < 0x64 )
        goto LABEL_17;
      v648 = ((_DWORD)v645 << 7) | 0x40;
      v649 = ((_DWORD)v646 << 7) | 0x40;
      v650 = 0;
      if ( v648 <= 0x33FF && v649 <= 0x33FF )
      {
        v651 = v1840[0x32A8];
        if ( v651 >= 3 )
        {
          v652 = v646;
        }
        else
        {
          v652 = (unsigned int)v646;
          v651 += (*(unsigned __int8 *)(qword_397ED18[2] + (unsigned int)v646 + 0x68 * v645 + 0x2A40) >> 1) & 1;
        }
        v1333 = 0x69LL * v651;
        v1334 = qword_397ED00[2];
        v650 = (((*(_DWORD *)(v1334 + 4 * (0x69 * (v1333 + (unsigned int)v645) + v652))
                + *(_DWORD *)(v1334 + 4 * (0x69 * (v645 + v1333) + v652 + 0x69))) << 6 >> 7)
              + ((*(_DWORD *)(v1334 + 4 * (0x69 * (v1333 + (unsigned int)v645) + v646 + 1))
                + *(_DWORD *)(v1334 + 4 * (0x69 * (v645 + v1333) + v646 + 0x6A))) << 6 >> 7)) >> 1;
      }
      v1335 = v648 - v1840[0x33BA];
      v1336 = v649 - v1840[0x33BC];
      v3.m128d_f64[0] = sqrt((double)(v1335 * v1335 + v1336 * v1336));
      v1337 = (int)(atan2((double)(int)(v650 - v647 - v1840[0x33BB]), _mm_round_sd(v3, v3, 0xB).m128d_f64[0])
                  * 325.9490051269531) & 0x7FF;
      v1840[0x33BE] = (int)(atan2((double)v1335, (double)v1336) * -325.9490051269531) & 0x7FF;
      v1338 = 0x80;
      if ( v1337 > 0x80 )
        v1338 = v1337;
      v1339 = 0x17F;
      if ( v1338 < 0x180 )
        v1339 = v1338;
      v1840[0x33BD] = v1339;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x2Au:
      v121 = *(int *)(a1 + 0xCF60);
      if ( v121 == 0xFFFFFFFFFFFFFFFFLL || !(unsigned __int8)sub_3051D0((unsigned int)v121) )
        goto LABEL_17;
      v122 = qword_10207A0[2] + 0x18 * v121;
      v123 = 0x17LL;
      goto LABEL_1225;
    case 0x2Bu:
      dest[0] = 1;
      *(_DWORD *)&dest[4] = 0;
      *(__m128i *)&dest[8] = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(_QWORD *)&dest[0x18] = &::a2[1];
      *(_DWORD *)&dest[0x28] = 0;
      v300 = a1;
      sub_161490(*(_QWORD *)(a1 + 0xCDB0) + 0xC0LL, v1846, (unsigned int)v1847, dest);
      v301 = (_QWORD *)qword_9BD378[1];
      n = *v301;
      v303 = v301;
      if ( !*v301 )
      {
        v303 = (_QWORD *)qword_9BD378[1];
        do
        {
          n = v303[1];
          ++v303;
        }
        while ( !n );
      }
      v304 = v301[qword_9BD378[2]];
      while ( v304 != n )
      {
        *(_DWORD *)(*(_QWORD *)(n + 0x10) + 0xF0LL) = 0;
        for ( n = *(_QWORD *)(n + 0x18); !n; ++v303 )
          n = v303[1];
      }
      v305 = *(_QWORD *)(a1 + 0xCCD0);
      if ( !v305 )
        goto LABEL_410;
      v306 = *(int *)(v305 + 0xC);
      if ( v306 <= 0 )
        goto LABEL_410;
      v307 = *(_QWORD *)(v305 + 0x20);
      v308 = v306 & 7;
      if ( (unsigned __int64)(v306 - 1) < 7 )
      {
        v309 = 0LL;
        if ( (v306 & 7) == 0 )
          goto LABEL_410;
        goto LABEL_1309;
      }
      v1171 = v306 - v308;
      v309 = 0LL;
      do
      {
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 8) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x10) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x18) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x20) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x28) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x30) + 0xB8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(v307 + 8 * v309 + 0x38) + 0xB8LL) = 0;
        v309 += 8LL;
      }
      while ( v1171 != v309 );
      if ( v308 )
      {
LABEL_1309:
        v1172 = v307 + 8 * v309;
        v1173 = 0LL;
        do
          *(_DWORD *)(*(_QWORD *)(v1172 + 8 * v1173++) + 0xB8LL) = 0;
        while ( v308 != v1173 );
      }
LABEL_410:
      *(_DWORD *)(v300 + 0x20EF70) = *(_DWORD *)((char *)&loc_20ED58 + v300);
      v410 = *(char **)&dest[8];
      if ( !*(_QWORD *)&dest[8] || (__int64)(*(_QWORD *)&dest[0x18] - *(_QWORD *)&dest[8]) < 2 )
        goto LABEL_17;
      goto LABEL_1737;
    case 0x2Cu:
      v560 = (char *)ptr[0]++;
      v561 = v560[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v560 + 3;
      v562 = *(_WORD *)&v560[*((_QWORD *)&v1847 + 1) + 1];
      ptr[0] = v560 + 6;
      v563 = (unsigned __int8)v560[*((_QWORD *)&v1847 + 1) + 3];
      v564 = (unsigned __int64 *)&v1840[4 * v561 + 0x334E];
      if ( v561 < 0 )
        v564 = (unsigned __int64 *)(v1840 + 0x334A);
      v565 = (unsigned __int8)v560[*((_QWORD *)&v1847 + 1) + 4];
      v566 = (unsigned __int8)v560[*((_QWORD *)&v1847 + 1) + 5];
      v2 = *v564;
      v567 = v564[1];
      if ( v2 )
        _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
      if ( !v567 )
        goto LABEL_2188;
      v568 = (v563 << 0x10) | ((unsigned __int64)(unsigned __int16)__ROL2__(v562, 8) << 0x20) | (v565 << 8) | v566;
      for ( ii = 0LL; ii != 0x64; ii += 5LL )
      {
        if ( *(_QWORD *)&v1840[2 * ii + 0x33FA] == v568
          || *(_QWORD *)&v1840[2 * ii + 0x33FC] == v568
          || *(_QWORD *)&v1840[2 * ii + 0x33FE] == v568
          || *(_QWORD *)&v1840[2 * ii + 0x3400] == v568
          || *(_QWORD *)&v1840[2 * ii + 0x3402] == v568 )
        {
          goto LABEL_2188;
        }
      }
      v570 = (int)v1840[0x34C2];
      *(_QWORD *)&v1840[2 * v570 + 0x33FA] = v568;
      v1840[0x34C2] = ((int)v570 + 1) % 0x64;
      v571 = ::a2;
      *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      v572 = &::a2[1];
      *(_QWORD *)&dest[0x10] = &::a2[1];
      sub_48DAE0(*((_QWORD *)v1840 + 0x1A64), dest, v1846);
      *(_OWORD *)v1856 = 0LL;
      v1857 = 0LL;
      v1842 = *(void **)dest;
      v573 = strlen(*(const char **)dest);
      v574 = v573 + 1;
      v1850.m128i_i64[0] = (__int64)&::a2[1];
      if ( v573 + 1 < 2 )
        goto LABEL_2153;
      if ( p_memory_pool )
      {
        v575 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v575;
        v576 = (__int64 *)(v575 - 8);
        if ( v15 )
          v576 = p_memory_pool + 0x36;
        v577 = *v576;
        v578 = p_memory_pool[1];
        v15 = *p_memory_pool == v578;
        v579 = (unsigned int *)(v578 - 4);
        if ( v15 )
          v579 = (unsigned int *)(p_memory_pool + 0xC);
        v580 = *v579;
        v581 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v581;
        v582 = (unsigned int *)(v581 - 4);
        if ( v15 )
          v582 = (unsigned int *)(p_memory_pool + 0x43);
        v583 = v573 + 1;
        v571 = (char *)(*(__int64 (__fastcall **)(__int64, size_t, __int64, __int64, _QWORD))(*(_QWORD *)v577 + 0x18LL))(
                         v577,
                         v574,
                         v580,
                         0x10LL,
                         *v582);
        if ( !v571 )
          goto LABEL_2389;
      }
      else
      {
        v583 = v573 + 1;
        v571 = (char *)memalign(0x10uLL, v574);
        if ( !v571 )
          goto LABEL_2389;
      }
      v572 = &v571[v583];
LABEL_2153:
      v1856[0] = v571;
      v1856[1] = v571;
      v1857 = v572;
      memmove(v571, v1842, v573);
      v1693 = (v561 & 0x80u) != 0LL;
      v1856[1] = &v571[v573];
      v571[v573] = 0;
      *(_OWORD *)src = 0LL;
      v1855 = 0LL;
      v1694 = __strlen_chk(&byte_80A521, 1LL);
      v1695 = v1694 + 1;
      v1696 = ::a2;
      v1697 = (char *)v1850.m128i_i64[0];
      if ( v1694 + 1 < 2 )
        goto LABEL_2163;
      if ( p_memory_pool )
      {
        v1698 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1698;
        v1699 = (__int64 *)(v1698 - 8);
        if ( v15 )
          v1699 = p_memory_pool + 0x36;
        v1700 = *v1699;
        v1701 = p_memory_pool[1];
        v15 = *p_memory_pool == v1701;
        v1702 = (unsigned int *)(v1701 - 4);
        if ( v15 )
          v1702 = (unsigned int *)(p_memory_pool + 0xC);
        v1703 = *v1702;
        v1704 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1704;
        v1705 = (unsigned int *)(v1704 - 4);
        if ( v15 )
          v1705 = (unsigned int *)(p_memory_pool + 0x43);
        v1696 = (char *)(*(__int64 (__fastcall **)(__int64, size_t, __int64, __int64, _QWORD))(*(_QWORD *)v1700 + 0x18LL))(
                          v1700,
                          v1695,
                          v1703,
                          0x10LL,
                          *v1705);
        if ( v1696 )
          goto LABEL_2162;
      }
      else
      {
        v1696 = (char *)memalign(0x10uLL, v1695);
        if ( v1696 )
        {
LABEL_2162:
          v1697 = &v1696[v1695];
LABEL_2163:
          src[0] = v1696;
          src[1] = v1696;
          v1855 = v1697;
          memset(v1696, 0, v1694);
          src[1] = &v1696[v1694];
          v1696[v1694] = 0;
          sub_102A60(3 * (unsigned int)v1693 + 0x2B, src, v1856, v567 + 0x58);
          if ( src[0] && v1855 - (char *)src[0] >= 2 )
          {
            if ( p_memory_pool )
            {
              v1706 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1706;
              v1707 = (__int64 *)(v1706 - 8);
              if ( v15 )
                v1707 = p_memory_pool + 0x36;
              v1708 = *v1707;
              v1709 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1709;
              v1710 = (unsigned int *)(v1709 - 4);
              if ( v15 )
                v1710 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1708 + 0x28LL))(v1708, src[0], *v1710);
              v1711 = v1856[0];
              if ( !v1856[0] )
              {
LABEL_2185:
                v1717 = *(_QWORD *)dest;
                if ( !*(_QWORD *)dest )
                  goto LABEL_2188;
                goto LABEL_2186;
              }
              goto LABEL_2176;
            }
            free(src[0]);
          }
          v1711 = v1856[0];
          if ( !v1856[0] )
            goto LABEL_2185;
LABEL_2176:
          if ( v1857 - v1711 < 2 )
            goto LABEL_2185;
          if ( !p_memory_pool )
          {
            free(v1711);
            goto LABEL_2185;
          }
          v1712 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1712;
          v1713 = (__int64 *)(v1712 - 8);
          if ( v15 )
            v1713 = p_memory_pool + 0x36;
          v1714 = *v1713;
          v1715 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1715;
          v1716 = (unsigned int *)(v1715 - 4);
          if ( v15 )
            v1716 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v1714 + 0x28LL))(v1714, v1711, *v1716);
          v1717 = *(_QWORD *)dest;
          if ( *(_QWORD *)dest )
          {
LABEL_2186:
            if ( (__int64)(*(_QWORD *)&dest[0x10] - v1717) >= 2 )
              sub_687320(v1717);
          }
LABEL_2188:
          if ( !v2 )
            goto LABEL_2193;
LABEL_2189:
          if ( _InterlockedSub((volatile signed __int32 *)(v2 + 8), 1u) )
            goto LABEL_2193;
          goto LABEL_2190;
        }
      }
      sub_68A080(
        (__int64)"pMem",
        (__int64)aVarBambooHomeB,
        0x69u,
        0,
        (__int64)"Failed to allocate %llu bytes with alignment %llu",
        v1695,
        0x10LL);
      goto LABEL_2391;
    case 0x2Du:
      v70 = 1LL;
      goto LABEL_691;
    case 0x2Eu:
      v227 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v228 = (unsigned __int16)__ROL2__(*(_WORD *)&v227[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v227 + 6;
      v229 = ((unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | ((unsigned __int8)v227[*((_QWORD *)&v1847 + 1)
                                                                                                 + 5] << 0x10);
      v230 = v229 | ((unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 2] << 8) | (unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 3];
      ptr[0] = v227 + 8;
      v231 = (unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 6] << 8;
      LODWORD(v2) = (unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 7] ^ 0x80;
      ptr[0] = v227 + 0xA;
      v232 = (unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 8] << 8;
      v233 = (unsigned __int8)v227[*((_QWORD *)&v1847 + 1) + 9] ^ 0x80;
      v234 = qword_1026F30;
      if ( v230 < 0 )
        goto LABEL_1660;
      v235 = (unsigned int)(v229 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v235 )
        goto LABEL_1660;
      v1850.m128i_i32[0] = v228;
      v236 = (unsigned __int16)v230;
      v237 = qword_10207A0[2];
      v238 = *(_QWORD *)(v237 + 0x18LL * (int)v235 + 8);
      if ( !v238 )
        goto LABEL_1490;
      if ( v238 <= v236 )
      {
        v228 = v1850.m128i_i32[0];
      }
      else
      {
        v239 = *(_QWORD *)(v237 + 0x18LL * (int)v235 + 0x10);
        if ( *(_QWORD *)(v239 + 0x10 * v236 + 8) )
        {
          v228 = v1850.m128i_i32[0];
        }
        else
        {
LABEL_1490:
          *(_QWORD *)&v1851 = 3LL * (int)v235;
          v1852.m128i_i64[0] = v237;
          v1280 = sub_3051D0(v235);
          v228 = v1850.m128i_i32[0];
          if ( !v1280 )
            goto LABEL_1660;
          v239 = *(_QWORD *)(v1852.m128i_i64[0] + 8LL * *(_QWORD *)&v1851 + 0x10);
          v236 = (unsigned int)v236;
        }
        v234 = (_QWORD *)(v239 + 0x10 * v236);
      }
LABEL_1660:
      v1416 = v2 | v231;
      v1417 = v233 | v232;
      v101 = v234[1];
      if ( *(_DWORD *)(v101 + 0x104) == v228 )
      {
        LOBYTE(v2) = 1;
        if ( *(_DWORD *)(v101 + 0x108) == v1416 && *(_DWORD *)(v101 + 0x110) == v1417 )
          goto LABEL_17;
        *(_DWORD *)(v101 + 0x104) = v228;
        *(_DWORD *)(v101 + 0x108) = v1416;
        *(_DWORD *)(v101 + 0x110) = v1417;
        v193 = v1840;
        if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          goto LABEL_17;
      }
      else
      {
        *(_DWORD *)(v101 + 0x104) = v228;
        *(_DWORD *)(v101 + 0x108) = v1416;
        *(_DWORD *)(v101 + 0x110) = v1417;
        LOBYTE(v2) = 1;
        if ( !v101 )
          goto LABEL_17;
LABEL_1666:
        v193 = v1840;
        if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          goto LABEL_17;
      }
      goto LABEL_1667;
    case 0x2Fu:
      v318 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v319 = *(_WORD *)&v318[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v318 + 6;
      v320 = ((unsigned __int8)v318[*((_QWORD *)&v1847 + 1) + 5] << 0x18) | ((unsigned __int8)v318[*((_QWORD *)&v1847 + 1)
                                                                                                 + 4] << 0x10);
      v321 = v320 | ((unsigned __int8)v318[*((_QWORD *)&v1847 + 1) + 3] << 8) | (unsigned __int8)v318[*((_QWORD *)&v1847 + 1) + 2];
      v322 = qword_1026F30;
      if ( v321 < 0 )
        goto LABEL_311;
      v323 = (unsigned int)(v320 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v323 )
        goto LABEL_311;
      v324 = (unsigned __int16)v321;
      v2 = qword_10207A0[2];
      v325 = *(_QWORD *)(v2 + 0x18LL * (int)v323 + 8);
      if ( !v325 )
        goto LABEL_308;
      if ( v325 <= v324 )
        goto LABEL_311;
      v326 = *(_QWORD *)(v2 + 0x18LL * (int)v323 + 0x10);
      if ( *(_QWORD *)(v326 + 0x10 * v324 + 8) )
        goto LABEL_310;
LABEL_308:
      if ( (unsigned __int8)sub_3051D0(v323) )
      {
        v326 = *(_QWORD *)(v2 + 0x18LL * (int)v323 + 0x10);
        v324 = (unsigned int)v324;
LABEL_310:
        v322 = (_QWORD *)(v326 + 0x10 * v324);
      }
LABEL_311:
      v101 = v322[1];
      if ( !v101 )
        goto LABEL_2193;
      LOBYTE(v2) = 1;
      if ( !*(_DWORD *)(v101 + 0xC) )
      {
        v327 = (unsigned __int16)__ROL2__(v319, 8);
        v328 = *(_DWORD *)(v101 + 0x6C) - *(_DWORD *)(v101 + 0x4C);
        if ( v328 > v327 )
          v328 = v327;
        v329 = 0;
        if ( v328 >= 0 )
          v329 = v328;
        if ( *(_DWORD *)(v101 + 0x64) != v329 )
        {
          *(_DWORD *)(v101 + 0x64) = v329;
          v193 = v1840;
          if ( *(_DWORD *)(v101 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
            goto LABEL_1667;
        }
      }
      goto LABEL_17;
    case 0x30u:
      v376 = (unsigned __int8 *)ptr[0]++;
      v377 = v376[*((_QWORD *)&v1847 + 1)];
      v378 = 0xFFFFFFFF;
      if ( v377 <= 2 )
        v378 = v377;
      *(_DWORD *)(a1 + 0xCFBC) = v378;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x31u:
      v102 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v103 = v102[*((_QWORD *)&v1847 + 1)] | (__int16)(v102[*((_QWORD *)&v1847 + 1) + 1] << 8);
      ptr[0] = v102 + 4;
      v104 = v102[*((_QWORD *)&v1847 + 1) + 2] ^ 0x80;
      v105 = (__int16)(v102[*((_QWORD *)&v1847 + 1) + 3] << 8);
      ptr[0] = v102 + 8;
      v106 = _byteswap_ulong(*(_DWORD *)&v102[*((_QWORD *)&v1847 + 1) + 4]);
      v107 = (unsigned int)(v106 >> 0x10);
      v2 = (unsigned __int64)qword_1026F30;
      if ( v106 < 0 || qword_10207A0[1] <= (unsigned __int64)(int)v107 )
        goto LABEL_124;
      v108 = (unsigned __int16)v106;
      v109 = qword_10207A0[2];
      v110 = *(_QWORD *)(v109 + 0x18LL * (int)v107 + 8);
      v111 = v108;
      if ( !v110 )
        goto LABEL_121;
      if ( v110 <= v108 )
        goto LABEL_124;
      v112 = *(_QWORD *)(v109 + 0x18LL * (int)v107 + 0x10);
      if ( *(_QWORD *)(v112 + 0x10LL * v108 + 8) )
        goto LABEL_123;
LABEL_121:
      v1852.m128i_i64[0] = 3LL * (int)v107;
      v1850.m128i_i64[0] = v109;
      if ( (unsigned __int8)sub_3051D0(v107) )
      {
        v112 = *(_QWORD *)(v1850.m128i_i64[0] + 8 * v1852.m128i_i64[0] + 0x10);
LABEL_123:
        v2 = v112 + 0x10 * v111;
      }
LABEL_124:
      v113 = v104 | v105;
      v114 = *(_QWORD *)(v2 + 8);
      if ( *(_DWORD *)(v114 + 0x30) != v103
        || *(_DWORD *)(v114 + 0x34) != v113
        || *(_DWORD *)(v114 + 0x20)
        || *(_DWORD *)(v114 + 0x24) )
      {
        *(_DWORD *)(v114 + 0x30) = v103;
        *(_DWORD *)(v114 + 0x34) = v113;
        *(_QWORD *)(v114 + 0x20) = 0LL;
        if ( v114 && *(_DWORD *)(v114 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          *((_BYTE *)v1840 + *(int *)(v114 + 0x7FC) + 0x20F030) = 1;
        sub_265BC0(v1840, v2);
        if ( !*(_DWORD *)(v114 + 0xC) )
          sub_2663E0(v1840, qword_10207A0[2] + 0x18LL * (int)v107, v2, 0LL, v115);
      }
      goto LABEL_2193;
    case 0x32u:
      v714 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v715 = (v714[*((_QWORD *)&v1847 + 1) + 1] << 0x18) | (v714[*((_QWORD *)&v1847 + 1)] << 0x10) | (v714[*((_QWORD *)&v1847 + 1) + 3] << 8);
      v716 = v714[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v714 + 6;
      v717 = *(_WORD *)&v714[*((_QWORD *)&v1847 + 1) + 4];
      v718 = 0xFFFFFFFF;
      if ( v717 != (__int16)0xFFFF )
        v718 = *(unsigned __int16 *)&v714[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v714 + 0xA;
      v719 = (v714[*((_QWORD *)&v1847 + 1) + 9] << 0x18) | (v714[*((_QWORD *)&v1847 + 1) + 8] << 0x10);
      v720 = v719 | (v714[*((_QWORD *)&v1847 + 1) + 7] << 8) | v714[*((_QWORD *)&v1847 + 1) + 6];
      v721 = qword_1026F30;
      if ( v720 < 0 )
        goto LABEL_1685;
      v722 = (unsigned int)(v719 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v722 )
        goto LABEL_1685;
      v1850.m128i_i32[0] = v716;
      v723 = (unsigned __int16)v720;
      v724 = qword_10207A0[2];
      LODWORD(v2) = 3 * v722;
      v725 = *(_QWORD *)(v724 + 0x18LL * (int)v722 + 8);
      if ( !v725 )
        goto LABEL_1493;
      if ( v725 <= v723 )
      {
        v716 = v1850.m128i_i32[0];
      }
      else
      {
        v726 = *(_QWORD *)(v724 + 0x18LL * (int)v722 + 0x10);
        if ( *(_QWORD *)(v726 + 0x10 * v723 + 8) )
        {
          v716 = v1850.m128i_i32[0];
          goto LABEL_1495;
        }
LABEL_1493:
        v1852.m128i_i64[0] = qword_10207A0[2];
        v1281 = sub_3051D0(v722);
        v716 = v1850.m128i_i32[0];
        if ( v1281 )
        {
          v726 = *(_QWORD *)(v1852.m128i_i64[0] + 0x18LL * (int)v722 + 0x10);
          v723 = (unsigned int)v723;
LABEL_1495:
          v721 = (_QWORD *)(v726 + 0x10 * v723);
          v1282 = v716 | v715;
          v1283 = v721[1];
          if ( !*(_BYTE *)v1283 )
            goto LABEL_1496;
          goto LABEL_1686;
        }
      }
LABEL_1685:
      v1282 = v716 | v715;
      v1283 = qword_1026F30[1];
      if ( !*(_BYTE *)v1283 )
      {
LABEL_1496:
        LOBYTE(v2) = 1;
        if ( v717 == (__int16)0xFFFF )
        {
          *(_DWORD *)(v1283 + 0xE4) = 0;
          v6 = ptr[1];
          ptr[1] = 0LL;
          if ( v6 )
            goto LABEL_18;
          goto LABEL_28;
        }
        sub_34D400((__m128i *)dest, v718);
        *(_DWORD *)(v1283 + 0xE4) = 4;
        *(_DWORD *)(v1283 + 0xE8) = v718;
        v1284 = *(_QWORD *)&dest[8];
        *(_DWORD *)(v1283 + 0x104) = *(_DWORD *)(*(_QWORD *)&dest[8] + 0xB4LL);
        *(_DWORD *)(v1283 + 0x108) = *(_DWORD *)(v1284 + 0xB8);
        *(_DWORD *)(v1283 + 0x110) = 0x64 * *(_DWORD *)(v1284 + 0xB0) / v1282;
        v1285 = v721[1];
        v1286 = v1840;
        if ( !v1285 )
          goto LABEL_1692;
        goto LABEL_1690;
      }
LABEL_1686:
      *(_DWORD *)(v1283 + 0x7C0) = v718;
      *(_DWORD *)(v1283 + 0x7C4) = v1282;
      sub_34D400((__m128i *)dest, v718);
      v1427 = *(const __m128i **)&dest[8];
      *(_DWORD *)(v1283 + 0xFC) = *(_DWORD *)(*(_QWORD *)&dest[8] + 0xC0LL);
      *(_DWORD *)(v1283 + 0x100) = v1427[0xC].m128i_i32[1];
      v1428 = _mm_loadu_si128(v1427 + 0xB);
      *(__m128i *)(v1283 + 0x104) = _mm_shuffle_epi32(v1428, 0x39);
      v1429 = *(_DWORD *)(v1283 + 0x114);
      LOBYTE(v2) = 1;
      if ( v1429 > 0 || (v1429 = *(_DWORD *)(v1283 + 0x38), v1429 > 0) )
        *(_DWORD *)(v1283 + 0x110) = 0x20 * _mm_cvtsi128_si32(v1428) / v1429;
      v1285 = v721[1];
      v1286 = v1840;
      if ( !v1285 )
      {
LABEL_1692:
        v226 = *(volatile signed __int32 **)dest;
        if ( !*(_QWORD *)dest )
          goto LABEL_17;
LABEL_1693:
        if ( _InterlockedSub(v226 + 2, 1u) )
          goto LABEL_17;
        goto LABEL_1694;
      }
LABEL_1690:
      if ( *(_DWORD *)(v1285 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1286) )
        *((_BYTE *)v1286 + *(int *)(v1285 + 0x7FC) + 0x20F030) = 1;
      goto LABEL_1692;
    case 0x33u:
      goto LABEL_16;
    case 0x34u:
      v194 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v195 = __ROL2__(*(_WORD *)&v194[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v194 + 6;
      v196 = ((unsigned __int8)v194[*((_QWORD *)&v1847 + 1) + 5] << 0x18) | ((unsigned __int8)v194[*((_QWORD *)&v1847 + 1)
                                                                                                 + 4] << 0x10);
      v197 = v196 | ((unsigned __int8)v194[*((_QWORD *)&v1847 + 1) + 3] << 8) | (unsigned __int8)v194[*((_QWORD *)&v1847 + 1) + 2];
      v198 = qword_1026F30;
      if ( v197 < 0 )
        goto LABEL_200;
      v199 = (unsigned int)(v196 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v199 )
        goto LABEL_200;
      v200 = (unsigned __int16)v197;
      v2 = qword_10207A0[2];
      v201 = *(_QWORD *)(v2 + 0x18LL * (int)v199 + 8);
      if ( !v201 )
        goto LABEL_197;
      if ( v201 <= v200 )
        goto LABEL_200;
      v202 = *(_QWORD *)(v2 + 0x18LL * (int)v199 + 0x10);
      if ( *(_QWORD *)(v202 + 0x10 * v200 + 8) )
        goto LABEL_199;
LABEL_197:
      if ( (unsigned __int8)sub_3051D0(v199) )
      {
        v202 = *(_QWORD *)(v2 + 0x18LL * (int)v199 + 0x10);
        v200 = (unsigned int)v200;
LABEL_199:
        v198 = (_QWORD *)(v202 + 0x10 * v200);
      }
LABEL_200:
      v101 = v198[1];
      if ( *(_DWORD *)(v101 + 0xE4) != 6 )
      {
        *(_DWORD *)(v101 + 0xE4) = 6;
        *(_DWORD *)(v101 + 0xE8) = v195;
        LOBYTE(v2) = 1;
        v193 = v1840;
        if ( v101 )
          goto LABEL_851;
        goto LABEL_17;
      }
      LOBYTE(v2) = 1;
      v193 = v1840;
      if ( *(_DWORD *)(v101 + 0xE8) == v195 )
        goto LABEL_17;
      *(_DWORD *)(v101 + 0xE4) = 6;
      *(_DWORD *)(v101 + 0xE8) = v195;
      if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        goto LABEL_17;
      goto LABEL_1667;
    case 0x36u:
      sub_1200D0(v1846, (unsigned int)v1847);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x37u:
      v685 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v686 = (v685[*((_QWORD *)&v1847 + 1) + 2] << 0x18) | (v685[*((_QWORD *)&v1847 + 1) + 3] << 0x10);
      v687 = v686 | (v685[*((_QWORD *)&v1847 + 1)] << 8) | v685[*((_QWORD *)&v1847 + 1) + 1];
      v688 = qword_1026F30;
      if ( v687 < 0 )
        goto LABEL_683;
      v689 = (unsigned int)(v686 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v689 )
        goto LABEL_683;
      v690 = (unsigned __int16)v687;
      v691 = qword_10207A0[2];
      v692 = *(_QWORD *)(v691 + 0x18LL * (int)v689 + 8);
      if ( !v692 )
        goto LABEL_680;
      if ( v692 <= v690 )
        goto LABEL_683;
      v693 = *(_QWORD *)(v691 + 0x18LL * (int)v689 + 0x10);
      if ( *(_QWORD *)(v693 + 0x10 * v690 + 8) )
        goto LABEL_682;
LABEL_680:
      if ( (unsigned __int8)sub_3051D0(v689) )
      {
        v693 = *(_QWORD *)(v691 + 0x18LL * (int)v689 + 0x10);
        v690 = (unsigned int)v690;
LABEL_682:
        v688 = (_QWORD *)(v693 + 0x10 * v690);
      }
LABEL_683:
      v2 = v688[1];
      *(_DWORD *)(v2 + 0xE4) = 3;
      v694 = *(_QWORD *)(*((_QWORD *)v1840 + 0x1959) + 0x3A8LL);
      if ( *(_DWORD *)(v694 + 0xF0) == 0xFFFFFFFF )
      {
        v1067 = *(_DWORD *)(*(_QWORD *)v694 + 4LL)
              + (**(_DWORD **)(v694 + 0xB0) << 0x19)
              + (*(_DWORD *)(*(_QWORD *)(v694 + 0xB0) + 0x10LL) << 0x14)
              + (**(_DWORD **)v694 << 0xF)
              + (*(_DWORD *)(*(_QWORD *)v694 + 0x20LL) << 0xA)
              + 0x20 * *(_DWORD *)(*(_QWORD *)v694 + 0x2CLL);
        v101 = v2;
        *(_DWORD *)(v2 + 0xE8) = v1067;
        if ( !v2 )
          goto LABEL_2193;
      }
      else
      {
        sub_347EC0(dest);
        v695 = *(volatile signed __int32 **)dest;
        v696 = **(_DWORD **)&dest[8] + 0x12345678;
        if ( *(_QWORD *)dest )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)(*(_QWORD *)dest + 8LL), 1u) )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v695 + 0x10LL))(v695);
            if ( !_InterlockedSub(v695 + 3, 1u) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v695 + 0x18LL))(v695);
          }
        }
        v101 = v688[1];
        *(_DWORD *)(v2 + 0xE8) = v696;
        if ( !v101 )
          goto LABEL_2193;
      }
LABEL_1133:
      v193 = v1840;
      LOBYTE(v2) = 1;
      if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        goto LABEL_17;
      goto LABEL_1667;
    case 0x38u:
      v240 = *((_QWORD *)&v1847 + 1);
      v241 = (char *)ptr[0]++;
      *(_QWORD *)&v242 = v241[*((_QWORD *)&v1847 + 1)];
      v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)v1856 = v1850;
      *(_QWORD *)&v1851 = &::a2[1];
      v1857 = &::a2[1];
      v243 = &v241[*((_QWORD *)&v1847 + 1) + 1];
      v244 = strlen(v243);
      if ( v244 )
      {
        v245 = v244;
        sub_134D30(v243, (unsigned int)v244, v1856);
        v240 = *((_QWORD *)&v1847 + 1);
        v246 = (char *)ptr[0] + v245 + 1;
      }
      else
      {
        v246 = v241 + 2;
      }
      ptr[0] = v246 + 2;
      v916 = (unsigned __int16)__ROL2__(*(_WORD *)&v246[v240], 8);
      ptr[0] = v246 + 5;
      v917 = (unsigned __int64)(unsigned __int8)v246[v240 + 2] << 0x10;
      v918 = (unsigned __int64)(unsigned __int8)v246[v240 + 3] << 8;
      v919 = (unsigned __int8)v246[v240 + 4];
      ptr[0] = v246 + 6;
      v920 = v918 | v917 | (v916 << 0x20);
      v1853 = v242;
      v921 = a1 + 0x10LL * *(_QWORD *)&v242 + 0xCD38;
      if ( SLOBYTE(v242) < 0 )
        v921 = a1 + 0xCD28;
      v922 = (unsigned __int8)v246[v240 + 5];
      v923 = *(volatile signed __int32 **)v921;
      v924 = *(_QWORD *)(v921 + 8);
      v925 = _mm_load_si128(&v1850);
      if ( *(_QWORD *)v921 )
        _InterlockedAdd(v923 + 2, 1u);
      v2 = v919 | v920;
      v1852.m128i_i64[0] = v924;
      v926 = v924 == 0;
      v927 = 0LL;
      v928 = a1;
      while ( 1 )
      {
        v929 = 1;
        if ( *(_QWORD *)(a1 + 8 * v927 + 0xCFE8) == v2
          || *(_QWORD *)(a1 + 8 * v927 + 0xCFF0) == v2
          || *(_QWORD *)(a1 + 8 * v927 + 0xCFF8) == v2
          || *(_QWORD *)(a1 + 8 * v927 + 0xD000) == v2
          || *(_QWORD *)(a1 + 8 * v927 + 0xD008) == v2 )
        {
          break;
        }
        v927 += 5LL;
        if ( v927 == 0x64 )
        {
          v929 = v926;
          break;
        }
      }
      *(_QWORD *)&v1864 = 3 * v922;
      if ( *((_BYTE *)&unk_1706B70 + 0xC * v922 + 6) )
      {
        v930 = *(_QWORD *)(a1 + 0xCDB0) + 0xC0LL;
        sub_36F0A0((__int64)dest, (__int64)v1856, *(_DWORD *)(a1 + 0xD31C));
        v931 = sub_1054F0(v930, dest);
        if ( *(_QWORD *)&dest[0x20] && (__int64)(*(_QWORD *)&dest[0x30] - *(_QWORD *)&dest[0x20]) >= 2 )
        {
          if ( p_memory_pool )
          {
            v932 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v932;
            v933 = (__int64 *)(v932 - 8);
            if ( v15 )
              v933 = p_memory_pool + 0x36;
            v934 = *v933;
            v935 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v935;
            v936 = (unsigned int *)(v935 - 4);
            if ( v15 )
              v936 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, double))(*(_QWORD *)v934 + 0x28LL))(
              v934,
              *(_QWORD *)&dest[0x20],
              *v936,
              *(double *)v925.m128i_i64);
          }
          else
          {
            free(*(void **)&dest[0x20]);
          }
        }
        v928 = (__int64)v1840;
        v925 = _mm_load_si128(&v1850);
        if ( *(_QWORD *)dest && (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) >= 2 )
        {
          if ( p_memory_pool )
          {
            v1362 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1362;
            v1363 = (__int64 *)(v1362 - 8);
            if ( v15 )
              v1363 = p_memory_pool + 0x36;
            v1364 = *v1363;
            v1365 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1365;
            v1366 = (unsigned int *)(v1365 - 4);
            if ( v15 )
              v1366 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD, double))(*(_QWORD *)v1364 + 0x28LL))(
              v1364,
              *(_QWORD *)dest,
              *v1366,
              *(double *)v925.m128i_i64);
          }
          else
          {
            free(*(void **)dest);
          }
          v925 = _mm_load_si128(&v1850);
        }
        v1367 = v929;
        v929 = 1;
        if ( !v931 )
          v929 = v1367;
      }
      if ( v929 )
        goto LABEL_1896;
      v1368 = SLOBYTE(v1853) < 0;
      v1369 = *(int *)(v928 + 0xD308);
      *(_QWORD *)(v928 + 8 * v1369 + 0xCFE8) = v2;
      *(_DWORD *)(v928 + 0xD308) = ((int)v1369 + 1) % 0x64;
      *(__m128i *)dest = v925;
      v1370 = *(char **)&v1851;
      *(double *)&dest[0x10] = v1851;
      sub_48DAE0(*(_QWORD *)(v928 + 0xD320), dest, v1846);
      sub_3A32E0(src, *(_QWORD *)dest, *(_QWORD *)&dest[8] - *(_QWORD *)dest);
      v1371 = 3 * v1368 + 0x29;
      if ( *((_DWORD *)&unk_1706B70 + *(_QWORD *)&v1864) == 0xFFFFFFFF )
      {
        sub_102A60(v1371, v1856, src, v1852.m128i_i64[0] + 0x58);
        v1378 = src[0];
        if ( !src[0] )
          goto LABEL_1893;
        goto LABEL_1884;
      }
      sub_124750(v1865);
      sub_1355D0((__int64)v1865, (char *)v1856[0], (char *)v1856[1]);
      *(_OWORD *)v1861 = *(_OWORD *)v1865;
      v1862 = v1866;
      v925 = _mm_load_si128(&v1850);
      *(__m128i *)v1865 = v925;
      v1866 = v1370;
      sub_102A60(v1371, v1861, src, v1852.m128i_i64[0] + 0x58);
      if ( !v1861[0] || v1862 - (char *)v1861[0] < 2 )
        goto LABEL_1873;
      if ( p_memory_pool )
      {
        v1372 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1372;
        v1373 = (__int64 *)(v1372 - 8);
        if ( v15 )
          v1373 = p_memory_pool + 0x36;
        v1374 = *v1373;
        v1375 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1375;
        v1376 = (unsigned int *)(v1375 - 4);
        if ( v15 )
          v1376 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1374 + 0x28LL))(v1374, v1861[0], *v1376);
        v1377 = v1865[0];
        if ( !v1865[0] )
          goto LABEL_1883;
      }
      else
      {
        free(v1861[0]);
LABEL_1873:
        v1377 = v1865[0];
        if ( !v1865[0] )
        {
LABEL_1883:
          v1378 = src[0];
          if ( !src[0] )
            goto LABEL_1893;
LABEL_1884:
          if ( v1855 - (_BYTE *)v1378 >= 2 )
          {
            if ( p_memory_pool )
            {
              v1539 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1539;
              v1540 = (__int64 *)(v1539 - 8);
              if ( v15 )
                v1540 = p_memory_pool + 0x36;
              v1541 = *v1540;
              v1542 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1542;
              v1543 = (unsigned int *)(v1542 - 4);
              if ( v15 )
                v1543 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1541 + 0x28LL))(v1541, v1378, *v1543);
              v1544 = *(_QWORD *)dest;
              if ( !*(_QWORD *)dest )
              {
LABEL_1896:
                if ( v923 )
                {
                  if ( !_InterlockedSub(v923 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *, double))(*(_QWORD *)v923 + 0x10LL))(
                      v923,
                      *(double *)v925.m128i_i64);
                    if ( !_InterlockedSub(v923 + 3, 1u) )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v923 + 0x18LL))(v923);
                      v1545 = v1856[0];
                      if ( !v1856[0] )
                        goto LABEL_2193;
                      goto LABEL_2122;
                    }
                  }
                }
LABEL_2121:
                v1545 = v1856[0];
                if ( !v1856[0] )
                  goto LABEL_2193;
LABEL_2122:
                if ( v1857 - (_BYTE *)v1545 >= 2 )
                {
                  if ( p_memory_pool )
                  {
                    v1671 = p_memory_pool[0x23];
                    v15 = p_memory_pool[0x22] == v1671;
                    v1672 = (__int64 *)(v1671 - 8);
                    if ( v15 )
                      v1672 = p_memory_pool + 0x36;
                    v1673 = *v1672;
                    v1674 = p_memory_pool[0x38];
                    v15 = p_memory_pool[0x37] == v1674;
                    v1675 = (unsigned int *)(v1674 - 4);
                    if ( v15 )
                      v1675 = (unsigned int *)(p_memory_pool + 0x43);
                    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1673 + 0x28LL))(v1673, v1545, *v1675);
                  }
                  else
                  {
                    free(v1545);
                  }
                }
                goto LABEL_2193;
              }
LABEL_1894:
              if ( (__int64)(*(_QWORD *)&dest[0x10] - v1544) >= 2 )
                sub_687320(v1544);
              goto LABEL_1896;
            }
            free(v1378);
          }
LABEL_1893:
          v1544 = *(_QWORD *)dest;
          if ( !*(_QWORD *)dest )
            goto LABEL_1896;
          goto LABEL_1894;
        }
      }
      if ( v1866 - (_BYTE *)v1377 >= 2 )
      {
        if ( p_memory_pool )
        {
          v1534 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1534;
          v1535 = (__int64 *)(v1534 - 8);
          if ( v15 )
            v1535 = p_memory_pool + 0x36;
          v1536 = *v1535;
          v1537 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1537;
          v1538 = (unsigned int *)(v1537 - 4);
          if ( v15 )
            v1538 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1536 + 0x28LL))(v1536, v1377, *v1538);
          v1378 = src[0];
          if ( !src[0] )
            goto LABEL_1893;
          goto LABEL_1884;
        }
        free(v1377);
      }
      goto LABEL_1883;
    case 0x39u:
      v637 = 0LL;
      v638 = *(_QWORD *)(a1 + 0x4AA8);
      if ( !v638 )
        goto LABEL_621;
LABEL_620:
      *(_DWORD *)(v638 + 0x12C) = 0xFFFFFFFF;
      while ( 1 )
      {
LABEL_621:
        v639 = *(_QWORD *)(a1 + v637 + 0x4AB8);
        if ( v639 )
          *(_DWORD *)(v639 + 0x12C) = 0xFFFFFFFF;
        v637 += 0x20LL;
        if ( v637 == 0x8000 )
          break;
        v638 = *(_QWORD *)(a1 + v637 + 0x4AA8);
        if ( v638 )
          goto LABEL_620;
      }
      v640 = 0LL;
      v641 = *(_QWORD *)(a1 + 0xD740);
      if ( v641 )
        goto LABEL_627;
      while ( 1 )
      {
        v642 = *(_QWORD *)&v640[a1 + 0xD750];
        if ( v642 )
          *(_DWORD *)(v642 + 0x12C) = 0xFFFFFFFF;
        v640 += 0x20;
        if ( v640 == (char *)&loc_100000 )
          break;
        v641 = *(_QWORD *)&v640[a1 + 0xD740];
        if ( v641 )
LABEL_627:
          *(_DWORD *)(v641 + 0x12C) = 0xFFFFFFFF;
      }
      goto LABEL_17;
    case 0x3Au:
      v340 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v341 = (v340[*((_QWORD *)&v1847 + 1) + 3] << 0x18) | (v340[*((_QWORD *)&v1847 + 1) + 2] << 0x10);
      v342 = v341 | (v340[*((_QWORD *)&v1847 + 1) + 1] << 8) | v340[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v340 + 6;
      v343 = v340[*((_QWORD *)&v1847 + 1) + 5] << 8;
      v344 = v340[*((_QWORD *)&v1847 + 1) + 4] ^ 0x80;
      v345 = qword_1026F30;
      if ( v342 < 0 )
        goto LABEL_330;
      v346 = (unsigned int)(v341 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v346 )
        goto LABEL_330;
      v2 = (unsigned __int16)v342;
      v347 = qword_10207A0[2];
      v348 = *(_QWORD *)(v347 + 0x18LL * (int)v346 + 8);
      if ( !v348 )
        goto LABEL_327;
      if ( v348 <= v2 )
        goto LABEL_330;
      v349 = *(_QWORD *)(v347 + 0x18LL * (int)v346 + 0x10);
      if ( *(_QWORD *)(v349 + 0x10 * v2 + 8) )
        goto LABEL_329;
LABEL_327:
      if ( (unsigned __int8)sub_3051D0(v346) )
      {
        v349 = *(_QWORD *)(v347 + 0x18LL * (int)v346 + 0x10);
        v2 = (unsigned int)v2;
LABEL_329:
        v2 = v349 + 0x10 * v2;
        v345 = (_QWORD *)v2;
      }
LABEL_330:
      v192 = v344 | v343;
      v101 = v345[1];
      if ( *(_DWORD *)(v101 + 0xE4) == 1 )
      {
        LOBYTE(v2) = 1;
        v193 = v1840;
        if ( *(_DWORD *)(v101 + 0xE8) == v192 )
          goto LABEL_17;
        *(_DWORD *)(v101 + 0xE4) = 1;
        *(_DWORD *)(v101 + 0xE8) = v192;
        if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
          goto LABEL_17;
      }
      else
      {
        *(_DWORD *)(v101 + 0xE4) = 1;
LABEL_850:
        *(_DWORD *)(v101 + 0xE8) = v192;
        LOBYTE(v2) = 1;
        v193 = v1840;
        if ( !v101 )
          goto LABEL_17;
LABEL_851:
        if ( *(_DWORD *)(v101 + 0x800) != *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v193) )
          goto LABEL_17;
      }
LABEL_1667:
      *((_BYTE *)v193 + *(int *)(v101 + 0x7FC) + 0x20F030) = 1;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( v6 )
        goto LABEL_18;
      goto LABEL_28;
    case 0x3Bu:
      *(_DWORD *)(*(_QWORD *)(a1 + 0xCDB0) + 0x158LL) = 1;
      *(_DWORD *)(a1 + 0x20EF70) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x3Cu:
      ptr[0] = (char *)ptr[0] + 0x1C;
      v392 = LODWORD(ptr[0]) - 4;
      if ( LODWORD(ptr[0]) - 4 < 0 )
        goto LABEL_17;
      LODWORD(v2) = LODWORD(ptr[0]) - 4;
      ptr[0] = (void *)v392;
      *(_OWORD *)&dest[8] = 0LL;
      if ( (_QWORD)v1847 )
      {
        v393 = 0LL;
        sub_135D30(dest, v1847, 0LL);
        if ( *(_QWORD *)&dest[8] )
        {
          v394 = *((_QWORD *)&v1847 + 1);
          v395 = 0LL;
          do
          {
            *(_BYTE *)(*(_QWORD *)&dest[0x10] + v395) = *(_BYTE *)(v394 + v395);
            ++v395;
            v393 = *(_QWORD *)&dest[8];
          }
          while ( v395 < *(_QWORD *)&dest[8] );
        }
      }
      else
      {
        *(_OWORD *)&dest[8] = 0LL;
        v393 = 0LL;
      }
      if ( !v392 )
      {
        v1165 = 0;
        LOBYTE(v2) = 1;
        if ( !*(_QWORD *)&dest[0x10] )
          goto LABEL_1747;
        goto LABEL_1317;
      }
      v1162 = v392 & 1;
      if ( v392 == 1 )
      {
        v1163 = 0xFFFFFFFF;
        v1164 = *(unsigned __int8 **)&dest[0x10];
        LOBYTE(v2) = 1;
        if ( !v1162 )
          goto LABEL_1316;
      }
      else
      {
        v1174 = v1162 - v392;
        v1163 = 0xFFFFFFFF;
        v1164 = *(unsigned __int8 **)&dest[0x10];
        do
        {
          v1175 = dword_87F770[*v1164 ^ (unsigned __int8)v1163] ^ (v1163 >> 8);
          v1176 = v1164[1];
          v1164 += 2;
          v1163 = dword_87F770[v1176 ^ (unsigned __int8)v1175] ^ (v1175 >> 8);
          v1174 += 2LL;
        }
        while ( v1174 );
        LOBYTE(v2) = 1;
        if ( !v1162 )
        {
LABEL_1316:
          v1165 = ~v1163;
          if ( !*(_QWORD *)&dest[0x10] )
            goto LABEL_1747;
LABEL_1317:
          if ( v393 )
          {
            if ( p_memory_pool )
            {
              v1177 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1177;
              v1178 = (__int64 *)(v1177 - 8);
              if ( v15 )
                v1178 = p_memory_pool + 0x36;
              v1179 = *v1178;
              v1180 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1180;
              v1181 = (unsigned int *)(v1180 - 4);
              if ( v15 )
                v1181 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1179 + 0x28LL))(
                v1179,
                *(_QWORD *)&dest[0x10],
                *v1181);
            }
            else
            {
              free(*(void **)&dest[0x10]);
            }
          }
          *(_QWORD *)&dest[0x10] = 0LL;
LABEL_1747:
          v1456 = (char *)ptr[0];
          v1457 = (char *)ptr[0] + 4;
          ptr[0] = (char *)ptr[0] + 4;
          if ( _byteswap_ulong(*(_DWORD *)&v1456[*((_QWORD *)&v1847 + 1)]) == v1165 )
          {
            *(_OWORD *)&dest[8] = 0LL;
            if ( (_QWORD)v1847 )
            {
              sub_135D30(dest, v1847, 0LL);
              v1458 = v1840;
              if ( *(_QWORD *)&dest[8] )
              {
                v1459 = *((_QWORD *)&v1847 + 1);
                v1460 = 0LL;
                do
                {
                  *(_BYTE *)(*(_QWORD *)&dest[0x10] + v1460) = *(_BYTE *)(v1459 + v1460);
                  ++v1460;
                }
                while ( v1460 < *(_QWORD *)&dest[8] );
              }
            }
            else
            {
              *(_OWORD *)&dest[8] = 0LL;
              v1458 = v1840;
            }
            if ( !*((_QWORD *)v1458 + 0x1AE5) )
              sub_131660((__int64)(v1458 + 0x35C8), 0x18uLL, 3);
            v1461 = *((_QWORD *)v1458 + 0x1AE6);
            v1462 = *(_QWORD *)&dest[0x10];
            v1463 = (((_QWORD)v1457 << 0x20) - 0x1C00000000LL) >> 0x20;
            *(_QWORD *)(v1461 + 0x10) = *(_QWORD *)(*(_QWORD *)&dest[0x10] + v1463 + 0x10);
            *(_OWORD *)v1461 = *(_OWORD *)(v1462 + v1463);
            if ( *(_QWORD *)&dest[0x10] )
            {
              if ( *(_QWORD *)&dest[8] )
              {
                if ( p_memory_pool )
                {
                  v1464 = p_memory_pool[0x23];
                  v15 = p_memory_pool[0x22] == v1464;
                  v1465 = (__int64 *)(v1464 - 8);
                  if ( v15 )
                    v1465 = p_memory_pool + 0x36;
                  v1466 = *v1465;
                  v1467 = p_memory_pool[0x38];
                  v15 = p_memory_pool[0x37] == v1467;
                  v1468 = (unsigned int *)(v1467 - 4);
                  if ( v15 )
                    v1468 = (unsigned int *)(p_memory_pool + 0x43);
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1466 + 0x28LL))(
                    v1466,
                    *(_QWORD *)&dest[0x10],
                    *v1468);
                }
                else
                {
                  free(*(void **)&dest[0x10]);
                }
              }
              *(_QWORD *)&dest[0x10] = 0LL;
            }
            *(_OWORD *)&dest[8] = 0LL;
            if ( (_QWORD)v1847 )
            {
              sub_135D30(dest, v1847, 0LL);
              if ( *(_QWORD *)&dest[8] )
              {
                v1571 = *((_QWORD *)&v1847 + 1);
                v1572 = 0LL;
                do
                {
                  *(_BYTE *)(*(_QWORD *)&dest[0x10] + v1572) = *(_BYTE *)(v1571 + v1572);
                  ++v1572;
                }
                while ( v1572 < *(_QWORD *)&dest[8] );
              }
            }
            else
            {
              *(_OWORD *)&dest[8] = 0LL;
            }
            if ( qword_39E70B0 && *qword_39E70B0 != 0xFFFFFFFF )
            {
              lseek(*qword_39E70B0, 0LL, 0);
              write(*qword_39E70B0, (const void *)(*(_QWORD *)&dest[0x10] + v1463), 0x18uLL);
            }
            if ( *(_QWORD *)&dest[0x10] )
            {
              if ( *(_QWORD *)&dest[8] )
              {
                if ( p_memory_pool )
                {
                  v1573 = p_memory_pool[0x23];
                  v15 = p_memory_pool[0x22] == v1573;
                  v1574 = (__int64 *)(v1573 - 8);
                  if ( v15 )
                    v1574 = p_memory_pool + 0x36;
                  v1575 = *v1574;
                  v1576 = p_memory_pool[0x38];
                  v15 = p_memory_pool[0x37] == v1576;
                  v1577 = (unsigned int *)(v1576 - 4);
                  if ( v15 )
                    v1577 = (unsigned int *)(p_memory_pool + 0x43);
                  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1575 + 0x28LL))(
                    v1575,
                    *(_QWORD *)&dest[0x10],
                    *v1577);
                }
                else
                {
                  free(*(void **)&dest[0x10]);
                }
              }
              *(_QWORD *)&dest[0x10] = 0LL;
              v6 = ptr[1];
              ptr[1] = 0LL;
              if ( !v6 )
                goto LABEL_28;
              goto LABEL_18;
            }
          }
          goto LABEL_17;
        }
      }
      v1163 = dword_87F770[(unsigned __int8)v1163 ^ *v1164] ^ (v1163 >> 8);
      goto LABEL_1316;
    case 0x3Du:
      v471 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v472 = _byteswap_ulong(*(_DWORD *)&v471[*((_QWORD *)&v1847 + 1)]);
      ptr[0] = v471 + 8;
      v473 = *(_DWORD *)&v471[*((_QWORD *)&v1847 + 1) + 4];
      tt_mayby_data_head_sub_3B63A0((__int64)dest, 0xD, *(_QWORD *)(a1 + 0x4A58) + 0x9C8LL);
      v474 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v474) = 0x80;
      v475 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v475) = unk_39E68C8 ^ 0x80;
      v476 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v476) = BYTE2(v472);
      v477 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v477) = HIBYTE(v472);
      v478 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v478) = v472;
      v479 = (*(_QWORD *)&dest[0x20])++;
      *(_BYTE *)(*(_QWORD *)&dest[0x18] + v479) = BYTE1(v472);
      LODWORD(v1856[0]) = v473;
      *(_DWORD *)(*(_QWORD *)&dest[0x18] + *(_QWORD *)&dest[0x20]) = v473;
      v480 = *(_QWORD *)&dest[0x20] + 4LL;
      *(_QWORD *)&dest[0x20] += 4LL;
      v481 = *(_QWORD *)(a1 + 0x4A58);
      if ( *(_DWORD *)(v481 + 0x84) != 3 )
        goto LABEL_1394;
      if ( p_memory_pool )
      {
        v482 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v482;
        v483 = (__int64 *)(v482 - 8);
        if ( v15 )
          v483 = p_memory_pool + 0x36;
        v484 = *v483;
        v485 = p_memory_pool[1];
        v15 = *p_memory_pool == v485;
        v486 = (unsigned int *)(v485 - 4);
        if ( v15 )
          v486 = (unsigned int *)(p_memory_pool + 0xC);
        v487 = *v486;
        v488 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v488;
        v489 = (unsigned int *)(v488 - 4);
        if ( v15 )
          v489 = (unsigned int *)(p_memory_pool + 0x43);
        v490 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v484 + 0x18LL))(
                         v484,
                         0x50LL,
                         v487,
                         0x10LL,
                         *v489);
        if ( !v490 )
          goto LABEL_1519;
LABEL_1391:
        *((_DWORD *)v490 + 2) = 2;
        *((_QWORD *)v490 + 2) = *(_QWORD *)dest;
        *((_OWORD *)v490 + 2) = *(_OWORD *)&dest[0x10];
        *(_OWORD *)&dest[0x10] = 0LL;
        *((_QWORD *)v490 + 6) = v480;
        *(_QWORD *)&dest[0x20] = 0LL;
        v1211 = *(_OWORD *)&dest[0x28];
        *(_QWORD *)&dest[0x28] = 0LL;
        *(_OWORD *)(v490 + 0x38) = v1211;
        *((_DWORD *)v490 + 0x12) = *(_DWORD *)&dest[0x38];
        do
        {
          v1212 = *(_QWORD *)(v481 + 0x20);
          *(_QWORD *)v490 = v1212;
        }
        while ( v1212 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v481 + 0x20),
                           (signed __int64)v490,
                           v1212) );
        tt_pthread_mutex_lock_sub_7DF550((pthread_mutex_t *)(v481 + 0x28));
        *(_BYTE *)(v481 + 0x80) = 1;
        sub_7DF590((pthread_mutex_t *)(v481 + 0x28));
        sub_7A2980((pthread_cond_t *)(v481 + 0x50));
LABEL_1394:
        v1213 = *(_QWORD *)&dest[0x10];
        if ( *(_DWORD *)&dest[0x10] == 0x1388 )
        {
          if ( *(_QWORD *)&dest[0x10] == dword_1719E70[0xA3] )
          {
            v1218 = dword_1719E70[0xA2];
            if ( v1218 > 0 )
            {
              v1219 = v1218 - 1;
              dword_1719E70[0xA2] = v1219;
              v1219 *= 0x20LL;
              v1220 = *(_OWORD *)&dest[0x18];
              *(_QWORD *)&dest[0x20] = *(_QWORD *)((char *)&dword_1719E70[0x58] + v1219);
              v1217 = _mm_loadu_si128((const __m128i *)((char *)&dword_1719E70[0x54] + v1219));
              *(_QWORD *)((char *)&dword_1719E70[0x54] + v1219) = v1213;
              *(_OWORD *)((char *)&dword_1719E70[0x56] + v1219) = v1220;
              goto LABEL_1402;
            }
          }
        }
        else if ( *(_DWORD *)&dest[0x10] == 0x64 && *(_QWORD *)&dest[0x10] == dword_1719E70[0x51] )
        {
          v1214 = dword_1719E70[0x50];
          if ( v1214 > 0 )
          {
            v1215 = v1214 - 1;
            dword_1719E70[0x50] = v1215;
            v1215 *= 0x20LL;
            v1216 = *(_OWORD *)&dest[0x18];
            *(_QWORD *)&dest[0x20] = *(_QWORD *)((char *)&dword_1719E70[6] + v1215);
            v1217 = _mm_loadu_si128((const __m128i *)((char *)&dword_1719E70[2] + v1215));
            *(_QWORD *)((char *)&dword_1719E70[2] + v1215) = v1213;
            *(_OWORD *)((char *)&dword_1719E70[4] + v1215) = v1216;
LABEL_1402:
            *(__m128i *)&dest[0x10] = v1217;
          }
        }
        v1221 = *(_DWORD **)&dest[0x28];
        *(_QWORD *)&dest[0x28] = 0LL;
        if ( v1221 )
        {
          *(_QWORD *)(*(_QWORD *)v1221 + 0x18LL) = (unsigned int)(v1221[2] + 7) >> 3;
          if ( p_memory_pool )
          {
            v1222 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1222;
            v1223 = (__int64 *)(v1222 - 8);
            if ( v15 )
              v1223 = p_memory_pool + 0x36;
            v1224 = *v1223;
            v1225 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1225;
            v1226 = (unsigned int *)(v1225 - 4);
            if ( v15 )
              v1226 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v1224 + 0x28LL))(v1224, v1221, *v1226);
            v1227 = *(_QWORD *)&dest[0x18];
            if ( !*(_QWORD *)&dest[0x18] )
              goto LABEL_17;
LABEL_1413:
            if ( *(_QWORD *)&dest[0x10] )
              sub_687320(v1227);
            *(_QWORD *)&dest[0x18] = 0LL;
            v6 = ptr[1];
            ptr[1] = 0LL;
            if ( !v6 )
              goto LABEL_28;
            goto LABEL_18;
          }
          free(v1221);
        }
        v1227 = *(_QWORD *)&dest[0x18];
        if ( !*(_QWORD *)&dest[0x18] )
          goto LABEL_17;
        goto LABEL_1413;
      }
      v490 = (char *)memalign(0x10uLL, 0x50uLL);
      if ( v490 )
        goto LABEL_1391;
      goto LABEL_1519;
    case 0x3Eu:
      v495 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      LODWORD(src[0]) = *(_DWORD *)&v495[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v495 + 8;
      v496 = *(_DWORD *)&v495[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v495 + 0xA;
      v497 = ((unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 9] << 8) | (unsigned __int8)v495[*((_QWORD *)&v1847 + 1)
                                                                                             + 8] ^ 0x80;
      if ( ((unsigned __int16)((unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 9] << 8) | (unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 8] ^ 0x80) == 0xFFFF )
        v497 = 0xFFFFFFFF;
      ptr[0] = v495 + 0xC;
      v498 = ((unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 0xA] << 8) | (unsigned __int8)v495[*((_QWORD *)&v1847 + 1)
                                                                                               + 0xB] ^ 0x80;
      if ( ((unsigned __int16)((unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 0xA] << 8) | (unsigned __int8)v495[*((_QWORD *)&v1847 + 1) + 0xB] ^ 0x80) == 0xFFFF )
        v498 = 0xFFFFFFFF;
      if ( v498 > v497 )
        goto LABEL_2193;
      v1850.m128i_i64[0] = (unsigned __int64)_byteswap_ulong(v496) << 0x20;
      v499 = a1 + 0x20EFF8;
      v500 = v498;
      v501 = v497;
      do
      {
        v502 = v1850.m128i_i64[0] + v500;
        v1856[0] = (void *)(v1850.m128i_i64[0] + v500);
        v503 = (v1850.m128i_i64[0] + v500) % (unsigned __int64)v1840[0x83C02];
        v504 = *(_QWORD *)((char *)&loc_20F000 + (_QWORD)v1840);
        v505 = *(_QWORD **)(v504 + 8 * v503);
        if ( v505 )
        {
          if ( v502 == *v505 )
          {
            v2 = v504 + 8 * v503;
            do
            {
LABEL_502:
              *(_QWORD *)v2 = v505[2];
              if ( p_memory_pool )
              {
                v506 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v506;
                v507 = (__int64 *)(v506 - 8);
                if ( v15 )
                  v507 = p_memory_pool + 0x36;
                v508 = *v507;
                v509 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v509;
                v510 = (unsigned int *)(v509 - 4);
                if ( v15 )
                  v510 = (unsigned int *)(p_memory_pool + 0x43);
                (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v508 + 0x28LL))(v508, v505, *v510);
              }
              else
              {
                free(v505);
              }
              --*((_QWORD *)v1840 + 0x41E02);
              v505 = *(_QWORD **)v2;
            }
            while ( *(_QWORD *)v2 && v502 == *v505 );
          }
          else
          {
            while ( 1 )
            {
              v2 = (unsigned __int64)v505;
              v505 = (_QWORD *)v505[2];
              if ( !v505 )
                break;
              if ( v502 == *v505 )
              {
                v2 += 0x10LL;
                goto LABEL_502;
              }
            }
          }
        }
        sub_2B4C50(dest, v499, v1856, src);
        v362 = v500++ < v501;
      }
      while ( v362 );
      goto LABEL_2193;
    case 0x3Fu:
      v1852 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)v1856 = v1852;
      v1850.m128i_i64[0] = (__int64)&::a2[1];
      v1857 = &::a2[1];
      v411 = (char *)ptr[0];
      v412 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v413 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v413 )
      {
        v414 = v413;
        sub_134D30(v412, (unsigned int)v413, v1856);
        ptr[0] = (char *)ptr[0] + v414 + 1;
        v415 = v1856[0];
        v416 = v1856[1];
        v1861[0] = 0LL;
        if ( v1856[1] != v1856[0] )
        {
          v417 = 0LL;
          v418 = 0LL;
          v419 = 0LL;
          v420 = 0LL;
          if ( !v1856[0] )
            goto LABEL_423;
          while ( 1 )
          {
            v1861[0] = (void *)(v417 + 1);
            v421 = v415[v417];
            if ( (v421 & byte_9ADA50[2]) != byte_9ADA50[2] )
              break;
            v422 = (unsigned __int8)(v421 & byte_9ADA54[2]) << 6;
            v1861[0] = (void *)(v417 + 2);
            v423 = (v422 | v415[v417 + 1] & 0x3F) << 6;
            v1861[0] = (void *)(v417 + 3);
            v424 = v423 | v415[v417 + 2] & 0x3F;
            v417 += 3LL;
            if ( v418 <= (char *)v419 )
              goto LABEL_429;
LABEL_417:
            while ( 1 )
            {
              *v419 = v424;
LABEL_418:
              ++v419;
              if ( v417 >= v416 - v415 )
                goto LABEL_1009;
              if ( v415 )
                break;
LABEL_423:
              v424 = 0;
              if ( v418 <= (char *)v419 )
                goto LABEL_429;
            }
          }
          if ( (v421 & byte_9ADA50[1]) == byte_9ADA50[1] )
          {
            v425 = (unsigned __int8)(v421 & byte_9ADA54[1]) << 6;
            v1861[0] = (void *)(v417 + 2);
            v424 = v425 | v415[v417 + 1] & 0x3F;
            v417 += 2LL;
            if ( v418 > (char *)v419 )
              goto LABEL_417;
          }
          else
          {
            v424 = (unsigned __int8)(byte_9ADA54[0] & v421);
            ++v417;
            if ( v418 > (char *)v419 )
              goto LABEL_417;
          }
LABEL_429:
          v426 = v420;
          v427 = (char *)v419 - v420;
          v428 = v427 >> 1;
          if ( !v427 )
            v428 = 1LL;
          if ( v428 )
          {
            sub_686EF0((__int64)dest, 4 * v428, 0x10uLL, 0);
            v429 = *(char **)&dest[8];
            v1841 = *(char **)&dest[8];
          }
          else
          {
            v429 = 0LL;
            v1841 = 0LL;
          }
          memmove(v429, v426, v427);
          *(_DWORD *)&v429[v427] = v424;
          if ( v426 )
            sub_687320((unsigned __int64)v426);
          v419 = (int *)&v429[v427];
          v418 = &v1841[4 * v428];
          v415 = v1856[0];
          v416 = v1856[1];
          v420 = v429;
          goto LABEL_418;
        }
      }
      else
      {
        ptr[0] = v411 + 1;
        v1861[0] = 0LL;
      }
      v420 = 0LL;
      v419 = 0LL;
LABEL_1009:
      v1844 = v420;
      memset(&dest[8], 0, 0x11);
      memset(&dest[0x20], 0, 0x1C);
      v1872 = 0LL;
      v1873 = 0LL;
      v1874 = _mm_load_si128(&v1852);
      v1875 = v1850.m128i_i64[0];
      v1876 = 0x4C00000000LL;
      v972 = (char *)v419 - v420;
      v2 = v972 >> 2;
      sub_141CF0(dest, (v972 >> 2) + 1, 3LL);
      v973 = v1844;
      if ( !v972 )
        goto LABEL_1053;
      v974 = 0x48 * v2;
      if ( v1844[v2 - 1] != 0x73 )
        goto LABEL_1017;
      while ( 2 )
      {
        *(__m128i *)src = _mm_load_si128(&v1852);
        v1855 = (char *)v1850.m128i_i64[0];
        v975 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
        v976 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
        if ( v976 )
        {
          v977 = v976;
          sub_134D30(v975, (unsigned int)v976, src);
          ptr[0] = (char *)ptr[0] + v977 + 1;
          v978 = src[0];
          v979 = src[1];
        }
        else
        {
          ++ptr[0];
          v978 = src[0];
          v979 = src[1];
          if ( src[0] != src[1] )
          {
            *(_BYTE *)src[0] = 0;
            v979 = src[0];
            src[1] = src[0];
            v978 = src[0];
          }
        }
        v983 = v979 - v978;
        v583 = v983 + 1;
        v984 = ::a2;
        v985 = v1850.m128i_i64[0];
        if ( v983 + 1 < 2 )
          goto LABEL_1035;
        if ( p_memory_pool )
        {
          v986 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v986;
          v987 = (__int64 *)(v986 - 8);
          if ( v15 )
            v987 = p_memory_pool + 0x36;
          v988 = *v987;
          v989 = p_memory_pool[1];
          v15 = *p_memory_pool == v989;
          v990 = (unsigned int *)(v989 - 4);
          if ( v15 )
            v990 = (unsigned int *)(p_memory_pool + 0xC);
          v991 = *v990;
          v992 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v992;
          v993 = (unsigned int *)(v992 - 4);
          if ( v15 )
            v993 = (unsigned int *)(p_memory_pool + 0x43);
          v984 = (char *)(*(__int64 (__fastcall **)(__int64, size_t, __int64, __int64, _QWORD))(*(_QWORD *)v988 + 0x18LL))(
                           v988,
                           v983 + 1,
                           v991,
                           0x10LL,
                           *v993);
          if ( !v984 )
          {
LABEL_2389:
            v1144 = v583;
LABEL_2390:
            sub_68A080(
              (__int64)"pMem",
              (__int64)aVarBambooHomeB,
              0x69u,
              0,
              (__int64)"Failed to allocate %llu bytes with alignment %llu",
              v1144,
              0x10LL);
LABEL_2391:
            BUG();
          }
        }
        else
        {
          v984 = (char *)memalign(0x10uLL, v983 + 1);
          if ( !v984 )
            goto LABEL_2389;
        }
        v985 = (__int64)&v984[v583];
LABEL_1035:
        memmove(v984, v978, v983);
        v984[v983] = 0;
        v994 = *(_QWORD *)&dest[0x10];
        v995 = *(void **)(*(_QWORD *)&dest[0x10] + v974 + 8);
        v996 = *(_QWORD *)(*(_QWORD *)&dest[0x10] + v974 + 0x18);
        *(_QWORD *)(*(_QWORD *)&dest[0x10] + v974 + 8) = v984;
        *(_QWORD *)(v994 + v974 + 0x10) = &v984[v983];
        *(_QWORD *)(v994 + v974 + 0x18) = v985;
        *(_DWORD *)(v994 + v974) = 2;
        if ( !v995 || v996 - (__int64)v995 < 2 )
          goto LABEL_1045;
        if ( p_memory_pool )
        {
          v997 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v997;
          v998 = (__int64 *)(v997 - 8);
          if ( v15 )
            v998 = p_memory_pool + 0x36;
          v999 = *v998;
          v1000 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1000;
          v1001 = (unsigned int *)(v1000 - 4);
          if ( v15 )
            v1001 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v999 + 0x28LL))(v999, v995, *v1001);
          v1002 = src[0];
          if ( !src[0] )
            goto LABEL_1013;
        }
        else
        {
          free(v995);
LABEL_1045:
          v1002 = src[0];
          if ( !src[0] )
          {
LABEL_1013:
            v973 = v1844;
            --v2;
            v974 -= 0x48LL;
            if ( v2 )
            {
              while ( v973[v2 - 1] != 0x73 )
              {
LABEL_1017:
                v980 = (char *)ptr[0];
                ptr[0] = (char *)ptr[0] + 4;
                v981 = *(_QWORD *)&dest[0x10];
                *(_DWORD *)(*(_QWORD *)&dest[0x10] + v974 + 0x28) = _byteswap_ulong(*(_DWORD *)&v980[*((_QWORD *)&v1847 + 1)]);
                v982 = *(_BYTE **)(v981 + v974 + 8);
                if ( v982 != *(_BYTE **)(v981 + v974 + 0x10) )
                {
                  *v982 = 0;
                  *(_QWORD *)(v981 + v974 + 0x10) = *(_QWORD *)(v981 + v974 + 8);
                }
                *(_DWORD *)(v981 + v974) = 1;
                --v2;
                v974 -= 0x48LL;
                if ( !v2 )
                  goto LABEL_1053;
              }
              continue;
            }
LABEL_1053:
            v1008 = (char *)ptr[0];
            ptr[0] = (char *)ptr[0] + 4;
            v1009 = *(_QWORD *)&dest[0x10];
            *(_DWORD *)(*(_QWORD *)&dest[0x10] + 0x28LL) = _byteswap_ulong(*(_DWORD *)&v1008[*((_QWORD *)&v1847 + 1)]);
            v1010 = *(_BYTE **)(v1009 + 8);
            if ( v1010 != *(_BYTE **)(v1009 + 0x10) )
            {
              *v1010 = 0;
              *(_QWORD *)(v1009 + 0x10) = *(_QWORD *)(v1009 + 8);
            }
            *(_DWORD *)v1009 = 1;
            sub_125330((__int64)dword_9D8E70, (__int64)dest, (unsigned int)&loc_7A120);
            sub_12E7F0(dest);
            LOBYTE(v2) = 1;
            if ( v1844 )
              sub_687320((unsigned __int64)v1844);
            v410 = (char *)v1856[0];
            if ( !v1856[0] || v1857 - (char *)v1856[0] < 2 )
              goto LABEL_17;
LABEL_1059:
            v1011 = p_memory_pool;
            if ( p_memory_pool )
              goto LABEL_1738;
            goto LABEL_1060;
          }
        }
        break;
      }
      if ( v1855 - (_BYTE *)v1002 >= 2 )
      {
        if ( p_memory_pool )
        {
          v1003 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1003;
          v1004 = (__int64 *)(v1003 - 8);
          if ( v15 )
            v1004 = p_memory_pool + 0x36;
          v1005 = *v1004;
          v1006 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1006;
          v1007 = (unsigned int *)(v1006 - 4);
          if ( v15 )
            v1007 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1005 + 0x28LL))(v1005, v1002, *v1007);
        }
        else
        {
          free(v1002);
        }
      }
      goto LABEL_1013;
    case 0x40u:
      v396 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v397 = _byteswap_ulong(*(_DWORD *)&v396[*((_QWORD *)&v1847 + 1)]);
      if ( v397 == *(_DWORD *)(a1 + 0x609CF4) )
        goto LABEL_17;
      *(_DWORD *)(a1 + 0x609CF4) = v397;
      if ( *(_DWORD *)(a1 + 0xCC40) != 1 )
        goto LABEL_17;
      *(_BYTE *)(a1 + 0x609CF8) = 1;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x41u:
      if ( unk_16DA978 > 0 )
      {
        v491 = 0LL;
        v2 = (unsigned __int64)qword_1020608;
        do
        {
          v492 = sub_360B60((unsigned int)v491);
          v493 = *(volatile signed __int32 **)v492;
          v494 = *(_QWORD *)(v492 + 8);
          if ( v493 )
            _InterlockedAdd(v493 + 2, 1u);
          if ( v494 )
          {
            *(_DWORD *)(qword_1020608[2] + 4 * v491) = 0;
            *(_DWORD *)(qword_1020620[2] + 4 * v491) = 0;
          }
          if ( v493 )
          {
            if ( !_InterlockedSub(v493 + 2, 1u) )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v493 + 0x10LL))(v493);
              if ( !_InterlockedSub(v493 + 3, 1u) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v493 + 0x18LL))(v493);
            }
          }
          ++v491;
        }
        while ( v491 < unk_16DA978 );
      }
      sub_267820(a1);
      *(_DWORD *)(a1 + 0x20EDDC) += 0x20;
      goto LABEL_2193;
    case 0x42u:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      v164 = *((_QWORD *)&v1847 + 1);
      v165 = (unsigned __int8 *)ptr[0]++;
      v166 = v165[*((_QWORD *)&v1847 + 1)];
      v1840[0x33A5] = v166;
      ptr[0] = v165 + 2;
      v167 = v165[v164 + 1];
      v1840[0x33A6] = v167;
      ptr[0] = v165 + 4;
      v168 = (unsigned __int16)__ROL2__(*(_WORD *)&v165[v164 + 2], 8);
      v1840[0x33A7] = (unsigned __int16)v168;
      ptr[0] = v165 + 5;
      v1840[0x33A8] = v165[v164 + 4];
      ptr[0] = v165 + 6;
      LODWORD(v164) = v165[v164 + 5];
      v1840[0x33A9] = v164;
      if ( (unsigned int)v164 < 0x64 )
        goto LABEL_17;
      v169 = ((_DWORD)v166 << 7) | 0x40;
      v1840[0x33BA] = v169;
      v170 = ((_DWORD)v167 << 7) | 0x40;
      v1840[0x33BC] = v170;
      v171 = 0;
      if ( v169 <= 0x33FF && v170 <= 0x33FF )
      {
        v172 = v1840[0x32A8];
        if ( v172 >= 3 )
        {
          v173 = v167;
        }
        else
        {
          v173 = (unsigned int)v167;
          v172 += (*(unsigned __int8 *)(qword_397ED18[2] + (unsigned int)v167 + 0x68 * v166 + 0x2A40) >> 1) & 1;
        }
        v1293 = 0x69LL * v172;
        v1294 = qword_397ED00[2];
        v171 = (((*(_DWORD *)(v1294 + 4 * (v173 + 0x69 * (v1293 + (unsigned int)v166)))
                + *(_DWORD *)(v1294 + 4 * (0x69 * (v166 + v1293) + v173 + 0x69))) << 6 >> 7)
              + ((*(_DWORD *)(v1294 + 4 * (v167 + 0x69 * (v1293 + (unsigned int)v166) + 1))
                + *(_DWORD *)(v1294 + 4 * (0x69 * (v166 + v1293) + v167 + 0x6A))) << 6 >> 7)) >> 1;
      }
      v1840[0x33BB] = v171 - v168;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x43u:
      v294 = (char *)ptr[0]++;
      LOBYTE(v295) = v294[*((_QWORD *)&v1847 + 1)];
      if ( (_BYTE)v295 == 0xFF )
        LOBYTE(v295) = 0;
      v295 = (unsigned __int8)v295;
      ptr[0] = v294 + 2;
      LOBYTE(v296) = v294[*((_QWORD *)&v1847 + 1) + 1];
      if ( (_BYTE)v296 == 0xFF )
        LOBYTE(v296) = 0;
      v296 = (unsigned __int8)v296;
      v297 = *(_QWORD *)(a1 + 0x1FA0);
      if ( *(_QWORD *)v297 == __PAIR64__((unsigned __int8)v296, v295) )
        goto LABEL_17;
      *(_DWORD *)v297 = v295;
      *(_DWORD *)(v297 + 4) = v296;
      dword_9D8E70[0x899F] = *(_DWORD *)(a1 + 0xCAA4);
      v298 = *(_DWORD *)(a1 + 0xCF64) + v295;
      v299 = *(_DWORD *)(a1 + 0xCF68) + v296;
      dword_9D8E70[0x89A0] = *(_DWORD *)(a1 + 0xCAA0);
      dword_9D8E70[0x89A1] = v298;
      dword_9D8E70[0x89A2] = v299;
      sub_125800(dword_9D8E70, 0x2FLL, 0xFFFFFFFFLL, 0xFFFFFFFFLL, &loc_7A120, 0LL);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x44u:
      sub_27D660(a1);
      *(_DWORD *)dest = 0;
      *(_QWORD *)&dest[8] = 0LL;
      *(_DWORD *)&dest[0x10] = 0x3E8;
      memset(&dest[0x18], 0, 0x18);
      sub_11F3D0(*(_QWORD *)(a1 + 0xCCB8), dest, v1846);
      sub_27D820(*(_QWORD *)(a1 + 0xCCC8), *(unsigned int *)dest, &dest[8]);
      v747 = *(_DWORD *)dest;
      v748 = *(_DWORD *)(a1 + 0x20EF68);
      *(_DWORD *)(a1 + 0x20EF68) = v748 + 1;
      *(_DWORD *)(a1 + 4LL * (v748 & 0x1F) + 0x20EEE8) = v747;
      if ( !*(_QWORD *)&dest[0x28] )
        goto LABEL_17;
      (*(void (__fastcall **)(_BYTE *))&dest[0x28])(&dest[0x30]);
      *(_QWORD *)&dest[0x28] = 0LL;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x45u:
      v226 = *(volatile signed __int32 **)(a1 + 0xCCC0);
      *(_OWORD *)(a1 + 0xCCC0) = 0LL;
      if ( !v226 )
        goto LABEL_17;
      goto LABEL_1693;
    case 0x46u:
      v70 = 0LL;
LABEL_691:
      sub_23B1B0(a1, v70, v1846);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x47u:
      v174 = 2LL;
      goto LABEL_570;
    case 0x48u:
      v436 = a1;
      sub_267820(a1);
      v684 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      *(_DWORD *)(a1 + 0xCF98) = (unsigned __int16)__ROL2__(*(_WORD *)&v684[*((_QWORD *)&v1847 + 1)], 8);
      goto LABEL_673;
    case 0x49u:
      *(_DWORD *)(a1 + 0x20EF78) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      v697 = (char *)ptr[0]++;
      v698 = v697[*((_QWORD *)&v1847 + 1)];
      if ( p_memory_pool )
      {
        v699 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v699;
        v700 = (__int64 *)(v699 - 8);
        if ( v15 )
          v700 = p_memory_pool + 0x36;
        v701 = *v700;
        v702 = p_memory_pool[1];
        v15 = *p_memory_pool == v702;
        v703 = (unsigned int *)(v702 - 4);
        if ( v15 )
          v703 = (unsigned int *)(p_memory_pool + 0xC);
        v704 = *v703;
        v705 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v705;
        v706 = (unsigned int *)(v705 - 4);
        if ( v15 )
          v706 = (unsigned int *)(p_memory_pool + 0x43);
        v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v701 + 0x18LL))(
               v701,
               0x40LL,
               v704,
               8LL,
               *v706);
        if ( !v2 )
          goto LABEL_2392;
LABEL_1136:
        sub_37A7A0(v2 + 0x20, v1846);
        *(_QWORD *)(v2 + 8) = 0x100000001LL;
        *(_QWORD *)v2 = off_978D90;
        *(_QWORD *)(v2 + 0x10) = 1LL;
        *(_QWORD *)(v2 + 0x18) = v2 + 0x20;
        if ( (v698 & 0x80u) != 0LL )
        {
          v1069 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x199B);
          v1070 = *((_QWORD *)v1840 + 0x199C);
          if ( v1069 )
          {
LABEL_1138:
            _InterlockedAdd(v1069 + 2, 1u);
            v1071 = *(_QWORD **)(v2 + 0x28);
            jj = (_QWORD *)v1071[2];
            if ( v1071 != jj )
              goto LABEL_1139;
            goto LABEL_1140;
          }
        }
        else
        {
          v1068 = 4 * v698;
          v1069 = *(volatile signed __int32 **)&v1840[v1068 + 0x333A];
          v1070 = *(_QWORD *)&v1840[v1068 + 0x333C];
          if ( v1069 )
            goto LABEL_1138;
        }
        v1069 = 0LL;
        v1071 = *(_QWORD **)(v2 + 0x28);
        for ( jj = (_QWORD *)v1071[2]; v1071 != jj; jj = (_QWORD *)jj[2] )
LABEL_1139:
          (*(void (__fastcall **)(_QWORD *, __int64))(*jj + 0x28LL))(jj, v1070);
LABEL_1140:
        ++*(_DWORD *)(v1070 + 8);
        if ( !v1069 )
          goto LABEL_2189;
        if ( _InterlockedSub(v1069 + 2, 1u) )
          goto LABEL_2189;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1069 + 0x10LL))(v1069);
        if ( _InterlockedSub(v1069 + 3, 1u) )
          goto LABEL_2189;
        v1073 = *(_QWORD *)v1069;
        v1074 = v1069;
        goto LABEL_1166;
      }
      v2 = (unsigned __int64)memalign(8uLL, 0x40uLL);
      if ( v2 )
        goto LABEL_1136;
      goto LABEL_2392;
    case 0x4Au:
      ++*(_DWORD *)(a1 + 0x20E0);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x4Bu:
      v247 = ::a2;
      *(__m128i *)dest = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      v248 = &::a2[1];
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v249 = (char *)ptr[0];
      v250 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v251 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v251 )
      {
        v2 = v251;
        sub_134D30(v250, (unsigned int)v251, dest);
        ptr[0] = (char *)ptr[0] + v2 + 1;
        v247 = *(char **)dest;
        v248 = *(char **)&dest[0x10];
        LOBYTE(v2) = 1;
        if ( !*(_QWORD *)dest )
          goto LABEL_17;
      }
      else
      {
        ptr[0] = v249 + 1;
        LOBYTE(v2) = 1;
        if ( !::a2 )
          goto LABEL_17;
      }
      if ( v248 - v247 < 2 )
        goto LABEL_17;
      v937 = p_memory_pool;
      if ( !p_memory_pool )
      {
LABEL_1131:
        v1012 = v247;
        goto LABEL_1061;
      }
LABEL_971:
      v938 = v937[0x23];
      v15 = v937[0x22] == v938;
      v939 = (__int64 **)(v938 - 8);
      if ( v15 )
        v939 = (__int64 **)(v937 + 0x36);
      v940 = *v939;
      v941 = v937[0x38];
      v15 = v937[0x37] == v941;
      v942 = (unsigned int *)(v941 - 4);
      v943 = (unsigned int *)(v937 + 0x43);
      if ( v15 )
        v942 = v943;
      v944 = *v942;
      v945 = *v940;
      v410 = v247;
      goto LABEL_1743;
    case 0x4Cu:
      v62 = 5LL;
      goto LABEL_789;
    case 0x4Du:
      v71 = *((_QWORD *)&v1847 + 1);
      v72 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v73 = *(_DWORD *)&v72[*((_QWORD *)&v1847 + 1)];
      v74 = (unsigned __int64)(v72 + 6);
      ptr[0] = v72 + 6;
      v75 = _byteswap_ulong(v73);
      v76 = (unsigned __int16)__ROL2__(*(_WORD *)&v72[*((_QWORD *)&v1847 + 1) + 4], 8);
      v77 = (unsigned __int16)v76 + 0x8000;
      if ( v75 >= (int)0xFFFEEE90 )
        v77 = v76;
      v2 = (unsigned __int64)qword_1026F30;
      if ( v75 < 0 )
        goto LABEL_90;
      v78 = HIWORD(v75);
      if ( qword_10207A0[1] <= v78 )
        goto LABEL_90;
      v79 = (unsigned __int16)v75;
      v80 = qword_10207A0[2];
      v81 = *(_QWORD *)(v80 + 0x18 * v78 + 8);
      v82 = v79;
      if ( !v81 )
        goto LABEL_87;
      if ( v81 <= v79 )
        goto LABEL_90;
      v83 = *(_QWORD *)(v80 + 0x18 * v78 + 0x10);
      if ( *(_QWORD *)(v83 + 0x10LL * v79 + 8) )
        goto LABEL_89;
LABEL_87:
      v1850.m128i_i64[0] = qword_10207A0[2];
      if ( (unsigned __int8)sub_3051D0(v78) )
      {
        v83 = *(_QWORD *)(v1850.m128i_i64[0] + 0x18 * v78 + 0x10);
LABEL_89:
        v2 = v83 + 0x10 * v82;
      }
LABEL_90:
      v84 = *(_QWORD *)(v2 + 8);
      v85 = v1847;
      if ( v74 >= (unsigned __int64)v1847 )
        goto LABEL_803;
      do
      {
        v86 = *(unsigned __int8 *)(v71 + v74);
        if ( (v86 & 0x80u) != 0 )
        {
          v87 = v74 + 2;
          ptr[0] = (void *)(v74 + 2);
          v86 = __ROL2__(*(_WORD *)(v71 + v74) ^ 0x80, 8);
        }
        else
        {
          ptr[0] = (void *)(v74 + 1);
          v87 = v74 + 1;
        }
        v74 = v87 + 2;
        ptr[0] = (void *)(v87 + 2);
        v88 = __ROL2__(*(_WORD *)(v71 + v87), 8);
        if ( *(_WORD *)(v71 + v87) )
        {
          v74 = v87 + 3;
          ptr[0] = (void *)(v87 + 3);
          v89 = *(unsigned __int8 *)(v71 + v87 + 2);
          if ( v89 == 0xFF )
          {
            v74 = v87 + 7;
            ptr[0] = (void *)(v87 + 7);
            v89 = _byteswap_ulong(*(_DWORD *)(v71 + v87 + 3));
            v90 = v86;
            v91 = v88;
            if ( !*(_QWORD *)(v2 + 8) )
              goto LABEL_92;
            goto LABEL_102;
          }
        }
        else
        {
          v89 = 0;
        }
        v90 = v86;
        v91 = v88;
        if ( !*(_QWORD *)(v2 + 8) )
          goto LABEL_92;
LABEL_102:
        if ( (int)v90 < *(_DWORD *)(v84 + 0x798) )
        {
          *(_DWORD *)(*(_QWORD *)(v84 + 0x7A0) + 4LL * (unsigned int)v90) = v91;
          *(_DWORD *)(*(_QWORD *)(v84 + 0x7B8) + 4LL * (unsigned int)v90) = v89;
        }
LABEL_92:
        sub_1078C0(v77, v90, (unsigned int)(v91 - 1));
      }
      while ( v74 < v85 );
      v84 = *(_QWORD *)(v2 + 8);
LABEL_803:
      LOBYTE(v2) = 1;
      if ( v84 && *(_DWORD *)(v84 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        *((_BYTE *)v1840 + *(int *)(v84 + 0x7FC) + 0x20F030) = 1;
      sub_267820(v1840);
      v830 = v1840[0x83B98];
      v1840[0x83B98] = v830 + 1;
      v1840[(v830 & 0x1F) + 0x83B78] = v77 & 0x7FFF;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
LABEL_18:
      *(_QWORD *)(*(_QWORD *)v6 + 0x18LL) = (unsigned int)(v6[2] + 7) >> 3;
      if ( !p_memory_pool )
      {
        free(v6);
        goto LABEL_28;
      }
      v14 = p_memory_pool[0x23];
      v15 = p_memory_pool[0x22] == v14;
      v16 = (__int64 *)(v14 - 8);
      if ( v15 )
        v16 = p_memory_pool + 0x36;
      v17 = *v16;
      v18 = p_memory_pool[0x38];
      v15 = p_memory_pool[0x37] == v18;
      v19 = (unsigned int *)(v18 - 4);
      if ( v15 )
        v19 = (unsigned int *)(p_memory_pool + 0x43);
      (*(void (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v17 + 0x28LL))(v17, v6, *v19);
      v20 = *((_QWORD *)&v1847 + 1);
      if ( *((_QWORD *)&v1847 + 1) )
      {
LABEL_24:
        if ( (_QWORD)v1847 )
          sub_687320(v20);
        *((_QWORD *)&v1847 + 1) = 0LL;
      }
      return (unsigned int)v2;
    case 0x4Eu:
      v730 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v731 = *(_DWORD *)&v730[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v730 + 6;
      v732 = (unsigned __int8)v730[*((_QWORD *)&v1847 + 1) + 5];
      v733 = (unsigned __int8)v730[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v730 + 8;
      v734 = _byteswap_ulong(v731);
      v735 = (v732 << 8) | v733 ^ 0x80;
      v736 = (unsigned __int16)__ROL2__(*(_WORD *)&v730[*((_QWORD *)&v1847 + 1) + 6], 8);
      v737 = qword_1026F30;
      if ( v734 < 0 )
        goto LABEL_729;
      v738 = (unsigned int)(v734 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v738 )
        goto LABEL_729;
      v739 = (unsigned __int16)v734;
      v740 = qword_10207A0[2];
      v741 = *(_QWORD *)(v740 + 0x18LL * (int)v738 + 8);
      LODWORD(v2) = v739;
      if ( !v741 )
        goto LABEL_726;
      if ( v741 <= v739 )
        goto LABEL_729;
      v742 = *(_QWORD *)(v740 + 0x18LL * (int)v738 + 0x10);
      if ( *(_QWORD *)(v742 + 0x10LL * v739 + 8) )
        goto LABEL_728;
LABEL_726:
      if ( (unsigned __int8)sub_3051D0(v738) )
      {
        v742 = *(_QWORD *)(v740 + 0x18LL * (int)v738 + 0x10);
LABEL_728:
        LODWORD(v2) = v742 + 0x10 * v739;
        v737 = (_QWORD *)(v742 + 0x10LL * v739);
      }
LABEL_729:
      *(_DWORD *)(v737[1] + 0x11CLL) = v736 | (v735 << 0x10);
      goto LABEL_2193;
    case 0x4Fu:
      v62 = 3LL;
      goto LABEL_789;
    case 0x50u:
      sub_267820(a1);
      v175 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v176 = *(_DWORD *)&v175[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v175 + 5;
      v177 = (unsigned __int8)v175[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v175 + 6;
      v178 = 0x80 - v175[*((_QWORD *)&v1847 + 1) + 5];
      v179 = v178;
      *(_DWORD *)(a1 + 4LL * v178 + 0xCBA0) = v176;
      *(_DWORD *)(a1 + 4LL * v178 + 0xCAD8) = v177;
      v180 = (int *)(a1 + 4LL * v178 + 0xCB3C);
      *v180 = 1;
      if ( v180 < &dword_858584[0x62] && a1 + 4 * (unsigned __int64)v178 + 0xCB3D > (unsigned __int64)dword_858584 )
      {
        v181 = 0LL;
        if ( v176 >= 0x53 )
        {
          do
          {
LABEL_827:
            *v180 = v181 + 2;
            if ( v176 < dword_858584[v181 + 1] )
              goto LABEL_823;
LABEL_828:
            *v180 = v181 + 3;
LABEL_823:
            v181 += 2LL;
            if ( v181 == 0x62 )
            {
              v838 = v1840[0x83BB9];
              v1840[0x83BB9] = v838 + 1;
              v1840[(v838 & 0x1F) + 0x83B99] = v179;
              v6 = ptr[1];
              ptr[1] = 0LL;
              if ( !v6 )
                goto LABEL_28;
              goto LABEL_18;
            }
          }
          while ( v176 >= dword_858584[v181] );
        }
LABEL_825:
        if ( v176 < dword_858584[v181 + 1] )
          goto LABEL_823;
        goto LABEL_828;
      }
      v831 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v176), 0);
      v832 = 0LL;
      while ( 1 )
      {
        v834 = _mm_movemask_ps((__m128)_mm_cmpgt_epi32(_mm_loadu_si128((const __m128i *)&dword_858584[v832]), v831)) ^ 0xF;
        v835 = (unsigned __int8)(v834 & 2) >> 1;
        v836 = (unsigned __int8)(v834 & 4) >> 2;
        v837 = (unsigned __int8)v834 >> 3;
        if ( (v834 & 1) == 0 && !v835 && !v836 && !v837 )
          goto LABEL_811;
        if ( v836 )
        {
          v833 = v832 + 4;
          if ( !v837 )
            goto LABEL_810;
        }
        else
        {
          v833 = v832 | v835 | 2;
          if ( !v837 )
            goto LABEL_810;
        }
        v833 = v832 + 5;
LABEL_810:
        *v180 = v833;
LABEL_811:
        v832 += 4LL;
        if ( v832 == 0x60 )
        {
          v181 = 0x60LL;
          if ( v176 >= dword_858584[0x60] )
            goto LABEL_827;
          goto LABEL_825;
        }
      }
    case 0x51u:
      v62 = 9LL;
      goto LABEL_789;
    case 0x52u:
      v350 = (char *)ptr[0]++;
      v351 = v350[*((_QWORD *)&v1847 + 1)] ^ 0xFFFFFF80;
      ptr[0] = v350 + 3;
      v352 = *(unsigned __int16 *)&v350[*((_QWORD *)&v1847 + 1) + 1];
LABEL_401:
      *(_DWORD *)(qword_1020608[2] + 4 * v352) = v351;
      v402 = qword_1020620[2];
      if ( *(_DWORD *)(v402 + 4 * v352) != v351 )
        *(_DWORD *)(v402 + 4 * v352) = v351;
      sub_276460(a1);
      v403 = *(_DWORD *)(a1 + 0x20EDDC);
      *(_DWORD *)(a1 + 0x20EDDC) = v403 + 1;
      *(_DWORD *)(a1 + 4LL * (v403 & 0x1F) + 0x20ED5C) = v352;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x53u:
      v62 = 2LL;
      goto LABEL_789;
    case 0x54u:
      v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)dest = v1850;
      v2 = (unsigned __int64)&::a2[1];
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v41 = (char *)ptr[0];
      v42 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v43 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v43 )
      {
        v44 = v43;
        sub_134D30(v42, (unsigned int)v43, dest);
        v45 = (char *)ptr[0] + v44 + 1;
      }
      else
      {
        v45 = v41 + 1;
      }
      ptr[0] = v45;
      *(__m128i *)v1856 = _mm_load_si128(&v1850);
      v1857 = &::a2[1];
      sub_48DAE0(*(_QWORD *)(a1 + 0xD320), v1856, v1846);
      sub_3A32E0(src, v1856[0], v1856[1] - v1856[0]);
      sub_124390(src);
      sub_229930(a1, 6LL, dest, src);
      LOBYTE(v2) = 1;
      if ( !src[0] || v1855 - (char *)src[0] < 2 )
        goto LABEL_1325;
      if ( p_memory_pool )
      {
        v898 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v898;
        v899 = (__int64 *)(v898 - 8);
        if ( v15 )
          v899 = p_memory_pool + 0x36;
        v900 = *v899;
        v901 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v901;
        v902 = (unsigned int *)(v901 - 4);
        if ( v15 )
          v902 = (unsigned int *)(p_memory_pool + 0x43);
        (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v900 + 0x28LL))(v900, src[0], *v902);
        v903 = v1856[0];
        if ( !v1856[0] )
          goto LABEL_1328;
      }
      else
      {
        free(src[0]);
LABEL_1325:
        v903 = v1856[0];
        if ( !v1856[0] )
        {
LABEL_1328:
          v410 = *(char **)dest;
          if ( !*(_QWORD *)dest )
            goto LABEL_17;
LABEL_1448:
          if ( (__int64)(*(_QWORD *)&dest[0x10] - (_QWORD)v410) < 2 )
            goto LABEL_17;
LABEL_1737:
          v1011 = p_memory_pool;
          if ( p_memory_pool )
          {
LABEL_1738:
            v1451 = v1011[0x23];
            v15 = v1011[0x22] == v1451;
            v1452 = (__int64 **)(v1451 - 8);
            if ( v15 )
              v1452 = (__int64 **)(v1011 + 0x36);
            v940 = *v1452;
            v1453 = v1011[0x38];
            v15 = v1011[0x37] == v1453;
            v1454 = (unsigned int *)(v1453 - 4);
            v1455 = (unsigned int *)(v1011 + 0x43);
            if ( v15 )
              v1454 = v1455;
            v944 = *v1454;
            v945 = *v940;
LABEL_1743:
            (*(void (__fastcall **)(__int64 *, char *, __int64))(v945 + 0x28))(v940, v410, v944);
            v6 = ptr[1];
            ptr[1] = 0LL;
            if ( v6 )
              goto LABEL_18;
LABEL_28:
            v20 = *((_QWORD *)&v1847 + 1);
            if ( *((_QWORD *)&v1847 + 1) )
              goto LABEL_24;
            return (unsigned int)v2;
          }
LABEL_1060:
          v1012 = v410;
LABEL_1061:
          free(v1012);
          v6 = ptr[1];
          ptr[1] = 0LL;
          if ( v6 )
            goto LABEL_18;
          goto LABEL_28;
        }
      }
      if ( v1857 - v903 >= 2 )
        sub_687320((unsigned __int64)v903);
      goto LABEL_1328;
    case 0x55u:
      v174 = 1LL;
LABEL_570:
      LODWORD(v2) = sub_27C2C0(a1, v1846, v174);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x56u:
      *(_DWORD *)((char *)&loc_20EF7C + a1) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      v589 = (char *)ptr[0]++;
      v590 = v589[*((_QWORD *)&v1847 + 1)];
      if ( (_QWORD)v1847 == 1LL )
      {
        if ( (v590 & 0x80u) != 0LL )
        {
          v226 = *(volatile signed __int32 **)(a1 + 0xCD28);
          *(_OWORD *)(a1 + 0xCD28) = 0LL;
          if ( !v226 )
            goto LABEL_17;
          goto LABEL_1693;
        }
        v591 = 0x10 * v590;
        v592 = *(volatile signed __int32 **)(a1 + v591 + 0xCD38);
        *(_OWORD *)(a1 + v591 + 0xCD38) = 0LL;
        if ( !v592 )
          goto LABEL_17;
        if ( _InterlockedSub(v592 + 2, 1u) )
          goto LABEL_17;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v592 + 0x10LL))(v592);
        if ( _InterlockedSub(v592 + 3, 1u) )
          goto LABEL_17;
        v593 = *(_QWORD *)v592;
        v594 = v592;
LABEL_1696:
        (*(void (__fastcall **)(volatile signed __int32 *))(v593 + 0x18))(v594);
        v6 = ptr[1];
        ptr[1] = 0LL;
        if ( !v6 )
          goto LABEL_28;
        goto LABEL_18;
      }
      if ( p_memory_pool )
      {
        v854 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v854;
        v855 = (__int64 *)(v854 - 8);
        if ( v15 )
          v855 = p_memory_pool + 0x36;
        v856 = *v855;
        v857 = p_memory_pool[1];
        v15 = *p_memory_pool == v857;
        v858 = (unsigned int *)(v857 - 4);
        if ( v15 )
          v858 = (unsigned int *)(p_memory_pool + 0xC);
        v859 = *v858;
        v860 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v860;
        v861 = (unsigned int *)(v860 - 4);
        if ( v15 )
          v861 = (unsigned int *)(p_memory_pool + 0x43);
        v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v856 + 0x18LL))(
               v856,
               0xB8LL,
               v859,
               8LL,
               *v861);
        if ( v2 )
        {
LABEL_876:
          v862 = v2 + 0x20;
          *(_OWORD *)(v2 + 0x28) = 0LL;
          *(_OWORD *)(v2 + 0x38) = 0LL;
          *(_QWORD *)(v2 + 0x20) = (char *)&unk_97AB78 + 0x10;
          *(_WORD *)(v2 + 0x48) = 0x100;
          *(_OWORD *)(v2 + 0x50) = 0LL;
          *(_QWORD *)(v2 + 0x60) = 0LL;
          *(_QWORD *)(v2 + 0x70) = 0LL;
          *(__m128i *)(v2 + 0x78) = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
          *(_QWORD *)(v2 + 0x88) = &::a2[1];
          *(_WORD *)(v2 + 0x98) = 0;
          *(_BYTE *)(v2 + 0x9A) = 0;
          *(_OWORD *)(v2 + 0xA8) = 0LL;
          sub_3703C0(v2 + 0x20, v1846);
          *(_QWORD *)(v2 + 8) = 0x100000001LL;
          *(_QWORD *)v2 = off_978D00;
          *(_QWORD *)(v2 + 0x10) = 1LL;
          *(_QWORD *)(v2 + 0x18) = v2 + 0x20;
          if ( (v590 & 0x80u) != 0LL )
          {
            v1245 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x19A5);
            *((_QWORD *)v1840 + 0x19A5) = v2;
            *((_QWORD *)v1840 + 0x19A6) = v862;
            if ( v1245 )
            {
              if ( !_InterlockedSub(v1245 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1245 + 0x10LL))(v1245);
                if ( !_InterlockedSub(v1245 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1245 + 0x18LL))(v1245);
              }
              v2 = *((_QWORD *)v1840 + 0x19A5);
              v862 = *((_QWORD *)v1840 + 0x19A6);
            }
            if ( v2 )
            {
LABEL_883:
              _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
              if ( !*((_BYTE *)v1840 + 0xD558) )
                goto LABEL_2188;
              goto LABEL_1464;
            }
          }
          else
          {
            v863 = 4 * v590;
            v864 = *(volatile signed __int32 **)&v1840[v863 + 0x334E];
            *(_QWORD *)&v1840[v863 + 0x334E] = v2;
            *(_QWORD *)&v1840[v863 + 0x3350] = v862;
            if ( v864 )
            {
              v865 = (unsigned __int64 *)&v1840[v863 + 0x334E];
              if ( !_InterlockedSub(v864 + 2, 1u) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v864 + 0x10LL))(v864);
                if ( !_InterlockedSub(v864 + 3, 1u) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v864 + 0x18LL))(v864);
              }
              v2 = *v865;
              v862 = v865[1];
            }
            if ( v2 )
              goto LABEL_883;
          }
          v2 = 0LL;
          if ( !*((_BYTE *)v1840 + 0xD558) )
            goto LABEL_2188;
LABEL_1464:
          v1246 = *(volatile signed __int32 ***)(v862 + 0x30);
          if ( (int)((*(_QWORD *)(v862 + 0x38) - (_QWORD)v1246) >> 4) > 0 )
          {
            v1247 = 0LL;
            v1248 = 0LL;
            v1249 = *v1246;
            if ( *v1246 )
              goto LABEL_1468;
            while ( 1 )
            {
              ++v1248;
              v1250 = *(_QWORD *)(v862 + 0x30);
              v1247 += 0x10LL;
              if ( v1248 >= (int)((unsigned __int64)(*(_QWORD *)(v862 + 0x38) - v1250) >> 4) )
                break;
              v1249 = *(volatile signed __int32 **)(v1250 + v1247);
              if ( v1249 )
              {
LABEL_1468:
                _InterlockedAdd(v1249 + 2, 1u);
                if ( !_InterlockedSub(v1249 + 2, 1u) )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1249 + 0x10LL))(v1249);
                  if ( !_InterlockedSub(v1249 + 3, 1u) )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1249 + 0x18LL))(v1249);
                }
              }
            }
          }
          goto LABEL_2188;
        }
      }
      else
      {
        v2 = (unsigned __int64)memalign(8uLL, 0xB8uLL);
        if ( v2 )
          goto LABEL_876;
      }
      sub_68A080(
        (__int64)"pMem",
        (__int64)aVarBambooHomeB,
        0x69u,
        0,
        (__int64)"Failed to allocate %llu bytes with alignment %llu",
        0xB8LL,
        8LL);
      goto LABEL_2394;
    case 0x57u:
      v707 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v708 = *(_WORD *)&v707[*((_QWORD *)&v1847 + 1)];
      v709 = (unsigned __int16)__ROL2__(v708, 8);
      v710 = 0xFFFFFFFFLL;
      if ( v708 != (__int16)0xFFFF )
        v710 = v709;
      sub_23F470(a1, v710);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x58u:
      v116 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v117 = _byteswap_ulong(*(_DWORD *)&v116[*((_QWORD *)&v1847 + 1)]);
      v118 = *(_QWORD *)(a1 + 0xCF38);
      v119 = *(_QWORD *)(a1 + 0xCF40);
      v120 = *(_QWORD *)(v118 + 8 * ((int)v117 % (unsigned __int64)(unsigned int)*((_QWORD *)v1840 + 0x19E8)));
      if ( !v120 )
        goto LABEL_1172;
      while ( (_DWORD)v117 != *(_DWORD *)v120 )
      {
        v120 = *(_QWORD *)(v120 + 0x10);
        if ( !v120 )
          goto LABEL_1172;
      }
      if ( v120 != *(_QWORD *)(v118 + 8 * v119) )
        sub_276930(v1840, v117, *(unsigned int *)(v120 + 4), 1LL);
LABEL_1172:
      v1083 = *((_QWORD *)v1840 + 0x198C);
      if ( !v1083 )
        goto LABEL_17;
      v1084 = (void **)(v1840 + 0x3316);
      if ( *(_DWORD *)(v1083 + 0x800) == *(_DWORD *)((char *)&loc_20F02C + (_QWORD)v1840) )
        *((_BYTE *)v1840 + *(int *)(v1083 + 0x7FC) + 0x20F030) = 1;
      v226 = (volatile signed __int32 *)*v1084;
      *(_OWORD *)v1084 = 0LL;
      if ( !v226 )
        goto LABEL_17;
      goto LABEL_1693;
    case 0x59u:
      v62 = 1LL;
      goto LABEL_789;
    case 0x5Au:
      v808 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v809 = __ROL2__(*(_WORD *)&v808[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v808 + 6;
      v810 = ((unsigned __int8)v808[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | ((unsigned __int8)v808[*((_QWORD *)&v1847 + 1)
                                                                                                 + 5] << 0x10);
      v811 = v810 | ((unsigned __int8)v808[*((_QWORD *)&v1847 + 1) + 2] << 8) | (unsigned __int8)v808[*((_QWORD *)&v1847 + 1) + 3];
      v812 = ((v809 << 9) & 0xF80000 | (v809 << 6) & 0xF800) + 8 * (v809 & 0x1F);
      v813 = qword_1026F30;
      if ( v811 < 0 )
        goto LABEL_785;
      v814 = (unsigned int)(v810 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v814 )
        goto LABEL_785;
      v815 = (unsigned __int16)v811;
      v2 = qword_10207A0[2];
      v816 = *(_QWORD *)(v2 + 0x18LL * (int)v814 + 8);
      if ( !v816 )
        goto LABEL_782;
      if ( v816 <= (unsigned __int16)v811 )
        goto LABEL_785;
      v817 = *(_QWORD *)(v2 + 0x18LL * (int)v814 + 0x10);
      if ( *(_QWORD *)(v817 + 0x10LL * (unsigned __int16)v811 + 8) )
        goto LABEL_784;
LABEL_782:
      if ( (unsigned __int8)sub_3051D0(v814) )
      {
        v817 = *(_QWORD *)(v2 + 0x18LL * (int)v814 + 0x10);
        v815 = (unsigned int)v815;
LABEL_784:
        v813 = (_QWORD *)(v817 + 0x10 * v815);
      }
LABEL_785:
      v101 = v813[1];
      if ( *(_DWORD *)(v101 + 0x74) == v812 )
        goto LABEL_2193;
      *(_DWORD *)(v101 + 0x74) = v812;
      LOBYTE(v2) = 1;
      if ( !v101 )
        goto LABEL_17;
      goto LABEL_1666;
    case 0x5Bu:
      v62 = 0LL;
      goto LABEL_789;
    case 0x5Cu:
      v436 = a1;
      sub_267820(a1);
      v437 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      *(_DWORD *)(a1 + 0xCF9C) = (__int16)__ROL2__(*(_WORD *)&v437[*((_QWORD *)&v1847 + 1)], 8);
LABEL_673:
      *(_DWORD *)((char *)&loc_20EF88 + v436) = *(_DWORD *)((char *)&loc_20ED58 + v436);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x5Du:
      v92 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v93 = (v92[*((_QWORD *)&v1847 + 1) + 3] << 0x18) | (v92[*((_QWORD *)&v1847 + 1) + 2] << 0x10);
      v94 = v93 | (v92[*((_QWORD *)&v1847 + 1) + 1] << 8) | v92[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v92 + 6;
      v95 = v92[*((_QWORD *)&v1847 + 1) + 4] ^ 0x80 | (__int16)(v92[*((_QWORD *)&v1847 + 1) + 5] << 8);
      v96 = qword_1026F30;
      if ( v94 < 0 )
        goto LABEL_112;
      v97 = (unsigned int)(v93 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v97 )
        goto LABEL_112;
      v98 = (unsigned __int16)v94;
      v2 = qword_10207A0[2];
      v99 = *(_QWORD *)(v2 + 0x18LL * (int)v97 + 8);
      if ( !v99 )
        goto LABEL_109;
      if ( v99 <= v98 )
        goto LABEL_112;
      v100 = *(_QWORD *)(v2 + 0x18LL * (int)v97 + 0x10);
      if ( *(_QWORD *)(v100 + 0x10 * v98 + 8) )
        goto LABEL_111;
LABEL_109:
      if ( (unsigned __int8)sub_3051D0(v97) )
      {
        v100 = *(_QWORD *)(v2 + 0x18LL * (int)v97 + 0x10);
        v98 = (unsigned int)v98;
LABEL_111:
        v96 = (_QWORD *)(v100 + 0x10 * v98);
      }
LABEL_112:
      v101 = v96[1];
      if ( (_WORD)v95 != 0xFFFF && *(_DWORD *)(v101 + 0xF4) == v95 )
        goto LABEL_2193;
      *(_DWORD *)(v101 + 0xF4) = v95;
      *(_QWORD *)(v101 + 0x7C8) = 0LL;
      LOBYTE(v2) = 1;
      if ( !v101 )
        goto LABEL_17;
      goto LABEL_1666;
    case 0x5Eu:
      v457 = a1;
      v458 = *(_QWORD *)(a1 + 0xCCD0);
      if ( !v458 )
        goto LABEL_2064;
      v1850 = _mm_shuffle_epi32((__m128i)(unsigned __int64)::a2, 0x44);
      *(__m128i *)dest = v1850;
      *(_QWORD *)&dest[0x10] = &::a2[1];
      v459 = (char *)ptr[0];
      v460 = (char *)ptr[0] + *((_QWORD *)&v1847 + 1);
      v461 = strlen((const char *)ptr[0] + *((_QWORD *)&v1847 + 1));
      if ( v461 )
      {
        v2 = v461;
        sub_134D30(v460, (unsigned int)v461, dest);
        v462 = (char *)ptr[0] + v2 + 1;
      }
      else
      {
        v462 = v459 + 1;
      }
      ptr[0] = v462;
      sub_36FF00(v1856, dest, *(unsigned int *)(v458 + 0x128));
      if ( *(_QWORD *)dest && (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) >= 2 )
      {
        if ( p_memory_pool )
        {
          v1166 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1166;
          v1167 = (__int64 *)(v1166 - 8);
          if ( v15 )
            v1167 = p_memory_pool + 0x36;
          v1168 = *v1167;
          v1169 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1169;
          v1170 = (unsigned int *)(v1169 - 4);
          if ( v15 )
            v1170 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1168 + 0x28LL))(v1168, *(_QWORD *)dest, *v1170);
        }
        else
        {
          free(*(void **)dest);
        }
      }
      v1391 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v1392 = (unsigned __int16)__ROL2__(*(_WORD *)&v1391[*((_QWORD *)&v1847 + 1)], 8);
      v1393 = v1391 + 3;
      ptr[0] = v1391 + 3;
      v1394 = v1391[*((_QWORD *)&v1847 + 1) + 2];
      v1852.m128i_i32[0] = v1392;
      if ( v1394 == 0xFFFFFF80 )
      {
        v1395 = *(int *)(v458 + 0xC);
        if ( *(_DWORD *)(v458 + 0xC) && v1856[0] != v1856[1] )
        {
          v1396 = s1;
          if ( s1 == v1859 )
          {
            v1399 = 0LL;
          }
          else
          {
            v1397 = *(_BYTE *)s1;
            if ( *(_BYTE *)s1 )
            {
              v1398 = (char *)s1 + 1;
              LODWORD(v1399) = 0x811C9DC5;
              do
              {
                LODWORD(v1399) = v1397 ^ (0x1000193 * v1399);
                v1397 = *v1398++;
              }
              while ( v1397 );
              v1399 = (int)v1399;
            }
            else
            {
              v1399 = 0xFFFFFFFF811C9DC5LL;
            }
          }
          v2 = *(_QWORD *)(v458 + 0x38);
          v1850.m128i_i64[0] = *(_QWORD *)(v458 + 0x30);
          v1603 = *(_QWORD **)(v1850.m128i_i64[0] + 8 * (v1399 % (unsigned int)v2));
          if ( v1603 )
          {
            v1604 = v1859 - (_BYTE *)s1;
            do
            {
              v1605 = (const void *)v1603[4];
              if ( v1604 == v1603[5] - (_QWORD)v1605 && !memcmp(v1396, v1605, v1604) )
                break;
              v1603 = (_QWORD *)v1603[9];
            }
            while ( v1603 );
            if ( v1603 != *(_QWORD **)(v1850.m128i_i64[0] + 8 * v2) )
            {
              v1607 = v1603[8];
              if ( v1607 )
              {
                if ( (int)v1395 > 0 && *(_DWORD *)(v1607 + 0x88) == v1852.m128i_i32[0] )
                {
                  v1608 = 0LL;
                  v1609 = 0LL;
                  while ( *(_QWORD *)(*(_QWORD *)(v458 + 0x20) + 8 * v1609) != v1607 )
                  {
                    ++v1609;
                    v1608 += 0x100000000LL;
                    if ( v1395 == v1609 )
                      goto LABEL_2045;
                  }
                  if ( (_DWORD)v1609 != 0xFFFFFFFF )
                  {
                    if ( sub_2935A0(v458 + 0x28, v1607 + 8, v1606, 0x100000000LL)
                      && *(_QWORD *)(v1607 + 0x48) != *(_QWORD *)(v1607 + 0x50) )
                    {
                      sub_2935A0(v458 + 0x58, v1607 + 0x48, v1797, v1798);
                    }
                    v1799 = *(int *)(v458 + 0xC) - 1LL;
                    *(_DWORD *)(v458 + 0xC) = v1799;
                    if ( (int)v1799 > (int)v1609 )
                    {
                      v1800 = v1608 >> 0x1D;
                      v1801 = (__int64 *)(*(_QWORD *)(v458 + 0x20) + v1800 + 8);
                      v2 = 8 * v1799 - v1800;
                      if ( (__int64)v2 > 0 )
                      {
                        v2 >>= 3;
                        while ( 1 )
                        {
                          v1802 = (void *)v1801[0xFFFFFFFF];
                          v1803 = *v1801;
                          *v1801 = 0LL;
                          v1801[0xFFFFFFFF] = v1803;
                          if ( !v1802 )
                            goto LABEL_2329;
                          sub_292840(v1802);
                          if ( p_memory_pool )
                          {
                            v1804 = p_memory_pool[0x23];
                            v15 = p_memory_pool[0x22] == v1804;
                            v1805 = (__int64 *)(v1804 - 8);
                            if ( v15 )
                              v1805 = p_memory_pool + 0x36;
                            v1806 = *v1805;
                            v1807 = p_memory_pool[0x38];
                            v15 = p_memory_pool[0x37] == v1807;
                            v1808 = (unsigned int *)(v1807 - 4);
                            if ( v15 )
                              v1808 = (unsigned int *)(p_memory_pool + 0x43);
                            (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1806 + 0x28LL))(
                              v1806,
                              v1802,
                              *v1808);
                            ++v1801;
                            v362 = ((__int64)(v2 - 1) < 0) ^ __OFADD__(0xFFFFFFFFFFFFFFFFLL, v2) | (v2 == 1);
                            --v2;
                            if ( v362 )
                              break;
                          }
                          else
                          {
                            free(v1802);
LABEL_2329:
                            ++v1801;
                            v362 = ((__int64)(v2 - 1) < 0) ^ __OFADD__(0xFFFFFFFFFFFFFFFFLL, v2) | (v2 == 1);
                            --v2;
                            if ( v362 )
                              break;
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
LABEL_2045:
        LOBYTE(v2) = 1;
        v457 = (__int64)v1840;
        if ( s1 && v1860 - (__int64)s1 >= 2 )
        {
          if ( p_memory_pool )
          {
            v1625 = p_memory_pool[0x23];
            v15 = p_memory_pool[0x22] == v1625;
            v1626 = (__int64 *)(v1625 - 8);
            if ( v15 )
              v1626 = p_memory_pool + 0x36;
            v1627 = *v1626;
            v1628 = p_memory_pool[0x38];
            v15 = p_memory_pool[0x37] == v1628;
            v1629 = (unsigned int *)(v1628 - 4);
            if ( v15 )
              v1629 = (unsigned int *)(p_memory_pool + 0x43);
            (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1627 + 0x28LL))(v1627, s1, *v1629);
            v1630 = v1856[0];
            if ( !v1856[0] )
            {
LABEL_2064:
              *(_DWORD *)((char *)&loc_20EF74 + v457) = *(_DWORD *)((char *)&loc_20ED58 + v457);
              *(_BYTE *)(v457 + 0x20F854) = 1;
              v6 = ptr[1];
              ptr[1] = 0LL;
              if ( !v6 )
                goto LABEL_28;
              goto LABEL_18;
            }
LABEL_2056:
            if ( v1857 - (_BYTE *)v1630 >= 2 )
            {
              if ( p_memory_pool )
              {
                v1631 = p_memory_pool[0x23];
                v15 = p_memory_pool[0x22] == v1631;
                v1632 = (__int64 *)(v1631 - 8);
                if ( v15 )
                  v1632 = p_memory_pool + 0x36;
                v1633 = *v1632;
                v1634 = p_memory_pool[0x38];
                v15 = p_memory_pool[0x37] == v1634;
                v1635 = (unsigned int *)(v1634 - 4);
                if ( v15 )
                  v1635 = (unsigned int *)(p_memory_pool + 0x43);
                (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1633 + 0x28LL))(v1633, v1630, *v1635);
              }
              else
              {
                free(v1630);
              }
            }
            goto LABEL_2064;
          }
          free(s1);
        }
        v1630 = v1856[0];
        if ( !v1856[0] )
          goto LABEL_2064;
        goto LABEL_2056;
      }
      LODWORD(v1851) = v1394;
      *(__m128i *)src = _mm_load_si128(&v1850);
      v1855 = &::a2[1];
      v1400 = &v1393[*((_QWORD *)&v1847 + 1)];
      v1401 = strlen(&v1393[*((_QWORD *)&v1847 + 1)]);
      if ( v1401 )
      {
        v2 = v1401;
        sub_134D30(v1400, (unsigned int)v1401, src);
        ptr[0] = (char *)ptr[0] + v2 + 1;
        if ( v1856[0] == v1856[1] )
          goto LABEL_1972;
      }
      else
      {
        ++ptr[0];
        if ( src[0] != src[1] )
        {
          *(_BYTE *)src[0] = 0;
          src[1] = src[0];
        }
        if ( v1856[0] == v1856[1] )
          goto LABEL_1972;
      }
      v1402 = s1;
      if ( s1 == v1859 )
      {
        v1405 = 0;
      }
      else
      {
        v1403 = *(_BYTE *)s1;
        if ( *(_BYTE *)s1 )
        {
          v1404 = (char *)s1 + 1;
          v1405 = 0x811C9DC5;
          do
          {
            v1405 = v1403 ^ (0x1000193 * v1405);
            v1403 = *v1404++;
          }
          while ( v1403 );
        }
        else
        {
          v1405 = 0x811C9DC5;
        }
      }
      v1578 = *(_QWORD *)(v458 + 0x30);
      v2 = *(_QWORD *)(v458 + 0x38);
      v1579 = *(_QWORD **)(v1578 + 8 * (v1405 % (unsigned __int64)(unsigned int)v2));
      if ( v1579 )
      {
        v1580 = v1859 - (_BYTE *)s1;
        while ( 1 )
        {
          v1581 = (const void *)v1579[4];
          if ( v1580 == v1579[5] - (_QWORD)v1581 && !memcmp(v1402, v1581, v1580) )
            break;
          v1579 = (_QWORD *)v1579[9];
          if ( !v1579 )
            goto LABEL_1972;
        }
        if ( v1579 != *(_QWORD **)(v1578 + 8 * v2) )
        {
          v1582 = v1579[8];
          if ( v1582 )
            goto LABEL_2031;
        }
      }
LABEL_1972:
      if ( *(_DWORD *)(v458 + 0xC) > *(_DWORD *)(v458 + 8) )
        goto LABEL_2036;
      sub_176C40((__int64)dest);
      v1582 = sub_292B10(v458, v1856, dest);
      if ( *(_QWORD *)&dest[0x20] && (__int64)(*(_QWORD *)&dest[0x30] - *(_QWORD *)&dest[0x20]) >= 2 )
      {
        if ( p_memory_pool )
        {
          v1583 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1583;
          v1584 = (__int64 *)(v1583 - 8);
          if ( v15 )
            v1584 = p_memory_pool + 0x36;
          v1585 = *v1584;
          v1586 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1586;
          v1587 = (unsigned int *)(v1586 - 4);
          if ( v15 )
            v1587 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1585 + 0x28LL))(
            v1585,
            *(_QWORD *)&dest[0x20],
            *v1587);
          v1588 = *(void **)dest;
          if ( !*(_QWORD *)dest )
            goto LABEL_2030;
          goto LABEL_2021;
        }
        free(*(void **)&dest[0x20]);
      }
      v1588 = *(void **)dest;
      if ( !*(_QWORD *)dest )
        goto LABEL_2030;
LABEL_2021:
      if ( (__int64)(*(_QWORD *)&dest[0x10] - (_QWORD)v1588) >= 2 )
      {
        if ( p_memory_pool )
        {
          v1610 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1610;
          v1611 = (__int64 *)(v1610 - 8);
          if ( v15 )
            v1611 = p_memory_pool + 0x36;
          v1612 = *v1611;
          v1613 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1613;
          v1614 = (unsigned int *)(v1613 - 4);
          if ( v15 )
            v1614 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1612 + 0x28LL))(v1612, v1588, *v1614);
          if ( !v1582 )
            goto LABEL_2036;
          goto LABEL_2031;
        }
        free(v1588);
      }
LABEL_2030:
      if ( v1582 )
      {
LABEL_2031:
        v1615 = *(_DWORD *)(v458 + 0x118);
        *(_DWORD *)(v458 + 0x118) = v1615 + 1;
        *(_DWORD *)(v1582 + 0x88) = v1852.m128i_i32[0];
        *(_DWORD *)(v1582 + 0x8C) = v1615;
        *(_DWORD *)(v1582 + 0xB0) = LODWORD(v1851);
        if ( src != (void **)(v1582 + 0x90) )
          tt_memmove_sub_136200(v1582 + 0x90, (char *)src[0], (__int64)src[1]);
        v1616 = (***(__int64 (__fastcall ****)(_QWORD))(v458 + 0x120))(*(_QWORD *)(v458 + 0x120));
        v1617 = *(const void **)(v1582 + 0x28);
        v1618 = *(_QWORD *)(v1582 + 0x30) - (_QWORD)v1617;
        v1619 = *(const void **)(v1616 + 0x20);
        if ( v1618 == *(_QWORD *)(v1616 + 0x28) - (_QWORD)v1619 && !memcmp(v1617, v1619, v1618) )
          *(_DWORD *)(v458 + 0x114) = *(_DWORD *)(v1582 + 0xB0);
      }
LABEL_2036:
      if ( src[0] && v1855 - (char *)src[0] >= 2 )
      {
        if ( p_memory_pool )
        {
          v1620 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v1620;
          v1621 = (__int64 *)(v1620 - 8);
          if ( v15 )
            v1621 = p_memory_pool + 0x36;
          v1622 = *v1621;
          v1623 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v1623;
          v1624 = (unsigned int *)(v1623 - 4);
          if ( v15 )
            v1624 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1622 + 0x28LL))(v1622, src[0], *v1624);
        }
        else
        {
          free(src[0]);
        }
      }
      goto LABEL_2045;
    case 0x5Fu:
      v749 = (unsigned __int8 *)ptr[0]++;
      *(_QWORD *)&v750 = v749[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v749 + 4;
      v751 = v749[*((_QWORD *)&v1847 + 1) + 2];
      v752 = v749[*((_QWORD *)&v1847 + 1) + 3];
      v753 = v749[*((_QWORD *)&v1847 + 1) + 1] + (unsigned __int64)(v752 & 7);
      ptr[0] = v749 + 6;
      v754 = v749[*((_QWORD *)&v1847 + 1) + 4];
      v1850.m128i_i32[0] = v749[*((_QWORD *)&v1847 + 1) + 5];
      ptr[0] = v749 + 7;
      v755 = v749[*((_QWORD *)&v1847 + 1) + 6];
      ptr[0] = v749 + 0xA;
      v756 = ((v749[*((_QWORD *)&v1847 + 1) + 9] << 0x10) | (v749[*((_QWORD *)&v1847 + 1) + 8] << 8))
           + v749[*((_QWORD *)&v1847 + 1) + 7];
      *(_QWORD *)&v757 = v756 - 0x1000000;
      if ( v756 <= 0x7FFFFF )
        *(_QWORD *)&v757 = v756;
      ptr[0] = v749 + 0xB;
      v758 = (char)v749[*((_QWORD *)&v1847 + 1) + 0xA];
      ptr[0] = v749 + 0xC;
      v759 = (char)v749[*((_QWORD *)&v1847 + 1) + 0xB];
      ptr[0] = v749 + 0xE;
      v760 = *(_WORD *)&v749[*((_QWORD *)&v1847 + 1) + 0xC];
      ptr[0] = v749 + 0xF;
      LOBYTE(v1851) = v749[*((_QWORD *)&v1847 + 1) + 0xE];
      ptr[0] = v749 + 0x10;
      v1852.m128i_i8[0] = 0x80 - v749[*((_QWORD *)&v1847 + 1) + 0xF];
      ptr[0] = v749 + 0x12;
      v761 = v753 + v758;
      if ( (int)v761 > 0x67 )
        goto LABEL_17;
      v762 = v751 + ((v752 >> 4) & 7);
      v763 = v762 + (v759 ^ 0xFFFFFFFFFFFFFF80LL);
      if ( (int)v763 > 0x67 )
        goto LABEL_17;
      if ( (unsigned int)v753 > 0x67 )
        goto LABEL_17;
      if ( (unsigned int)v762 > 0x67 )
        goto LABEL_17;
      if ( (int)(v761 | v763) < 0 )
        goto LABEL_17;
      v764 = *(_WORD *)&v749[*((_QWORD *)&v1847 + 1) + 0x10];
      if ( v764 == (__int16)0xFFFF )
        goto LABEL_17;
      v765 = 0;
      v1868 = ((_DWORD)v753 << 7) | 0x40;
      v1869 = ((_DWORD)v762 << 7) | 0x40;
      if ( v1868 <= 0x33FF && (((_DWORD)v762 << 7) | 0x40u) <= 0x33FF )
      {
        v766 = v1840[0x32A8];
        if ( v766 <= 2 )
          v766 += (*(unsigned __int8 *)(qword_397ED18[2] + 0x68 * v762 + v753 + 0x2A40) >> 1) & 1;
        v767 = 0x69 * (0x69LL * v766 + (unsigned int)v762);
        v768 = qword_397ED00[2];
        v765 = (((*(_DWORD *)(v768 + 4 * (v767 + (unsigned int)v753))
                + *(_DWORD *)(v768 + 4 * (v767 + (unsigned int)v753 + 0x69))) << 6 >> 7)
              + ((*(_DWORD *)(v768 + 4 * (v767 + (unsigned int)v753 + 1))
                + *(_DWORD *)(v768 + 4 * (v767 + (unsigned int)v753 + 0x6A))) << 6 >> 7)) >> 1;
      }
      LOWORD(v1863) = v760;
      LODWORD(v1867) = v754;
      v1864 = v757;
      v1853 = v750;
      v769 = v1840[0x837];
      if ( p_memory_pool )
      {
        v770 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v770;
        v771 = (__int64 *)(v770 - 8);
        if ( v15 )
          v771 = p_memory_pool + 0x36;
        v772 = *v771;
        v773 = p_memory_pool[1];
        v15 = *p_memory_pool == v773;
        v774 = (unsigned int *)(v773 - 4);
        if ( v15 )
          v774 = (unsigned int *)(p_memory_pool + 0xC);
        v775 = *v774;
        v776 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v776;
        v777 = (unsigned int *)(v776 - 4);
        if ( v15 )
          v777 = (unsigned int *)(p_memory_pool + 0x43);
        v778 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v772 + 0x18LL))(
                                            v772,
                                            0xC0LL,
                                            v775,
                                            8LL,
                                            *v777);
      }
      else
      {
        v778 = (volatile signed __int32 *)memalign(8uLL, 0xC0uLL);
      }
      v1251 = v778;
      v1252 = v755;
      if ( !v1251 )
      {
        sub_68A080(
          (__int64)"pMem",
          (__int64)aVarBambooHomeB,
          0x69u,
          0,
          (__int64)"Failed to allocate %llu bytes with alignment %llu",
          0xC0LL,
          8LL);
LABEL_2394:
        BUG();
      }
      v1253 = __ROL2__(LOWORD(v1863), 8);
      v1254 = ((_DWORD)v1867 << 8) | v1850.m128i_i32[0] ^ 0x80;
      v1870 = v763;
      v1255 = (_DWORD)v763 << 7;
      v1867 = v761;
      v1256 = (_DWORD)v761 << 7;
      v1257 = v1852.m128i_u8[0];
      v1258 = (unsigned __int16)__ROL2__(v764, 8);
      LODWORD(v2) = v765 - 4 * (unsigned __int8)-LOBYTE(v1851);
      LODWORD(v1851) = ((_DWORD)v763 << 7) + 0x40;
      LODWORD(v1863) = v1256 + 0x40;
      v1259 = v769 + v1253;
      v1850.m128i_i32[0] = v1254;
      v1260 = v1251;
      v1261 = v1254 + v769;
      v1262 = v1251 + 8;
      v1263 = v1840[0x32A8];
      v1852.m128i_i64[0] = (unsigned int)(4 * v1252);
      sub_28BFB0(
        (_DWORD)v1251 + 0x20,
        v1258,
        v1263,
        v1869,
        v1868,
        v2,
        v1261,
        v1259,
        v1257,
        LODWORD(v1853),
        LODWORD(v1864),
        4 * v1252);
      v1264 = LODWORD(v1863);
      *((_QWORD *)v1260 + 1) = 0x100000001LL;
      *(_QWORD *)v1260 = off_978CD0;
      *((_QWORD *)v1260 + 2) = 1LL;
      v1265 = v1262;
      *((_QWORD *)v1260 + 3) = v1262;
      v1266 = v1260;
      v1267 = 0;
      if ( (int)v1264 > 0x33FF )
      {
        LOBYTE(v2) = 1;
        v1270 = v1850.m128i_i32[0];
        v1271 = v1852.m128i_i32[0];
        v1272 = v1265;
        v1268 = LODWORD(v1851);
      }
      else
      {
        v1268 = LODWORD(v1851);
        LOBYTE(v2) = 1;
        if ( SLODWORD(v1851) > 0x33FF )
        {
          v1270 = v1850.m128i_i32[0];
          v1271 = v1852.m128i_i32[0];
          v1272 = v1265;
        }
        else
        {
          v1269 = (v1256 | v1255) < 0;
          v1270 = v1850.m128i_i32[0];
          v1271 = v1852.m128i_i32[0];
          v1272 = v1265;
          if ( !v1269 )
          {
            v1273 = v1840[0x32A8];
            if ( v1273 > 2 )
            {
              v1275 = v1867;
              v1274 = v1870;
            }
            else
            {
              v1274 = v1870;
              v1275 = v1867;
              v1273 += (*(unsigned __int8 *)(qword_397ED18[2] + (int)v1867 + 0x68 * (int)v1870 + 0x2A40) >> 1) & 1;
            }
            v1360 = 0x69LL * v1273;
            v1361 = qword_397ED00[2];
            v1267 = (((*(_DWORD *)(v1361 + 4 * (0x69 * (v1360 + v1274) + v1275))
                     + *(_DWORD *)(v1361 + 4 * (0x69 * (v1360 + (int)v1274) + v1275 + 0x69))) << 6 >> 7)
                   + ((*(_DWORD *)(v1361 + 4 * (0x69 * (v1360 + v1274) + (int)v1275 + 1))
                     + *(_DWORD *)(v1361 + 4 * ((int)v1275 + 0x69 * (v1360 + (int)v1274) + 0x6A))) << 6 >> 7)) >> 1;
          }
        }
      }
      sub_27DD20(v1272, v1268, v1264, (unsigned int)(v1267 - v1271), v1840[0x837] + v1270);
      if ( p_memory_pool )
      {
        v1525 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1525;
        v1526 = (__int64 *)(v1525 - 8);
        if ( v15 )
          v1526 = p_memory_pool + 0x36;
        v1527 = *v1526;
        v1528 = p_memory_pool[1];
        v15 = *p_memory_pool == v1528;
        v1529 = (unsigned int *)(v1528 - 4);
        if ( v15 )
          v1529 = (unsigned int *)(p_memory_pool + 0xC);
        v1530 = *v1529;
        v1531 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1531;
        v1532 = (unsigned int *)(v1531 - 4);
        if ( v15 )
          v1532 = (unsigned int *)(p_memory_pool + 0x43);
        v1533 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1527
                                                                                                + 0x18LL))(
                            v1527,
                            0x20LL,
                            v1530,
                            0x10LL,
                            *v1532);
        if ( !v1533 )
          goto LABEL_1871;
      }
      else
      {
        v1533 = memalign(0x10uLL, 0x20uLL);
        if ( !v1533 )
          goto LABEL_1871;
      }
      v1533[2] = v1266;
      v1533[3] = v1272;
      _InterlockedAdd(v1266 + 2, 1u);
      *v1533 = (char *)&loc_5EA0A0 + (_QWORD)v1840;
      v1533[1] = *((_QWORD *)v1840 + 0xBD415);
      **((_QWORD **)v1840 + 0xBD415) = v1533;
      *((_QWORD *)v1840 + 0xBD415) = v1533;
      if ( _InterlockedSub(v1266 + 2, 1u) )
        goto LABEL_17;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1266 + 0x10LL))(v1266);
      if ( _InterlockedSub(v1266 + 3, 1u) )
        goto LABEL_17;
      v593 = *(_QWORD *)v1266;
      v594 = v1266;
      goto LABEL_1696;
    case 0x60u:
      v65 = qword_1020620[1];
      if ( v65 )
      {
        for ( kk = 0LL; kk < v65; ++kk )
        {
          v67 = qword_1020620[2];
          v68 = *(_DWORD *)(qword_1020608[2] + 4 * kk);
          if ( *(_DWORD *)(v67 + 4 * kk) != v68 )
          {
            *(_DWORD *)(v67 + 4 * kk) = v68;
            sub_276460(a1);
            v69 = *(_DWORD *)(a1 + 0x20EDDC);
            *(_DWORD *)(a1 + 0x20EDDC) = v69 + 1;
            *(_DWORD *)(a1 + 4LL * (v69 & 0x1F) + 0x20ED5C) = kk;
            v65 = qword_1020620[1];
          }
        }
      }
      goto LABEL_17;
    case 0x61u:
      v818 = *((_QWORD *)&v1847 + 1);
      v819 = (unsigned __int8 *)ptr[0]++;
      *(_DWORD *)(a1 + 0xCFC0) = v819[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v819 + 2;
      *(_DWORD *)(a1 + 0xCFB8) = v819[v818 + 1] ^ 0x80;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x62u:
      v438 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v439 = (unsigned __int16)__ROL2__(*(_WORD *)&v438[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v438 + 3;
      v440 = (unsigned __int8)v438[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v438 + 5;
      sub_23F2F0(a1, v439, v440, (unsigned __int16)__ROL2__(*(_WORD *)&v438[*((_QWORD *)&v1847 + 1) + 3], 8));
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x63u:
      *(_DWORD *)(a1 + 0x20EF78) = *(_DWORD *)((char *)&loc_20ED58 + a1);
      *(_BYTE *)(a1 + 0x5EA1AB) = 1;
      v820 = (char *)ptr[0]++;
      v821 = v820[*((_QWORD *)&v1847 + 1)];
      if ( p_memory_pool )
      {
        v822 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v822;
        v823 = (__int64 *)(v822 - 8);
        if ( v15 )
          v823 = p_memory_pool + 0x36;
        v824 = *v823;
        v825 = p_memory_pool[1];
        v15 = *p_memory_pool == v825;
        v826 = (unsigned int *)(v825 - 4);
        if ( v15 )
          v826 = (unsigned int *)(p_memory_pool + 0xC);
        v827 = *v826;
        v828 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v828;
        v829 = (unsigned int *)(v828 - 4);
        if ( v15 )
          v829 = (unsigned int *)(p_memory_pool + 0x43);
        v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v824 + 0x18LL))(
               v824,
               0x40LL,
               v827,
               8LL,
               *v829);
        if ( !v2 )
          goto LABEL_2392;
      }
      else
      {
        v2 = (unsigned __int64)memalign(8uLL, 0x40uLL);
        if ( !v2 )
        {
LABEL_2392:
          sub_68A080(
            (__int64)"pMem",
            (__int64)aVarBambooHomeB,
            0x69u,
            0,
            (__int64)"Failed to allocate %llu bytes with alignment %llu",
            0x40LL,
            8LL);
          goto LABEL_2394;
        }
      }
      sub_373BF0(v2 + 0x20, v1846);
      *(_QWORD *)(v2 + 8) = 0x100000001LL;
      *(_QWORD *)v2 = off_978D60;
      *(_QWORD *)(v2 + 0x10) = 1LL;
      *(_QWORD *)(v2 + 0x18) = v2 + 0x20;
      if ( (unsigned __int8)v821 > 3u )
      {
        v1076 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x19A5);
        v1077 = *((_QWORD *)v1840 + 0x19A6);
        if ( v1076 )
        {
LABEL_1150:
          _InterlockedAdd(v1076 + 2, 1u);
          if ( !v1077 )
          {
LABEL_1162:
            if ( !v1076 )
              goto LABEL_2189;
            if ( _InterlockedSub(v1076 + 2, 1u) )
              goto LABEL_2189;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1076 + 0x10LL))(v1076);
            if ( _InterlockedSub(v1076 + 3, 1u) )
              goto LABEL_2189;
            v1073 = *(_QWORD *)v1076;
            v1074 = v1076;
LABEL_1166:
            (*(void (__fastcall **)(volatile signed __int32 *))(v1073 + 0x18))(v1074);
            if ( _InterlockedSub((volatile signed __int32 *)(v2 + 8), 1u) )
              goto LABEL_2193;
LABEL_2190:
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 0x10LL))(v2);
            if ( _InterlockedSub((volatile signed __int32 *)(v2 + 0xC), 1u) )
              goto LABEL_2193;
            v1718 = *(_QWORD *)v2;
            v1719 = *(double *)&v2;
            goto LABEL_2192;
          }
LABEL_1154:
          sub_374590(v2 + 0x20, v1077);
          if ( *((_BYTE *)v1840 + 0xD558) )
          {
            v1078 = *(volatile signed __int32 ***)(v1077 + 0x30);
            if ( (int)((*(_QWORD *)(v1077 + 0x38) - (_QWORD)v1078) >> 4) > 0 )
            {
              v1079 = 0LL;
              v1080 = 0LL;
              v1081 = *v1078;
              if ( *v1078 )
                goto LABEL_1159;
              while ( 1 )
              {
                ++v1080;
                v1082 = *(_QWORD *)(v1077 + 0x30);
                v1079 += 0x10LL;
                if ( v1080 >= (int)((unsigned __int64)(*(_QWORD *)(v1077 + 0x38) - v1082) >> 4) )
                  break;
                v1081 = *(volatile signed __int32 **)(v1082 + v1079);
                if ( v1081 )
                {
LABEL_1159:
                  _InterlockedAdd(v1081 + 2, 1u);
                  if ( !_InterlockedSub(v1081 + 2, 1u) )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1081 + 0x10LL))(v1081);
                    if ( !_InterlockedSub(v1081 + 3, 1u) )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1081 + 0x18LL))(v1081);
                  }
                }
              }
            }
          }
          goto LABEL_1162;
        }
      }
      else
      {
        v1075 = 4 * v821;
        v1076 = *(volatile signed __int32 **)&v1840[v1075 + 0x334E];
        v1077 = *(_QWORD *)&v1840[v1075 + 0x3350];
        if ( v1076 )
          goto LABEL_1150;
      }
      v1076 = 0LL;
      if ( !v1077 )
        goto LABEL_1162;
      goto LABEL_1154;
    case 0x64u:
      v779 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v780 = v779[*((_QWORD *)&v1847 + 1) + 1];
      v781 = v779[*((_QWORD *)&v1847 + 1)];
      v782 = v779[*((_QWORD *)&v1847 + 1) + 3];
      v783 = v779[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v779 + 5;
      v784 = (unsigned __int8)-v779[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v779 + 7;
      v785 = ((unsigned __int64)v779[*((_QWORD *)&v1847 + 1) + 5] << 8) | v779[*((_QWORD *)&v1847 + 1) + 6] ^ 0x80LL;
      ptr[0] = v779 + 9;
      v786 = v779[*((_QWORD *)&v1847 + 1) + 8];
      v787 = v779[*((_QWORD *)&v1847 + 1) + 7];
      v788 = 4 * v785;
      v789 = *(_QWORD **)(*(_QWORD *)&v1840[v788 + 0x35D0] + 0x3E8LL);
      if ( v789 )
        goto LABEL_2001;
      v1850.m128i_i64[0] = *(_QWORD *)&v1840[v788 + 0x35D0];
      LODWORD(v1851) = v787;
      v1852.m128i_i32[0] = v783;
      v1843 = v784;
      if ( p_memory_pool )
      {
        v790 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v790;
        v791 = (__int64 *)(v790 - 8);
        if ( v15 )
          v791 = p_memory_pool + 0x36;
        v792 = *v791;
        v793 = p_memory_pool[1];
        v15 = *p_memory_pool == v793;
        v794 = (unsigned int *)(v793 - 4);
        if ( v15 )
          v794 = (unsigned int *)(p_memory_pool + 0xC);
        v795 = *v794;
        v796 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v796;
        v797 = (unsigned int *)(v796 - 4);
        if ( v15 )
          v797 = (unsigned int *)(p_memory_pool + 0x43);
        v789 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v792 + 0x18LL))(
                           v792,
                           0x90LL,
                           v795,
                           0x10LL,
                           *v797);
        v798 = v1850.m128i_i64[0];
        if ( v789 )
        {
LABEL_767:
          sub_364C70(v789, v798 + 0x3B0);
          v799 = v798;
          v800 = *(void **)(v798 + 0x3E8);
          *(_QWORD *)(v799 + 0x3E8) = v789;
          if ( !v800 )
            goto LABEL_2000;
          v801 = *((_QWORD *)v800 + 9);
          if ( v801 && *((_QWORD *)v800 + 0xD) != v801 )
          {
            if ( p_memory_pool )
            {
              v802 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v802;
              v803 = (__int64 *)(v802 - 8);
              if ( v15 )
                v803 = p_memory_pool + 0x36;
              v804 = *v803;
              v805 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v805;
              v806 = (unsigned int *)(v805 - 4);
              if ( v15 )
                v806 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v804 + 0x28LL))(v804, v801, *v806);
              v807 = *(void **)v800;
              if ( !*(_QWORD *)v800 )
                goto LABEL_1993;
              goto LABEL_1984;
            }
            free(*((void **)v800 + 9));
          }
          v807 = *(void **)v800;
          if ( !*(_QWORD *)v800 )
            goto LABEL_1993;
LABEL_1984:
          if ( *((void **)v800 + 4) != v807 )
          {
            if ( p_memory_pool )
            {
              v1589 = p_memory_pool[0x23];
              v15 = p_memory_pool[0x22] == v1589;
              v1590 = (__int64 *)(v1589 - 8);
              if ( v15 )
                v1590 = p_memory_pool + 0x36;
              v1591 = *v1590;
              v1592 = p_memory_pool[0x38];
              v15 = p_memory_pool[0x37] == v1592;
              v1593 = (unsigned int *)(v1592 - 4);
              if ( v15 )
                v1593 = (unsigned int *)(p_memory_pool + 0x43);
              (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1591 + 0x28LL))(v1591, v807, *v1593);
              v1594 = p_memory_pool;
              if ( p_memory_pool )
                goto LABEL_1994;
              goto LABEL_1991;
            }
            free(v807);
          }
LABEL_1993:
          v1594 = p_memory_pool;
          if ( p_memory_pool )
          {
LABEL_1994:
            v1595 = v1594[0x23];
            v15 = v1594[0x22] == v1595;
            v1596 = (__int64 *)(v1595 - 8);
            if ( v15 )
              v1596 = v1594 + 0x36;
            v1597 = *v1596;
            v1598 = v1594[0x38];
            v15 = v1594[0x37] == v1598;
            v1599 = (unsigned int *)(v1598 - 4);
            v1600 = (unsigned int *)(v1594 + 0x43);
            if ( v15 )
              v1599 = v1600;
            (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1597 + 0x28LL))(v1597, v800, *v1599);
            goto LABEL_1999;
          }
LABEL_1991:
          free(v800);
LABEL_1999:
          v789 = *(_QWORD **)(v1850.m128i_i64[0] + 0x3E8);
LABEL_2000:
          LOBYTE(v784) = v1843;
          v783 = v1852.m128i_i32[0];
          v787 = LODWORD(v1851);
LABEL_2001:
          LODWORD(v2) = v786 << 8;
          *(_DWORD *)(*v789 + 4LL * (unsigned __int8)v784) = v783 | (v780 << 0x18) | (v781 << 0x10) | (v782 << 8);
          *(_DWORD *)(v789[9] + 4LL * (unsigned __int8)v784) = v787 | (__int16)v2;
          goto LABEL_2193;
        }
      }
      else
      {
        v789 = memalign(0x10uLL, 0x90uLL);
        v798 = v1850.m128i_i64[0];
        if ( v789 )
          goto LABEL_767;
      }
      v1144 = 0x90LL;
      goto LABEL_2390;
    case 0x65u:
      v743 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v744 = (unsigned __int16)__ROL2__(*(_WORD *)&v743[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v743 + 4;
      v745 = *(_WORD *)&v743[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v743 + 8;
      v746 = *(_DWORD *)&v743[*((_QWORD *)&v1847 + 1) + 4];
      if ( *(_DWORD *)(a1 + 0xCAA4) == (_DWORD)v744 )
      {
        v226 = *(volatile signed __int32 **)(a1 + 0xCAC0);
        v629 = *(_QWORD *)(a1 + 0xCAC8);
        if ( v226 )
          goto LABEL_732;
      }
      else
      {
        v883 = 0x10 * v744;
        v226 = *(volatile signed __int32 **)(a1 + v883 + 0x4AA0);
        v629 = *(_QWORD *)(a1 + v883 + 0x4AA8);
        if ( v226 )
        {
LABEL_732:
          _InterlockedAdd(v226 + 2, 1u);
          if ( !v629 )
            goto LABEL_902;
          goto LABEL_900;
        }
      }
      v226 = 0LL;
      if ( !v629 )
        goto LABEL_902;
LABEL_900:
      v873 = (unsigned __int16)__ROL2__(v745, 8);
      v884 = _byteswap_ulong(v746);
      v875 = (unsigned int)(v884 >> 0x10);
      v876 = (unsigned __int16)v884;
      v877 = v1840[0x837];
      v625 = 0LL;
      goto LABEL_901;
    case 0x66u:
      v124 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v125 = (v124[*((_QWORD *)&v1847 + 1) + 1] << 8) | v124[*((_QWORD *)&v1847 + 1)] ^ 0x80;
      *(_DWORD *)(a1 + 0xCF60) = v125;
      v126 = *(_QWORD *)(a1 + 0x80);
      v127 = *(_DWORD *)(v126 + 0x6C);
      v128 = *(_DWORD *)(v126 + 0x70);
      if ( (unsigned __int8)sub_3051D0(v125) )
        sub_266510(a1, LODWORD(qword_10207A0[2]) + 0x18 * v125, 0xFFFFFFFF, v127, v128, 0, 0);
      if ( !(unsigned __int8)sub_3051D0(v125) )
        goto LABEL_1488;
      v129 = qword_10207A0[2];
      v130 = *(_QWORD *)(v129 + 0x18LL * v125 + 8);
      if ( !v130 )
        goto LABEL_1488;
      v131 = *(_QWORD *)(v129 + 0x18LL * v125 + 0x10);
      v132 = v130 & 1;
      if ( v130 == 1 )
      {
        v133 = 0LL;
        goto LABEL_1485;
      }
      v1276 = v130 - v132;
      v1277 = v131 + 0x18;
      v133 = 0LL;
      v1278 = *(_QWORD *)(v131 + 8);
      if ( !v1278 )
        goto LABEL_1483;
      while ( 1 )
      {
        *(_QWORD *)(v1278 + 0x7C8) = 0LL;
        do
        {
LABEL_1483:
          if ( *(_QWORD *)v1277 )
            *(_QWORD *)(*(_QWORD *)v1277 + 0x7C8LL) = 0LL;
          v133 += 2LL;
          v1277 += 0x20LL;
          if ( v1276 == v133 )
          {
LABEL_1485:
            if ( v132 )
            {
              v1279 = *(_QWORD *)(v131 + 0x10 * v133 + 8);
              if ( v1279 )
                *(_QWORD *)(v1279 + 0x7C8) = 0LL;
            }
LABEL_1488:
            sub_125E20((__int64)dword_9D8E70, v1840[0x33D8]);
            *(_OWORD *)((char *)&loc_20F080 + (_QWORD)v1840) = xmmword_806230;
            *((_OWORD *)v1840 + 0x20F07) = xmmword_806230;
            *((_OWORD *)v1840 + 0x20F06) = xmmword_806230;
            *((_OWORD *)v1840 + 0x20F05) = xmmword_806230;
            *((_OWORD *)v1840 + 0x20F04) = xmmword_806230;
            *((_OWORD *)v1840 + 0x20F03) = xmmword_806230;
            v1840[0x83C24] = (unsigned int)&unk_1010101;
            v6 = ptr[1];
            ptr[1] = 0LL;
            if ( !v6 )
              goto LABEL_28;
            goto LABEL_18;
          }
          v1278 = *(_QWORD *)(v1277 - 0x10);
        }
        while ( !v1278 );
      }
    case 0x67u:
      v727 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v728 = (unsigned __int16)__ROL2__(*(_WORD *)&v727[*((_QWORD *)&v1847 + 1)], 8);
      sub_108600(v728);
      v729 = *(_DWORD *)(a1 + 0x20EE60);
      *(_DWORD *)(a1 + 0x20EE60) = v729 + 1;
      *(_DWORD *)(a1 + 4LL * (v729 & 0x1F) + 0x20EDE0) = v728 & 0x7FFF;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x68u:
      v711 = ptr[0]++;
      v712 = v711[*((_QWORD *)&v1847 + 1)];
      sub_27BC60(a1);
      if ( v712 == 1 )
      {
        dword_9FC160 = 0x18;
        tt_memmove_sub_136200((__int64)&xmmword_9FC510, (char *)qword_170A380[0], qword_170A380[1]);
        tt_memmove_sub_136200((__int64)&xmmword_9FC530, (char *)qword_170A3A0[0], qword_170A3A0[1]);
        v713 = &unk_170A3C0;
      }
      else
      {
        if ( v712 != 2 )
          goto LABEL_5;
        dword_9FC160 = 0x18;
        tt_memmove_sub_136200((__int64)&xmmword_9FC510, (char *)qword_170A320[0], qword_170A320[1]);
        tt_memmove_sub_136200((__int64)&xmmword_9FC530, (char *)qword_170A340[0], qword_170A340[1]);
        v713 = &unk_170A360;
      }
      tt_memmove_sub_136200((__int64)&xmmword_9FC550, *(char **)v713, *((_QWORD *)v713 + 1));
      goto LABEL_5;
    case 0x69u:
      v62 = 7LL;
LABEL_789:
      sub_27DEA0(a1, v62, v1846);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x6Au:
      v63 = *((_QWORD *)&v1847 + 1);
      v64 = (char *)ptr[0]++;
      *(_DWORD *)(a1 + 0x1103E8) = (unsigned __int8)-v64[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v64 + 2;
      *(_DWORD *)(a1 + 0x1103E4) = (unsigned __int8)v64[v63 + 1] ^ 0x80;
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x6Bu:
      v203 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v204 = v203[*((_QWORD *)&v1847 + 1) + 1];
      v205 = v203[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v203 + 3;
      v206 = v203[*((_QWORD *)&v1847 + 1) + 2];
      ptr[0] = v203 + 6;
      v207 = v203[*((_QWORD *)&v1847 + 1) + 5];
      v208 = v203[*((_QWORD *)&v1847 + 1) + 3];
      v209 = v203[*((_QWORD *)&v1847 + 1) + 4] + (unsigned __int64)(v208 & 7);
      ptr[0] = v203 + 8;
      if ( (unsigned int)v209 > 0x67 )
        goto LABEL_17;
      v210 = v207 + ((v208 >> 4) & 7);
      if ( (unsigned int)v210 > 0x67 )
        goto LABEL_17;
      v1852.m128i_i8[0] = v206;
      v211 = *(_WORD *)&v203[*((_QWORD *)&v1847 + 1) + 6];
      v212 = ((_DWORD)v210 << 7) | 0x40;
      v213 = ((_DWORD)v209 << 7) | 0x40;
      v214 = 0;
      if ( v213 <= 0x33FF && v212 <= 0x33FF )
      {
        v215 = v1840[0x32A8];
        if ( v215 <= 2 )
          v215 += (*(unsigned __int8 *)(qword_397ED18[2] + 0x68 * v210 + v209 + 0x2A40) >> 1) & 1;
        v216 = 0x69 * (0x69LL * v215 + (unsigned int)v210);
        v217 = qword_397ED00[2];
        v214 = (((*(_DWORD *)(v217 + 4 * (v216 + (unsigned int)v209))
                + *(_DWORD *)(v217 + 4 * (v216 + (unsigned int)v209 + 0x69))) << 6 >> 7)
              + ((*(_DWORD *)(v217 + 4 * (v216 + (unsigned int)v209 + 1))
                + *(_DWORD *)(v217 + 4 * (v216 + (unsigned int)v209 + 0x6A))) << 6 >> 7)) >> 1;
      }
      v1850.m128i_i32[0] = v205;
      if ( p_memory_pool )
      {
        v218 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v218;
        v219 = (__int64 *)(v218 - 8);
        if ( v15 )
          v219 = p_memory_pool + 0x36;
        v220 = *v219;
        v221 = p_memory_pool[1];
        v15 = *p_memory_pool == v221;
        v222 = (unsigned int *)(v221 - 4);
        if ( v15 )
          v222 = (unsigned int *)(p_memory_pool + 0xC);
        v223 = *v222;
        v224 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v224;
        v225 = (unsigned int *)(v224 - 4);
        if ( v15 )
          v225 = (unsigned int *)(p_memory_pool + 0x43);
        v226 = (volatile signed __int32 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v220 + 0x18LL))(
                                            v220,
                                            0x60LL,
                                            v223,
                                            8LL,
                                            *v225);
        if ( !v226 )
          goto LABEL_2387;
      }
      else
      {
        v226 = (volatile signed __int32 *)memalign(8uLL, 0x60uLL);
        if ( !v226 )
        {
LABEL_2387:
          sub_68A080(
            (__int64)"pMem",
            (__int64)aVarBambooHomeB,
            0x69u,
            0,
            (__int64)"Failed to allocate %llu bytes with alignment %llu",
            0x60LL,
            8LL);
          goto LABEL_2394;
        }
      }
      LODWORD(v2) = v214 - (unsigned __int8)(0x80 - v1852.m128i_i8[0]);
      sub_116A60(
        (_DWORD)v226 + 0x20,
        v1850.m128i_i32[0] + (v204 << 8),
        v1840[0x32A8],
        v212,
        v213,
        v2,
        (unsigned __int16)__ROL2__(v211, 8),
        v1840[0x837]);
      *((_QWORD *)v226 + 1) = 0x100000001LL;
      *(_QWORD *)v226 = off_978CA0;
      *((_QWORD *)v226 + 2) = 1LL;
      *((_QWORD *)v226 + 3) = v226 + 8;
      if ( p_memory_pool )
      {
        v1182 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1182;
        v1183 = (__int64 *)(v1182 - 8);
        if ( v15 )
          v1183 = p_memory_pool + 0x36;
        v1184 = *v1183;
        v1185 = p_memory_pool[1];
        v15 = *p_memory_pool == v1185;
        v1186 = (unsigned int *)(v1185 - 4);
        if ( v15 )
          v1186 = (unsigned int *)(p_memory_pool + 0xC);
        v1187 = *v1186;
        v1188 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1188;
        v1189 = (unsigned int *)(v1188 - 4);
        if ( v15 )
          v1189 = (unsigned int *)(p_memory_pool + 0x43);
        v1190 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1184
                                                                                                + 0x18LL))(
                            v1184,
                            0x20LL,
                            v1187,
                            0x10LL,
                            *v1189);
        LOBYTE(v2) = 1;
        v1191 = v1840;
        if ( !v1190 )
          goto LABEL_1871;
      }
      else
      {
        v1190 = memalign(0x10uLL, 0x20uLL);
        LOBYTE(v2) = 1;
        v1191 = v1840;
        if ( !v1190 )
        {
LABEL_1871:
          v1144 = 0x20LL;
          goto LABEL_2390;
        }
      }
      v1190[2] = v226;
      v1190[3] = v226 + 8;
      _InterlockedAdd(v226 + 2, 1u);
      *v1190 = v1191 + 0x17A82E;
      v1190[1] = *((_QWORD *)v1191 + 0xBD418);
      **((_QWORD **)v1191 + 0xBD418) = v1190;
      *((_QWORD *)v1191 + 0xBD418) = v1190;
      if ( !_InterlockedSub(v226 + 2, 1u) )
        goto LABEL_1694;
      goto LABEL_17;
    case 0x6Cu:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      *(_BYTE *)(a1 + 0xCE8F) = 1;
      v143 = *((_QWORD *)&v1847 + 1);
      v144 = (unsigned __int8 *)ptr[0]++;
      v145 = v144[*((_QWORD *)&v1847 + 1)];
      v1840[0x33AA] = v145;
      ptr[0] = v144 + 2;
      v146 = v144[v143 + 1];
      v1840[0x33AB] = v146;
      ptr[0] = v144 + 4;
      v147 = (unsigned __int16)__ROL2__(*(_WORD *)&v144[v143 + 2], 8);
      v1840[0x33AC] = v147;
      ptr[0] = v144 + 6;
      v148 = *(_WORD *)&v144[v143 + 4];
      ptr[0] = v144 + 7;
      v149 = v144[v143 + 6];
      v150 = ((_DWORD)v145 << 7) | 0x40;
      v151 = ((_DWORD)v146 << 7) | 0x40;
      v152 = 0;
      if ( v150 <= 0x33FF && v151 <= 0x33FF )
      {
        v153 = v1840[0x32A8];
        if ( v153 >= 3 )
        {
          v154 = v146;
        }
        else
        {
          v154 = (unsigned int)v146;
          v153 += (*(unsigned __int8 *)(qword_397ED18[2] + (unsigned int)v146 + 0x68 * v145 + 0x2A40) >> 1) & 1;
        }
        v1111 = 0x69LL * v153;
        v1112 = qword_397ED00[2];
        v152 = (((*(_DWORD *)(v1112 + 4 * (0x69 * (v1111 + (unsigned int)v145) + v154))
                + *(_DWORD *)(v1112 + 4 * (0x69 * (v145 + v1111) + v154 + 0x69))) << 6 >> 7)
              + ((*(_DWORD *)(v1112 + 4 * (0x69 * (v1111 + (unsigned int)v145) + v146 + 1))
                + *(_DWORD *)(v1112 + 4 * (v146 + 0x69 * (v145 + v1111) + 0x6A))) << 6 >> 7)) >> 1;
      }
      v1113 = v150 - v1840[0x33BA];
      v1114 = v151 - v1840[0x33BC];
      v1115 = (int)(atan2((double)(int)(v152 - v147 - v1840[0x33BB]), sqrt((double)(v1113 * v1113 + v1114 * v1114)))
                  * 325.9490051269531) & 0x7FF;
      v1116 = 0x80;
      if ( v1115 > 0x80 )
        v1116 = v1115;
      v1117 = 0x17F;
      if ( v1116 < 0x180 )
        v1117 = v1116;
      v1850.m128i_i32[0] = v1117;
      v1118 = (int)(atan2((double)v1113, (double)v1114) * -325.9490051269531) & 0x7FF;
      v1119 = v1840[0x33BE];
      v1120 = v1119 - v1118;
      if ( v1119 - v1118 < 1 )
        v1120 = v1118 - v1119;
      if ( v1120 >= 0x401 )
        v1118 = ((v1118 < v1119) << 0xC) + v1118 - 0x800;
      if ( p_memory_pool )
      {
        v1121 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1121;
        v1122 = (__int64 *)(v1121 - 8);
        if ( v15 )
          v1122 = p_memory_pool + 0x36;
        v1123 = *v1122;
        v1124 = p_memory_pool[1];
        v15 = *p_memory_pool == v1124;
        v1125 = (unsigned int *)(v1124 - 4);
        if ( v15 )
          v1125 = (unsigned int *)(p_memory_pool + 0xC);
        v1126 = *v1125;
        v1127 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1127;
        v1128 = (unsigned int *)(v1127 - 4);
        if ( v15 )
          v1128 = (unsigned int *)(p_memory_pool + 0x43);
        v1129 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1123
                                                                                                + 0x18LL))(
                            v1123,
                            0x28LL,
                            v1126,
                            0x10LL,
                            *v1128);
        if ( !v1129 )
          goto LABEL_1267;
      }
      else
      {
        v1129 = memalign(0x10uLL, 0x28uLL);
        if ( !v1129 )
          goto LABEL_1267;
      }
      v1130 = (unsigned __int16)__ROL2__(v148, 8);
      LODWORD(v2) = v1840[0x33BD];
      v1129[1] = (unsigned __int16)v1130;
      v1131 = v149;
      if ( v149 >= 0x1Cu )
        v1131 = 0;
      v1132 = v1131;
      *((_DWORD *)v1129 + 6) = v1131;
      v1852.m128i_i64[0] = sub_290700(0LL);
      v1129[2] = v1852.m128i_i64[0];
      *v1129 = off_977C98;
      *((_DWORD *)v1129 + 7) = v2;
      *((_DWORD *)v1129 + 8) = v1850.m128i_i32[0];
      v1133 = *((_QWORD *)v1840 + 0x19DB);
      *((_QWORD *)v1840 + 0x19DB) = v1129;
      if ( v1133 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1133 + 8LL))(v1133, (unsigned __int16)v1130);
      LOBYTE(v2) = 1;
      if ( p_memory_pool )
      {
        v1134 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v1134;
        v1135 = (__int64 *)(v1134 - 8);
        if ( v15 )
          v1135 = p_memory_pool + 0x36;
        v1136 = *v1135;
        v1137 = p_memory_pool[1];
        v15 = *p_memory_pool == v1137;
        v1138 = (unsigned int *)(v1137 - 4);
        if ( v15 )
          v1138 = (unsigned int *)(p_memory_pool + 0xC);
        v1139 = *v1138;
        v1140 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v1140;
        v1141 = (unsigned int *)(v1140 - 4);
        if ( v15 )
          v1141 = (unsigned int *)(p_memory_pool + 0x43);
        v897 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1136
                                                                                               + 0x18LL))(
                           v1136,
                           0x28LL,
                           v1139,
                           0x10LL,
                           *v1141);
        if ( v897 )
          goto LABEL_1263;
      }
      else
      {
        v897 = memalign(0x10uLL, 0x28uLL);
        if ( v897 )
        {
LABEL_1263:
          v914 = v1840;
          v1142 = v1840[0x33BE];
          v897[2] = v1130;
          v897[3] = 0;
          v897[6] = v1132;
          *((_QWORD *)v897 + 2) = v1852.m128i_i64[0];
          *(_QWORD *)v897 = off_977C98;
          v897[7] = v1142;
          v897[8] = v1118;
LABEL_1264:
          v1143 = *((_QWORD *)v914 + 0x19DC);
          *((_QWORD *)v914 + 0x19DC) = v897;
          if ( !v1143 )
            goto LABEL_17;
          goto LABEL_1540;
        }
      }
      goto LABEL_1267;
    case 0x6Du:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      *(_BYTE *)(a1 + 0xCE8F) = 1;
      v46 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v47 = __ROL2__(*(_WORD *)&v46[*((_QWORD *)&v1847 + 1)], 8);
      ptr[0] = v46 + 4;
      v48 = *(unsigned __int16 *)&v46[*((_QWORD *)&v1847 + 1) + 2];
      LOWORD(v48) = __ROL2__(v48, 8);
      v49 = (*(_DWORD *)(a1 + 0xCEF4) + v48) & 0x7EB;
      v50 = 0x80;
      if ( v49 > 0x80 )
        v50 = v49;
      v51 = 0x17F;
      if ( v50 < 0x180 )
        v51 = v50;
      v1850.m128i_i32[0] = v1840[0x33BE] + v47;
      ptr[0] = v46 + 6;
      v52 = *(_WORD *)&v46[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v46 + 7;
      v1852.m128i_i8[0] = v46[*((_QWORD *)&v1847 + 1) + 6];
      if ( p_memory_pool )
      {
        v53 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v53;
        v54 = (__int64 *)(v53 - 8);
        if ( v15 )
          v54 = p_memory_pool + 0x36;
        v55 = *v54;
        v56 = p_memory_pool[1];
        v15 = *p_memory_pool == v56;
        v57 = (unsigned int *)(v56 - 4);
        if ( v15 )
          v57 = (unsigned int *)(p_memory_pool + 0xC);
        v58 = *v57;
        v59 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v59;
        v60 = (unsigned int *)(v59 - 4);
        if ( v15 )
          v60 = (unsigned int *)(p_memory_pool + 0x43);
        v61 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v55 + 0x18LL))(
                          v55,
                          0x28LL,
                          v58,
                          0x10LL,
                          *v60);
        if ( !v61 )
          goto LABEL_1267;
      }
      else
      {
        v61 = memalign(0x10uLL, 0x28uLL);
        if ( !v61 )
          goto LABEL_1267;
      }
      v885 = (unsigned __int16)__ROL2__(v52, 8);
      LODWORD(v2) = v1840[0x33BD];
      v61[1] = v885;
      v904 = v1852.m128i_i8[0];
      if ( v1852.m128i_i8[0] >= 0x1Cu )
        v904 = 0;
      v887 = v904;
      *((_DWORD *)v61 + 6) = v904;
      v1852.m128i_i64[0] = sub_290700(0LL);
      v61[2] = v1852.m128i_i64[0];
      *v61 = off_977C98;
      *((_DWORD *)v61 + 7) = v2;
      *((_DWORD *)v61 + 8) = v51;
      v905 = *((_QWORD *)v1840 + 0x19DB);
      *((_QWORD *)v1840 + 0x19DB) = v61;
      if ( v905 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v905 + 8LL))(v905, (unsigned int)v885);
      if ( p_memory_pool )
      {
        v906 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v906;
        v907 = (__int64 *)(v906 - 8);
        if ( v15 )
          v907 = p_memory_pool + 0x36;
        v908 = *v907;
        v909 = p_memory_pool[1];
        v15 = *p_memory_pool == v909;
        v910 = (unsigned int *)(v909 - 4);
        if ( v15 )
          v910 = (unsigned int *)(p_memory_pool + 0xC);
        v911 = *v910;
        v912 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v912;
        v913 = (unsigned int *)(v912 - 4);
        if ( v15 )
          v913 = (unsigned int *)(p_memory_pool + 0x43);
        v897 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v908 + 0x18LL))(
                           v908,
                           0x28LL,
                           v911,
                           0x10LL,
                           *v913);
        LOBYTE(v2) = 1;
        if ( !v897 )
          goto LABEL_1267;
        goto LABEL_945;
      }
      v897 = memalign(0x10uLL, 0x28uLL);
      LOBYTE(v2) = 1;
      if ( v897 )
      {
LABEL_945:
        v914 = v1840;
        v915 = v1840[0x33BE];
        v897[2] = v885;
        v897[3] = 0;
        v897[6] = v887;
        *((_QWORD *)v897 + 2) = v1852.m128i_i64[0];
        *(_QWORD *)v897 = off_977C98;
        v897[7] = v915;
        v897[8] = v1850.m128i_i32[0];
        goto LABEL_1264;
      }
      goto LABEL_1267;
    case 0x6Eu:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      *(_BYTE *)(a1 + 0xCE8F) = 1;
      v24 = ptr[0];
      ptr[0] = (char *)ptr[0] + 2;
      v25 = (unsigned __int16)__ROL2__(*(_WORD *)&v24[*((_QWORD *)&v1847 + 1)] & 0xEB07, 8);
      v26 = *(_DWORD *)(a1 + 0xCEF8);
      v27 = v26 - v25;
      if ( v26 - v25 < 1 )
        v27 = v25 - v26;
      if ( v27 >= 0x401 )
        v25 |= ((v26 > v25) << 0xC) - 0x800;
      v1850.m128i_i32[0] = v25;
      ptr[0] = v24 + 4;
      v28 = (unsigned __int16)__ROL2__(*(_WORD *)&v24[*((_QWORD *)&v1847 + 1) + 2] & 0xEB07, 8);
      v29 = 0x80;
      if ( (unsigned __int16)v28 > 0x80u )
        v29 = v28;
      v30 = 0x17F;
      if ( v29 < 0x180 )
        v30 = v29;
      ptr[0] = v24 + 6;
      v31 = *(_WORD *)&v24[*((_QWORD *)&v1847 + 1) + 4];
      ptr[0] = v24 + 7;
      v1852.m128i_i8[0] = v24[*((_QWORD *)&v1847 + 1) + 6];
      if ( p_memory_pool )
      {
        v32 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v32;
        v33 = (__int64 *)(v32 - 8);
        if ( v15 )
          v33 = p_memory_pool + 0x36;
        v34 = *v33;
        v35 = p_memory_pool[1];
        v15 = *p_memory_pool == v35;
        v36 = (unsigned int *)(v35 - 4);
        if ( v15 )
          v36 = (unsigned int *)(p_memory_pool + 0xC);
        v37 = *v36;
        v38 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v38;
        v39 = (unsigned int *)(v38 - 4);
        if ( v15 )
          v39 = (unsigned int *)(p_memory_pool + 0x43);
        v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v34 + 0x18LL))(
                          v34,
                          0x28LL,
                          v37,
                          0x10LL,
                          *v39);
        if ( !v40 )
          goto LABEL_1267;
      }
      else
      {
        v40 = memalign(0x10uLL, 0x28uLL);
        if ( !v40 )
        {
LABEL_1267:
          v1144 = 0x28LL;
          goto LABEL_2390;
        }
      }
      v885 = (unsigned __int16)__ROL2__(v31, 8);
      LODWORD(v2) = v1840[0x33BD];
      v40[1] = v885;
      v886 = v1852.m128i_i8[0];
      if ( v1852.m128i_i8[0] >= 0x1Cu )
        v886 = 0;
      v887 = v886;
      *((_DWORD *)v40 + 6) = v886;
      v1852.m128i_i64[0] = sub_290700(0LL);
      v40[2] = v1852.m128i_i64[0];
      *v40 = off_977C98;
      *((_DWORD *)v40 + 7) = v2;
      *((_DWORD *)v40 + 8) = v30;
      v888 = *((_QWORD *)v1840 + 0x19DB);
      *((_QWORD *)v1840 + 0x19DB) = v40;
      if ( v888 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v888 + 8LL))(v888, (unsigned int)v885);
      LOBYTE(v2) = 1;
      if ( p_memory_pool )
      {
        v889 = p_memory_pool[0x23];
        v15 = p_memory_pool[0x22] == v889;
        v890 = (__int64 *)(v889 - 8);
        if ( v15 )
          v890 = p_memory_pool + 0x36;
        v891 = *v890;
        v892 = p_memory_pool[1];
        v15 = *p_memory_pool == v892;
        v893 = (unsigned int *)(v892 - 4);
        if ( v15 )
          v893 = (unsigned int *)(p_memory_pool + 0xC);
        v894 = *v893;
        v895 = p_memory_pool[0x38];
        v15 = p_memory_pool[0x37] == v895;
        v896 = (unsigned int *)(v895 - 4);
        if ( v15 )
          v896 = (unsigned int *)(p_memory_pool + 0x43);
        v897 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v891 + 0x18LL))(
                           v891,
                           0x28LL,
                           v894,
                           0x10LL,
                           *v896);
        if ( !v897 )
          goto LABEL_1267;
      }
      else
      {
        v897 = memalign(0x10uLL, 0x28uLL);
        if ( !v897 )
          goto LABEL_1267;
      }
      goto LABEL_945;
    case 0x6Fu:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      *(_BYTE *)(a1 + 0xCE8E) = 1;
      v672 = *((_QWORD *)&v1847 + 1);
      v673 = (unsigned __int8 *)ptr[0]++;
      v674 = v673[*((_QWORD *)&v1847 + 1)];
      *(_DWORD *)(a1 + 0xCE94) = v674;
      ptr[0] = v673 + 2;
      v675 = v673[v672 + 1];
      *(_DWORD *)(a1 + 0xCE98) = v675;
      ptr[0] = v673 + 4;
      v676 = __ROL2__(*(_WORD *)&v673[v672 + 2], 8);
      ptr[0] = v673 + 6;
      v677 = *(_WORD *)&v673[v672 + 4];
      ptr[0] = v673 + 7;
      v678 = v1840;
      v679 = ((_DWORD)v674 << 7) | 0x40;
      v680 = ((_DWORD)v675 << 7) | 0x40;
      v15 = v673[v672 + 6] == 1;
      *((_BYTE *)v1840 + 0xCE90) = v15;
      ptr[0] = v673 + 8;
      v1852.m128i_i8[0] = v673[v672 + 7];
      if ( v15 )
      {
        LODWORD(v1851) = v1840[0x33BB];
        v681 = 0;
        if ( v679 <= 0x33FF && v680 <= 0x33FF )
        {
          v682 = v1840[0x32A8];
          if ( v682 >= 3 )
          {
            v683 = v675;
          }
          else
          {
            v683 = (unsigned int)v675;
            v682 += (*(unsigned __int8 *)(qword_397ED18[2] + (unsigned int)v675 + 0x68 * v674 + 0x2A40) >> 1) & 1;
          }
          v1345 = 0x69LL * v682;
          v1346 = qword_397ED00[2];
          v681 = (((*(_DWORD *)(v1346 + 4 * (0x69 * (v1345 + (unsigned int)v674) + v683))
                  + *(_DWORD *)(v1346 + 4 * (0x69 * (v674 + v1345) + v683 + 0x69))) << 6 >> 7)
                + ((*(_DWORD *)(v1346 + 4 * (v675 + 0x69 * (v1345 + (unsigned int)v674) + 1))
                  + *(_DWORD *)(v1346 + 4 * (0x69 * (v674 + v1345) + v675 + 0x6A))) << 6 >> 7)) >> 1;
        }
        v1850.m128i_i32[0] = v681 - v676;
        v1343 = p_memory_pool;
        if ( p_memory_pool )
          goto LABEL_1557;
      }
      else
      {
        v1850.m128i_i32[0] = v676;
        v878 = v1840[0x33BC];
        v879 = 0;
        if ( v878 <= 0x33FF )
        {
          v880 = v1840[0x33BA];
          if ( v880 <= 0x33FF && (v880 | v878) >= 0 )
          {
            v881 = v1840[0x32A8];
            v882 = v880 >> 7;
            if ( v881 < 3 )
              v881 += (*(unsigned __int8 *)(qword_397ED18[2] + (v878 >> 7) + 0x68LL * (v882 + 0x68)) >> 1) & 1;
            v1340 = v1840[0x33BA] & 0x7F;
            v1341 = 0x69 * (0x69LL * v881 + v882);
            v1342 = qword_397ED00[2];
            v879 = ((((0x80 - v1340) * *(_DWORD *)(v1342 + 4 * (v1341 + (v878 >> 7)))
                    + v1340 * *(_DWORD *)(v1342 + 4 * (v1341 + (v878 >> 7) + 0x69))) >> 7)
                  * (0x80 - (v878 & 0x7F))
                  + (v878 & 0x7F)
                  * ((*(_DWORD *)(v1342 + 4 * (v1341 + (v878 >> 7) + 1)) * (0x80 - v1340)
                    + *(_DWORD *)(v1342 + 4 * ((v878 >> 7) + v1341 + 0x6A)) * v1340) >> 7)) >> 7;
            v678 = v1840;
          }
        }
        LODWORD(v1851) = v879 - v678[0x33BB];
        v1343 = p_memory_pool;
        if ( p_memory_pool )
        {
LABEL_1557:
          v1347 = v1343[0x23];
          v15 = v1343[0x22] == v1347;
          v1348 = (__int64 *)(v1347 - 8);
          if ( v15 )
            v1348 = v1343 + 0x36;
          v1349 = *v1348;
          v1350 = v1343[1];
          v15 = *v1343 == v1350;
          v1351 = (unsigned int *)(v1350 - 4);
          if ( v15 )
            v1351 = (unsigned int *)(v1343 + 0xC);
          v1352 = *v1351;
          v1353 = v1343[0x38];
          v15 = v1343[0x37] == v1353;
          v1354 = (unsigned int *)(v1353 - 4);
          v1355 = (unsigned int *)(v1343 + 0x43);
          if ( v15 )
            v1354 = v1355;
          v1344 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1349
                                                                                                  + 0x18LL))(
                              v1349,
                              0x38LL,
                              v1352,
                              0x10LL,
                              *v1354);
          if ( v1344 )
            goto LABEL_1564;
          goto LABEL_1553;
        }
      }
      v1344 = memalign(0x10uLL, 0x38uLL);
      if ( v1344 )
      {
LABEL_1564:
        v1356 = (unsigned __int16)__ROL2__(v677, 8);
        LODWORD(v2) = v678[0x33BA];
        v1357 = v678[0x33BC];
        v1344[1] = v1356;
        v1358 = v1852.m128i_i8[0];
        if ( v1852.m128i_i8[0] >= 0x1Cu )
          v1358 = 0;
        *((_DWORD *)v1344 + 6) = v1358;
        *((double *)v1344 + 2) = sub_290700(0LL);
        *v1344 = off_977CB8;
        *((_DWORD *)v1344 + 9) = v2;
        *((_DWORD *)v1344 + 0xA) = v1357;
        *((_DWORD *)v1344 + 7) = LODWORD(v1851);
        *((_DWORD *)v1344 + 0xB) = v679;
        *((_DWORD *)v1344 + 0xC) = v680;
        *((_DWORD *)v1344 + 8) = v1850.m128i_i32[0];
        v1359 = *((_QWORD *)v678 + 0x19DA);
        *((_QWORD *)v678 + 0x19DA) = v1344;
        if ( v1359 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v1359 + 8LL))(v1359);
        goto LABEL_2193;
      }
LABEL_1553:
      v1144 = 0x38LL;
      goto LABEL_2390;
    case 0x70u:
      *(_WORD *)(a1 + 0xCE8C) = 0x100;
      *(_BYTE *)(a1 + 0xCE8E) = 1;
      v611 = *((_QWORD *)&v1847 + 1);
      v612 = (unsigned __int8 *)ptr[0]++;
      v613 = v612[*((_QWORD *)&v1847 + 1)];
      *(_DWORD *)(a1 + 0xCE94) = v613;
      ptr[0] = v612 + 2;
      v614 = v612[v611 + 1];
      *(_DWORD *)(a1 + 0xCE98) = v614;
      ptr[0] = v612 + 4;
      v615 = __ROL2__(*(_WORD *)&v612[v611 + 2], 8);
      ptr[0] = v612 + 5;
      v616 = v612[v611 + 4];
      ptr[0] = v612 + 6;
      v617 = v612[v611 + 5];
      ptr[0] = v612 + 8;
      v618 = *(_WORD *)&v612[v611 + 6];
      ptr[0] = v612 + 9;
      v619 = v1840;
      v15 = v612[v611 + 8] == 1;
      *((_BYTE *)v1840 + 0xCE90) = v15;
      v620 = v615;
      ptr[0] = v612 + 0xA;
      LOBYTE(v1851) = v612[v611 + 9];
      v1850.m128i_i64[0] = ((_DWORD)v613 << 7) | 0x40u;
      v1852.m128i_i64[0] = ((_DWORD)v614 << 7) | 0x40u;
      if ( v15 )
      {
        LODWORD(v1853) = v1840[0x33BB];
        v621 = 0;
        if ( (((_DWORD)v613 << 7) | 0x40u) <= 0x33FF && (((_DWORD)v614 << 7) | 0x40u) <= 0x33FF )
        {
          v622 = v1840[0x32A8];
          if ( v622 >= 3 )
          {
            v623 = v614;
          }
          else
          {
            v623 = (unsigned int)v614;
            v622 += (*(unsigned __int8 *)(qword_397ED18[2] + (unsigned int)v614 + 0x68 * v613 + 0x2A40) >> 1) & 1;
          }
          v1300 = 0x69LL * v622;
          v1301 = qword_397ED00[2];
          v621 = (((*(_DWORD *)(v1301 + 4 * (0x69 * (v1300 + (unsigned int)v613) + v623))
                  + *(_DWORD *)(v1301 + 4 * (0x69 * (v613 + v1300) + v623 + 0x69))) << 6 >> 7)
                + ((*(_DWORD *)(v1301 + 4 * (v614 + 0x69 * (v1300 + (unsigned int)v613) + 1))
                  + *(_DWORD *)(v1301 + 4 * (0x69 * (v613 + v1300) + v614 + 0x6A))) << 6 >> 7)) >> 1;
          v620 = v615;
        }
        v620 = v621 - v620;
        v1298 = p_memory_pool;
        if ( p_memory_pool )
          goto LABEL_1523;
      }
      else
      {
        v866 = v1840[0x33BC];
        v867 = 0;
        if ( v866 <= 0x33FF )
        {
          v868 = v1840[0x33BA];
          if ( v868 <= 0x33FF && (v868 | v866) >= 0 )
          {
            v869 = v1840[0x32A8];
            v870 = v868 >> 7;
            v871 = v866 >> 7;
            if ( v869 < 3 )
              v869 += (*(unsigned __int8 *)(qword_397ED18[2] + v871 + 0x68LL * (v870 + 0x68)) >> 1) & 1;
            v1295 = v1840[0x33BA] & 0x7F;
            v1296 = 0x69 * (0x69LL * v869 + v870);
            v1297 = qword_397ED00[2];
            v867 = ((((0x80 - v1295) * *(_DWORD *)(v1297 + 4 * (v1296 + (v866 >> 7)))
                    + v1295 * *(_DWORD *)(v1297 + 4 * (v1296 + (v866 >> 7) + 0x69))) >> 7)
                  * (0x80 - (v866 & 0x7F))
                  + (v866 & 0x7F)
                  * ((*(_DWORD *)(v1297 + 4 * (v1296 + v871 + 1)) * (0x80 - v1295)
                    + *(_DWORD *)(v1297 + 4 * (v871 + v1296 + 0x6A)) * v1295) >> 7)) >> 7;
            v619 = v1840;
          }
        }
        LODWORD(v1853) = v867 - v619[0x33BB];
        v1298 = p_memory_pool;
        if ( p_memory_pool )
        {
LABEL_1523:
          v1302 = v1298[0x23];
          v15 = v1298[0x22] == v1302;
          v1303 = (__int64 *)(v1302 - 8);
          if ( v15 )
            v1303 = v1298 + 0x36;
          v1304 = *v1303;
          v1305 = v1298[1];
          v15 = *v1298 == v1305;
          v1306 = (unsigned int *)(v1305 - 4);
          if ( v15 )
            v1306 = (unsigned int *)(v1298 + 0xC);
          v1307 = *v1306;
          v1308 = v1298[0x38];
          v15 = v1298[0x37] == v1308;
          v1309 = (unsigned int *)(v1308 - 4);
          v1310 = (unsigned int *)(v1298 + 0x43);
          if ( v15 )
            v1309 = v1310;
          v1299 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v1304
                                                                                                + 0x18LL))(
                            v1304,
                            0x50LL,
                            v1307,
                            0x10LL,
                            *v1309);
          if ( !v1299 )
            goto LABEL_1519;
LABEL_1530:
          v1311 = (v616 << 7) | 0x40;
          v1312 = (v617 << 7) | 0x40;
          v1313 = (unsigned __int16)__ROL2__(v618, 8);
          LODWORD(v2) = v1840[0x33BA];
          v1314 = v1840[0x33BC];
          *((_QWORD *)v1299 + 1) = v1313;
          v1315 = LOBYTE(v1851);
          if ( LOBYTE(v1851) >= 0x1Cu )
            v1315 = 0;
          *((_DWORD *)v1299 + 6) = v1315;
          *((double *)v1299 + 2) = sub_290700(0LL);
          *(_QWORD *)v1299 = off_977C60;
          *(_OWORD *)(v1299 + 0x28) = 0LL;
          *(_OWORD *)(v1299 + 0x38) = 0LL;
          *((_QWORD *)v1299 + 9) = 0LL;
          *((_DWORD *)v1299 + 7) = LODWORD(v1853);
          *((_DWORD *)v1299 + 8) = v620;
          v1316 = v1311 - v2;
          v1317 = v1852.m128i_i32[0];
          v1318 = v1850.m128i_i32[0];
          v1319 = v1312 - v1314;
          if ( (v1852.m128i_i32[0] - v1312) * (v1311 - (_DWORD)v2) == (v1850.m128i_i32[0] - v1311) * (v1312 - v1314) )
          {
            *((double *)v1299 + 5) = (double)v1850.m128i_i32[0];
            *((double *)v1299 + 6) = (double)v1317;
            LOBYTE(v2) = 1;
          }
          else
          {
            v1320 = v1312 + v1852.m128i_i32[0];
            v1321 = (float)((int)v2 + v1311) * 0.5;
            v1322 = (float)(v1314 + v1312) * 0.5;
            v1323 = -(double)(v1850.m128i_i32[0] - v1311) / (double)(v1852.m128i_i32[0] - v1312);
            v1324 = (((float)(v1312 + v1852.m128i_i32[0]) - (float)(v1311 + v1850.m128i_i32[0]) * v1323) * 0.5
                   - v1322
                   + -(double)v1316 / (double)v1319 * v1321)
                  / (-(double)v1316 / (double)v1319 - v1323);
            *((double *)v1299 + 5) = v1324;
            v1325 = (v1324 - v1321) * (-(double)v1316 / (double)v1319) + v1322;
            *((double *)v1299 + 6) = v1325;
            v1326 = v1324;
            v1851 = (((float)v1320 - (float)(v1311 + v1318) * v1323) * 0.5
                   - v1322
                   + -(double)v1316 / (double)v1319 * v1321)
                  / (-(double)v1316 / (double)v1319 - v1323);
            v1853 = v1325;
            *((double *)v1299 + 7) = sqrt(
                                       (v1325 - (double)v1314) * (v1325 - (double)v1314)
                                     + (v1851 - (double)(int)v2) * (v1851 - (double)(int)v2));
            v1327 = (double)v1314 - v1325;
            v1328 = v1318;
            v1329 = v1317;
            v1864 = atan2(v1327, (double)(int)v2 - v1326);
            *((double *)v1299 + 8) = v1864;
            v1863 = atan2((double)v1312 - v1853, (double)v1311 - v1851);
            v1330 = atan2((double)v1329 - v1853, (double)v1328 - v1851);
            v1331 = v1863;
            v1332 = v1864;
            *((double *)v1299 + 9) = v1330;
            LOBYTE(v2) = 1;
            if ( (v1332 > v1331 || v1331 > v1330) && (v1331 > v1332 || v1330 > v1331) )
              *((double *)v1299 + 9) = v1330 + dbl_806BC0[v1332 - v1330 > 0.0];
          }
          v1143 = *((_QWORD *)v1840 + 0x19DA);
          *((_QWORD *)v1840 + 0x19DA) = v1299;
          if ( !v1143 )
            goto LABEL_17;
LABEL_1540:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v1143 + 8LL))(v1143);
          v6 = ptr[1];
          ptr[1] = 0LL;
          if ( !v6 )
            goto LABEL_28;
          goto LABEL_18;
        }
      }
      v1299 = (char *)memalign(0x10uLL, 0x50uLL);
      if ( !v1299 )
      {
LABEL_1519:
        v1144 = 0x50LL;
        goto LABEL_2390;
      }
      goto LABEL_1530;
    case 0x71u:
      v155 = (unsigned __int8 *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v156 = (v155[*((_QWORD *)&v1847 + 1) + 3] << 0x18) | (v155[*((_QWORD *)&v1847 + 1) + 2] << 0x10);
      v157 = v156 | (v155[*((_QWORD *)&v1847 + 1) + 1] << 8) | v155[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v155 + 5;
      v158 = v155[*((_QWORD *)&v1847 + 1) + 4];
      v159 = qword_1026F30;
      if ( v157 < 0 )
        goto LABEL_168;
      v160 = (unsigned int)(v156 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v160 )
        goto LABEL_168;
      v161 = (unsigned __int16)v157;
      v2 = qword_10207A0[2];
      v162 = *(_QWORD *)(v2 + 0x18LL * (int)v160 + 8);
      if ( !v162 )
        goto LABEL_165;
      if ( v162 <= v161 )
        goto LABEL_168;
      v163 = *(_QWORD *)(v2 + 0x18LL * (int)v160 + 0x10);
      if ( *(_QWORD *)(v163 + 0x10 * v161 + 8) )
        goto LABEL_167;
LABEL_165:
      if ( (unsigned __int8)sub_3051D0(v160) )
      {
        v163 = *(_QWORD *)(v2 + 0x18LL * (int)v160 + 0x10);
        v161 = (unsigned int)v161;
LABEL_167:
        v159 = (_QWORD *)(v163 + 0x10 * v161);
      }
LABEL_168:
      sub_302F00(v159[1], v158 == 1);
      v101 = v159[1];
      if ( !v101 )
        goto LABEL_2193;
      goto LABEL_1133;
    case 0x72u:
      v134 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v135 = _byteswap_ulong(*(_DWORD *)&v134[*((_QWORD *)&v1847 + 1)]);
      ptr[0] = v134 + 8;
      v136 = ((unsigned __int8)v134[*((_QWORD *)&v1847 + 1) + 7] << 0x18) | ((unsigned __int8)v134[*((_QWORD *)&v1847 + 1)
                                                                                                 + 6] << 0x10);
      v137 = v136 | ((unsigned __int8)v134[*((_QWORD *)&v1847 + 1) + 5] << 8) | (unsigned __int8)v134[*((_QWORD *)&v1847 + 1) + 4];
      v138 = qword_1026F30;
      if ( v137 < 0 )
        goto LABEL_154;
      v139 = (unsigned int)(v136 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v139 )
        goto LABEL_154;
      v140 = (unsigned __int16)v137;
      v2 = qword_10207A0[2];
      v141 = *(_QWORD *)(v2 + 0x18LL * (int)v139 + 8);
      if ( !v141 )
        goto LABEL_151;
      if ( v141 <= v140 )
        goto LABEL_154;
      v142 = *(_QWORD *)(v2 + 0x18LL * (int)v139 + 0x10);
      if ( *(_QWORD *)(v142 + 0x10 * v140 + 8) )
        goto LABEL_153;
LABEL_151:
      if ( (unsigned __int8)sub_3051D0(v139) )
      {
        v142 = *(_QWORD *)(v2 + 0x18LL * (int)v139 + 0x10);
        v140 = (unsigned int)v140;
LABEL_153:
        v138 = (_QWORD *)(v142 + 0x10 * v140);
      }
LABEL_154:
      sub_3031A0(v138[1], v135);
      v101 = v138[1];
      if ( !v101 )
        goto LABEL_2193;
      goto LABEL_1133;
    case 0x73u:
      v595 = (unsigned __int8 *)ptr[0]++;
      v596 = v595[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v595 + 2;
      v597 = 0x80 - v595[*((_QWORD *)&v1847 + 1) + 1];
      ptr[0] = v595 + 6;
      v598 = (v595[*((_QWORD *)&v1847 + 1) + 4] << 0x18) | (v595[*((_QWORD *)&v1847 + 1) + 5] << 0x10);
      v599 = v598 | (v595[*((_QWORD *)&v1847 + 1) + 2] << 8) | v595[*((_QWORD *)&v1847 + 1) + 3];
      v600 = qword_1026F30;
      if ( v599 < 0 )
        goto LABEL_589;
      v601 = (unsigned int)(v598 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v601 )
        goto LABEL_589;
      v2 = (unsigned __int16)v599;
      v602 = qword_10207A0[2];
      v603 = *(_QWORD *)(v602 + 0x18LL * (int)v601 + 8);
      if ( !v603 )
        goto LABEL_586;
      if ( v603 <= v2 )
        goto LABEL_589;
      v604 = *(_QWORD *)(v602 + 0x18LL * (int)v601 + 0x10);
      if ( *(_QWORD *)(v604 + 0x10 * v2 + 8) )
        goto LABEL_588;
LABEL_586:
      if ( (unsigned __int8)sub_3051D0(v601) )
      {
        v604 = *(_QWORD *)(v602 + 0x18LL * (int)v601 + 0x10);
        v2 = (unsigned int)v2;
LABEL_588:
        v2 = v604 + 0x10 * v2;
        v600 = (_QWORD *)v2;
      }
LABEL_589:
      v101 = v600[1];
      v605 = *(_QWORD *)(v101 + 0x130);
      if ( v605 )
      {
        *(_DWORD *)(*(_QWORD *)(v605 + 0xB0) + 4LL * v597) = v596 ^ 0x80;
        sub_3136C0(
          v605,
          v605 + 0x58,
          v605,
          v605 + 0xB0,
          *(unsigned int *)(v605 + 0x128),
          *(unsigned int *)(v605 + 0xF0));
        v101 = v600[1];
      }
      LOBYTE(v2) = 1;
      if ( !v101 )
        goto LABEL_17;
      goto LABEL_1666;
    case 0x74u:
      v657 = (char *)ptr[0];
      ptr[0] = (char *)ptr[0] + 4;
      v658 = *(_DWORD *)&v657[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v657 + 5;
      v659 = _byteswap_ulong(v658);
      v660 = (unsigned __int8)(0x80 - v657[*((_QWORD *)&v1847 + 1) + 4]);
      v661 = qword_1026F30;
      if ( v659 < 0 )
        goto LABEL_656;
      v662 = (unsigned int)(v659 >> 0x10);
      if ( qword_10207A0[1] <= (unsigned __int64)(int)v662 )
        goto LABEL_656;
      v663 = (unsigned __int16)v659;
      v2 = qword_10207A0[2];
      v664 = *(_QWORD *)(v2 + 0x18LL * (int)v662 + 8);
      if ( !v664 )
        goto LABEL_653;
      if ( v664 <= v663 )
        goto LABEL_656;
      v665 = *(_QWORD *)(v2 + 0x18LL * (int)v662 + 0x10);
      if ( *(_QWORD *)(v665 + 0x10LL * v663 + 8) )
        goto LABEL_655;
LABEL_653:
      if ( (unsigned __int8)sub_3051D0(v662) )
      {
        v665 = *(_QWORD *)(v2 + 0x18LL * (int)v662 + 0x10);
LABEL_655:
        v661 = (_QWORD *)(v665 + 0x10LL * v663);
      }
LABEL_656:
      sub_3032B0(v661[1], v660);
      v101 = v661[1];
      if ( !v101 )
        goto LABEL_2193;
      goto LABEL_1133;
    case 0x75u:
      v330 = (unsigned __int8 *)ptr[0]++;
      v331 = v330[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v330 + 3;
      v332 = __ROL2__(*(_WORD *)&v330[*((_QWORD *)&v1847 + 1) + 1], 8);
      ptr[0] = v330 + 5;
      v333 = *(_WORD *)&v330[*((_QWORD *)&v1847 + 1) + 3];
      ptr[0] = v330 + 9;
      v334 = *(_QWORD *)&v1840[4 * v332 + 0x35D0];
      if ( !v334 )
        goto LABEL_17;
      v335 = _byteswap_ulong(*(_DWORD *)&v330[*((_QWORD *)&v1847 + 1) + 5]);
      v336 = (unsigned __int16)__ROL2__(v333, 8);
      v337 = (unsigned __int16)v335;
      v338 = (unsigned int)(v335 >> 0x10);
      v339 = v1840[0x837];
LABEL_465:
      sub_27D9C0(v334, v331, v336, v338, v337, v339);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
    case 0x76u:
      v624 = (unsigned __int8 *)ptr[0]++;
      v625 = v624[*((_QWORD *)&v1847 + 1)];
      ptr[0] = v624 + 3;
      v626 = (unsigned __int16)__ROL2__(*(_WORD *)&v624[*((_QWORD *)&v1847 + 1) + 1], 8);
      ptr[0] = v624 + 5;
      v627 = *(_WORD *)&v624[*((_QWORD *)&v1847 + 1) + 3];
      ptr[0] = v624 + 9;
      v628 = *(_DWORD *)&v624[*((_QWORD *)&v1847 + 1) + 5];
      if ( v1840[0x32A9] == (_DWORD)v626 )
      {
        v226 = (volatile signed __int32 *)*((_QWORD *)v1840 + 0x1958);
        v629 = *((_QWORD *)v1840 + 0x1959);
        if ( v226 )
          goto LABEL_610;
      }
      else
      {
        v872 = 4 * v626;
        v226 = *(volatile signed __int32 **)&v1840[v872 + 0x12A8];
        v629 = *(_QWORD *)&v1840[v872 + 0x12AA];
        if ( v226 )
        {
LABEL_610:
          _InterlockedAdd(v226 + 2, 1u);
          if ( !v629 )
            goto LABEL_902;
          goto LABEL_892;
        }
      }
      v226 = 0LL;
      if ( !v629 )
        goto LABEL_902;
LABEL_892:
      v873 = (unsigned __int16)__ROL2__(v627, 8);
      v874 = _byteswap_ulong(v628);
      v875 = (unsigned int)(v874 >> 0x10);
      v876 = (unsigned __int16)v874;
      v877 = v1840[0x837];
LABEL_901:
      sub_27D9C0(v629, v625, v873, v875, v876, v877);
LABEL_902:
      if ( !v226 )
        goto LABEL_17;
      goto LABEL_1693;
    default:
      sub_132090((__int64)dest, "Unrecognized packet type: %d", packetType);
      if ( unk_39E6820 )
        sub_45A4A0(dword_39E67D8, *(_QWORD *)dest, 0LL);
      if ( *(_QWORD *)dest && (__int64)(*(_QWORD *)&dest[0x10] - *(_QWORD *)dest) >= 2 )
      {
        if ( p_memory_pool )
        {
          v606 = p_memory_pool[0x23];
          v15 = p_memory_pool[0x22] == v606;
          v607 = (__int64 *)(v606 - 8);
          if ( v15 )
            v607 = p_memory_pool + 0x36;
          v608 = *v607;
          v609 = p_memory_pool[0x38];
          v15 = p_memory_pool[0x37] == v609;
          v610 = (unsigned int *)(v609 - 4);
          if ( v15 )
            v610 = (unsigned int *)(p_memory_pool + 0x43);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v608 + 0x28LL))(v608, *(_QWORD *)dest, *v610);
        }
        else
        {
          free(*(void **)dest);
        }
      }
      sub_27BC60(v1840);
      v6 = ptr[1];
      ptr[1] = 0LL;
      if ( !v6 )
        goto LABEL_28;
      goto LABEL_18;
  }
}
