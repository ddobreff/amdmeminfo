// 2019 Dobromir Dobrev
// 2018 Nerd Ralph
// based on code from OhGodADecode:
// Copyright (c) 2017 OhGodACompany - OhGodAGirl & OhGodAPet

#pragma once

#pragma pack(push, 1)

typedef struct _SEQ_RAS_TIMING {
  uint32_t TRCDW : 5;
  uint32_t TRCDWA : 5;
  uint32_t TRCDR : 5;
  uint32_t TRCDRA : 5;
  uint32_t TRRD : 4;
  uint32_t TRC : 7;
} SEQ_RAS_TIMING;

typedef struct _SEQ_CAS_TIMING {
  uint32_t TNOPW : 2;
  uint32_t TNOPR : 2;
  uint32_t TR2W : 5;
  uint32_t TCCDL : 3;
  uint32_t TR2R : 4;
  uint32_t TW2R : 5;
  uint32_t Pad0 : 3;
  uint32_t TCL : 5;
} SEQ_CAS_TIMING;

typedef struct _SEQ_MISC_TIMING {
  uint32_t TRP_WRA : 7;
  uint32_t TRP_RDA : 7;
  uint32_t TRP : 6;
  uint32_t TRFC : 9;
} SEQ_MISC_TIMING;

typedef struct _SEQ_MISC_TIMING_R9 {
  uint32_t TRP_WRA : 8;
  uint32_t TRP_RDA : 7;
  uint32_t TRP : 5;
  uint32_t TRFC : 9;
} SEQ_MISC_TIMING_R9;

typedef struct _SEQ_MISC_TIMING2 {
  uint32_t PA2RDATA : 4;
  uint32_t PA2WDATA : 4;
  uint32_t TFAW : 5;
  uint32_t TREDC : 3;
  uint32_t TWEDC : 5;
  uint32_t T32AW : 4;
  uint32_t Pad0 : 3;
  uint32_t TWDATATR : 4;
} SEQ_MISC_TIMING2;

typedef struct _SEQ_MISC1 { /* MR0 */
  uint32_t wl : 3;
  uint32_t cl : 4;
  uint32_t tm : 1;
  uint32_t wr : 4;
  uint32_t ba00 : 1;
  uint32_t ba01 : 1;
  uint32_t ba02 : 1;
  uint32_t ba03 : 1;
  /* MR1 */
  uint32_t ds : 2;
  uint32_t dt : 2;
  uint32_t adr : 2;
  uint32_t cal : 1;
  uint32_t pll : 1;
  uint32_t rdbi : 1;
  uint32_t wdbi : 1;
  uint32_t abi : 1;
  uint32_t res : 1;
  uint32_t ba10 : 1;
  uint32_t ba11 : 1;
  uint32_t ba12 : 1;
  uint32_t ba13 : 1;
} SEQ_MISC1;

typedef struct _SEQ_MISC3 {
  /* MR4 */
  uint32_t ehp : 4;
  uint32_t crcwl : 3;
  uint32_t crcrl : 2;
  uint32_t rdcrc : 1;
  uint32_t wrcrc : 1;
  uint32_t ehpi : 1;
  uint32_t ba20 : 1;
  uint32_t ba21 : 1;
  uint32_t ba22 : 1;
  uint32_t ba23 : 1;
  /* MR5 */
  uint32_t lp1 : 1;
  uint32_t lp2 : 1;
  uint32_t lp3 : 1;
  uint32_t pdbw : 3;
  uint32_t tras : 6;
  uint32_t ba30 : 1;
  uint32_t ba31 : 1;
  uint32_t ba32 : 1;
  uint32_t ba33 : 1;
} SEQ_MISC3;

typedef struct _SEQ_MISC8 {
  /* MR8 */
  uint32_t clehf : 1;
  uint32_t wrehf : 1;
  uint32_t rfu : 10;
  uint32_t ba40 : 1;
  uint32_t ba41 : 1;
  uint32_t ba42 : 1;
  uint32_t ba43 : 1;
  /* MR7 */
  uint32_t pllsb : 1;
  uint32_t pllfl : 1;
  uint32_t plldc : 1;
  uint32_t lfm : 1;
  uint32_t async : 1;
  uint32_t dqpa : 1;
  uint32_t temps : 1;
  uint32_t hvfrd : 1;
  uint32_t vddr : 2;
  uint32_t rfu2 : 2;
  uint32_t ba50 : 1;
  uint32_t ba51 : 1;
  uint32_t ba52 : 1;
  uint32_t ba53 : 1;
} SEQ_MISC8;

typedef struct _ARB_DRAM_TIMING {
  uint32_t ACTRD : 8;
  uint32_t ACTWR : 8;
  uint32_t RASMACTRD : 8;
  uint32_t RASMACTWR : 8;
} ARB_DRAM_TIMING;

typedef struct _ARB_DRAM_TIMING2 {
  uint32_t RAS2RAS : 8;
  uint32_t RP : 8;
  uint32_t WRPLUSRP : 8;
  uint32_t BUS_TURN : 8;
} ARB_DRAM_TIMING2;

#pragma pack(pop)
