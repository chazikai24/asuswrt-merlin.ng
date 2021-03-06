/*  *********************************************************************
    *
    <:copyright-BRCM:2015:proprietary:standard
    
       Copyright (c) 2015 Broadcom 
       All Rights Reserved
    
     This program is the proprietary software of Broadcom and/or its
     licensors, and may only be used, duplicated, modified or distributed pursuant
     to the terms and conditions of a separate, written license agreement executed
     between you and Broadcom (an "Authorized License").  Except as set forth in
     an Authorized License, Broadcom grants no license (express or implied), right
     to use, or waiver of any kind with respect to the Software, and Broadcom
     expressly reserves all rights in and to the Software and all intellectual
     property rights therein.  IF YOU HAVE NO AUTHORIZED LICENSE, THEN YOU HAVE
     NO RIGHT TO USE THIS SOFTWARE IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY
     BROADCOM AND DISCONTINUE ALL USE OF THE SOFTWARE.
    
     Except as expressly set forth in the Authorized License,
    
     1. This program, including its structure, sequence and organization,
        constitutes the valuable trade secrets of Broadcom, and you shall use
        all reasonable efforts to protect the confidentiality thereof, and to
        use this information only in connection with your use of Broadcom
        integrated circuit products.
    
     2. TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
        AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES, REPRESENTATIONS OR
        WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH
        RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY DISCLAIMS ANY AND
        ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY, NONINFRINGEMENT,
        FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES, ACCURACY OR
        COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR CORRESPONDENCE
        TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING OUT OF USE OR
        PERFORMANCE OF THE SOFTWARE.
    
     3. TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL BROADCOM OR
        ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL, INCIDENTAL, SPECIAL,
        INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER ARISING OUT OF OR IN ANY
        WAY RELATING TO YOUR USE OF OR INABILITY TO USE THE SOFTWARE EVEN
        IF BROADCOM HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES;
        OR (ii) ANY AMOUNT IN EXCESS OF THE AMOUNT ACTUALLY PAID FOR THE
        SOFTWARE ITSELF OR U.S. $1, WHICHEVER IS GREATER. THESE LIMITATIONS
        SHALL APPLY NOTWITHSTANDING ANY FAILURE OF ESSENTIAL PURPOSE OF ANY
        LIMITED REMEDY.
    :> 
    ********************************************************************* */

#ifndef __BCM63XX_IMP2_DDR_CINIT_H__
#define __BCM63XX_IMP2_DDR_CINIT_H__

#include "lib_types.h"

typedef uint32_t  physaddr_t;

/* MEMC v4.5 */

// SP has one more than RR
#define MC_ARB_RR_Q_NUM          (34)
#define MC_ARB_SP_Q_NUM          (MC_ARB_RR_Q_NUM+1)
#define MC_UB_SRC_ID_NUM         (32)

#define MEM_SIZE_1024Mb           0
#define MEM_SIZE_2048Mb           1
#define MEM_SIZE_4096Mb           2
#define MEM_SIZE_8192Mb           3

#define DRAM_TYPE_DDR3            0
#define DRAM_TYPE_DDR4            1

#define DDR_CLK_400MHZ_CL6        0
#define DDR_CLK_533MHZ_CL7        1
#define DDR_CLK_533MHZ_CL8        2
#define DDR_CLK_667MHZ_CL9        3
#define DDR_CLK_667MHZ_CL10       4
#define DDR_CLK_800MHZ_CL10       5
#define DDR_CLK_800MHZ_CL11       6
#define DDR_CLK_1066MHZ_CL11      7
#define DDR_CLK_1066MHZ_CL12      8
#define DDR_CLK_1066MHZ_CL13      9
#define DDR_CLK_1066MHZ_CL14      10
#define DDR_CLK_933MHZ_CL10       11
#define DDR_CLK_933MHZ_CL11       12
#define DDR_CLK_933MHZ_CL12       13
#define DDR_CLK_933MHZ_CL13       14
#define DDR_CLK_1066MHZ_CL15      15
#define DDR_CLK_1066MHZ_CL16      16

// MEMC configuration struct
typedef struct memc_bus_cfg_struct
{
    // arb configuration
    uint32_t arb_burst_mode;
    uint32_t arb_rr_mode;
    uint32_t arb_sp_sel[MC_ARB_SP_Q_NUM];
    uint32_t arb_sp_pri[MC_ARB_SP_Q_NUM];
    uint32_t arb_rr_qqw[MC_ARB_RR_Q_NUM];

    // chn arb configuration
    uint32_t gcfg_max_age;
    uint32_t gcfg_perf_tweaks;
    uint32_t gcfg_seq_mode;
    uint32_t chn_arb_ab4_disable;
    uint32_t chn_arb_ab4_burst;
    uint32_t chn_arb_ab4_rdwr_weight[2];
    uint32_t chn_arb_pkt_mode;
    uint32_t chn_arb_ab4_act_pri;
    uint32_t chn_arb_ab4_cmd_pri_opened;
    uint32_t chn_arb_ab4_cmd_pri_closed;

    uint32_t ub0_esrcid_cfg;
    uint32_t ub0_srcid_q[MC_UB_SRC_ID_NUM];
    uint32_t ub0_queue_pair_dis;
    uint32_t ub0_oob_err_mask;
    uint32_t ub0_ib_err_mask;
    uint32_t ub0_wburst_mode;
    uint32_t ub0_wrep_mode;
    uint32_t ub0_fifo_mode;

    uint32_t ub1_esrcid_cfg;
    uint32_t ub1_srcid_q[MC_UB_SRC_ID_NUM];
    uint32_t ub1_queue_pair_dis;
    uint32_t ub1_oob_err_mask;
    uint32_t ub1_ib_err_mask;
    uint32_t ub1_wburst_mode;
    uint32_t ub1_wrep_mode;
    uint32_t ub1_fifo_mode;

    uint32_t mcp_wr_com_thd;
    uint32_t mcp_wr_req_thd;
} memc_bus_cfg;

