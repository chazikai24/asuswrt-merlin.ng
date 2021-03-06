/*  *********************************************************************
    *
    <:copyright-BRCM:2018:proprietary:standard
    
       Copyright (c) 2018 Broadcom 
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

#include "lib_types.h"
#include "../../bcm63xx_impl2_ddr_cinit.h"
#include "boardparms.h"

/* DDR4 include files */

/* DDR3 include files */
#include "mcb_63178A_533MHz_16b_dev1Gx16_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev1Gx8_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev2Gx16_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev2Gx8_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev4Gx16_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev4Gx8_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev512Mx16_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev512Mx8_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev8Gx16_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_533MHz_16b_dev8Gx8_DDR3-1066G_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev1Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev1Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev2Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev2Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev4Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev4Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev512Mx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev512Mx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev8Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_800MHz_16b_dev8Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev1Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev1Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev2Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev2Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev4Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev4Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev512Mx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev512Mx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev8Gx16_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev8Gx8_DDR3-1600K_ssc_1per_vtt_dis_noterm_HT_ASR.h"

#include "mcb_63178A_780MHz_16b_dev1Gx16_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev1Gx8_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev2Gx16_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev2Gx8_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev4Gx16_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev4Gx8_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev512Mx16_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev512Mx8_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev8Gx16_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"
#include "mcb_63178A_780MHz_16b_dev8Gx8_DDR3-1600K_vtt_dis_noterm_HT_ASR.h"


/* define an array of supported MCBs. The first one must be the safe mode MCB. */
/* safe mode MCB, use lowest clock speed and largest supported size  */
mcbindex MCB[]  = {
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_2048MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_SSC_CONFIG_1 | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_SSC_CONFIG_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev8Gx8_DDR3_1066G_ssc_1per_vtt_dis_noterm_HT_ASR
    },
#if 0
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_128MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev512Mx8_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_128MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev1Gx16_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_256MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev1Gx8_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_256MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev2Gx16_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_512MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev2Gx8_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_512MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev4Gx16_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_1024MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev4Gx8_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_533_8_8_8 | BP_DDR_TOTAL_SIZE_1024MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_533MHz_16b_dev8Gx16_DDR3_1066G_vtt_dis_noterm_HT_ASR
    },
#endif
#if 0
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_128MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev512Mx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_128MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev1Gx16_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
#endif
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_256MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev1Gx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_256MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev2Gx16_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_512MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev2Gx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_512MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev4Gx16_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_512MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM | BP_DDR_TEMP_EXTENDED_ASR,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK | BP_DDR_TEMP_MASK,
        mcb_63178A_780MHz_16b_dev4Gx16_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_1024MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev4Gx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_1024MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM | BP_DDR_TEMP_EXTENDED_ASR,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK | BP_DDR_TEMP_MASK,
        mcb_63178A_780MHz_16b_dev4Gx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_1024MB | BP_DDR_DEVICE_WIDTH_16 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev8Gx16_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        BP_DDR_SPEED_800_11_11_11 | BP_DDR_TOTAL_SIZE_2048MB | BP_DDR_DEVICE_WIDTH_8 | BP_DDR_TOTAL_WIDTH_16BIT | BP_DDR_VTT_DIS_NOTERM,
        BP_DDR_SPEED_MASK | BP_DDR_TOTAL_SIZE_MASK | BP_DDR_DEVICE_WIDTH_MASK | BP_DDR_TOTAL_WIDTH_MASK | BP_DDR_VTT_MASK,
        mcb_63178A_780MHz_16b_dev8Gx8_DDR3_1600K_vtt_dis_noterm_HT_ASR
    },
    {
        0,0,NULL
    }
};