// MEMC timing configuration struct
typedef struct memc_dramm_timing_cfg_struct {
    uint32_t tRAS;

    // MC_CHN_TIM_TIM1_0 register fields
    uint32_t tCwl;
    uint32_t tRP;
    uint32_t tCL;
    uint32_t tRCD;

    // MC_CHN_TIM_TIM1_1 register fields
    uint32_t tCCD_L;
    uint32_t tCCD;
    uint32_t tRRD_L;
    uint32_t tRRD;

    // MC_CHN_TIM_TIM1_2 register fields
    uint32_t tFAW;
    uint32_t tRTP;
    uint32_t tRCr;

    // MC_CHN_TIM_TIM1_3 register fields
    uint32_t tWTR_L;
    uint32_t tWTR;
    uint32_t tWR_L;
    uint32_t tWR;

    // MC_CHN_TIM_TIM2 register fields
    uint32_t tR2R;
    uint32_t tR2W;
    uint32_t tW2R;
    uint32_t tW2W;
    uint32_t tAL;
    uint32_t tRFC;
}memc_dram_timing_cfg;

// MEMC DRAM profile struct
typedef struct _memc_dram_profile_struct {
    uint32_t dram_type;
    uint32_t dram_clk;  // the DRAM data clock speed in MHz (1/2 data rate)
    uint32_t ref_clk;  // the PHY reference clock speed in Hz(!!!)
    uint32_t speed_grade;

    // number of ddr parts
    uint32_t num_part;
    // DRAM size, number of banks, rows, columns, width per part
    uint32_t size_Mbits;
    uint32_t row_bits;
    uint32_t col_bits;
    uint32_t ba_bits;
    uint32_t bg_bits;
    uint32_t width_bits;

    /* total size,  width, burst and etc */
    uint32_t total_size_Mbits;
    uint32_t total_cs_bits;
    uint32_t total_width_bits;
    uint32_t total_burst_bytes;
    uint32_t total_max_byte_addr;
    uint32_t total_max_byte_addr_bits;

    uint32_t ddr_2T_mode;
    uint32_t ddr_hdp_mode;
    uint32_t large_page;

    uint32_t high_temp;
    uint32_t ssc;

    /* ddr dual rank configuration */
    uint32_t ddr_dual_rank;
    uint32_t cs_mode;
    uint32_t cs_addr_bits_map;

    // MEMC dram timing configuration is stored here
    memc_dram_timing_cfg timing_cfg;
}memc_dram_profile_struct;

/* MCB related structure */

typedef struct mcbindex {
    uint32_t config;
    uint32_t mask;
    unsigned int *pMcbData;
}mcbindex;

int ddr_init(uint32_t mcb_selector, uint32_t memcfg_from_flash);

/**************** MCB MAPPING ****************/
#define MCB_PHY_REF_CLK_WORD        10
#define MCB_DRAM_DATA_CLK_WORD      12
#define MCB_DRAM_TYPE_WORD          13
#define MCB_DRAM_TYPE_DDR3_MASK     0
#define MCB_PHY_WIDTH_WORD          14
#if defined(_BCM94908_) || defined(_BCM96846_)
#define MCB_PHY_WIDTH_32B_MASK      1
#elif defined(_BCM96858_) || defined(_BCM963158_) || defined(_BCM96856_)
#define MCB_PHY_WIDTH_32B_MASK      4
#endif
#define MCB_PHY_WIDTH_16B_MASK      2
#define MCB_DRAM_WIDTH_WORD         15
#define MCB_DRAM_WIDTH_8B_MASK      0
#define MCB_DRAM_WIDTH_16B_MASK     1
#define MCB_DRAM_WIDTH_32B_MASK     2
#define MCB_DENSITY_WORD            28
#define MCB_DENSITY_ROWS_SHIFT      4
#define MCB_DENSITY_ROWS_MASK       (0xf << MCB_DENSITY_ROWS_SHIFT)
#define MCB_DENSITY_COLUMNS_SHIFT   8
#define MCB_DENSITY_COLUMNS_MASK    (0x3 << MCB_DENSITY_COLUMNS_SHIFT)
#define MCB_DENSITY_BANKS_SHIFT     10
#define MCB_DENSITY_BANKS_MASK      (0x3 << MCB_DENSITY_BANKS_SHIFT)
#define MCB_DENSITY_BANKGROUPS_SHIFT 12
#define MCB_DENSITY_BANKGROUPS_MASK  (0x3 << MCB_DENSITY_BANKGROUPS_SHIFT)


#define MCB_TIMING0_WORD            29
#define MCB_TIMING0_tRCD_SHIFT      0
#define MCB_TIMING0_tRCD_MASK       (0xff <<  MCB_TIMING0_tRCD_SHIFT)
#define MCB_TIMING0_tRP_SHIFT       8
#define MCB_TIMING0_tRP_MASK        (0xff << MCB_TIMING0_tRP_SHIFT)
#define MCB_TIMING0_tRRD_SHIFT      16
#define MCB_TIMING0_tRRD_MASK       (0xff << MCB_TIMING0_tRRD_SHIFT)
#define MCB_TIMING0_tRAS_SHIFT      24
#define MCB_TIMING0_tRAS_MASK       (0xff << MCB_TIMING0_tRAS_SHIFT)

#define MCB_TIMING1_WORD            30
#define MCB_TIMING1_tCL_SHIFT       0
#define MCB_TIMING1_tCL_MASK        (0xff << MCB_TIMING1_tCL_SHIFT)
#define MCB_TIMING1_tCWL_SHIFT      8
#define MCB_TIMING1_tCWL_MASK       (0xff << MCB_TIMING1_tCWL_SHIFT)
#define MCB_TIMING1_tWR_SHIFT       16
#define MCB_TIMING1_tWR_MASK        (0xff << MCB_TIMING1_tWR_SHIFT)
#define MCB_TIMING1_tRTP_SHIFT      24
#define MCB_TIMING1_tRTP_MASK       (0xff << MCB_TIMING1_tRTP_SHIFT)

#define MCB_TIMING2_WORD            31
#define MCB_TIMING2_tRFC_SHIFT      0
#define MCB_TIMING2_tRFC_MASK       (0xfff << MCB_TIMING2_tRFC_SHIFT)
#define MCB_TIMING2_tWTR_SHIFT      12
#define MCB_TIMING2_tWTR_MASK       (0xf << MCB_TIMING2_tWTR_SHIFT)
#define MCB_TIMING2_tAL_SHIFT       20
#define MCB_TIMING2_tAL_MASK        (0xff << MCB_TIMING2_tAL_SHIFT)

#define MCB_TIMING3_WORD            75
#define MCB_TIMING3_tFAW_SHIFT      8
#define MCB_TIMING3_tFAW_MASK       (0xff << MCB_TIMING3_tFAW_SHIFT)

#define MCB_2T_MODE_WORD            83
#define MCB_2T_MODE_SHIFT           12
#define MCB_2T_MODE_MASK            (1 << MCB_2T_MODE_SHIFT)

#define MCB_EXT_CFG_WORD            104
#define MCB_EXT_CFG_tW2W_SHIFT      0
#define MCB_EXT_CFG_tW2W_MASK       (0xf << MCB_EXT_CFG_tW2W_SHIFT)
#define MCB_EXT_CFG_tR2R_SHIFT       4
#define MCB_EXT_CFG_tR2R_MASK       (0x3 << MCB_EXT_CFG_tR2R_SHIFT)
#define MCB_EXT_CFG_tR2W_SHIFT      6
#define MCB_EXT_CFG_tR2W_MASK       (0x7 << MCB_EXT_CFG_tR2W_SHIFT)
#define MCB_EXT_CFG_tW2R_SHIFT      9
#define MCB_EXT_CFG_tW2R_MASK       (0x7 << MCB_EXT_CFG_tW2R_SHIFT)
#define MCB_EXT_CFG_CLKMODE_SHIFT   12
#define MCB_EXT_CFG_CLKMODE_MASK    (0x3 << MCB_EXT_CFG_CLKMODE_SHIFT)
#define MCB_EXT_CFG_MAX_AGE_SHIFT   14
#define MCB_EXT_CFG_MAX_AGE_MASK    (0x1f << MCB_EXT_CFG_MAX_AGE_SHIFT)
#define MCB_EXT_CFG_PERF_SHIFT      19
#define MCB_EXT_CFG_PERF_MASK       (0xff << MCB_EXT_CFG_PERF_SHIFT)

#define MCB_TIMING4_WORD            76
#define MCB_TIMING4_tRRD_L_SHIFT    24
#define MCB_TIMING4_tRRD_L_MASK     (0xff << MCB_TIMING4_tRRD_L_SHIFT)

#define MCB_TIMING5_WORD            109
#define MCB_TIMING5_tCCD_SHIFT      24
#define MCB_TIMING5_tCCD_MASK       (0xff << MCB_TIMING5_tCCD_SHIFT)
#define MCB_TIMING5_tCCD_L_SHIFT    16
#define MCB_TIMING5_tCCD_L_MASK     (0xff << MCB_TIMING5_tCCD_L_SHIFT)


#endif
