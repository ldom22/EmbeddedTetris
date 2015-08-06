/* Based on CPU DB MC9S12ZVC192_64, version 3.00.000 (RegistersPrg V2.33) */
/*
** ###################################################################
**     Filename  : mc9s12zvc192.h
**     Processor : MC9S12ZVC192MKH
**     FileFormat: V2.33
**     DataSheet : MC9S12ZVC-Family Reference Manual Rev. 0.06 30-August-2013
**     Compiler  : CodeWarrior compiler
**     Date/Time : 10/10/2013, 10:38 AM
**     Abstract  :
**         This header implements the mapping of I/O devices.
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
**
**     CPU Registers Revisions:
**      - 09.08.2013, V0.10:
**              - Updated changes according to manual revision 0.05.
**
**     File-Format-Revisions:
**               - none
**
**     Not all general-purpose I/O pins are available on all packages or on all mask sets of a specific
**     derivative device. To avoid extra current drain from floating input pins, the user�s reset
**     initialization routine in the application program must either enable on-chip pull-up devices
**     or change the direction of unconnected pins to outputs so the pins do not float.
** ###################################################################
*/

#ifndef _MC9S12ZVC192_H
#define _MC9S12ZVC192_H

/*lint -save  -e950 -esym(960,18.4) -e46 -esym(961,19.7) Disable MISRA rule (1.1,18.4,6.4,19.7) checking. */
/* Types definition */
typedef unsigned char byte;
typedef unsigned int word;
typedef unsigned long dword;
typedef unsigned long dlong[2];

#define REG_BASE 0x0000                /* Base address for the I/O register block */


#pragma bfield_gap_limit -1 /*this guarantee correct bitfield positions*/

/**************** interrupt vector numbers ****************/
#define VectorNumber_VReserved123       123U
#define VectorNumber_VReserved122       122U
#define VectorNumber_VReserved121       121U
#define VectorNumber_VReserved120       120U
#define VectorNumber_VReserved119       119U
#define VectorNumber_VReserved118       118U
#define VectorNumber_VReserved117       117U
#define VectorNumber_VReserved116       116U
#define VectorNumber_VReserved115       115U
#define VectorNumber_VReserved114       114U
#define VectorNumber_VReserved113       113U
#define VectorNumber_VReserved112       112U
#define VectorNumber_VReserved111       111U
#define VectorNumber_VReserved110       110U
#define VectorNumber_VReserved109       109U
#define VectorNumber_VReserved108       108U
#define VectorNumber_VReserved107       107U
#define VectorNumber_VReserved106       106U
#define VectorNumber_VReserved105       105U
#define VectorNumber_Vsenttx            104U
#define VectorNumber_Viic               103U
#define VectorNumber_VReserved102       102U
#define VectorNumber_VReserved101       101U
#define VectorNumber_VReserved100       100U
#define VectorNumber_VReserved99        99U
#define VectorNumber_VReserved98        98U
#define VectorNumber_VReserved97        97U
#define VectorNumber_VReserved96        96U
#define VectorNumber_VReserved95        95U
#define VectorNumber_VReserved94        94U
#define VectorNumber_VReserved93        93U
#define VectorNumber_Vtim1ovf           92U
#define VectorNumber_VReserved91        91U
#define VectorNumber_VReserved90        90U
#define VectorNumber_VReserved89        89U
#define VectorNumber_VReserved88        88U
#define VectorNumber_Vtim1ch3           87U
#define VectorNumber_Vtim1ch2           86U
#define VectorNumber_Vtim1ch1           85U
#define VectorNumber_Vtim1ch0           84U
#define VectorNumber_VReserved83        83U
#define VectorNumber_VReserved82        82U
#define VectorNumber_VReserved81        81U
#define VectorNumber_VReserved80        80U
#define VectorNumber_Vportl             79U
#define VectorNumber_VReserved78        78U
#define VectorNumber_VReserved77        77U
#define VectorNumber_VReserved76        76U
#define VectorNumber_VReserved75        75U
#define VectorNumber_VReserved74        74U
#define VectorNumber_VReserved73        73U
#define VectorNumber_VReserved72        72U
#define VectorNumber_VReserved71        71U
#define VectorNumber_VReserved70        70U
#define VectorNumber_VReserved69        69U
#define VectorNumber_VReserved68        68U
#define VectorNumber_VReserved67        67U
#define VectorNumber_Vportad            66U
#define VectorNumber_VReserved65        65U
#define VectorNumber_Vhti               64U
#define VectorNumber_Vapi               63U
#define VectorNumber_Vlvi               62U
#define VectorNumber_Vevddx             61U
#define VectorNumber_Vportp             60U
#define VectorNumber_VReserved59        59U
#define VectorNumber_VReserved58        58U
#define VectorNumber_VReserved57        57U
#define VectorNumber_VReserved56        56U
#define VectorNumber_VReserved55        55U
#define VectorNumber_Vports             54U
#define VectorNumber_Vcanphy0           53U
#define VectorNumber_VReserved52        52U
#define VectorNumber_VReserved51        51U
#define VectorNumber_VReserved50        50U
#define VectorNumber_VReserved49        49U
#define VectorNumber_VReserved48        48U
#define VectorNumber_Vbats              47U
#define VectorNumber_VReserved46        46U
#define VectorNumber_VReserved45        45U
#define VectorNumber_VReserved44        44U
#define VectorNumber_Vcan0tx            43U
#define VectorNumber_Vcan0rx            42U
#define VectorNumber_Vcan0err           41U
#define VectorNumber_Vcan0wkup          40U
#define VectorNumber_Vflash             39U
#define VectorNumber_Vflasherr          38U
#define VectorNumber_VReserved37        37U
#define VectorNumber_Vspi1              36U
#define VectorNumber_VRAM_err           35U
#define VectorNumber_Vacmp1             34U
#define VectorNumber_Vacmp0             33U
#define VectorNumber_Vcpmuplllck        32U
#define VectorNumber_Vcpmuosc           31U
#define VectorNumber_Vadc0conv_compl    30U
#define VectorNumber_Vadc0conv_seq_abrt 29U
#define VectorNumber_Vadc0err           28U
#define VectorNumber_VReserved27        27U
#define VectorNumber_VReserved26        26U
#define VectorNumber_Vsci1              25U
#define VectorNumber_Vsci0              24U
#define VectorNumber_Vspi0              23U
#define VectorNumber_Vtim0paie          22U
#define VectorNumber_Vtim0paaovf        21U
#define VectorNumber_Vtim0ovf           20U
#define VectorNumber_Vtim0ch7           19U
#define VectorNumber_Vtim0ch6           18U
#define VectorNumber_Vtim0ch5           17U
#define VectorNumber_Vtim0ch4           16U
#define VectorNumber_Vtim0ch3           15U
#define VectorNumber_Vtim0ch2           14U
#define VectorNumber_Vtim0ch1           13U
#define VectorNumber_Vtim0ch0           12U
#define VectorNumber_Vrti               11U
#define VectorNumber_Virq               10U
#define VectorNumber_Vxirq              9U
#define VectorNumber_Vsi                8U
#define VectorNumber_VReserved7         7U
#define VectorNumber_VReserved6         6U
#define VectorNumber_Vme                5U
#define VectorNumber_Vsys               4U
#define VectorNumber_Vswi               3U
#define VectorNumber_Vtrap              2U
#define VectorNumber_Vspare             1U
#define VectorNumber_Vreset             0U

/**************** interrupt vector table ****************/
#define VReserved123                    0x00FFFE10UL
#define VReserved122                    0x00FFFE14UL
#define VReserved121                    0x00FFFE18UL
#define VReserved120                    0x00FFFE1CUL
#define VReserved119                    0x00FFFE20UL
#define VReserved118                    0x00FFFE24UL
#define VReserved117                    0x00FFFE28UL
#define VReserved116                    0x00FFFE2CUL
#define VReserved115                    0x00FFFE30UL
#define VReserved114                    0x00FFFE34UL
#define VReserved113                    0x00FFFE38UL
#define VReserved112                    0x00FFFE3CUL
#define VReserved111                    0x00FFFE40UL
#define VReserved110                    0x00FFFE44UL
#define VReserved109                    0x00FFFE48UL
#define VReserved108                    0x00FFFE4CUL
#define VReserved107                    0x00FFFE50UL
#define VReserved106                    0x00FFFE54UL
#define VReserved105                    0x00FFFE58UL
#define Vsenttx                         0x00FFFE5CUL
#define Viic                            0x00FFFE60UL
#define VReserved102                    0x00FFFE64UL
#define VReserved101                    0x00FFFE68UL
#define VReserved100                    0x00FFFE6CUL
#define VReserved99                     0x00FFFE70UL
#define VReserved98                     0x00FFFE74UL
#define VReserved97                     0x00FFFE78UL
#define VReserved96                     0x00FFFE7CUL
#define VReserved95                     0x00FFFE80UL
#define VReserved94                     0x00FFFE84UL
#define VReserved93                     0x00FFFE88UL
#define Vtim1ovf                        0x00FFFE8CUL
#define VReserved91                     0x00FFFE90UL
#define VReserved90                     0x00FFFE94UL
#define VReserved89                     0x00FFFE98UL
#define VReserved88                     0x00FFFE9CUL
#define Vtim1ch3                        0x00FFFEA0UL
#define Vtim1ch2                        0x00FFFEA4UL
#define Vtim1ch1                        0x00FFFEA8UL
#define Vtim1ch0                        0x00FFFEACUL
#define VReserved83                     0x00FFFEB0UL
#define VReserved82                     0x00FFFEB4UL
#define VReserved81                     0x00FFFEB8UL
#define VReserved80                     0x00FFFEBCUL
#define Vportl                          0x00FFFEC0UL
#define VReserved78                     0x00FFFEC4UL
#define VReserved77                     0x00FFFEC8UL
#define VReserved76                     0x00FFFECCUL
#define VReserved75                     0x00FFFED0UL
#define VReserved74                     0x00FFFED4UL
#define VReserved73                     0x00FFFED8UL
#define VReserved72                     0x00FFFEDCUL
#define VReserved71                     0x00FFFEE0UL
#define VReserved70                     0x00FFFEE4UL
#define VReserved69                     0x00FFFEE8UL
#define VReserved68                     0x00FFFEECUL
#define VReserved67                     0x00FFFEF0UL
#define Vportad                         0x00FFFEF4UL
#define VReserved65                     0x00FFFEF8UL
#define Vhti                            0x00FFFEFCUL
#define Vapi                            0x00FFFF00UL
#define Vlvi                            0x00FFFF04UL
#define Vevddx                          0x00FFFF08UL
#define Vportp                          0x00FFFF0CUL
#define VReserved59                     0x00FFFF10UL
#define VReserved58                     0x00FFFF14UL
#define VReserved57                     0x00FFFF18UL
#define VReserved56                     0x00FFFF1CUL
#define VReserved55                     0x00FFFF20UL
#define Vports                          0x00FFFF24UL
#define Vcanphy0                        0x00FFFF28UL
#define VReserved52                     0x00FFFF2CUL
#define VReserved51                     0x00FFFF30UL
#define VReserved50                     0x00FFFF34UL
#define VReserved49                     0x00FFFF38UL
#define VReserved48                     0x00FFFF3CUL
#define Vbats                           0x00FFFF40UL
#define VReserved46                     0x00FFFF44UL
#define VReserved45                     0x00FFFF48UL
#define VReserved44                     0x00FFFF4CUL
#define Vcan0tx                         0x00FFFF50UL
#define Vcan0rx                         0x00FFFF54UL
#define Vcan0err                        0x00FFFF58UL
#define Vcan0wkup                       0x00FFFF5CUL
#define Vflash                          0x00FFFF60UL
#define Vflasherr                       0x00FFFF64UL
#define VReserved37                     0x00FFFF68UL
#define Vspi1                           0x00FFFF6CUL
#define VRAM_err                        0x00FFFF70UL
#define Vacmp1                          0x00FFFF74UL
#define Vacmp0                          0x00FFFF78UL
#define Vcpmuplllck                     0x00FFFF7CUL
#define Vcpmuosc                        0x00FFFF80UL
#define Vadc0conv_compl                 0x00FFFF84UL
#define Vadc0conv_seq_abrt              0x00FFFF88UL
#define Vadc0err                        0x00FFFF8CUL
#define VReserved27                     0x00FFFF90UL
#define VReserved26                     0x00FFFF94UL
#define Vsci1                           0x00FFFF98UL
#define Vsci0                           0x00FFFF9CUL
#define Vspi0                           0x00FFFFA0UL
#define Vtim0paie                       0x00FFFFA4UL
#define Vtim0paaovf                     0x00FFFFA8UL
#define Vtim0ovf                        0x00FFFFACUL
#define Vtim0ch7                        0x00FFFFB0UL
#define Vtim0ch6                        0x00FFFFB4UL
#define Vtim0ch5                        0x00FFFFB8UL
#define Vtim0ch4                        0x00FFFFBCUL
#define Vtim0ch3                        0x00FFFFC0UL
#define Vtim0ch2                        0x00FFFFC4UL
#define Vtim0ch1                        0x00FFFFC8UL
#define Vtim0ch0                        0x00FFFFCCUL
#define Vrti                            0x00FFFFD0UL
#define Virq                            0x00FFFFD4UL
#define Vxirq                           0x00FFFFD8UL
#define Vsi                             0x00FFFFDCUL
#define VReserved7                      0x00FFFFE0UL
#define VReserved6                      0x00FFFFE4UL
#define Vme                             0x00FFFFE8UL
#define Vsys                            0x00FFFFECUL
#define Vswi                            0x00FFFFF0UL
#define Vtrap                           0x00FFFFF4UL
#define Vspare                          0x00FFFFF8UL
#define Vreset                          0x00FFFFFCUL

/**************** registers I/O map ****************/

/*** PARTID - Part ID Register; 0x00000000 ***/
typedef union {
  dword Dword;
   /* Overlapped registers: */
  struct {
    /*** PARTID0 - Part ID Register 0; 0x00000000 ***/
    union {
      byte Byte;
      struct {
        byte ID0         :8;                                       /* Part ID 0 */
      } Bits;
    } PARTID0STR;
    #define PARTID0                     _PARTID.Overlap_STR.PARTID0STR.Byte
    #define PARTID0_ID0                 _PARTID.Overlap_STR.PARTID0STR.Bits.ID0
    /* PARTID_ARR: Access 4 PARTIDx registers in an array */
    #define PARTID_ARR                  ((volatile byte *) &PARTID0)
    
    #define PARTID0_ID0_MASK            255U
    #define PARTID0_ID0_BITNUM          0U
    

    /*** PARTID1 - Part ID Register 1; 0x00000001 ***/
    union {
      byte Byte;
      struct {
        byte ID1         :8;                                       /* Part ID 1 */
      } Bits;
    } PARTID1STR;
    #define PARTID1                     _PARTID.Overlap_STR.PARTID1STR.Byte
    #define PARTID1_ID1                 _PARTID.Overlap_STR.PARTID1STR.Bits.ID1
    
    #define PARTID1_ID1_MASK            255U
    #define PARTID1_ID1_BITNUM          0U
    

    /*** PARTID2 - Part ID Register 2; 0x00000002 ***/
    union {
      byte Byte;
      struct {
        byte ID2         :8;                                       /* Part ID 2 */
      } Bits;
    } PARTID2STR;
    #define PARTID2                     _PARTID.Overlap_STR.PARTID2STR.Byte
    #define PARTID2_ID2                 _PARTID.Overlap_STR.PARTID2STR.Bits.ID2
    
    #define PARTID2_ID2_MASK            255U
    #define PARTID2_ID2_BITNUM          0U
    

    /*** PARTID3 - Part ID Register 3; 0x00000003 ***/
    union {
      byte Byte;
      struct {
        byte ID3         :8;                                       /* Part ID 3 */
      } Bits;
    } PARTID3STR;
    #define PARTID3                     _PARTID.Overlap_STR.PARTID3STR.Byte
    #define PARTID3_ID3                 _PARTID.Overlap_STR.PARTID3STR.Bits.ID3
    
    #define PARTID3_ID3_MASK            255U
    #define PARTID3_ID3_BITNUM          0U
    
  } Overlap_STR;

} PARTIDSTR;
extern volatile PARTIDSTR _PARTID @0x00000000;
#define PARTID                          _PARTID.Dword


/*** IVBR - Interrupt Vector Base Register; 0x00000010 ***/
typedef union {
  word Word;
  struct {
    word             :1; 
    word IVB_ADDR    :15;                                      /* Interrupt Vector Base Address Bits */
  } Bits;
} IVBRSTR;
extern volatile IVBRSTR _IVBR @0x00000010;
#define IVBR                            _IVBR.Word
#define IVBR_IVB_ADDR                   _IVBR.Bits.IVB_ADDR

#define IVBR_IVB_ADDR_MASK              65534U
#define IVBR_IVB_ADDR_BITNUM            1U


/*** INT_CFADDR - Interrupt Request Configuration Address Register; 0x00000017 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte INT_CFADDR_grp :4;                                    /* Interrupt Request Configuration Data Register Select Bits */ /*Warning: group name is duplicated with register name*/
    byte             :1; 
  } Bits;
} INT_CFADDRSTR;
extern volatile INT_CFADDRSTR _INT_CFADDR @0x00000017;
#define INT_CFADDR                      _INT_CFADDR.Byte
#define INT_CFADDR_INT_CFADDR           _INT_CFADDR.Bits.INT_CFADDR_grp

#define INT_CFADDR_INT_CFADDR_MASK      120U
#define INT_CFADDR_INT_CFADDR_BITNUM    3U


/*** INT_CFDATA0 - Interrupt Request Configuration Data Register 0; 0x00000018 ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA0STR;
extern volatile INT_CFDATA0STR _INT_CFDATA0 @0x00000018;
#define INT_CFDATA0                     _INT_CFDATA0.Byte
#define INT_CFDATA0_PRIOLVL             _INT_CFDATA0.Bits.PRIOLVL
/* INT_CFDATA_ARR: Access 8 INT_CFDATAx registers in an array */
#define INT_CFDATA_ARR                  ((volatile byte *) &INT_CFDATA0)

#define INT_CFDATA0_PRIOLVL_MASK        7U
#define INT_CFDATA0_PRIOLVL_BITNUM      0U


/*** INT_CFDATA1 - Interrupt Request Configuration Data Register 1; 0x00000019 ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA1STR;
extern volatile INT_CFDATA1STR _INT_CFDATA1 @0x00000019;
#define INT_CFDATA1                     _INT_CFDATA1.Byte
#define INT_CFDATA1_PRIOLVL             _INT_CFDATA1.Bits.PRIOLVL

#define INT_CFDATA1_PRIOLVL_MASK        7U
#define INT_CFDATA1_PRIOLVL_BITNUM      0U


/*** INT_CFDATA2 - Interrupt Request Configuration Data Register 2; 0x0000001A ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA2STR;
extern volatile INT_CFDATA2STR _INT_CFDATA2 @0x0000001A;
#define INT_CFDATA2                     _INT_CFDATA2.Byte
#define INT_CFDATA2_PRIOLVL             _INT_CFDATA2.Bits.PRIOLVL

#define INT_CFDATA2_PRIOLVL_MASK        7U
#define INT_CFDATA2_PRIOLVL_BITNUM      0U


/*** INT_CFDATA3 - Interrupt Request Configuration Data Register 3; 0x0000001B ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA3STR;
extern volatile INT_CFDATA3STR _INT_CFDATA3 @0x0000001B;
#define INT_CFDATA3                     _INT_CFDATA3.Byte
#define INT_CFDATA3_PRIOLVL             _INT_CFDATA3.Bits.PRIOLVL

#define INT_CFDATA3_PRIOLVL_MASK        7U
#define INT_CFDATA3_PRIOLVL_BITNUM      0U


/*** INT_CFDATA4 - Interrupt Request Configuration Data Register 4; 0x0000001C ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA4STR;
extern volatile INT_CFDATA4STR _INT_CFDATA4 @0x0000001C;
#define INT_CFDATA4                     _INT_CFDATA4.Byte
#define INT_CFDATA4_PRIOLVL             _INT_CFDATA4.Bits.PRIOLVL

#define INT_CFDATA4_PRIOLVL_MASK        7U
#define INT_CFDATA4_PRIOLVL_BITNUM      0U


/*** INT_CFDATA5 - Interrupt Request Configuration Data Register 5; 0x0000001D ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA5STR;
extern volatile INT_CFDATA5STR _INT_CFDATA5 @0x0000001D;
#define INT_CFDATA5                     _INT_CFDATA5.Byte
#define INT_CFDATA5_PRIOLVL             _INT_CFDATA5.Bits.PRIOLVL

#define INT_CFDATA5_PRIOLVL_MASK        7U
#define INT_CFDATA5_PRIOLVL_BITNUM      0U


/*** INT_CFDATA6 - Interrupt Request Configuration Data Register 6; 0x0000001E ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA6STR;
extern volatile INT_CFDATA6STR _INT_CFDATA6 @0x0000001E;
#define INT_CFDATA6                     _INT_CFDATA6.Byte
#define INT_CFDATA6_PRIOLVL             _INT_CFDATA6.Bits.PRIOLVL

#define INT_CFDATA6_PRIOLVL_MASK        7U
#define INT_CFDATA6_PRIOLVL_BITNUM      0U


/*** INT_CFDATA7 - Interrupt Request Configuration Data Register 7; 0x0000001F ***/
typedef union {
  byte Byte;
  struct {
    byte PRIOLVL     :3;                                       /* Interrupt Request Priority Level Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INT_CFDATA7STR;
extern volatile INT_CFDATA7STR _INT_CFDATA7 @0x0000001F;
#define INT_CFDATA7                     _INT_CFDATA7.Byte
#define INT_CFDATA7_PRIOLVL             _INT_CFDATA7.Bits.PRIOLVL

#define INT_CFDATA7_PRIOLVL_MASK        7U
#define INT_CFDATA7_PRIOLVL_BITNUM      0U


/*** MODE - Mode Register; 0x00000070 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte MODC        :1;                                       /* Mode Select Bit */
  } Bits;
} MODESTR;
extern volatile MODESTR _MODE @0x00000070;
#define MODE                            _MODE.Byte
#define MODE_MODC                       _MODE.Bits.MODC

#define MODE_MODC_MASK                  128U


/*** MMCEC - Error code register; 0x00000080 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** MMCECH - Error code register high; 0x00000080 ***/
    union {
      byte Byte;
      struct {
        byte TGT         :4;                                       /* Target Field */
        byte ITR         :4;                                       /* Initiator Field */
      } Bits;
    } MMCECHSTR;
    #define MMCECH                      _MMCEC.Overlap_STR.MMCECHSTR.Byte
    #define MMCECH_TGT                  _MMCEC.Overlap_STR.MMCECHSTR.Bits.TGT
    #define MMCECH_ITR                  _MMCEC.Overlap_STR.MMCECHSTR.Bits.ITR
    
    #define MMCECH_TGT_MASK             15U
    #define MMCECH_TGT_BITNUM           0U
    #define MMCECH_ITR_MASK             240U
    #define MMCECH_ITR_BITNUM           4U
    

    /*** MMCECL - Error code register low; 0x00000081 ***/
    union {
      byte Byte;
      struct {
        byte ERR         :4;                                       /* Error Type Field */
        byte ACC         :4;                                       /* Access Type Field */
      } Bits;
    } MMCECLSTR;
    #define MMCECL                      _MMCEC.Overlap_STR.MMCECLSTR.Byte
    #define MMCECL_ERR                  _MMCEC.Overlap_STR.MMCECLSTR.Bits.ERR
    #define MMCECL_ACC                  _MMCEC.Overlap_STR.MMCECLSTR.Bits.ACC
    
    #define MMCECL_ERR_MASK             15U
    #define MMCECL_ERR_BITNUM           0U
    #define MMCECL_ACC_MASK             240U
    #define MMCECL_ACC_BITNUM           4U
    
  } Overlap_STR;

  struct {
    word ERR         :4;                                       /* Error Type Field */
    word ACC         :4;                                       /* Access Type Field */
    word TGT         :4;                                       /* Target Field */
    word ITR         :4;                                       /* Initiator Field */
  } Bits;
} MMCECSTR;
extern volatile MMCECSTR _MMCEC @0x00000080;
#define MMCEC                           _MMCEC.Word
#define MMCEC_ERR                       _MMCEC.Bits.ERR
#define MMCEC_ACC                       _MMCEC.Bits.ACC
#define MMCEC_TGT                       _MMCEC.Bits.TGT
#define MMCEC_ITR                       _MMCEC.Bits.ITR

#define MMCEC_ERR_MASK                  15U
#define MMCEC_ERR_BITNUM                0U
#define MMCEC_ACC_MASK                  240U
#define MMCEC_ACC_BITNUM                4U
#define MMCEC_TGT_MASK                  3840U
#define MMCEC_TGT_BITNUM                8U
#define MMCEC_ITR_MASK                  61440U
#define MMCEC_ITR_BITNUM                12U


/*** MMCCCR - Captured S12ZCPU Condition Code Register Low; 0x00000082 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** MMCCCRH - Captured S12ZCPU Condition Code Register High; 0x00000082 ***/
    union {
      byte Byte;
      struct {
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte CPUU        :1;                                       /* S12ZCPU User State Flag */
      } Bits;
    } MMCCCRHSTR;
    #define MMCCCRH                     _MMCCCR.Overlap_STR.MMCCCRHSTR.Byte
    #define MMCCCRH_CPUU                _MMCCCR.Overlap_STR.MMCCCRHSTR.Bits.CPUU
    
    #define MMCCCRH_CPUU_MASK           128U
    

    /*** MMCCCRL - Captured S12ZCPU Condition Code Register Low; 0x00000083 ***/
    union {
      byte Byte;
      struct {
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte CPUI        :1;                                       /* S12ZCPU I-Interrupt Mask */
        byte             :1; 
        byte CPUX        :1;                                       /* S12ZCPU X-Interrupt Mask */
        byte             :1; 
      } Bits;
    } MMCCCRLSTR;
    #define MMCCCRL                     _MMCCCR.Overlap_STR.MMCCCRLSTR.Byte
    #define MMCCCRL_CPUI                _MMCCCR.Overlap_STR.MMCCCRLSTR.Bits.CPUI
    #define MMCCCRL_CPUX                _MMCCCR.Overlap_STR.MMCCCRLSTR.Bits.CPUX
    
    #define MMCCCRL_CPUI_MASK           16U
    #define MMCCCRL_CPUX_MASK           64U
    
  } Overlap_STR;

  struct {
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word CPUI        :1;                                       /* S12ZCPU I-Interrupt Mask */
    word             :1; 
    word CPUX        :1;                                       /* S12ZCPU X-Interrupt Mask */
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word CPUU        :1;                                       /* S12ZCPU User State Flag */
  } Bits;
} MMCCCRSTR;
extern volatile MMCCCRSTR _MMCCCR @0x00000082;
#define MMCCCR                          _MMCCCR.Word
#define MMCCCR_CPUI                     _MMCCCR.Bits.CPUI
#define MMCCCR_CPUX                     _MMCCCR.Bits.CPUX
#define MMCCCR_CPUU                     _MMCCCR.Bits.CPUU

#define MMCCCR_CPUI_MASK                16U
#define MMCCCR_CPUX_MASK                64U
#define MMCCCR_CPUU_MASK                32768U


/*** MMCPCH - Captured S12ZCPU Program Counter High; 0x00000085 ***/
typedef union {
  byte Byte;
  struct {
    byte CPUPC       :8;                                       /* S12ZCPU Program Counter Value */
  } Bits;
} MMCPCHSTR;
extern volatile MMCPCHSTR _MMCPCH @0x00000085;
#define MMCPCH                          _MMCPCH.Byte
#define MMCPCH_CPUPC                    _MMCPCH.Bits.CPUPC

#define MMCPCH_CPUPC_MASK               255U
#define MMCPCH_CPUPC_BITNUM             0U


/*** MMCPCM - Captured S12ZCPU Program Counter Middle; 0x00000086 ***/
typedef union {
  byte Byte;
  struct {
    byte CPUPC       :8;                                       /* S12ZCPU Program Counter Value */
  } Bits;
} MMCPCMSTR;
extern volatile MMCPCMSTR _MMCPCM @0x00000086;
#define MMCPCM                          _MMCPCM.Byte
#define MMCPCM_CPUPC                    _MMCPCM.Bits.CPUPC

#define MMCPCM_CPUPC_MASK               255U
#define MMCPCM_CPUPC_BITNUM             0U


/*** MMCPCL - Captured S12ZCPU Program Counter Low; 0x00000087 ***/
typedef union {
  byte Byte;
  struct {
    byte CPUPC       :8;                                       /* S12ZCPU Program Counter Value */
  } Bits;
} MMCPCLSTR;
extern volatile MMCPCLSTR _MMCPCL @0x00000087;
#define MMCPCL                          _MMCPCL.Byte
#define MMCPCL_CPUPC                    _MMCPCL.Bits.CPUPC

#define MMCPCL_CPUPC_MASK               255U
#define MMCPCL_CPUPC_BITNUM             0U


/*** DBGC1 - Debug Control Register 1; 0x00000100 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte EEVE1       :1;                                       /* External Event Enable */
    byte             :1; 
    byte BRKCPU      :1;                                       /* CPU Breakpoint Enable */
    byte BDMBP       :1;                                       /* Background Debug Mode Enable */
    byte             :1; 
    byte TRIG        :1;                                       /* Immediate Trigger Request Bit */
    byte ARM         :1;                                       /* Arm Bit */
  } Bits;
} DBGC1STR;
extern volatile DBGC1STR _DBGC1 @0x00000100;
#define DBGC1                           _DBGC1.Byte
#define DBGC1_EEVE1                     _DBGC1.Bits.EEVE1
#define DBGC1_BRKCPU                    _DBGC1.Bits.BRKCPU
#define DBGC1_BDMBP                     _DBGC1.Bits.BDMBP
#define DBGC1_TRIG                      _DBGC1.Bits.TRIG
#define DBGC1_ARM                       _DBGC1.Bits.ARM

#define DBGC1_EEVE1_MASK                2U
#define DBGC1_BRKCPU_MASK               8U
#define DBGC1_BDMBP_MASK                16U
#define DBGC1_TRIG_MASK                 64U
#define DBGC1_ARM_MASK                  128U


/*** DBGC2 - Debug Control Register 2; 0x00000101 ***/
typedef union {
  byte Byte;
  struct {
    byte ABCM        :2;                                       /* A and B Comparator Match Control */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} DBGC2STR;
extern volatile DBGC2STR _DBGC2 @0x00000101;
#define DBGC2                           _DBGC2.Byte
#define DBGC2_ABCM                      _DBGC2.Bits.ABCM

#define DBGC2_ABCM_MASK                 3U
#define DBGC2_ABCM_BITNUM               0U


/*** DBGSCR1 - Debug State Control Register 1; 0x00000107 ***/
typedef union {
  byte Byte;
  struct {
    byte C0SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte C1SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte             :1; 
    byte             :1; 
    byte C3SC        :2;                                       /* Match State Sequencer Transitions Bits */
  } Bits;
} DBGSCR1STR;
extern volatile DBGSCR1STR _DBGSCR1 @0x00000107;
#define DBGSCR1                         _DBGSCR1.Byte
#define DBGSCR1_C0SC                    _DBGSCR1.Bits.C0SC
#define DBGSCR1_C1SC                    _DBGSCR1.Bits.C1SC
#define DBGSCR1_C3SC                    _DBGSCR1.Bits.C3SC

#define DBGSCR1_C0SC_MASK               3U
#define DBGSCR1_C0SC_BITNUM             0U
#define DBGSCR1_C1SC_MASK               12U
#define DBGSCR1_C1SC_BITNUM             2U
#define DBGSCR1_C3SC_MASK               192U
#define DBGSCR1_C3SC_BITNUM             6U


/*** DBGSCR2 - Debug State Control Register 2; 0x00000108 ***/
typedef union {
  byte Byte;
  struct {
    byte C0SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte C1SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte             :1; 
    byte             :1; 
    byte C3SC        :2;                                       /* Match State Sequencer Transitions Bits */
  } Bits;
} DBGSCR2STR;
extern volatile DBGSCR2STR _DBGSCR2 @0x00000108;
#define DBGSCR2                         _DBGSCR2.Byte
#define DBGSCR2_C0SC                    _DBGSCR2.Bits.C0SC
#define DBGSCR2_C1SC                    _DBGSCR2.Bits.C1SC
#define DBGSCR2_C3SC                    _DBGSCR2.Bits.C3SC

#define DBGSCR2_C0SC_MASK               3U
#define DBGSCR2_C0SC_BITNUM             0U
#define DBGSCR2_C1SC_MASK               12U
#define DBGSCR2_C1SC_BITNUM             2U
#define DBGSCR2_C3SC_MASK               192U
#define DBGSCR2_C3SC_BITNUM             6U


/*** DBGSCR3 - Debug State Control Register 3; 0x00000109 ***/
typedef union {
  byte Byte;
  struct {
    byte C0SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte C1SC        :2;                                       /* Match State Sequencer Transitions Bits */
    byte             :1; 
    byte             :1; 
    byte C3SC        :2;                                       /* Match State Sequencer Transitions Bits */
  } Bits;
} DBGSCR3STR;
extern volatile DBGSCR3STR _DBGSCR3 @0x00000109;
#define DBGSCR3                         _DBGSCR3.Byte
#define DBGSCR3_C0SC                    _DBGSCR3.Bits.C0SC
#define DBGSCR3_C1SC                    _DBGSCR3.Bits.C1SC
#define DBGSCR3_C3SC                    _DBGSCR3.Bits.C3SC

#define DBGSCR3_C0SC_MASK               3U
#define DBGSCR3_C0SC_BITNUM             0U
#define DBGSCR3_C1SC_MASK               12U
#define DBGSCR3_C1SC_BITNUM             2U
#define DBGSCR3_C3SC_MASK               192U
#define DBGSCR3_C3SC_BITNUM             6U


/*** DBGEFR - Debug Event Flag Register; 0x0000010A ***/
typedef union {
  byte Byte;
  struct {
    byte ME0         :1;                                       /* Match Event 0 */
    byte ME1         :1;                                       /* Match Event 1 */
    byte             :1; 
    byte ME3         :1;                                       /* Match Event 3 */
    byte EEVF        :1;                                       /* External Event Flag */
    byte             :1; 
    byte TRIGF       :1;                                       /* TRIG Flag */
    byte             :1; 
  } Bits;
  struct {
    byte grpME   :2;
    byte         :1;
    byte grpME_3 :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} DBGEFRSTR;
extern volatile DBGEFRSTR _DBGEFR @0x0000010A;
#define DBGEFR                          _DBGEFR.Byte
#define DBGEFR_ME0                      _DBGEFR.Bits.ME0
#define DBGEFR_ME1                      _DBGEFR.Bits.ME1
#define DBGEFR_ME3                      _DBGEFR.Bits.ME3
#define DBGEFR_EEVF                     _DBGEFR.Bits.EEVF
#define DBGEFR_TRIGF                    _DBGEFR.Bits.TRIGF
#define DBGEFR_ME                       _DBGEFR.MergedBits.grpME

#define DBGEFR_ME0_MASK                 1U
#define DBGEFR_ME1_MASK                 2U
#define DBGEFR_ME3_MASK                 8U
#define DBGEFR_EEVF_MASK                16U
#define DBGEFR_TRIGF_MASK               64U
#define DBGEFR_ME_MASK                  3U
#define DBGEFR_ME_BITNUM                0U


/*** DBGSR - Debug Status Register; 0x0000010B ***/
typedef union {
  byte Byte;
  struct {
    byte SSF0        :1;                                       /* State Sequencer Flag Bits */
    byte SSF1        :1;                                       /* State Sequencer Flag Bit 1 */
    byte SSF2        :1;                                       /* State Sequencer Flag Bit 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpSSF  :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} DBGSRSTR;
extern volatile DBGSRSTR _DBGSR @0x0000010B;
#define DBGSR                           _DBGSR.Byte
#define DBGSR_SSF0                      _DBGSR.Bits.SSF0
#define DBGSR_SSF1                      _DBGSR.Bits.SSF1
#define DBGSR_SSF2                      _DBGSR.Bits.SSF2
#define DBGSR_SSF                       _DBGSR.MergedBits.grpSSF

#define DBGSR_SSF0_MASK                 1U
#define DBGSR_SSF1_MASK                 2U
#define DBGSR_SSF2_MASK                 4U
#define DBGSR_SSF_MASK                  7U
#define DBGSR_SSF_BITNUM                0U


/*** DBGACTL - Debug Comparator A Control Register; 0x00000110 ***/
typedef union {
  byte Byte;
  struct {
    byte COMPE       :1;                                       /* Determines if comparator is enabled */
    byte             :1; 
    byte RWE         :1;                                       /* Read/Write Enable Bit */
    byte RW          :1;                                       /* Read/Write Comparator Value Bit */
    byte             :1; 
    byte INST        :1;                                       /* Instruction Select */
    byte NDB         :1;                                       /* Not Data Bus */
    byte             :1; 
  } Bits;
} DBGACTLSTR;
extern volatile DBGACTLSTR _DBGACTL @0x00000110;
#define DBGACTL                         _DBGACTL.Byte
#define DBGACTL_COMPE                   _DBGACTL.Bits.COMPE
#define DBGACTL_RWE                     _DBGACTL.Bits.RWE
#define DBGACTL_RW                      _DBGACTL.Bits.RW
#define DBGACTL_INST                    _DBGACTL.Bits.INST
#define DBGACTL_NDB                     _DBGACTL.Bits.NDB

#define DBGACTL_COMPE_MASK              1U
#define DBGACTL_RWE_MASK                4U
#define DBGACTL_RW_MASK                 8U
#define DBGACTL_INST_MASK               32U
#define DBGACTL_NDB_MASK                64U


/*** DBGAAH - Debug Comparator A Address Register High; 0x00000115 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGAA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGAAHSTR;
extern volatile DBGAAHSTR _DBGAAH @0x00000115;
#define DBGAAH                          _DBGAAH.Byte
#define DBGAAH_DBGAA                    _DBGAAH.Bits.DBGAA

#define DBGAAH_DBGAA_MASK               255U
#define DBGAAH_DBGAA_BITNUM             0U


/*** DBGAAM - Debug Comparator A Address Register Middle; 0x00000116 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGAA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGAAMSTR;
extern volatile DBGAAMSTR _DBGAAM @0x00000116;
#define DBGAAM                          _DBGAAM.Byte
#define DBGAAM_DBGAA                    _DBGAAM.Bits.DBGAA

#define DBGAAM_DBGAA_MASK               255U
#define DBGAAM_DBGAA_BITNUM             0U


/*** DBGAAL - Debug Comparator A Address Register Low; 0x00000117 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGAA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGAALSTR;
extern volatile DBGAALSTR _DBGAAL @0x00000117;
#define DBGAAL                          _DBGAAL.Byte
#define DBGAAL_DBGAA                    _DBGAAL.Bits.DBGAA

#define DBGAAL_DBGAA_MASK               255U
#define DBGAAL_DBGAA_BITNUM             0U


/*** DBGAD0 - Debug Comparator A Data Register 0; 0x00000118 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT24       :1;                                       /* Comparator Data Bit 24 */
    byte BIT25       :1;                                       /* Comparator Data Bit 25 */
    byte BIT26       :1;                                       /* Comparator Data Bit 26 */
    byte BIT27       :1;                                       /* Comparator Data Bit 27 */
    byte BIT28       :1;                                       /* Comparator Data Bit 28 */
    byte BIT29       :1;                                       /* Comparator Data Bit 29 */
    byte BIT30       :1;                                       /* Comparator Data Bit 30 */
    byte BIT31       :1;                                       /* Comparator Data Bit 31 */
  } Bits;
} DBGAD0STR;
extern volatile DBGAD0STR _DBGAD0 @0x00000118;
#define DBGAD0                          _DBGAD0.Byte
#define DBGAD0_BIT24                    _DBGAD0.Bits.BIT24
#define DBGAD0_BIT25                    _DBGAD0.Bits.BIT25
#define DBGAD0_BIT26                    _DBGAD0.Bits.BIT26
#define DBGAD0_BIT27                    _DBGAD0.Bits.BIT27
#define DBGAD0_BIT28                    _DBGAD0.Bits.BIT28
#define DBGAD0_BIT29                    _DBGAD0.Bits.BIT29
#define DBGAD0_BIT30                    _DBGAD0.Bits.BIT30
#define DBGAD0_BIT31                    _DBGAD0.Bits.BIT31
/* DBGAD_ARR: Access 4 DBGADx registers in an array */
#define DBGAD_ARR                       ((volatile byte *) &DBGAD0)

#define DBGAD0_BIT24_MASK               1U
#define DBGAD0_BIT25_MASK               2U
#define DBGAD0_BIT26_MASK               4U
#define DBGAD0_BIT27_MASK               8U
#define DBGAD0_BIT28_MASK               16U
#define DBGAD0_BIT29_MASK               32U
#define DBGAD0_BIT30_MASK               64U
#define DBGAD0_BIT31_MASK               128U


/*** DBGAD1 - Debug Comparator A Data Register 1; 0x00000119 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT16       :1;                                       /* Comparator Data Bit 16 */
    byte BIT17       :1;                                       /* Comparator Data Bit 17 */
    byte BIT18       :1;                                       /* Comparator Data Bit 18 */
    byte BIT19       :1;                                       /* Comparator Data Bit 19 */
    byte BIT20       :1;                                       /* Comparator Data Bit 20 */
    byte BIT21       :1;                                       /* Comparator Data Bit 21 */
    byte BIT22       :1;                                       /* Comparator Data Bit 22 */
    byte BIT23       :1;                                       /* Comparator Data Bit 23 */
  } Bits;
} DBGAD1STR;
extern volatile DBGAD1STR _DBGAD1 @0x00000119;
#define DBGAD1                          _DBGAD1.Byte
#define DBGAD1_BIT16                    _DBGAD1.Bits.BIT16
#define DBGAD1_BIT17                    _DBGAD1.Bits.BIT17
#define DBGAD1_BIT18                    _DBGAD1.Bits.BIT18
#define DBGAD1_BIT19                    _DBGAD1.Bits.BIT19
#define DBGAD1_BIT20                    _DBGAD1.Bits.BIT20
#define DBGAD1_BIT21                    _DBGAD1.Bits.BIT21
#define DBGAD1_BIT22                    _DBGAD1.Bits.BIT22
#define DBGAD1_BIT23                    _DBGAD1.Bits.BIT23

#define DBGAD1_BIT16_MASK               1U
#define DBGAD1_BIT17_MASK               2U
#define DBGAD1_BIT18_MASK               4U
#define DBGAD1_BIT19_MASK               8U
#define DBGAD1_BIT20_MASK               16U
#define DBGAD1_BIT21_MASK               32U
#define DBGAD1_BIT22_MASK               64U
#define DBGAD1_BIT23_MASK               128U


/*** DBGAD2 - Debug Comparator A Data Register 2; 0x0000011A ***/
typedef union {
  byte Byte;
  struct {
    byte BIT8        :1;                                       /* Comparator Data Bit 8 */
    byte BIT9        :1;                                       /* Comparator Data Bit 9 */
    byte BIT10       :1;                                       /* Comparator Data Bit 10 */
    byte BIT11       :1;                                       /* Comparator Data Bit 11 */
    byte BIT12       :1;                                       /* Comparator Data Bit 12 */
    byte BIT13       :1;                                       /* Comparator Data Bit 13 */
    byte BIT14       :1;                                       /* Comparator Data Bit 14 */
    byte BIT15       :1;                                       /* Comparator Data Bit 15 */
  } Bits;
} DBGAD2STR;
extern volatile DBGAD2STR _DBGAD2 @0x0000011A;
#define DBGAD2                          _DBGAD2.Byte
#define DBGAD2_BIT8                     _DBGAD2.Bits.BIT8
#define DBGAD2_BIT9                     _DBGAD2.Bits.BIT9
#define DBGAD2_BIT10                    _DBGAD2.Bits.BIT10
#define DBGAD2_BIT11                    _DBGAD2.Bits.BIT11
#define DBGAD2_BIT12                    _DBGAD2.Bits.BIT12
#define DBGAD2_BIT13                    _DBGAD2.Bits.BIT13
#define DBGAD2_BIT14                    _DBGAD2.Bits.BIT14
#define DBGAD2_BIT15                    _DBGAD2.Bits.BIT15

#define DBGAD2_BIT8_MASK                1U
#define DBGAD2_BIT9_MASK                2U
#define DBGAD2_BIT10_MASK               4U
#define DBGAD2_BIT11_MASK               8U
#define DBGAD2_BIT12_MASK               16U
#define DBGAD2_BIT13_MASK               32U
#define DBGAD2_BIT14_MASK               64U
#define DBGAD2_BIT15_MASK               128U


/*** DBGAD3 - Debug Comparator A Data Register 3; 0x0000011B ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* Comparator Data Bit 0 */
    byte BIT1        :1;                                       /* Comparator Data Bit 1 */
    byte BIT2        :1;                                       /* Comparator Data Bit 2 */
    byte BIT3        :1;                                       /* Comparator Data Bit 3 */
    byte BIT4        :1;                                       /* Comparator Data Bit 4 */
    byte BIT5        :1;                                       /* Comparator Data Bit 5 */
    byte BIT6        :1;                                       /* Comparator Data Bit 6 */
    byte BIT7        :1;                                       /* Comparator Data Bit 7 */
  } Bits;
} DBGAD3STR;
extern volatile DBGAD3STR _DBGAD3 @0x0000011B;
#define DBGAD3                          _DBGAD3.Byte
#define DBGAD3_BIT0                     _DBGAD3.Bits.BIT0
#define DBGAD3_BIT1                     _DBGAD3.Bits.BIT1
#define DBGAD3_BIT2                     _DBGAD3.Bits.BIT2
#define DBGAD3_BIT3                     _DBGAD3.Bits.BIT3
#define DBGAD3_BIT4                     _DBGAD3.Bits.BIT4
#define DBGAD3_BIT5                     _DBGAD3.Bits.BIT5
#define DBGAD3_BIT6                     _DBGAD3.Bits.BIT6
#define DBGAD3_BIT7                     _DBGAD3.Bits.BIT7

#define DBGAD3_BIT0_MASK                1U
#define DBGAD3_BIT1_MASK                2U
#define DBGAD3_BIT2_MASK                4U
#define DBGAD3_BIT3_MASK                8U
#define DBGAD3_BIT4_MASK                16U
#define DBGAD3_BIT5_MASK                32U
#define DBGAD3_BIT6_MASK                64U
#define DBGAD3_BIT7_MASK                128U


/*** DBGADM0 - Debug Comparator A Data Mask Register 0; 0x0000011C ***/
typedef union {
  byte Byte;
  struct {
    byte BIT24       :1;                                       /* Comparator Data Mask Bit 24 */
    byte BIT25       :1;                                       /* Comparator Data Mask Bit 25 */
    byte BIT26       :1;                                       /* Comparator Data Mask Bit 26 */
    byte BIT27       :1;                                       /* Comparator Data Mask Bit 27 */
    byte BIT28       :1;                                       /* Comparator Data Mask Bit 28 */
    byte BIT29       :1;                                       /* Comparator Data Mask Bit 29 */
    byte BIT30       :1;                                       /* Comparator Data Mask Bit 30 */
    byte BIT31       :1;                                       /* Comparator Data Mask Bit 31 */
  } Bits;
} DBGADM0STR;
extern volatile DBGADM0STR _DBGADM0 @0x0000011C;
#define DBGADM0                         _DBGADM0.Byte
#define DBGADM0_BIT24                   _DBGADM0.Bits.BIT24
#define DBGADM0_BIT25                   _DBGADM0.Bits.BIT25
#define DBGADM0_BIT26                   _DBGADM0.Bits.BIT26
#define DBGADM0_BIT27                   _DBGADM0.Bits.BIT27
#define DBGADM0_BIT28                   _DBGADM0.Bits.BIT28
#define DBGADM0_BIT29                   _DBGADM0.Bits.BIT29
#define DBGADM0_BIT30                   _DBGADM0.Bits.BIT30
#define DBGADM0_BIT31                   _DBGADM0.Bits.BIT31
/* DBGADM_ARR: Access 4 DBGADMx registers in an array */
#define DBGADM_ARR                      ((volatile byte *) &DBGADM0)

#define DBGADM0_BIT24_MASK              1U
#define DBGADM0_BIT25_MASK              2U
#define DBGADM0_BIT26_MASK              4U
#define DBGADM0_BIT27_MASK              8U
#define DBGADM0_BIT28_MASK              16U
#define DBGADM0_BIT29_MASK              32U
#define DBGADM0_BIT30_MASK              64U
#define DBGADM0_BIT31_MASK              128U


/*** DBGADM1 - Debug Comparator A Data Mask Register 1; 0x0000011D ***/
typedef union {
  byte Byte;
  struct {
    byte BIT16       :1;                                       /* Comparator Data Mask Bit 16 */
    byte BIT17       :1;                                       /* Comparator Data Mask Bit 17 */
    byte BIT18       :1;                                       /* Comparator Data Mask Bit 18 */
    byte BIT19       :1;                                       /* Comparator Data Mask Bit 19 */
    byte BIT20       :1;                                       /* Comparator Data Mask Bit 20 */
    byte BIT21       :1;                                       /* Comparator Data Mask Bit 21 */
    byte BIT22       :1;                                       /* Comparator Data Mask Bit 22 */
    byte BIT23       :1;                                       /* Comparator Data Mask Bit 23 */
  } Bits;
} DBGADM1STR;
extern volatile DBGADM1STR _DBGADM1 @0x0000011D;
#define DBGADM1                         _DBGADM1.Byte
#define DBGADM1_BIT16                   _DBGADM1.Bits.BIT16
#define DBGADM1_BIT17                   _DBGADM1.Bits.BIT17
#define DBGADM1_BIT18                   _DBGADM1.Bits.BIT18
#define DBGADM1_BIT19                   _DBGADM1.Bits.BIT19
#define DBGADM1_BIT20                   _DBGADM1.Bits.BIT20
#define DBGADM1_BIT21                   _DBGADM1.Bits.BIT21
#define DBGADM1_BIT22                   _DBGADM1.Bits.BIT22
#define DBGADM1_BIT23                   _DBGADM1.Bits.BIT23

#define DBGADM1_BIT16_MASK              1U
#define DBGADM1_BIT17_MASK              2U
#define DBGADM1_BIT18_MASK              4U
#define DBGADM1_BIT19_MASK              8U
#define DBGADM1_BIT20_MASK              16U
#define DBGADM1_BIT21_MASK              32U
#define DBGADM1_BIT22_MASK              64U
#define DBGADM1_BIT23_MASK              128U


/*** DBGADM2 - Debug Comparator A Data Mask Register 2; 0x0000011E ***/
typedef union {
  byte Byte;
  struct {
    byte BIT8        :1;                                       /* Comparator Data Mask Bit 8 */
    byte BIT9        :1;                                       /* Comparator Data Mask Bit 9 */
    byte BIT10       :1;                                       /* Comparator Data Mask Bit 10 */
    byte BIT11       :1;                                       /* Comparator Data Mask Bit 11 */
    byte BIT12       :1;                                       /* Comparator Data Mask Bit 12 */
    byte BIT13       :1;                                       /* Comparator Data Mask Bit 13 */
    byte BIT14       :1;                                       /* Comparator Data Mask Bit 14 */
    byte BIT15       :1;                                       /* Comparator Data Mask Bit 15 */
  } Bits;
} DBGADM2STR;
extern volatile DBGADM2STR _DBGADM2 @0x0000011E;
#define DBGADM2                         _DBGADM2.Byte
#define DBGADM2_BIT8                    _DBGADM2.Bits.BIT8
#define DBGADM2_BIT9                    _DBGADM2.Bits.BIT9
#define DBGADM2_BIT10                   _DBGADM2.Bits.BIT10
#define DBGADM2_BIT11                   _DBGADM2.Bits.BIT11
#define DBGADM2_BIT12                   _DBGADM2.Bits.BIT12
#define DBGADM2_BIT13                   _DBGADM2.Bits.BIT13
#define DBGADM2_BIT14                   _DBGADM2.Bits.BIT14
#define DBGADM2_BIT15                   _DBGADM2.Bits.BIT15

#define DBGADM2_BIT8_MASK               1U
#define DBGADM2_BIT9_MASK               2U
#define DBGADM2_BIT10_MASK              4U
#define DBGADM2_BIT11_MASK              8U
#define DBGADM2_BIT12_MASK              16U
#define DBGADM2_BIT13_MASK              32U
#define DBGADM2_BIT14_MASK              64U
#define DBGADM2_BIT15_MASK              128U


/*** DBGADM3 - Debug Comparator A Data Mask Register 3; 0x0000011F ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* Comparator Data Mask Bit 0 */
    byte BIT1        :1;                                       /* Comparator Data Mask Bit 1 */
    byte BIT2        :1;                                       /* Comparator Data Mask Bit 2 */
    byte BIT3        :1;                                       /* Comparator Data Mask Bit 3 */
    byte BIT4        :1;                                       /* Comparator Data Mask Bit 4 */
    byte BIT5        :1;                                       /* Comparator Data Mask Bit 5 */
    byte BIT6        :1;                                       /* Comparator Data Mask Bit 6 */
    byte BIT7        :1;                                       /* Comparator Data Mask Bit 7 */
  } Bits;
} DBGADM3STR;
extern volatile DBGADM3STR _DBGADM3 @0x0000011F;
#define DBGADM3                         _DBGADM3.Byte
#define DBGADM3_BIT0                    _DBGADM3.Bits.BIT0
#define DBGADM3_BIT1                    _DBGADM3.Bits.BIT1
#define DBGADM3_BIT2                    _DBGADM3.Bits.BIT2
#define DBGADM3_BIT3                    _DBGADM3.Bits.BIT3
#define DBGADM3_BIT4                    _DBGADM3.Bits.BIT4
#define DBGADM3_BIT5                    _DBGADM3.Bits.BIT5
#define DBGADM3_BIT6                    _DBGADM3.Bits.BIT6
#define DBGADM3_BIT7                    _DBGADM3.Bits.BIT7

#define DBGADM3_BIT0_MASK               1U
#define DBGADM3_BIT1_MASK               2U
#define DBGADM3_BIT2_MASK               4U
#define DBGADM3_BIT3_MASK               8U
#define DBGADM3_BIT4_MASK               16U
#define DBGADM3_BIT5_MASK               32U
#define DBGADM3_BIT6_MASK               64U
#define DBGADM3_BIT7_MASK               128U


/*** DBGBCTL - Debug Comparator B Control Register; 0x00000120 ***/
typedef union {
  byte Byte;
  struct {
    byte COMPE       :1;                                       /* Determines if comparator is enabled */
    byte             :1; 
    byte RWE         :1;                                       /* Read/Write Enable Bit */
    byte RW          :1;                                       /* Read/Write Comparator Value Bit */
    byte             :1; 
    byte INST        :1;                                       /* Instruction Select */
    byte             :1; 
    byte             :1; 
  } Bits;
} DBGBCTLSTR;
extern volatile DBGBCTLSTR _DBGBCTL @0x00000120;
#define DBGBCTL                         _DBGBCTL.Byte
#define DBGBCTL_COMPE                   _DBGBCTL.Bits.COMPE
#define DBGBCTL_RWE                     _DBGBCTL.Bits.RWE
#define DBGBCTL_RW                      _DBGBCTL.Bits.RW
#define DBGBCTL_INST                    _DBGBCTL.Bits.INST

#define DBGBCTL_COMPE_MASK              1U
#define DBGBCTL_RWE_MASK                4U
#define DBGBCTL_RW_MASK                 8U
#define DBGBCTL_INST_MASK               32U


/*** DBGBAH - Debug Comparator B Address Register High; 0x00000125 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGBA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGBAHSTR;
extern volatile DBGBAHSTR _DBGBAH @0x00000125;
#define DBGBAH                          _DBGBAH.Byte
#define DBGBAH_DBGBA                    _DBGBAH.Bits.DBGBA

#define DBGBAH_DBGBA_MASK               255U
#define DBGBAH_DBGBA_BITNUM             0U


/*** DBGBAM - Debug Comparator B Address Register Middle; 0x00000126 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGBA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGBAMSTR;
extern volatile DBGBAMSTR _DBGBAM @0x00000126;
#define DBGBAM                          _DBGBAM.Byte
#define DBGBAM_DBGBA                    _DBGBAM.Bits.DBGBA

#define DBGBAM_DBGBA_MASK               255U
#define DBGBAM_DBGBA_BITNUM             0U


/*** DBGBAL - Debug Comparator B Address Register Low; 0x00000127 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGBA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGBALSTR;
extern volatile DBGBALSTR _DBGBAL @0x00000127;
#define DBGBAL                          _DBGBAL.Byte
#define DBGBAL_DBGBA                    _DBGBAL.Bits.DBGBA

#define DBGBAL_DBGBA_MASK               255U
#define DBGBAL_DBGBA_BITNUM             0U


/*** DBGDCTL - Debug Comparator D Control Register; 0x00000140 ***/
typedef union {
  byte Byte;
  struct {
    byte COMPE       :1;                                       /* Determines if comparator is enabled */
    byte             :1; 
    byte RWE         :1;                                       /* Read/Write Enable Bit */
    byte RW          :1;                                       /* Read/Write Comparator Value Bit */
    byte             :1; 
    byte INST        :1;                                       /* Instruction Select */
    byte             :1; 
    byte             :1; 
  } Bits;
} DBGDCTLSTR;
extern volatile DBGDCTLSTR _DBGDCTL @0x00000140;
#define DBGDCTL                         _DBGDCTL.Byte
#define DBGDCTL_COMPE                   _DBGDCTL.Bits.COMPE
#define DBGDCTL_RWE                     _DBGDCTL.Bits.RWE
#define DBGDCTL_RW                      _DBGDCTL.Bits.RW
#define DBGDCTL_INST                    _DBGDCTL.Bits.INST

#define DBGDCTL_COMPE_MASK              1U
#define DBGDCTL_RWE_MASK                4U
#define DBGDCTL_RW_MASK                 8U
#define DBGDCTL_INST_MASK               32U


/*** DBGDAH - Debug Comparator D Address Register High; 0x00000145 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGDA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGDAHSTR;
extern volatile DBGDAHSTR _DBGDAH @0x00000145;
#define DBGDAH                          _DBGDAH.Byte
#define DBGDAH_DBGDA                    _DBGDAH.Bits.DBGDA

#define DBGDAH_DBGDA_MASK               255U
#define DBGDAH_DBGDA_BITNUM             0U


/*** DBGDAM - Debug Comparator D Address Register Middle; 0x00000146 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGDA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGDAMSTR;
extern volatile DBGDAMSTR _DBGDAM @0x00000146;
#define DBGDAM                          _DBGDAM.Byte
#define DBGDAM_DBGDA                    _DBGDAM.Bits.DBGDA

#define DBGDAM_DBGDA_MASK               255U
#define DBGDAM_DBGDA_BITNUM             0U


/*** DBGDAL - Debug Comparator D Address Register Low; 0x00000147 ***/
typedef union {
  byte Byte;
  struct {
    byte DBGDA       :8;                                       /* Comparator Address Bits */
  } Bits;
} DBGDALSTR;
extern volatile DBGDALSTR _DBGDAL @0x00000147;
#define DBGDAL                          _DBGDAL.Byte
#define DBGDAL_DBGDA                    _DBGDAL.Bits.DBGDA

#define DBGDAL_DBGDA_MASK               255U
#define DBGDAL_DBGDA_BITNUM             0U


/*** MODRR0 - Module Routing Register 0; 0x00000200 ***/
typedef union {
  byte Byte;
  struct {
    byte M0C0RR      :3;                                       /* MSCAN0-CANPHY0 routing */
    byte SPI0RR      :1;                                       /* SPI0 routing */
    byte SCI0RR      :1;                                       /* SCI0 routing */
    byte SCI1RR      :1;                                       /* SCI1 routing */
    byte IIC0RR      :2;                                       /* IIC0 routing */
  } Bits;
} MODRR0STR;
extern volatile MODRR0STR _MODRR0 @0x00000200;
#define MODRR0                          _MODRR0.Byte
#define MODRR0_M0C0RR                   _MODRR0.Bits.M0C0RR
#define MODRR0_SPI0RR                   _MODRR0.Bits.SPI0RR
#define MODRR0_SCI0RR                   _MODRR0.Bits.SCI0RR
#define MODRR0_SCI1RR                   _MODRR0.Bits.SCI1RR
#define MODRR0_IIC0RR                   _MODRR0.Bits.IIC0RR
/* MODRR_ARR: Access 4 MODRRx registers in an array */
#define MODRR_ARR                       ((volatile byte *) &MODRR0)

#define MODRR0_M0C0RR_MASK              7U
#define MODRR0_M0C0RR_BITNUM            0U
#define MODRR0_SPI0RR_MASK              8U
#define MODRR0_SCI0RR_MASK              16U
#define MODRR0_SCI1RR_MASK              32U
#define MODRR0_IIC0RR_MASK              192U
#define MODRR0_IIC0RR_BITNUM            6U


/*** MODRR1 - Module Routing Register 1; 0x00000201 ***/
typedef union {
  byte Byte;
  struct {
    byte TRIG0RR     :2;                                       /* ADC0 trigger input routing bit 0 */
    byte TRIG0NEG    :1;                                       /* ADC0 trigger input inverted polarity */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte T1IC2RR     :1;                                       /* TIM1 IC2 routing */
    byte T1IC3RR     :1;                                       /* TIM1 IC3 routing */
  } Bits;
} MODRR1STR;
extern volatile MODRR1STR _MODRR1 @0x00000201;
#define MODRR1                          _MODRR1.Byte
#define MODRR1_TRIG0RR                  _MODRR1.Bits.TRIG0RR
#define MODRR1_TRIG0NEG                 _MODRR1.Bits.TRIG0NEG
#define MODRR1_T1IC2RR                  _MODRR1.Bits.T1IC2RR
#define MODRR1_T1IC3RR                  _MODRR1.Bits.T1IC3RR

#define MODRR1_TRIG0RR_MASK             3U
#define MODRR1_TRIG0RR_BITNUM           0U
#define MODRR1_TRIG0NEG_MASK            4U
#define MODRR1_T1IC2RR_MASK             64U
#define MODRR1_T1IC3RR_MASK             128U


/*** MODRR2 - Module Routing Register 2; 0x00000202 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte P0C3RR      :1;                                       /* PWM0_3 routing */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte P0C7RR      :1;                                       /* PWM0_7 routing */
  } Bits;
} MODRR2STR;
extern volatile MODRR2STR _MODRR2 @0x00000202;
#define MODRR2                          _MODRR2.Byte
#define MODRR2_P0C3RR                   _MODRR2.Bits.P0C3RR
#define MODRR2_P0C7RR                   _MODRR2.Bits.P0C7RR

#define MODRR2_P0C3RR_MASK              8U
#define MODRR2_P0C7RR_MASK              128U


/*** MODRR3 - Module Routing Register 3; 0x00000203 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte T0IC1RR     :1;                                       /* TIM0 IC1 routing */
    byte T0IC2RR     :1;                                       /* TIM0 IC2 routing */
    byte T0IC3RR0    :1;                                       /* TIM0 IC3 routing bit 0 */
    byte T0IC3RR1    :1;                                       /* TIM0 IC3 routing bit 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte         :1;
    byte grpT0IC3RR :2;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} MODRR3STR;
extern volatile MODRR3STR _MODRR3 @0x00000203;
#define MODRR3                          _MODRR3.Byte
#define MODRR3_T0IC1RR                  _MODRR3.Bits.T0IC1RR
#define MODRR3_T0IC2RR                  _MODRR3.Bits.T0IC2RR
#define MODRR3_T0IC3RR0                 _MODRR3.Bits.T0IC3RR0
#define MODRR3_T0IC3RR1                 _MODRR3.Bits.T0IC3RR1
#define MODRR3_T0IC3RR                  _MODRR3.MergedBits.grpT0IC3RR

#define MODRR3_T0IC1RR_MASK             2U
#define MODRR3_T0IC2RR_MASK             4U
#define MODRR3_T0IC3RR0_MASK            8U
#define MODRR3_T0IC3RR1_MASK            16U
#define MODRR3_T0IC3RR_MASK             24U
#define MODRR3_T0IC3RR_BITNUM           3U


/*** ECLKCTL - ECLK Control Register; 0x00000208 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte NECLK       :1;                                       /* No ECLK */
  } Bits;
} ECLKCTLSTR;
extern volatile ECLKCTLSTR _ECLKCTL @0x00000208;
#define ECLKCTL                         _ECLKCTL.Byte
#define ECLKCTL_NECLK                   _ECLKCTL.Bits.NECLK

#define ECLKCTL_NECLK_MASK              128U


/*** IRQCR - Interrupt Control Register; 0x00000209 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte IRQEN       :1;                                       /* External IRQ Enable */
    byte IRQE        :1;                                       /* IRQ Select Edge Sensitive Only */
  } Bits;
} IRQCRSTR;
extern volatile IRQCRSTR _IRQCR @0x00000209;
#define IRQCR                           _IRQCR.Byte
#define IRQCR_IRQEN                     _IRQCR.Bits.IRQEN
#define IRQCR_IRQE                      _IRQCR.Bits.IRQE

#define IRQCR_IRQEN_MASK                64U
#define IRQCR_IRQE_MASK                 128U


/*** PTE - Port E Data Register; 0x00000260 ***/
typedef union {
  byte Byte;
  struct {
    byte PTE0        :1;                                       /* Port E general purpose I/O data 0 */
    byte PTE1        :1;                                       /* Port E general purpose I/O data 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTE  :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTESTR;
extern volatile PTESTR _PTE @0x00000260;
#define PTE                             _PTE.Byte
#define PTE_PTE0                        _PTE.Bits.PTE0
#define PTE_PTE1                        _PTE.Bits.PTE1
#define PTE_PTE                         _PTE.MergedBits.grpPTE

#define PTE_PTE0_MASK                   1U
#define PTE_PTE1_MASK                   2U
#define PTE_PTE_MASK                    3U
#define PTE_PTE_BITNUM                  0U


/*** PTIE - Port E Input Register; 0x00000262 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIE0       :1;                                       /* Port E data input 0 */
    byte PTIE1       :1;                                       /* Port E data input 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTIE :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTIESTR;
extern volatile PTIESTR _PTIE @0x00000262;
#define PTIE                            _PTIE.Byte
#define PTIE_PTIE0                      _PTIE.Bits.PTIE0
#define PTIE_PTIE1                      _PTIE.Bits.PTIE1
#define PTIE_PTIE                       _PTIE.MergedBits.grpPTIE

#define PTIE_PTIE0_MASK                 1U
#define PTIE_PTIE1_MASK                 2U
#define PTIE_PTIE_MASK                  3U
#define PTIE_PTIE_BITNUM                0U


/*** DDRE - Port E Data Direction Register; 0x00000264 ***/
typedef union {
  byte Byte;
  struct {
    byte DDRE0       :1;                                       /* Port E data direction select 0 */
    byte DDRE1       :1;                                       /* Port E data direction select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpDDRE :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} DDRESTR;
extern volatile DDRESTR _DDRE @0x00000264;
#define DDRE                            _DDRE.Byte
#define DDRE_DDRE0                      _DDRE.Bits.DDRE0
#define DDRE_DDRE1                      _DDRE.Bits.DDRE1
#define DDRE_DDRE                       _DDRE.MergedBits.grpDDRE

#define DDRE_DDRE0_MASK                 1U
#define DDRE_DDRE1_MASK                 2U
#define DDRE_DDRE_MASK                  3U
#define DDRE_DDRE_BITNUM                0U


/*** PERE - Port E Pull Device Enable Register; 0x00000266 ***/
typedef union {
  byte Byte;
  struct {
    byte PERE0       :1;                                       /* Port E pull device enable 0 */
    byte PERE1       :1;                                       /* Port E pull device enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPERE :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PERESTR;
extern volatile PERESTR _PERE @0x00000266;
#define PERE                            _PERE.Byte
#define PERE_PERE0                      _PERE.Bits.PERE0
#define PERE_PERE1                      _PERE.Bits.PERE1
#define PERE_PERE                       _PERE.MergedBits.grpPERE

#define PERE_PERE0_MASK                 1U
#define PERE_PERE1_MASK                 2U
#define PERE_PERE_MASK                  3U
#define PERE_PERE_BITNUM                0U


/*** PPSE - Port E Polarity Select Register; 0x00000268 ***/
typedef union {
  byte Byte;
  struct {
    byte PPSE0       :1;                                       /* Port E pull polarity select 0 */
    byte PPSE1       :1;                                       /* Port E pull polarity select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPPSE :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PPSESTR;
extern volatile PPSESTR _PPSE @0x00000268;
#define PPSE                            _PPSE.Byte
#define PPSE_PPSE0                      _PPSE.Bits.PPSE0
#define PPSE_PPSE1                      _PPSE.Bits.PPSE1
#define PPSE_PPSE                       _PPSE.MergedBits.grpPPSE

#define PPSE_PPSE0_MASK                 1U
#define PPSE_PPSE1_MASK                 2U
#define PPSE_PPSE_MASK                  3U
#define PPSE_PPSE_BITNUM                0U


/*** PTAD - Port AD Data Register; 0x00000280 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PTADH - Port ADH Data Register; 0x00000280 ***/
    union {
      byte Byte;
      struct {
        byte PTADH0      :1;                                       /* Port ADH general purpose I/O data 0 */
        byte PTADH1      :1;                                       /* Port ADH general purpose I/O data 1 */
        byte PTADH2      :1;                                       /* Port ADH general purpose I/O data 2 */
        byte PTADH3      :1;                                       /* Port ADH general purpose I/O data 3 */
        byte PTADH4      :1;                                       /* Port ADH general purpose I/O data 4 */
        byte PTADH5      :1;                                       /* Port ADH general purpose I/O data 5 */
        byte PTADH6      :1;                                       /* Port ADH general purpose I/O data 6 */
        byte PTADH7      :1;                                       /* Port ADH general purpose I/O data 7 */
      } Bits;
    } PTADHSTR;
    #define PTADH                       _PTAD.Overlap_STR.PTADHSTR.Byte
    #define PTADH_PTADH0                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH0
    #define PTADH_PTADH1                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH1
    #define PTADH_PTADH2                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH2
    #define PTADH_PTADH3                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH3
    #define PTADH_PTADH4                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH4
    #define PTADH_PTADH5                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH5
    #define PTADH_PTADH6                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH6
    #define PTADH_PTADH7                _PTAD.Overlap_STR.PTADHSTR.Bits.PTADH7
    
    #define PTADH_PTADH0_MASK           1U
    #define PTADH_PTADH1_MASK           2U
    #define PTADH_PTADH2_MASK           4U
    #define PTADH_PTADH3_MASK           8U
    #define PTADH_PTADH4_MASK           16U
    #define PTADH_PTADH5_MASK           32U
    #define PTADH_PTADH6_MASK           64U
    #define PTADH_PTADH7_MASK           128U
    

    /*** PTADL - Port ADL Data Register; 0x00000281 ***/
    union {
      byte Byte;
      struct {
        byte PTADL0      :1;                                       /* Port ADL general purpose I/O data 0 */
        byte PTADL1      :1;                                       /* Port ADL general purpose I/O data 1 */
        byte PTADL2      :1;                                       /* Port ADL general purpose I/O data 2 */
        byte PTADL3      :1;                                       /* Port ADL general purpose I/O data 3 */
        byte PTADL4      :1;                                       /* Port ADL general purpose I/O data 4 */
        byte PTADL5      :1;                                       /* Port ADL general purpose I/O data 5 */
        byte PTADL6      :1;                                       /* Port ADL general purpose I/O data 6 */
        byte PTADL7      :1;                                       /* Port ADL general purpose I/O data 7 */
      } Bits;
    } PTADLSTR;
    #define PTADL                       _PTAD.Overlap_STR.PTADLSTR.Byte
    #define PTADL_PTADL0                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL0
    #define PTADL_PTADL1                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL1
    #define PTADL_PTADL2                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL2
    #define PTADL_PTADL3                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL3
    #define PTADL_PTADL4                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL4
    #define PTADL_PTADL5                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL5
    #define PTADL_PTADL6                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL6
    #define PTADL_PTADL7                _PTAD.Overlap_STR.PTADLSTR.Bits.PTADL7
    
    #define PTADL_PTADL0_MASK           1U
    #define PTADL_PTADL1_MASK           2U
    #define PTADL_PTADL2_MASK           4U
    #define PTADL_PTADL3_MASK           8U
    #define PTADL_PTADL4_MASK           16U
    #define PTADL_PTADL5_MASK           32U
    #define PTADL_PTADL6_MASK           64U
    #define PTADL_PTADL7_MASK           128U
    
  } Overlap_STR;

  struct {
    word PTADL0      :1;                                       /* Port AD general purpose I/O data 0 */
    word PTADL1      :1;                                       /* Port AD general purpose I/O data 1 */
    word PTADL2      :1;                                       /* Port AD general purpose I/O data 2 */
    word PTADL3      :1;                                       /* Port AD general purpose I/O data 3 */
    word PTADL4      :1;                                       /* Port AD general purpose I/O data 4 */
    word PTADL5      :1;                                       /* Port AD general purpose I/O data 5 */
    word PTADL6      :1;                                       /* Port AD general purpose I/O data 6 */
    word PTADL7      :1;                                       /* Port AD general purpose I/O data 7 */
    word PTADH0      :1;                                       /* Port AD general purpose I/O data 8 */
    word PTADH1      :1;                                       /* Port AD general purpose I/O data 9 */
    word PTADH2      :1;                                       /* Port AD general purpose I/O data 10 */
    word PTADH3      :1;                                       /* Port AD general purpose I/O data 11 */
    word PTADH4      :1;                                       /* Port AD general purpose I/O data 12 */
    word PTADH5      :1;                                       /* Port AD general purpose I/O data 13 */
    word PTADH6      :1;                                       /* Port AD general purpose I/O data 14 */
    word PTADH7      :1;                                       /* Port AD general purpose I/O data 15 */
  } Bits;
  struct {
    word grpPTADL :8;
    word grpPTADH :8;
  } MergedBits;
} PTADSTR;
extern volatile PTADSTR _PTAD @0x00000280;
#define PTAD                            _PTAD.Word
#define PTAD_PTADL0                     _PTAD.Bits.PTADL0
#define PTAD_PTADL1                     _PTAD.Bits.PTADL1
#define PTAD_PTADL2                     _PTAD.Bits.PTADL2
#define PTAD_PTADL3                     _PTAD.Bits.PTADL3
#define PTAD_PTADL4                     _PTAD.Bits.PTADL4
#define PTAD_PTADL5                     _PTAD.Bits.PTADL5
#define PTAD_PTADL6                     _PTAD.Bits.PTADL6
#define PTAD_PTADL7                     _PTAD.Bits.PTADL7
#define PTAD_PTADH0                     _PTAD.Bits.PTADH0
#define PTAD_PTADH1                     _PTAD.Bits.PTADH1
#define PTAD_PTADH2                     _PTAD.Bits.PTADH2
#define PTAD_PTADH3                     _PTAD.Bits.PTADH3
#define PTAD_PTADH4                     _PTAD.Bits.PTADH4
#define PTAD_PTADH5                     _PTAD.Bits.PTADH5
#define PTAD_PTADH6                     _PTAD.Bits.PTADH6
#define PTAD_PTADH7                     _PTAD.Bits.PTADH7
#define PTAD_PTADL                      _PTAD.MergedBits.grpPTADL
#define PTAD_PTADH                      _PTAD.MergedBits.grpPTADH

#define PTAD_PTADL0_MASK                1U
#define PTAD_PTADL1_MASK                2U
#define PTAD_PTADL2_MASK                4U
#define PTAD_PTADL3_MASK                8U
#define PTAD_PTADL4_MASK                16U
#define PTAD_PTADL5_MASK                32U
#define PTAD_PTADL6_MASK                64U
#define PTAD_PTADL7_MASK                128U
#define PTAD_PTADH0_MASK                256U
#define PTAD_PTADH1_MASK                512U
#define PTAD_PTADH2_MASK                1024U
#define PTAD_PTADH3_MASK                2048U
#define PTAD_PTADH4_MASK                4096U
#define PTAD_PTADH5_MASK                8192U
#define PTAD_PTADH6_MASK                16384U
#define PTAD_PTADH7_MASK                32768U
#define PTAD_PTADL_MASK                 255U
#define PTAD_PTADL_BITNUM               0U
#define PTAD_PTADH_MASK                 65280U
#define PTAD_PTADH_BITNUM               8U


/*** PTIAD - Port AD Input Register; 0x00000282 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PTIADH - Port ADH Input Register; 0x00000282 ***/
    union {
      byte Byte;
      struct {
        byte PTIADH0     :1;                                       /* Port ADH data input 0 */
        byte PTIADH1     :1;                                       /* Port ADH data input 1 */
        byte PTIADH2     :1;                                       /* Port ADH data input 2 */
        byte PTIADH3     :1;                                       /* Port ADH data input 3 */
        byte PTIADH4     :1;                                       /* Port ADH data input 4 */
        byte PTIADH5     :1;                                       /* Port ADH data input 5 */
        byte PTIADH6     :1;                                       /* Port ADH data input 6 */
        byte PTIADH7     :1;                                       /* Port ADH data input 7 */
      } Bits;
    } PTIADHSTR;
    #define PTIADH                      _PTIAD.Overlap_STR.PTIADHSTR.Byte
    #define PTIADH_PTIADH0              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH0
    #define PTIADH_PTIADH1              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH1
    #define PTIADH_PTIADH2              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH2
    #define PTIADH_PTIADH3              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH3
    #define PTIADH_PTIADH4              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH4
    #define PTIADH_PTIADH5              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH5
    #define PTIADH_PTIADH6              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH6
    #define PTIADH_PTIADH7              _PTIAD.Overlap_STR.PTIADHSTR.Bits.PTIADH7
    
    #define PTIADH_PTIADH0_MASK         1U
    #define PTIADH_PTIADH1_MASK         2U
    #define PTIADH_PTIADH2_MASK         4U
    #define PTIADH_PTIADH3_MASK         8U
    #define PTIADH_PTIADH4_MASK         16U
    #define PTIADH_PTIADH5_MASK         32U
    #define PTIADH_PTIADH6_MASK         64U
    #define PTIADH_PTIADH7_MASK         128U
    

    /*** PTIADL - Port ADL Input Register; 0x00000283 ***/
    union {
      byte Byte;
      struct {
        byte PTIADL0     :1;                                       /* Port ADL data input 0 */
        byte PTIADL1     :1;                                       /* Port ADL data input 1 */
        byte PTIADL2     :1;                                       /* Port ADL data input 2 */
        byte PTIADL3     :1;                                       /* Port ADL data input 3 */
        byte PTIADL4     :1;                                       /* Port ADL data input 4 */
        byte PTIADL5     :1;                                       /* Port ADL data input 5 */
        byte PTIADL6     :1;                                       /* Port ADL data input 6 */
        byte PTIADL7     :1;                                       /* Port ADL data input 7 */
      } Bits;
    } PTIADLSTR;
    #define PTIADL                      _PTIAD.Overlap_STR.PTIADLSTR.Byte
    #define PTIADL_PTIADL0              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL0
    #define PTIADL_PTIADL1              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL1
    #define PTIADL_PTIADL2              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL2
    #define PTIADL_PTIADL3              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL3
    #define PTIADL_PTIADL4              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL4
    #define PTIADL_PTIADL5              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL5
    #define PTIADL_PTIADL6              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL6
    #define PTIADL_PTIADL7              _PTIAD.Overlap_STR.PTIADLSTR.Bits.PTIADL7
    
    #define PTIADL_PTIADL0_MASK         1U
    #define PTIADL_PTIADL1_MASK         2U
    #define PTIADL_PTIADL2_MASK         4U
    #define PTIADL_PTIADL3_MASK         8U
    #define PTIADL_PTIADL4_MASK         16U
    #define PTIADL_PTIADL5_MASK         32U
    #define PTIADL_PTIADL6_MASK         64U
    #define PTIADL_PTIADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word PTIADL0     :1;                                       /* Port AD data input 0 */
    word PTIADL1     :1;                                       /* Port AD data input 1 */
    word PTIADL2     :1;                                       /* Port AD data input 2 */
    word PTIADL3     :1;                                       /* Port AD data input 3 */
    word PTIADL4     :1;                                       /* Port AD data input 4 */
    word PTIADL5     :1;                                       /* Port AD data input 5 */
    word PTIADL6     :1;                                       /* Port AD data input 6 */
    word PTIADL7     :1;                                       /* Port AD data input 7 */
    word PTIADH0     :1;                                       /* Port AD data input 0 */
    word PTIADH1     :1;                                       /* Port AD data input 1 */
    word PTIADH2     :1;                                       /* Port AD data input 2 */
    word PTIADH3     :1;                                       /* Port AD data input 3 */
    word PTIADH4     :1;                                       /* Port AD data input 4 */
    word PTIADH5     :1;                                       /* Port AD data input 5 */
    word PTIADH6     :1;                                       /* Port AD data input 6 */
    word PTIADH7     :1;                                       /* Port AD data input 7 */
  } Bits;
  struct {
    word grpPTIADL :8;
    word grpPTIADH :8;
  } MergedBits;
} PTIADSTR;
extern volatile PTIADSTR _PTIAD @0x00000282;
#define PTIAD                           _PTIAD.Word
#define PTIAD_PTIADL0                   _PTIAD.Bits.PTIADL0
#define PTIAD_PTIADL1                   _PTIAD.Bits.PTIADL1
#define PTIAD_PTIADL2                   _PTIAD.Bits.PTIADL2
#define PTIAD_PTIADL3                   _PTIAD.Bits.PTIADL3
#define PTIAD_PTIADL4                   _PTIAD.Bits.PTIADL4
#define PTIAD_PTIADL5                   _PTIAD.Bits.PTIADL5
#define PTIAD_PTIADL6                   _PTIAD.Bits.PTIADL6
#define PTIAD_PTIADL7                   _PTIAD.Bits.PTIADL7
#define PTIAD_PTIADH0                   _PTIAD.Bits.PTIADH0
#define PTIAD_PTIADH1                   _PTIAD.Bits.PTIADH1
#define PTIAD_PTIADH2                   _PTIAD.Bits.PTIADH2
#define PTIAD_PTIADH3                   _PTIAD.Bits.PTIADH3
#define PTIAD_PTIADH4                   _PTIAD.Bits.PTIADH4
#define PTIAD_PTIADH5                   _PTIAD.Bits.PTIADH5
#define PTIAD_PTIADH6                   _PTIAD.Bits.PTIADH6
#define PTIAD_PTIADH7                   _PTIAD.Bits.PTIADH7
#define PTIAD_PTIADL                    _PTIAD.MergedBits.grpPTIADL
#define PTIAD_PTIADH                    _PTIAD.MergedBits.grpPTIADH

#define PTIAD_PTIADL0_MASK              1U
#define PTIAD_PTIADL1_MASK              2U
#define PTIAD_PTIADL2_MASK              4U
#define PTIAD_PTIADL3_MASK              8U
#define PTIAD_PTIADL4_MASK              16U
#define PTIAD_PTIADL5_MASK              32U
#define PTIAD_PTIADL6_MASK              64U
#define PTIAD_PTIADL7_MASK              128U
#define PTIAD_PTIADH0_MASK              256U
#define PTIAD_PTIADH1_MASK              512U
#define PTIAD_PTIADH2_MASK              1024U
#define PTIAD_PTIADH3_MASK              2048U
#define PTIAD_PTIADH4_MASK              4096U
#define PTIAD_PTIADH5_MASK              8192U
#define PTIAD_PTIADH6_MASK              16384U
#define PTIAD_PTIADH7_MASK              32768U
#define PTIAD_PTIADL_MASK               255U
#define PTIAD_PTIADL_BITNUM             0U
#define PTIAD_PTIADH_MASK               65280U
#define PTIAD_PTIADH_BITNUM             8U


/*** DDRAD - Port AD Data Direction Register; 0x00000284 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** DDRADH - Port ADH Data Direction Register; 0x00000284 ***/
    union {
      byte Byte;
      struct {
        byte DDRADH0     :1;                                       /* Port ADH data direction select 0 */
        byte DDRADH1     :1;                                       /* Port ADH data direction select 1 */
        byte DDRADH2     :1;                                       /* Port ADH data direction select 2 */
        byte DDRADH3     :1;                                       /* Port ADH data direction select 3 */
        byte DDRADH4     :1;                                       /* Port ADH data direction select 4 */
        byte DDRADH5     :1;                                       /* Port ADH data direction select 5 */
        byte DDRADH6     :1;                                       /* Port ADH data direction select 6 */
        byte DDRADH7     :1;                                       /* Port ADH data direction select 7 */
      } Bits;
    } DDRADHSTR;
    #define DDRADH                      _DDRAD.Overlap_STR.DDRADHSTR.Byte
    #define DDRADH_DDRADH0              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH0
    #define DDRADH_DDRADH1              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH1
    #define DDRADH_DDRADH2              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH2
    #define DDRADH_DDRADH3              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH3
    #define DDRADH_DDRADH4              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH4
    #define DDRADH_DDRADH5              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH5
    #define DDRADH_DDRADH6              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH6
    #define DDRADH_DDRADH7              _DDRAD.Overlap_STR.DDRADHSTR.Bits.DDRADH7
    
    #define DDRADH_DDRADH0_MASK         1U
    #define DDRADH_DDRADH1_MASK         2U
    #define DDRADH_DDRADH2_MASK         4U
    #define DDRADH_DDRADH3_MASK         8U
    #define DDRADH_DDRADH4_MASK         16U
    #define DDRADH_DDRADH5_MASK         32U
    #define DDRADH_DDRADH6_MASK         64U
    #define DDRADH_DDRADH7_MASK         128U
    

    /*** DDRADL - Port ADL Data Direction Register; 0x00000285 ***/
    union {
      byte Byte;
      struct {
        byte DDRADL0     :1;                                       /* Port ADL data direction select 0 */
        byte DDRADL1     :1;                                       /* Port ADL data direction select 1 */
        byte DDRADL2     :1;                                       /* Port ADL data direction select 2 */
        byte DDRADL3     :1;                                       /* Port ADL data direction select 3 */
        byte DDRADL4     :1;                                       /* Port ADL data direction select 4 */
        byte DDRADL5     :1;                                       /* Port ADL data direction select 5 */
        byte DDRADL6     :1;                                       /* Port ADL data direction select 6 */
        byte DDRADL7     :1;                                       /* Port ADL data direction select 7 */
      } Bits;
    } DDRADLSTR;
    #define DDRADL                      _DDRAD.Overlap_STR.DDRADLSTR.Byte
    #define DDRADL_DDRADL0              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL0
    #define DDRADL_DDRADL1              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL1
    #define DDRADL_DDRADL2              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL2
    #define DDRADL_DDRADL3              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL3
    #define DDRADL_DDRADL4              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL4
    #define DDRADL_DDRADL5              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL5
    #define DDRADL_DDRADL6              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL6
    #define DDRADL_DDRADL7              _DDRAD.Overlap_STR.DDRADLSTR.Bits.DDRADL7
    
    #define DDRADL_DDRADL0_MASK         1U
    #define DDRADL_DDRADL1_MASK         2U
    #define DDRADL_DDRADL2_MASK         4U
    #define DDRADL_DDRADL3_MASK         8U
    #define DDRADL_DDRADL4_MASK         16U
    #define DDRADL_DDRADL5_MASK         32U
    #define DDRADL_DDRADL6_MASK         64U
    #define DDRADL_DDRADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word DDRADL0     :1;                                       /* Port AD data direction select 0 */
    word DDRADL1     :1;                                       /* Port AD data direction select 1 */
    word DDRADL2     :1;                                       /* Port AD data direction select 2 */
    word DDRADL3     :1;                                       /* Port AD data direction select 3 */
    word DDRADL4     :1;                                       /* Port AD data direction select 4 */
    word DDRADL5     :1;                                       /* Port AD data direction select 5 */
    word DDRADL6     :1;                                       /* Port AD data direction select 6 */
    word DDRADL7     :1;                                       /* Port AD data direction select 7 */
    word DDRADH0     :1;                                       /* Port AD data direction select 8 */
    word DDRADH1     :1;                                       /* Port AD data direction select 9 */
    word DDRADH2     :1;                                       /* Port AD data direction select 10 */
    word DDRADH3     :1;                                       /* Port AD data direction select 11 */
    word DDRADH4     :1;                                       /* Port AD data direction select 12 */
    word DDRADH5     :1;                                       /* Port AD data direction select 13 */
    word DDRADH6     :1;                                       /* Port AD data direction select 14 */
    word DDRADH7     :1;                                       /* Port AD data direction select 15 */
  } Bits;
  struct {
    word grpDDRADL :8;
    word grpDDRADH :8;
  } MergedBits;
} DDRADSTR;
extern volatile DDRADSTR _DDRAD @0x00000284;
#define DDRAD                           _DDRAD.Word
#define DDRAD_DDRADL0                   _DDRAD.Bits.DDRADL0
#define DDRAD_DDRADL1                   _DDRAD.Bits.DDRADL1
#define DDRAD_DDRADL2                   _DDRAD.Bits.DDRADL2
#define DDRAD_DDRADL3                   _DDRAD.Bits.DDRADL3
#define DDRAD_DDRADL4                   _DDRAD.Bits.DDRADL4
#define DDRAD_DDRADL5                   _DDRAD.Bits.DDRADL5
#define DDRAD_DDRADL6                   _DDRAD.Bits.DDRADL6
#define DDRAD_DDRADL7                   _DDRAD.Bits.DDRADL7
#define DDRAD_DDRADH0                   _DDRAD.Bits.DDRADH0
#define DDRAD_DDRADH1                   _DDRAD.Bits.DDRADH1
#define DDRAD_DDRADH2                   _DDRAD.Bits.DDRADH2
#define DDRAD_DDRADH3                   _DDRAD.Bits.DDRADH3
#define DDRAD_DDRADH4                   _DDRAD.Bits.DDRADH4
#define DDRAD_DDRADH5                   _DDRAD.Bits.DDRADH5
#define DDRAD_DDRADH6                   _DDRAD.Bits.DDRADH6
#define DDRAD_DDRADH7                   _DDRAD.Bits.DDRADH7
#define DDRAD_DDRADL                    _DDRAD.MergedBits.grpDDRADL
#define DDRAD_DDRADH                    _DDRAD.MergedBits.grpDDRADH

#define DDRAD_DDRADL0_MASK              1U
#define DDRAD_DDRADL1_MASK              2U
#define DDRAD_DDRADL2_MASK              4U
#define DDRAD_DDRADL3_MASK              8U
#define DDRAD_DDRADL4_MASK              16U
#define DDRAD_DDRADL5_MASK              32U
#define DDRAD_DDRADL6_MASK              64U
#define DDRAD_DDRADL7_MASK              128U
#define DDRAD_DDRADH0_MASK              256U
#define DDRAD_DDRADH1_MASK              512U
#define DDRAD_DDRADH2_MASK              1024U
#define DDRAD_DDRADH3_MASK              2048U
#define DDRAD_DDRADH4_MASK              4096U
#define DDRAD_DDRADH5_MASK              8192U
#define DDRAD_DDRADH6_MASK              16384U
#define DDRAD_DDRADH7_MASK              32768U
#define DDRAD_DDRADL_MASK               255U
#define DDRAD_DDRADL_BITNUM             0U
#define DDRAD_DDRADH_MASK               65280U
#define DDRAD_DDRADH_BITNUM             8U


/*** PERAD - Port AD Pull Up Enable Register; 0x00000286 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PERADH - Port ADH Pull Device Enable Register; 0x00000286 ***/
    union {
      byte Byte;
      struct {
        byte PERADH0     :1;                                       /* Port ADH pull device enable 0 */
        byte PERADH1     :1;                                       /* Port ADH pull device enable 1 */
        byte PERADH2     :1;                                       /* Port ADH pull device enable 2 */
        byte PERADH3     :1;                                       /* Port ADH pull device enable 3 */
        byte PERADH4     :1;                                       /* Port ADH pull device enable 4 */
        byte PERADH5     :1;                                       /* Port ADH pull device enable 5 */
        byte PERADH6     :1;                                       /* Port ADH pull device enable 6 */
        byte PERADH7     :1;                                       /* Port ADH pull device enable 7 */
      } Bits;
    } PERADHSTR;
    #define PERADH                      _PERAD.Overlap_STR.PERADHSTR.Byte
    #define PERADH_PERADH0              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH0
    #define PERADH_PERADH1              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH1
    #define PERADH_PERADH2              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH2
    #define PERADH_PERADH3              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH3
    #define PERADH_PERADH4              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH4
    #define PERADH_PERADH5              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH5
    #define PERADH_PERADH6              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH6
    #define PERADH_PERADH7              _PERAD.Overlap_STR.PERADHSTR.Bits.PERADH7
    
    #define PERADH_PERADH0_MASK         1U
    #define PERADH_PERADH1_MASK         2U
    #define PERADH_PERADH2_MASK         4U
    #define PERADH_PERADH3_MASK         8U
    #define PERADH_PERADH4_MASK         16U
    #define PERADH_PERADH5_MASK         32U
    #define PERADH_PERADH6_MASK         64U
    #define PERADH_PERADH7_MASK         128U
    

    /*** PERADL - Port ADL Pull Device Enable Register; 0x00000287 ***/
    union {
      byte Byte;
      struct {
        byte PERADL0     :1;                                       /* Port ADL pull device enable 0 */
        byte PERADL1     :1;                                       /* Port ADL pull device enable 1 */
        byte PERADL2     :1;                                       /* Port ADL pull device enable 2 */
        byte PERADL3     :1;                                       /* Port ADL pull device enable 3 */
        byte PERADL4     :1;                                       /* Port ADL pull device enable 4 */
        byte PERADL5     :1;                                       /* Port ADL pull device enable 5 */
        byte PERADL6     :1;                                       /* Port ADL pull device enable 6 */
        byte PERADL7     :1;                                       /* Port ADL pull device enable 7 */
      } Bits;
    } PERADLSTR;
    #define PERADL                      _PERAD.Overlap_STR.PERADLSTR.Byte
    #define PERADL_PERADL0              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL0
    #define PERADL_PERADL1              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL1
    #define PERADL_PERADL2              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL2
    #define PERADL_PERADL3              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL3
    #define PERADL_PERADL4              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL4
    #define PERADL_PERADL5              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL5
    #define PERADL_PERADL6              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL6
    #define PERADL_PERADL7              _PERAD.Overlap_STR.PERADLSTR.Bits.PERADL7
    
    #define PERADL_PERADL0_MASK         1U
    #define PERADL_PERADL1_MASK         2U
    #define PERADL_PERADL2_MASK         4U
    #define PERADL_PERADL3_MASK         8U
    #define PERADL_PERADL4_MASK         16U
    #define PERADL_PERADL5_MASK         32U
    #define PERADL_PERADL6_MASK         64U
    #define PERADL_PERADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word PERADL0     :1;                                       /* Port AD pull device enable 0 */
    word PERADL1     :1;                                       /* Port AD pull device enable 1 */
    word PERADL2     :1;                                       /* Port AD pull device enable 2 */
    word PERADL3     :1;                                       /* Port AD pull device enable 3 */
    word PERADL4     :1;                                       /* Port AD pull device enable 4 */
    word PERADL5     :1;                                       /* Port AD pull device enable 5 */
    word PERADL6     :1;                                       /* Port AD pull device enable 6 */
    word PERADL7     :1;                                       /* Port AD pull device enable 7 */
    word PERADH0     :1;                                       /* Port AD pull device enable 8 */
    word PERADH1     :1;                                       /* Port AD pull device enable 9 */
    word PERADH2     :1;                                       /* Port AD pull device enable 10 */
    word PERADH3     :1;                                       /* Port AD pull device enable 11 */
    word PERADH4     :1;                                       /* Port AD pull device enable 12 */
    word PERADH5     :1;                                       /* Port AD pull device enable 13 */
    word PERADH6     :1;                                       /* Port AD pull device enable 14 */
    word PERADH7     :1;                                       /* Port AD pull device enable 15 */
  } Bits;
  struct {
    word grpPERADL :8;
    word grpPERADH :8;
  } MergedBits;
} PERADSTR;
extern volatile PERADSTR _PERAD @0x00000286;
#define PERAD                           _PERAD.Word
#define PERAD_PERADL0                   _PERAD.Bits.PERADL0
#define PERAD_PERADL1                   _PERAD.Bits.PERADL1
#define PERAD_PERADL2                   _PERAD.Bits.PERADL2
#define PERAD_PERADL3                   _PERAD.Bits.PERADL3
#define PERAD_PERADL4                   _PERAD.Bits.PERADL4
#define PERAD_PERADL5                   _PERAD.Bits.PERADL5
#define PERAD_PERADL6                   _PERAD.Bits.PERADL6
#define PERAD_PERADL7                   _PERAD.Bits.PERADL7
#define PERAD_PERADH0                   _PERAD.Bits.PERADH0
#define PERAD_PERADH1                   _PERAD.Bits.PERADH1
#define PERAD_PERADH2                   _PERAD.Bits.PERADH2
#define PERAD_PERADH3                   _PERAD.Bits.PERADH3
#define PERAD_PERADH4                   _PERAD.Bits.PERADH4
#define PERAD_PERADH5                   _PERAD.Bits.PERADH5
#define PERAD_PERADH6                   _PERAD.Bits.PERADH6
#define PERAD_PERADH7                   _PERAD.Bits.PERADH7
#define PERAD_PERADL                    _PERAD.MergedBits.grpPERADL
#define PERAD_PERADH                    _PERAD.MergedBits.grpPERADH

#define PERAD_PERADL0_MASK              1U
#define PERAD_PERADL1_MASK              2U
#define PERAD_PERADL2_MASK              4U
#define PERAD_PERADL3_MASK              8U
#define PERAD_PERADL4_MASK              16U
#define PERAD_PERADL5_MASK              32U
#define PERAD_PERADL6_MASK              64U
#define PERAD_PERADL7_MASK              128U
#define PERAD_PERADH0_MASK              256U
#define PERAD_PERADH1_MASK              512U
#define PERAD_PERADH2_MASK              1024U
#define PERAD_PERADH3_MASK              2048U
#define PERAD_PERADH4_MASK              4096U
#define PERAD_PERADH5_MASK              8192U
#define PERAD_PERADH6_MASK              16384U
#define PERAD_PERADH7_MASK              32768U
#define PERAD_PERADL_MASK               255U
#define PERAD_PERADL_BITNUM             0U
#define PERAD_PERADH_MASK               65280U
#define PERAD_PERADH_BITNUM             8U


/*** PPSAD - Port AD Polarity Select Register; 0x00000288 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PPSADH - Port ADH Polarity Select Register; 0x00000288 ***/
    union {
      byte Byte;
      struct {
        byte PPSADH0     :1;                                       /* Port ADH pull polarity select 0 */
        byte PPSADH1     :1;                                       /* Port ADH pull polarity select 1 */
        byte PPSADH2     :1;                                       /* Port ADH pull polarity select 2 */
        byte PPSADH3     :1;                                       /* Port ADH pull polarity select 3 */
        byte PPSADH4     :1;                                       /* Port ADH pull polarity select 4 */
        byte PPSADH5     :1;                                       /* Port ADH pull polarity select 5 */
        byte PPSADH6     :1;                                       /* Port ADH pull polarity select 6 */
        byte PPSADH7     :1;                                       /* Port ADH pull polarity select 7 */
      } Bits;
    } PPSADHSTR;
    #define PPSADH                      _PPSAD.Overlap_STR.PPSADHSTR.Byte
    #define PPSADH_PPSADH0              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH0
    #define PPSADH_PPSADH1              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH1
    #define PPSADH_PPSADH2              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH2
    #define PPSADH_PPSADH3              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH3
    #define PPSADH_PPSADH4              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH4
    #define PPSADH_PPSADH5              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH5
    #define PPSADH_PPSADH6              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH6
    #define PPSADH_PPSADH7              _PPSAD.Overlap_STR.PPSADHSTR.Bits.PPSADH7
    
    #define PPSADH_PPSADH0_MASK         1U
    #define PPSADH_PPSADH1_MASK         2U
    #define PPSADH_PPSADH2_MASK         4U
    #define PPSADH_PPSADH3_MASK         8U
    #define PPSADH_PPSADH4_MASK         16U
    #define PPSADH_PPSADH5_MASK         32U
    #define PPSADH_PPSADH6_MASK         64U
    #define PPSADH_PPSADH7_MASK         128U
    

    /*** PPSADL - Port ADL Polarity Select Register; 0x00000289 ***/
    union {
      byte Byte;
      struct {
        byte PPSADL0     :1;                                       /* Port ADL pull polarity select 0 */
        byte PPSADL1     :1;                                       /* Port ADL pull polarity select 1 */
        byte PPSADL2     :1;                                       /* Port ADL pull polarity select 2 */
        byte PPSADL3     :1;                                       /* Port ADL pull polarity select 3 */
        byte PPSADL4     :1;                                       /* Port ADL pull polarity select 4 */
        byte PPSADL5     :1;                                       /* Port ADL pull polarity select 5 */
        byte PPSADL6     :1;                                       /* Port ADL pull polarity select 6 */
        byte PPSADL7     :1;                                       /* Port ADL pull polarity select 7 */
      } Bits;
    } PPSADLSTR;
    #define PPSADL                      _PPSAD.Overlap_STR.PPSADLSTR.Byte
    #define PPSADL_PPSADL0              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL0
    #define PPSADL_PPSADL1              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL1
    #define PPSADL_PPSADL2              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL2
    #define PPSADL_PPSADL3              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL3
    #define PPSADL_PPSADL4              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL4
    #define PPSADL_PPSADL5              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL5
    #define PPSADL_PPSADL6              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL6
    #define PPSADL_PPSADL7              _PPSAD.Overlap_STR.PPSADLSTR.Bits.PPSADL7
    
    #define PPSADL_PPSADL0_MASK         1U
    #define PPSADL_PPSADL1_MASK         2U
    #define PPSADL_PPSADL2_MASK         4U
    #define PPSADL_PPSADL3_MASK         8U
    #define PPSADL_PPSADL4_MASK         16U
    #define PPSADL_PPSADL5_MASK         32U
    #define PPSADL_PPSADL6_MASK         64U
    #define PPSADL_PPSADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word PPSADL0     :1;                                       /* Port AD pull polarity select 0 */
    word PPSADL1     :1;                                       /* Port AD pull polarity select 1 */
    word PPSADL2     :1;                                       /* Port AD pull polarity select 2 */
    word PPSADL3     :1;                                       /* Port AD pull polarity select 3 */
    word PPSADL4     :1;                                       /* Port AD pull polarity select 4 */
    word PPSADL5     :1;                                       /* Port AD pull polarity select 5 */
    word PPSADL6     :1;                                       /* Port AD pull polarity select 6 */
    word PPSADL7     :1;                                       /* Port AD pull polarity select 7 */
    word PPSADH0     :1;                                       /* Port AD pull polarity select 0 */
    word PPSADH1     :1;                                       /* Port AD pull polarity select 1 */
    word PPSADH2     :1;                                       /* Port AD pull polarity select 2 */
    word PPSADH3     :1;                                       /* Port AD pull polarity select 3 */
    word PPSADH4     :1;                                       /* Port AD pull polarity select 4 */
    word PPSADH5     :1;                                       /* Port AD pull polarity select 5 */
    word PPSADH6     :1;                                       /* Port AD pull polarity select 6 */
    word PPSADH7     :1;                                       /* Port AD pull polarity select 7 */
  } Bits;
  struct {
    word grpPPSADL :8;
    word grpPPSADH :8;
  } MergedBits;
} PPSADSTR;
extern volatile PPSADSTR _PPSAD @0x00000288;
#define PPSAD                           _PPSAD.Word
#define PPSAD_PPSADL0                   _PPSAD.Bits.PPSADL0
#define PPSAD_PPSADL1                   _PPSAD.Bits.PPSADL1
#define PPSAD_PPSADL2                   _PPSAD.Bits.PPSADL2
#define PPSAD_PPSADL3                   _PPSAD.Bits.PPSADL3
#define PPSAD_PPSADL4                   _PPSAD.Bits.PPSADL4
#define PPSAD_PPSADL5                   _PPSAD.Bits.PPSADL5
#define PPSAD_PPSADL6                   _PPSAD.Bits.PPSADL6
#define PPSAD_PPSADL7                   _PPSAD.Bits.PPSADL7
#define PPSAD_PPSADH0                   _PPSAD.Bits.PPSADH0
#define PPSAD_PPSADH1                   _PPSAD.Bits.PPSADH1
#define PPSAD_PPSADH2                   _PPSAD.Bits.PPSADH2
#define PPSAD_PPSADH3                   _PPSAD.Bits.PPSADH3
#define PPSAD_PPSADH4                   _PPSAD.Bits.PPSADH4
#define PPSAD_PPSADH5                   _PPSAD.Bits.PPSADH5
#define PPSAD_PPSADH6                   _PPSAD.Bits.PPSADH6
#define PPSAD_PPSADH7                   _PPSAD.Bits.PPSADH7
#define PPSAD_PPSADL                    _PPSAD.MergedBits.grpPPSADL
#define PPSAD_PPSADH                    _PPSAD.MergedBits.grpPPSADH

#define PPSAD_PPSADL0_MASK              1U
#define PPSAD_PPSADL1_MASK              2U
#define PPSAD_PPSADL2_MASK              4U
#define PPSAD_PPSADL3_MASK              8U
#define PPSAD_PPSADL4_MASK              16U
#define PPSAD_PPSADL5_MASK              32U
#define PPSAD_PPSADL6_MASK              64U
#define PPSAD_PPSADL7_MASK              128U
#define PPSAD_PPSADH0_MASK              256U
#define PPSAD_PPSADH1_MASK              512U
#define PPSAD_PPSADH2_MASK              1024U
#define PPSAD_PPSADH3_MASK              2048U
#define PPSAD_PPSADH4_MASK              4096U
#define PPSAD_PPSADH5_MASK              8192U
#define PPSAD_PPSADH6_MASK              16384U
#define PPSAD_PPSADH7_MASK              32768U
#define PPSAD_PPSADL_MASK               255U
#define PPSAD_PPSADL_BITNUM             0U
#define PPSAD_PPSADH_MASK               65280U
#define PPSAD_PPSADH_BITNUM             8U


/*** PIEAD - Port AD Interrupt Enable Register; 0x0000028C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PIEADH - Port ADH Interrupt Enable Register; 0x0000028C ***/
    union {
      byte Byte;
      struct {
        byte PIEADH0     :1;                                       /* Port ADH interrupt enable 0 */
        byte PIEADH1     :1;                                       /* Port ADH interrupt enable 1 */
        byte PIEADH2     :1;                                       /* Port ADH interrupt enable 2 */
        byte PIEADH3     :1;                                       /* Port ADH interrupt enable 3 */
        byte PIEADH4     :1;                                       /* Port ADH interrupt enable 4 */
        byte PIEADH5     :1;                                       /* Port ADH interrupt enable 5 */
        byte PIEADH6     :1;                                       /* Port ADH interrupt enable 6 */
        byte PIEADH7     :1;                                       /* Port ADH interrupt enable 7 */
      } Bits;
    } PIEADHSTR;
    #define PIEADH                      _PIEAD.Overlap_STR.PIEADHSTR.Byte
    #define PIEADH_PIEADH0              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH0
    #define PIEADH_PIEADH1              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH1
    #define PIEADH_PIEADH2              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH2
    #define PIEADH_PIEADH3              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH3
    #define PIEADH_PIEADH4              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH4
    #define PIEADH_PIEADH5              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH5
    #define PIEADH_PIEADH6              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH6
    #define PIEADH_PIEADH7              _PIEAD.Overlap_STR.PIEADHSTR.Bits.PIEADH7
    
    #define PIEADH_PIEADH0_MASK         1U
    #define PIEADH_PIEADH1_MASK         2U
    #define PIEADH_PIEADH2_MASK         4U
    #define PIEADH_PIEADH3_MASK         8U
    #define PIEADH_PIEADH4_MASK         16U
    #define PIEADH_PIEADH5_MASK         32U
    #define PIEADH_PIEADH6_MASK         64U
    #define PIEADH_PIEADH7_MASK         128U
    

    /*** PIEADL - Port ADL Interrupt Enable Register; 0x0000028D ***/
    union {
      byte Byte;
      struct {
        byte PIEADL0     :1;                                       /* Port ADL interrupt enable 0 */
        byte PIEADL1     :1;                                       /* Port ADL interrupt enable 1 */
        byte PIEADL2     :1;                                       /* Port ADL interrupt enable 2 */
        byte PIEADL3     :1;                                       /* Port ADL interrupt enable 3 */
        byte PIEADL4     :1;                                       /* Port ADL interrupt enable 4 */
        byte PIEADL5     :1;                                       /* Port ADL interrupt enable 5 */
        byte PIEADL6     :1;                                       /* Port ADL interrupt enable 6 */
        byte PIEADL7     :1;                                       /* Port ADL interrupt enable 7 */
      } Bits;
    } PIEADLSTR;
    #define PIEADL                      _PIEAD.Overlap_STR.PIEADLSTR.Byte
    #define PIEADL_PIEADL0              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL0
    #define PIEADL_PIEADL1              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL1
    #define PIEADL_PIEADL2              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL2
    #define PIEADL_PIEADL3              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL3
    #define PIEADL_PIEADL4              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL4
    #define PIEADL_PIEADL5              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL5
    #define PIEADL_PIEADL6              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL6
    #define PIEADL_PIEADL7              _PIEAD.Overlap_STR.PIEADLSTR.Bits.PIEADL7
    
    #define PIEADL_PIEADL0_MASK         1U
    #define PIEADL_PIEADL1_MASK         2U
    #define PIEADL_PIEADL2_MASK         4U
    #define PIEADL_PIEADL3_MASK         8U
    #define PIEADL_PIEADL4_MASK         16U
    #define PIEADL_PIEADL5_MASK         32U
    #define PIEADL_PIEADL6_MASK         64U
    #define PIEADL_PIEADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word PIEADL0     :1;                                       /* Port AD interrupt enable 0 */
    word PIEADL1     :1;                                       /* Port AD interrupt enable 1 */
    word PIEADL2     :1;                                       /* Port AD interrupt enable 2 */
    word PIEADL3     :1;                                       /* Port AD interrupt enable 3 */
    word PIEADL4     :1;                                       /* Port AD interrupt enable 4 */
    word PIEADL5     :1;                                       /* Port AD interrupt enable 5 */
    word PIEADL6     :1;                                       /* Port AD interrupt enable 6 */
    word PIEADL7     :1;                                       /* Port AD interrupt enable 7 */
    word PIEADH0     :1;                                       /* Port AD interrupt enable 0 */
    word PIEADH1     :1;                                       /* Port AD interrupt enable 1 */
    word PIEADH2     :1;                                       /* Port AD interrupt enable 2 */
    word PIEADH3     :1;                                       /* Port AD interrupt enable 3 */
    word PIEADH4     :1;                                       /* Port AD interrupt enable 4 */
    word PIEADH5     :1;                                       /* Port AD interrupt enable 5 */
    word PIEADH6     :1;                                       /* Port AD interrupt enable 6 */
    word PIEADH7     :1;                                       /* Port AD interrupt enable 7 */
  } Bits;
  struct {
    word grpPIEADL :8;
    word grpPIEADH :8;
  } MergedBits;
} PIEADSTR;
extern volatile PIEADSTR _PIEAD @0x0000028C;
#define PIEAD                           _PIEAD.Word
#define PIEAD_PIEADL0                   _PIEAD.Bits.PIEADL0
#define PIEAD_PIEADL1                   _PIEAD.Bits.PIEADL1
#define PIEAD_PIEADL2                   _PIEAD.Bits.PIEADL2
#define PIEAD_PIEADL3                   _PIEAD.Bits.PIEADL3
#define PIEAD_PIEADL4                   _PIEAD.Bits.PIEADL4
#define PIEAD_PIEADL5                   _PIEAD.Bits.PIEADL5
#define PIEAD_PIEADL6                   _PIEAD.Bits.PIEADL6
#define PIEAD_PIEADL7                   _PIEAD.Bits.PIEADL7
#define PIEAD_PIEADH0                   _PIEAD.Bits.PIEADH0
#define PIEAD_PIEADH1                   _PIEAD.Bits.PIEADH1
#define PIEAD_PIEADH2                   _PIEAD.Bits.PIEADH2
#define PIEAD_PIEADH3                   _PIEAD.Bits.PIEADH3
#define PIEAD_PIEADH4                   _PIEAD.Bits.PIEADH4
#define PIEAD_PIEADH5                   _PIEAD.Bits.PIEADH5
#define PIEAD_PIEADH6                   _PIEAD.Bits.PIEADH6
#define PIEAD_PIEADH7                   _PIEAD.Bits.PIEADH7
#define PIEAD_PIEADL                    _PIEAD.MergedBits.grpPIEADL
#define PIEAD_PIEADH                    _PIEAD.MergedBits.grpPIEADH

#define PIEAD_PIEADL0_MASK              1U
#define PIEAD_PIEADL1_MASK              2U
#define PIEAD_PIEADL2_MASK              4U
#define PIEAD_PIEADL3_MASK              8U
#define PIEAD_PIEADL4_MASK              16U
#define PIEAD_PIEADL5_MASK              32U
#define PIEAD_PIEADL6_MASK              64U
#define PIEAD_PIEADL7_MASK              128U
#define PIEAD_PIEADH0_MASK              256U
#define PIEAD_PIEADH1_MASK              512U
#define PIEAD_PIEADH2_MASK              1024U
#define PIEAD_PIEADH3_MASK              2048U
#define PIEAD_PIEADH4_MASK              4096U
#define PIEAD_PIEADH5_MASK              8192U
#define PIEAD_PIEADH6_MASK              16384U
#define PIEAD_PIEADH7_MASK              32768U
#define PIEAD_PIEADL_MASK               255U
#define PIEAD_PIEADL_BITNUM             0U
#define PIEAD_PIEADH_MASK               65280U
#define PIEAD_PIEADH_BITNUM             8U


/*** PIFAD - Port AD Interrupt Flag Register; 0x0000028E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PIFADH - Port ADH Interrupt Flag Register; 0x0000028E ***/
    union {
      byte Byte;
      struct {
        byte PIFADH0     :1;                                       /* Port ADH interrupt flag 0 */
        byte PIFADH1     :1;                                       /* Port ADH interrupt flag 1 */
        byte PIFADH2     :1;                                       /* Port ADH interrupt flag 2 */
        byte PIFADH3     :1;                                       /* Port ADH interrupt flag 3 */
        byte PIFADH4     :1;                                       /* Port ADH interrupt flag 4 */
        byte PIFADH5     :1;                                       /* Port ADH interrupt flag 5 */
        byte PIFADH6     :1;                                       /* Port ADH interrupt flag 6 */
        byte PIFADH7     :1;                                       /* Port ADH interrupt flag 7 */
      } Bits;
    } PIFADHSTR;
    #define PIFADH                      _PIFAD.Overlap_STR.PIFADHSTR.Byte
    #define PIFADH_PIFADH0              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH0
    #define PIFADH_PIFADH1              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH1
    #define PIFADH_PIFADH2              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH2
    #define PIFADH_PIFADH3              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH3
    #define PIFADH_PIFADH4              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH4
    #define PIFADH_PIFADH5              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH5
    #define PIFADH_PIFADH6              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH6
    #define PIFADH_PIFADH7              _PIFAD.Overlap_STR.PIFADHSTR.Bits.PIFADH7
    
    #define PIFADH_PIFADH0_MASK         1U
    #define PIFADH_PIFADH1_MASK         2U
    #define PIFADH_PIFADH2_MASK         4U
    #define PIFADH_PIFADH3_MASK         8U
    #define PIFADH_PIFADH4_MASK         16U
    #define PIFADH_PIFADH5_MASK         32U
    #define PIFADH_PIFADH6_MASK         64U
    #define PIFADH_PIFADH7_MASK         128U
    

    /*** PIFADL - Port ADL Interrupt Flag Register; 0x0000028F ***/
    union {
      byte Byte;
      struct {
        byte PIFADL0     :1;                                       /* Port ADL interrupt flag 0 */
        byte PIFADL1     :1;                                       /* Port ADL interrupt flag 1 */
        byte PIFADL2     :1;                                       /* Port ADL interrupt flag 2 */
        byte PIFADL3     :1;                                       /* Port ADL interrupt flag 3 */
        byte PIFADL4     :1;                                       /* Port ADL interrupt flag 4 */
        byte PIFADL5     :1;                                       /* Port ADL interrupt flag 5 */
        byte PIFADL6     :1;                                       /* Port ADL interrupt flag 6 */
        byte PIFADL7     :1;                                       /* Port ADL interrupt flag 7 */
      } Bits;
    } PIFADLSTR;
    #define PIFADL                      _PIFAD.Overlap_STR.PIFADLSTR.Byte
    #define PIFADL_PIFADL0              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL0
    #define PIFADL_PIFADL1              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL1
    #define PIFADL_PIFADL2              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL2
    #define PIFADL_PIFADL3              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL3
    #define PIFADL_PIFADL4              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL4
    #define PIFADL_PIFADL5              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL5
    #define PIFADL_PIFADL6              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL6
    #define PIFADL_PIFADL7              _PIFAD.Overlap_STR.PIFADLSTR.Bits.PIFADL7
    
    #define PIFADL_PIFADL0_MASK         1U
    #define PIFADL_PIFADL1_MASK         2U
    #define PIFADL_PIFADL2_MASK         4U
    #define PIFADL_PIFADL3_MASK         8U
    #define PIFADL_PIFADL4_MASK         16U
    #define PIFADL_PIFADL5_MASK         32U
    #define PIFADL_PIFADL6_MASK         64U
    #define PIFADL_PIFADL7_MASK         128U
    
  } Overlap_STR;

  struct {
    word PIFADL0     :1;                                       /* Port AD interrupt flag 0 */
    word PIFADL1     :1;                                       /* Port AD interrupt flag 1 */
    word PIFADL2     :1;                                       /* Port AD interrupt flag 2 */
    word PIFADL3     :1;                                       /* Port AD interrupt flag 3 */
    word PIFADL4     :1;                                       /* Port AD interrupt flag 4 */
    word PIFADL5     :1;                                       /* Port AD interrupt flag 5 */
    word PIFADL6     :1;                                       /* Port AD interrupt flag 6 */
    word PIFADL7     :1;                                       /* Port AD interrupt flag 7 */
    word PIFADH0     :1;                                       /* Port AD interrupt flag 0 */
    word PIFADH1     :1;                                       /* Port AD interrupt flag 1 */
    word PIFADH2     :1;                                       /* Port AD interrupt flag 2 */
    word PIFADH3     :1;                                       /* Port AD interrupt flag 3 */
    word PIFADH4     :1;                                       /* Port AD interrupt flag 4 */
    word PIFADH5     :1;                                       /* Port AD interrupt flag 5 */
    word PIFADH6     :1;                                       /* Port AD interrupt flag 6 */
    word PIFADH7     :1;                                       /* Port AD interrupt flag 7 */
  } Bits;
  struct {
    word grpPIFADL :8;
    word grpPIFADH :8;
  } MergedBits;
} PIFADSTR;
extern volatile PIFADSTR _PIFAD @0x0000028E;
#define PIFAD                           _PIFAD.Word
#define PIFAD_PIFADL0                   _PIFAD.Bits.PIFADL0
#define PIFAD_PIFADL1                   _PIFAD.Bits.PIFADL1
#define PIFAD_PIFADL2                   _PIFAD.Bits.PIFADL2
#define PIFAD_PIFADL3                   _PIFAD.Bits.PIFADL3
#define PIFAD_PIFADL4                   _PIFAD.Bits.PIFADL4
#define PIFAD_PIFADL5                   _PIFAD.Bits.PIFADL5
#define PIFAD_PIFADL6                   _PIFAD.Bits.PIFADL6
#define PIFAD_PIFADL7                   _PIFAD.Bits.PIFADL7
#define PIFAD_PIFADH0                   _PIFAD.Bits.PIFADH0
#define PIFAD_PIFADH1                   _PIFAD.Bits.PIFADH1
#define PIFAD_PIFADH2                   _PIFAD.Bits.PIFADH2
#define PIFAD_PIFADH3                   _PIFAD.Bits.PIFADH3
#define PIFAD_PIFADH4                   _PIFAD.Bits.PIFADH4
#define PIFAD_PIFADH5                   _PIFAD.Bits.PIFADH5
#define PIFAD_PIFADH6                   _PIFAD.Bits.PIFADH6
#define PIFAD_PIFADH7                   _PIFAD.Bits.PIFADH7
#define PIFAD_PIFADL                    _PIFAD.MergedBits.grpPIFADL
#define PIFAD_PIFADH                    _PIFAD.MergedBits.grpPIFADH

#define PIFAD_PIFADL0_MASK              1U
#define PIFAD_PIFADL1_MASK              2U
#define PIFAD_PIFADL2_MASK              4U
#define PIFAD_PIFADL3_MASK              8U
#define PIFAD_PIFADL4_MASK              16U
#define PIFAD_PIFADL5_MASK              32U
#define PIFAD_PIFADL6_MASK              64U
#define PIFAD_PIFADL7_MASK              128U
#define PIFAD_PIFADH0_MASK              256U
#define PIFAD_PIFADH1_MASK              512U
#define PIFAD_PIFADH2_MASK              1024U
#define PIFAD_PIFADH3_MASK              2048U
#define PIFAD_PIFADH4_MASK              4096U
#define PIFAD_PIFADH5_MASK              8192U
#define PIFAD_PIFADH6_MASK              16384U
#define PIFAD_PIFADH7_MASK              32768U
#define PIFAD_PIFADL_MASK               255U
#define PIFAD_PIFADL_BITNUM             0U
#define PIFAD_PIFADH_MASK               65280U
#define PIFAD_PIFADH_BITNUM             8U


/*** DIENAD - Digital Input Enable Register; 0x00000298 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** DIENADH - Digital Input Enable Register; 0x00000298 ***/
    union {
      byte Byte;
      struct {
        byte DIENADH0    :1;                                       /* Digital input enable 0 */
        byte DIENADH1    :1;                                       /* Digital input enable 1 */
        byte DIENADH2    :1;                                       /* Digital input enable 2 */
        byte DIENADH3    :1;                                       /* Digital input enable 3 */
        byte DIENADH4    :1;                                       /* Digital input enable 4 */
        byte DIENADH5    :1;                                       /* Digital input enable 5 */
        byte DIENADH6    :1;                                       /* Digital input enable 6 */
        byte DIENADH7    :1;                                       /* Digital input enable 7 */
      } Bits;
    } DIENADHSTR;
    #define DIENADH                     _DIENAD.Overlap_STR.DIENADHSTR.Byte
    #define DIENADH_DIENADH0            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH0
    #define DIENADH_DIENADH1            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH1
    #define DIENADH_DIENADH2            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH2
    #define DIENADH_DIENADH3            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH3
    #define DIENADH_DIENADH4            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH4
    #define DIENADH_DIENADH5            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH5
    #define DIENADH_DIENADH6            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH6
    #define DIENADH_DIENADH7            _DIENAD.Overlap_STR.DIENADHSTR.Bits.DIENADH7
    
    #define DIENADH_DIENADH0_MASK       1U
    #define DIENADH_DIENADH1_MASK       2U
    #define DIENADH_DIENADH2_MASK       4U
    #define DIENADH_DIENADH3_MASK       8U
    #define DIENADH_DIENADH4_MASK       16U
    #define DIENADH_DIENADH5_MASK       32U
    #define DIENADH_DIENADH6_MASK       64U
    #define DIENADH_DIENADH7_MASK       128U
    

    /*** DIENADL - Digital Input Enable Register; 0x00000299 ***/
    union {
      byte Byte;
      struct {
        byte DIENADL0    :1;                                       /* Digital input enable 0 */
        byte DIENADL1    :1;                                       /* Digital input enable 1 */
        byte DIENADL2    :1;                                       /* Digital input enable 2 */
        byte DIENADL3    :1;                                       /* Digital input enable 3 */
        byte DIENADL4    :1;                                       /* Digital input enable 4 */
        byte DIENADL5    :1;                                       /* Digital input enable 5 */
        byte DIENADL6    :1;                                       /* Digital input enable 6 */
        byte DIENADL7    :1;                                       /* Digital input enable 7 */
      } Bits;
    } DIENADLSTR;
    #define DIENADL                     _DIENAD.Overlap_STR.DIENADLSTR.Byte
    #define DIENADL_DIENADL0            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL0
    #define DIENADL_DIENADL1            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL1
    #define DIENADL_DIENADL2            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL2
    #define DIENADL_DIENADL3            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL3
    #define DIENADL_DIENADL4            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL4
    #define DIENADL_DIENADL5            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL5
    #define DIENADL_DIENADL6            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL6
    #define DIENADL_DIENADL7            _DIENAD.Overlap_STR.DIENADLSTR.Bits.DIENADL7
    
    #define DIENADL_DIENADL0_MASK       1U
    #define DIENADL_DIENADL1_MASK       2U
    #define DIENADL_DIENADL2_MASK       4U
    #define DIENADL_DIENADL3_MASK       8U
    #define DIENADL_DIENADL4_MASK       16U
    #define DIENADL_DIENADL5_MASK       32U
    #define DIENADL_DIENADL6_MASK       64U
    #define DIENADL_DIENADL7_MASK       128U
    
  } Overlap_STR;

  struct {
    word DIENADL0    :1;                                       /* Digital input enable 0 */
    word DIENADL1    :1;                                       /* Digital input enable 1 */
    word DIENADL2    :1;                                       /* Digital input enable 2 */
    word DIENADL3    :1;                                       /* Digital input enable 3 */
    word DIENADL4    :1;                                       /* Digital input enable 4 */
    word DIENADL5    :1;                                       /* Digital input enable 5 */
    word DIENADL6    :1;                                       /* Digital input enable 6 */
    word DIENADL7    :1;                                       /* Digital input enable 7 */
    word DIENADH0    :1;                                       /* Digital input enable 8 */
    word DIENADH1    :1;                                       /* Digital input enable 9 */
    word DIENADH2    :1;                                       /* Digital input enable 10 */
    word DIENADH3    :1;                                       /* Digital input enable 11 */
    word DIENADH4    :1;                                       /* Digital input enable 12 */
    word DIENADH5    :1;                                       /* Digital input enable 13 */
    word DIENADH6    :1;                                       /* Digital input enable 14 */
    word DIENADH7    :1;                                       /* Digital input enable 15 */
  } Bits;
  struct {
    word grpDIENADL :8;
    word grpDIENADH :8;
  } MergedBits;
} DIENADSTR;
extern volatile DIENADSTR _DIENAD @0x00000298;
#define DIENAD                          _DIENAD.Word
#define DIENAD_DIENADL0                 _DIENAD.Bits.DIENADL0
#define DIENAD_DIENADL1                 _DIENAD.Bits.DIENADL1
#define DIENAD_DIENADL2                 _DIENAD.Bits.DIENADL2
#define DIENAD_DIENADL3                 _DIENAD.Bits.DIENADL3
#define DIENAD_DIENADL4                 _DIENAD.Bits.DIENADL4
#define DIENAD_DIENADL5                 _DIENAD.Bits.DIENADL5
#define DIENAD_DIENADL6                 _DIENAD.Bits.DIENADL6
#define DIENAD_DIENADL7                 _DIENAD.Bits.DIENADL7
#define DIENAD_DIENADH0                 _DIENAD.Bits.DIENADH0
#define DIENAD_DIENADH1                 _DIENAD.Bits.DIENADH1
#define DIENAD_DIENADH2                 _DIENAD.Bits.DIENADH2
#define DIENAD_DIENADH3                 _DIENAD.Bits.DIENADH3
#define DIENAD_DIENADH4                 _DIENAD.Bits.DIENADH4
#define DIENAD_DIENADH5                 _DIENAD.Bits.DIENADH5
#define DIENAD_DIENADH6                 _DIENAD.Bits.DIENADH6
#define DIENAD_DIENADH7                 _DIENAD.Bits.DIENADH7
#define DIENAD_DIENADL                  _DIENAD.MergedBits.grpDIENADL
#define DIENAD_DIENADH                  _DIENAD.MergedBits.grpDIENADH

#define DIENAD_DIENADL0_MASK            1U
#define DIENAD_DIENADL1_MASK            2U
#define DIENAD_DIENADL2_MASK            4U
#define DIENAD_DIENADL3_MASK            8U
#define DIENAD_DIENADL4_MASK            16U
#define DIENAD_DIENADL5_MASK            32U
#define DIENAD_DIENADL6_MASK            64U
#define DIENAD_DIENADL7_MASK            128U
#define DIENAD_DIENADH0_MASK            256U
#define DIENAD_DIENADH1_MASK            512U
#define DIENAD_DIENADH2_MASK            1024U
#define DIENAD_DIENADH3_MASK            2048U
#define DIENAD_DIENADH4_MASK            4096U
#define DIENAD_DIENADH5_MASK            8192U
#define DIENAD_DIENADH6_MASK            16384U
#define DIENAD_DIENADH7_MASK            32768U
#define DIENAD_DIENADL_MASK             255U
#define DIENAD_DIENADL_BITNUM           0U
#define DIENAD_DIENADH_MASK             65280U
#define DIENAD_DIENADH_BITNUM           8U


/*** PTT - Port T Data Register; 0x000002C0 ***/
typedef union {
  byte Byte;
  struct {
    byte PTT0        :1;                                       /* Port T general purpose I/O data 0 */
    byte PTT1        :1;                                       /* Port T general purpose I/O data 1 */
    byte PTT2        :1;                                       /* Port T general purpose I/O data 2 */
    byte PTT3        :1;                                       /* Port T general purpose I/O data 3 */
    byte PTT4        :1;                                       /* Port T general purpose I/O data 4 */
    byte PTT5        :1;                                       /* Port T general purpose I/O data 5 */
    byte PTT6        :1;                                       /* Port T general purpose I/O data 6 */
    byte PTT7        :1;                                       /* Port T general purpose I/O data 7 */
  } Bits;
} PTTSTR;
extern volatile PTTSTR _PTT @0x000002C0;
#define PTT                             _PTT.Byte
#define PTT_PTT0                        _PTT.Bits.PTT0
#define PTT_PTT1                        _PTT.Bits.PTT1
#define PTT_PTT2                        _PTT.Bits.PTT2
#define PTT_PTT3                        _PTT.Bits.PTT3
#define PTT_PTT4                        _PTT.Bits.PTT4
#define PTT_PTT5                        _PTT.Bits.PTT5
#define PTT_PTT6                        _PTT.Bits.PTT6
#define PTT_PTT7                        _PTT.Bits.PTT7

#define PTT_PTT0_MASK                   1U
#define PTT_PTT1_MASK                   2U
#define PTT_PTT2_MASK                   4U
#define PTT_PTT3_MASK                   8U
#define PTT_PTT4_MASK                   16U
#define PTT_PTT5_MASK                   32U
#define PTT_PTT6_MASK                   64U
#define PTT_PTT7_MASK                   128U


/*** PTIT - Port T Input Register; 0x000002C1 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIT0       :1;                                       /* Port T data input 0 */
    byte PTIT1       :1;                                       /* Port T data input 1 */
    byte PTIT2       :1;                                       /* Port T data input 2 */
    byte PTIT3       :1;                                       /* Port T data input 3 */
    byte PTIT4       :1;                                       /* Port T data input 4 */
    byte PTIT5       :1;                                       /* Port T data input 5 */
    byte PTIT6       :1;                                       /* Port T data input 6 */
    byte PTIT7       :1;                                       /* Port T data input 7 */
  } Bits;
} PTITSTR;
extern volatile PTITSTR _PTIT @0x000002C1;
#define PTIT                            _PTIT.Byte
#define PTIT_PTIT0                      _PTIT.Bits.PTIT0
#define PTIT_PTIT1                      _PTIT.Bits.PTIT1
#define PTIT_PTIT2                      _PTIT.Bits.PTIT2
#define PTIT_PTIT3                      _PTIT.Bits.PTIT3
#define PTIT_PTIT4                      _PTIT.Bits.PTIT4
#define PTIT_PTIT5                      _PTIT.Bits.PTIT5
#define PTIT_PTIT6                      _PTIT.Bits.PTIT6
#define PTIT_PTIT7                      _PTIT.Bits.PTIT7

#define PTIT_PTIT0_MASK                 1U
#define PTIT_PTIT1_MASK                 2U
#define PTIT_PTIT2_MASK                 4U
#define PTIT_PTIT3_MASK                 8U
#define PTIT_PTIT4_MASK                 16U
#define PTIT_PTIT5_MASK                 32U
#define PTIT_PTIT6_MASK                 64U
#define PTIT_PTIT7_MASK                 128U


/*** DDRT - Port T Data Direction Register; 0x000002C2 ***/
typedef union {
  byte Byte;
  struct {
    byte DDRT0       :1;                                       /* Port T data direction select 0 */
    byte DDRT1       :1;                                       /* Port T data direction select 1 */
    byte DDRT2       :1;                                       /* Port T data direction select 2 */
    byte DDRT3       :1;                                       /* Port T data direction select 3 */
    byte DDRT4       :1;                                       /* Port T data direction select 4 */
    byte DDRT5       :1;                                       /* Port T data direction select 5 */
    byte DDRT6       :1;                                       /* Port T data direction select 6 */
    byte DDRT7       :1;                                       /* Port T data direction select 7 */
  } Bits;
} DDRTSTR;
extern volatile DDRTSTR _DDRT @0x000002C2;
#define DDRT                            _DDRT.Byte
#define DDRT_DDRT0                      _DDRT.Bits.DDRT0
#define DDRT_DDRT1                      _DDRT.Bits.DDRT1
#define DDRT_DDRT2                      _DDRT.Bits.DDRT2
#define DDRT_DDRT3                      _DDRT.Bits.DDRT3
#define DDRT_DDRT4                      _DDRT.Bits.DDRT4
#define DDRT_DDRT5                      _DDRT.Bits.DDRT5
#define DDRT_DDRT6                      _DDRT.Bits.DDRT6
#define DDRT_DDRT7                      _DDRT.Bits.DDRT7

#define DDRT_DDRT0_MASK                 1U
#define DDRT_DDRT1_MASK                 2U
#define DDRT_DDRT2_MASK                 4U
#define DDRT_DDRT3_MASK                 8U
#define DDRT_DDRT4_MASK                 16U
#define DDRT_DDRT5_MASK                 32U
#define DDRT_DDRT6_MASK                 64U
#define DDRT_DDRT7_MASK                 128U


/*** PERT - Port T Pull Device Enable Register; 0x000002C3 ***/
typedef union {
  byte Byte;
  struct {
    byte PERT0       :1;                                       /* Port T pull device enable 0 */
    byte PERT1       :1;                                       /* Port T pull device enable 1 */
    byte PERT2       :1;                                       /* Port T pull device enable 2 */
    byte PERT3       :1;                                       /* Port T pull device enable 3 */
    byte PERT4       :1;                                       /* Port T pull device enable 4 */
    byte PERT5       :1;                                       /* Port T pull device enable 5 */
    byte PERT6       :1;                                       /* Port T pull device enable 6 */
    byte PERT7       :1;                                       /* Port T pull device enable 7 */
  } Bits;
} PERTSTR;
extern volatile PERTSTR _PERT @0x000002C3;
#define PERT                            _PERT.Byte
#define PERT_PERT0                      _PERT.Bits.PERT0
#define PERT_PERT1                      _PERT.Bits.PERT1
#define PERT_PERT2                      _PERT.Bits.PERT2
#define PERT_PERT3                      _PERT.Bits.PERT3
#define PERT_PERT4                      _PERT.Bits.PERT4
#define PERT_PERT5                      _PERT.Bits.PERT5
#define PERT_PERT6                      _PERT.Bits.PERT6
#define PERT_PERT7                      _PERT.Bits.PERT7

#define PERT_PERT0_MASK                 1U
#define PERT_PERT1_MASK                 2U
#define PERT_PERT2_MASK                 4U
#define PERT_PERT3_MASK                 8U
#define PERT_PERT4_MASK                 16U
#define PERT_PERT5_MASK                 32U
#define PERT_PERT6_MASK                 64U
#define PERT_PERT7_MASK                 128U


/*** PPST - Port T Polarity Select Register; 0x000002C4 ***/
typedef union {
  byte Byte;
  struct {
    byte PPST0       :1;                                       /* Port T pull polarity select 0 */
    byte PPST1       :1;                                       /* Port T pull polarity select 1 */
    byte PPST2       :1;                                       /* Port T pull polarity select 2 */
    byte PPST3       :1;                                       /* Port T pull polarity select 3 */
    byte PPST4       :1;                                       /* Port T pull polarity select 4 */
    byte PPST5       :1;                                       /* Port T pull polarity select 5 */
    byte PPST6       :1;                                       /* Port T pull polarity select 6 */
    byte PPST7       :1;                                       /* Port T pull polarity select 7 */
  } Bits;
} PPSTSTR;
extern volatile PPSTSTR _PPST @0x000002C4;
#define PPST                            _PPST.Byte
#define PPST_PPST0                      _PPST.Bits.PPST0
#define PPST_PPST1                      _PPST.Bits.PPST1
#define PPST_PPST2                      _PPST.Bits.PPST2
#define PPST_PPST3                      _PPST.Bits.PPST3
#define PPST_PPST4                      _PPST.Bits.PPST4
#define PPST_PPST5                      _PPST.Bits.PPST5
#define PPST_PPST6                      _PPST.Bits.PPST6
#define PPST_PPST7                      _PPST.Bits.PPST7

#define PPST_PPST0_MASK                 1U
#define PPST_PPST1_MASK                 2U
#define PPST_PPST2_MASK                 4U
#define PPST_PPST3_MASK                 8U
#define PPST_PPST4_MASK                 16U
#define PPST_PPST5_MASK                 32U
#define PPST_PPST6_MASK                 64U
#define PPST_PPST7_MASK                 128U


/*** PTS - Port S Data Register; 0x000002D0 ***/
typedef union {
  byte Byte;
  struct {
    byte PTS0        :1;                                       /* Port S general purpose I/O data 0 */
    byte PTS1        :1;                                       /* Port S general purpose I/O data 1 */
    byte PTS2        :1;                                       /* Port S general purpose I/O data 2 */
    byte PTS3        :1;                                       /* Port S general purpose I/O data 3 */
    byte PTS4        :1;                                       /* Port S general purpose I/O data 4 */
    byte PTS5        :1;                                       /* Port S general purpose I/O data 5 */
    byte PTS6        :1;                                       /* Port S general purpose I/O data 6 */
    byte PTS7        :1;                                       /* Port S general purpose I/O data 7 */
  } Bits;
} PTSSTR;
extern volatile PTSSTR _PTS @0x000002D0;
#define PTS                             _PTS.Byte
#define PTS_PTS0                        _PTS.Bits.PTS0
#define PTS_PTS1                        _PTS.Bits.PTS1
#define PTS_PTS2                        _PTS.Bits.PTS2
#define PTS_PTS3                        _PTS.Bits.PTS3
#define PTS_PTS4                        _PTS.Bits.PTS4
#define PTS_PTS5                        _PTS.Bits.PTS5
#define PTS_PTS6                        _PTS.Bits.PTS6
#define PTS_PTS7                        _PTS.Bits.PTS7

#define PTS_PTS0_MASK                   1U
#define PTS_PTS1_MASK                   2U
#define PTS_PTS2_MASK                   4U
#define PTS_PTS3_MASK                   8U
#define PTS_PTS4_MASK                   16U
#define PTS_PTS5_MASK                   32U
#define PTS_PTS6_MASK                   64U
#define PTS_PTS7_MASK                   128U


/*** PTIS - Port S Input Register; 0x000002D1 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIS0       :1;                                       /* Port S data input 0 */
    byte PTIS1       :1;                                       /* Port S data input 1 */
    byte PTIS2       :1;                                       /* Port S data input 2 */
    byte PTIS3       :1;                                       /* Port S data input 3 */
    byte PTIS4       :1;                                       /* Port S data input 4 */
    byte PTIS5       :1;                                       /* Port S data input 5 */
    byte PTIS6       :1;                                       /* Port S data input 6 */
    byte PTIS7       :1;                                       /* Port S data input 7 */
  } Bits;
} PTISSTR;
extern volatile PTISSTR _PTIS @0x000002D1;
#define PTIS                            _PTIS.Byte
#define PTIS_PTIS0                      _PTIS.Bits.PTIS0
#define PTIS_PTIS1                      _PTIS.Bits.PTIS1
#define PTIS_PTIS2                      _PTIS.Bits.PTIS2
#define PTIS_PTIS3                      _PTIS.Bits.PTIS3
#define PTIS_PTIS4                      _PTIS.Bits.PTIS4
#define PTIS_PTIS5                      _PTIS.Bits.PTIS5
#define PTIS_PTIS6                      _PTIS.Bits.PTIS6
#define PTIS_PTIS7                      _PTIS.Bits.PTIS7

#define PTIS_PTIS0_MASK                 1U
#define PTIS_PTIS1_MASK                 2U
#define PTIS_PTIS2_MASK                 4U
#define PTIS_PTIS3_MASK                 8U
#define PTIS_PTIS4_MASK                 16U
#define PTIS_PTIS5_MASK                 32U
#define PTIS_PTIS6_MASK                 64U
#define PTIS_PTIS7_MASK                 128U


/*** DDRS - Port S Data Direction Register; 0x000002D2 ***/
typedef union {
  byte Byte;
  struct {
    byte DDRS0       :1;                                       /* Port S data direction select 0 */
    byte DDRS1       :1;                                       /* Port S data direction select 1 */
    byte DDRS2       :1;                                       /* Port S data direction select 2 */
    byte DDRS3       :1;                                       /* Port S data direction select 3 */
    byte DDRS4       :1;                                       /* Port S data direction select 4 */
    byte DDRS5       :1;                                       /* Port S data direction select 5 */
    byte DDRS6       :1;                                       /* Port S data direction select 6 */
    byte DDRS7       :1;                                       /* Port S data direction select 7 */
  } Bits;
} DDRSSTR;
extern volatile DDRSSTR _DDRS @0x000002D2;
#define DDRS                            _DDRS.Byte
#define DDRS_DDRS0                      _DDRS.Bits.DDRS0
#define DDRS_DDRS1                      _DDRS.Bits.DDRS1
#define DDRS_DDRS2                      _DDRS.Bits.DDRS2
#define DDRS_DDRS3                      _DDRS.Bits.DDRS3
#define DDRS_DDRS4                      _DDRS.Bits.DDRS4
#define DDRS_DDRS5                      _DDRS.Bits.DDRS5
#define DDRS_DDRS6                      _DDRS.Bits.DDRS6
#define DDRS_DDRS7                      _DDRS.Bits.DDRS7

#define DDRS_DDRS0_MASK                 1U
#define DDRS_DDRS1_MASK                 2U
#define DDRS_DDRS2_MASK                 4U
#define DDRS_DDRS3_MASK                 8U
#define DDRS_DDRS4_MASK                 16U
#define DDRS_DDRS5_MASK                 32U
#define DDRS_DDRS6_MASK                 64U
#define DDRS_DDRS7_MASK                 128U


/*** PERS - Port S Pull Device Enable Register; 0x000002D3 ***/
typedef union {
  byte Byte;
  struct {
    byte PERS0       :1;                                       /* Port S pull device enable 0 */
    byte PERS1       :1;                                       /* Port S pull device enable 1 */
    byte PERS2       :1;                                       /* Port S pull device enable 2 */
    byte PERS3       :1;                                       /* Port S pull device enable 3 */
    byte PERS4       :1;                                       /* Port S pull device enable 4 */
    byte PERS5       :1;                                       /* Port S pull device enable 5 */
    byte PERS6       :1;                                       /* Port S pull device enable 6 */
    byte PERS7       :1;                                       /* Port S pull device enable 7 */
  } Bits;
} PERSSTR;
extern volatile PERSSTR _PERS @0x000002D3;
#define PERS                            _PERS.Byte
#define PERS_PERS0                      _PERS.Bits.PERS0
#define PERS_PERS1                      _PERS.Bits.PERS1
#define PERS_PERS2                      _PERS.Bits.PERS2
#define PERS_PERS3                      _PERS.Bits.PERS3
#define PERS_PERS4                      _PERS.Bits.PERS4
#define PERS_PERS5                      _PERS.Bits.PERS5
#define PERS_PERS6                      _PERS.Bits.PERS6
#define PERS_PERS7                      _PERS.Bits.PERS7

#define PERS_PERS0_MASK                 1U
#define PERS_PERS1_MASK                 2U
#define PERS_PERS2_MASK                 4U
#define PERS_PERS3_MASK                 8U
#define PERS_PERS4_MASK                 16U
#define PERS_PERS5_MASK                 32U
#define PERS_PERS6_MASK                 64U
#define PERS_PERS7_MASK                 128U


/*** PPSS - Port S Polarity Select Register; 0x000002D4 ***/
typedef union {
  byte Byte;
  struct {
    byte PPSS0       :1;                                       /* Port S pull polarity select 0 */
    byte PPSS1       :1;                                       /* Port S pull polarity select 1 */
    byte PPSS2       :1;                                       /* Port S pull polarity select 2 */
    byte PPSS3       :1;                                       /* Port S pull polarity select 3 */
    byte PPSS4       :1;                                       /* Port S pull polarity select 4 */
    byte PPSS5       :1;                                       /* Port S pull polarity select 5 */
    byte PPSS6       :1;                                       /* Port S pull polarity select 6 */
    byte PPSS7       :1;                                       /* Port S pull polarity select 7 */
  } Bits;
} PPSSSTR;
extern volatile PPSSSTR _PPSS @0x000002D4;
#define PPSS                            _PPSS.Byte
#define PPSS_PPSS0                      _PPSS.Bits.PPSS0
#define PPSS_PPSS1                      _PPSS.Bits.PPSS1
#define PPSS_PPSS2                      _PPSS.Bits.PPSS2
#define PPSS_PPSS3                      _PPSS.Bits.PPSS3
#define PPSS_PPSS4                      _PPSS.Bits.PPSS4
#define PPSS_PPSS5                      _PPSS.Bits.PPSS5
#define PPSS_PPSS6                      _PPSS.Bits.PPSS6
#define PPSS_PPSS7                      _PPSS.Bits.PPSS7

#define PPSS_PPSS0_MASK                 1U
#define PPSS_PPSS1_MASK                 2U
#define PPSS_PPSS2_MASK                 4U
#define PPSS_PPSS3_MASK                 8U
#define PPSS_PPSS4_MASK                 16U
#define PPSS_PPSS5_MASK                 32U
#define PPSS_PPSS6_MASK                 64U
#define PPSS_PPSS7_MASK                 128U


/*** PIES - Port S Interrupt Enable Register; 0x000002D6 ***/
typedef union {
  byte Byte;
  struct {
    byte PIES0       :1;                                       /* Port S interrupt enable 0 */
    byte PIES1       :1;                                       /* Port S interrupt enable 1 */
    byte PIES2       :1;                                       /* Port S interrupt enable 2 */
    byte PIES3       :1;                                       /* Port S interrupt enable 3 */
    byte PIES4       :1;                                       /* Port S interrupt enable 4 */
    byte PIES5       :1;                                       /* Port S interrupt enable 5 */
    byte PIES6       :1;                                       /* Port S interrupt enable 6 */
    byte PIES7       :1;                                       /* Port S interrupt enable 7 */
  } Bits;
} PIESSTR;
extern volatile PIESSTR _PIES @0x000002D6;
#define PIES                            _PIES.Byte
#define PIES_PIES0                      _PIES.Bits.PIES0
#define PIES_PIES1                      _PIES.Bits.PIES1
#define PIES_PIES2                      _PIES.Bits.PIES2
#define PIES_PIES3                      _PIES.Bits.PIES3
#define PIES_PIES4                      _PIES.Bits.PIES4
#define PIES_PIES5                      _PIES.Bits.PIES5
#define PIES_PIES6                      _PIES.Bits.PIES6
#define PIES_PIES7                      _PIES.Bits.PIES7

#define PIES_PIES0_MASK                 1U
#define PIES_PIES1_MASK                 2U
#define PIES_PIES2_MASK                 4U
#define PIES_PIES3_MASK                 8U
#define PIES_PIES4_MASK                 16U
#define PIES_PIES5_MASK                 32U
#define PIES_PIES6_MASK                 64U
#define PIES_PIES7_MASK                 128U


/*** PIFS - Port S Interrupt Flag Register; 0x000002D7 ***/
typedef union {
  byte Byte;
  struct {
    byte PIFS0       :1;                                       /* Port S interrupt flag 0 */
    byte PIFS1       :1;                                       /* Port S interrupt flag 1 */
    byte PIFS2       :1;                                       /* Port S interrupt flag 2 */
    byte PIFS3       :1;                                       /* Port S interrupt flag 3 */
    byte PIFS4       :1;                                       /* Port S interrupt flag 4 */
    byte PIFS5       :1;                                       /* Port S interrupt flag 5 */
    byte PIFS6       :1;                                       /* Port S interrupt flag 6 */
    byte PIFS7       :1;                                       /* Port S interrupt flag 7 */
  } Bits;
} PIFSSTR;
extern volatile PIFSSTR _PIFS @0x000002D7;
#define PIFS                            _PIFS.Byte
#define PIFS_PIFS0                      _PIFS.Bits.PIFS0
#define PIFS_PIFS1                      _PIFS.Bits.PIFS1
#define PIFS_PIFS2                      _PIFS.Bits.PIFS2
#define PIFS_PIFS3                      _PIFS.Bits.PIFS3
#define PIFS_PIFS4                      _PIFS.Bits.PIFS4
#define PIFS_PIFS5                      _PIFS.Bits.PIFS5
#define PIFS_PIFS6                      _PIFS.Bits.PIFS6
#define PIFS_PIFS7                      _PIFS.Bits.PIFS7

#define PIFS_PIFS0_MASK                 1U
#define PIFS_PIFS1_MASK                 2U
#define PIFS_PIFS2_MASK                 4U
#define PIFS_PIFS3_MASK                 8U
#define PIFS_PIFS4_MASK                 16U
#define PIFS_PIFS5_MASK                 32U
#define PIFS_PIFS6_MASK                 64U
#define PIFS_PIFS7_MASK                 128U


/*** WOMS - Port S Wired-Or Mode Register; 0x000002DF ***/
typedef union {
  byte Byte;
  struct {
    byte WOMS0       :1;                                       /* Port S wired-or mode 0 */
    byte WOMS1       :1;                                       /* Port S wired-or mode 1 */
    byte WOMS2       :1;                                       /* Port S wired-or mode 2 */
    byte WOMS3       :1;                                       /* Port S wired-or mode 3 */
    byte WOMS4       :1;                                       /* Port S wired-or mode 4 */
    byte WOMS5       :1;                                       /* Port S wired-or mode 5 */
    byte WOMS6       :1;                                       /* Port S wired-or mode 6 */
    byte WOMS7       :1;                                       /* Port S wired-or mode bit 7 */
  } Bits;
} WOMSSTR;
extern volatile WOMSSTR _WOMS @0x000002DF;
#define WOMS                            _WOMS.Byte
#define WOMS_WOMS0                      _WOMS.Bits.WOMS0
#define WOMS_WOMS1                      _WOMS.Bits.WOMS1
#define WOMS_WOMS2                      _WOMS.Bits.WOMS2
#define WOMS_WOMS3                      _WOMS.Bits.WOMS3
#define WOMS_WOMS4                      _WOMS.Bits.WOMS4
#define WOMS_WOMS5                      _WOMS.Bits.WOMS5
#define WOMS_WOMS6                      _WOMS.Bits.WOMS6
#define WOMS_WOMS7                      _WOMS.Bits.WOMS7

#define WOMS_WOMS0_MASK                 1U
#define WOMS_WOMS1_MASK                 2U
#define WOMS_WOMS2_MASK                 4U
#define WOMS_WOMS3_MASK                 8U
#define WOMS_WOMS4_MASK                 16U
#define WOMS_WOMS5_MASK                 32U
#define WOMS_WOMS6_MASK                 64U
#define WOMS_WOMS7_MASK                 128U


/*** PTP - Port P Data Register; 0x000002F0 ***/
typedef union {
  byte Byte;
  struct {
    byte PTP0        :1;                                       /* Port P general purpose I/O data 0 */
    byte PTP1        :1;                                       /* Port P general purpose I/O data 1 */
    byte PTP2        :1;                                       /* Port P general purpose I/O data 2 */
    byte PTP3        :1;                                       /* Port P general purpose I/O data 3 */
    byte PTP4        :1;                                       /* Port P general purpose I/O data 4 */
    byte PTP5        :1;                                       /* Port P general purpose I/O data 5 */
    byte PTP6        :1;                                       /* Port P general purpose I/O data 6 */
    byte PTP7        :1;                                       /* Port P general purpose I/O data 7 */
  } Bits;
} PTPSTR;
extern volatile PTPSTR _PTP @0x000002F0;
#define PTP                             _PTP.Byte
#define PTP_PTP0                        _PTP.Bits.PTP0
#define PTP_PTP1                        _PTP.Bits.PTP1
#define PTP_PTP2                        _PTP.Bits.PTP2
#define PTP_PTP3                        _PTP.Bits.PTP3
#define PTP_PTP4                        _PTP.Bits.PTP4
#define PTP_PTP5                        _PTP.Bits.PTP5
#define PTP_PTP6                        _PTP.Bits.PTP6
#define PTP_PTP7                        _PTP.Bits.PTP7

#define PTP_PTP0_MASK                   1U
#define PTP_PTP1_MASK                   2U
#define PTP_PTP2_MASK                   4U
#define PTP_PTP3_MASK                   8U
#define PTP_PTP4_MASK                   16U
#define PTP_PTP5_MASK                   32U
#define PTP_PTP6_MASK                   64U
#define PTP_PTP7_MASK                   128U


/*** PTIP - Port P Input Register; 0x000002F1 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIP0       :1;                                       /* Port P data input 0 */
    byte PTIP1       :1;                                       /* Port P data input 1 */
    byte PTIP2       :1;                                       /* Port P data input 2 */
    byte PTIP3       :1;                                       /* Port P data input 3 */
    byte PTIP4       :1;                                       /* Port P data input 4 */
    byte PTIP5       :1;                                       /* Port P data input 5 */
    byte PTIP6       :1;                                       /* Port P data input 6 */
    byte PTIP7       :1;                                       /* Port P data input 7 */
  } Bits;
} PTIPSTR;
extern volatile PTIPSTR _PTIP @0x000002F1;
#define PTIP                            _PTIP.Byte
#define PTIP_PTIP0                      _PTIP.Bits.PTIP0
#define PTIP_PTIP1                      _PTIP.Bits.PTIP1
#define PTIP_PTIP2                      _PTIP.Bits.PTIP2
#define PTIP_PTIP3                      _PTIP.Bits.PTIP3
#define PTIP_PTIP4                      _PTIP.Bits.PTIP4
#define PTIP_PTIP5                      _PTIP.Bits.PTIP5
#define PTIP_PTIP6                      _PTIP.Bits.PTIP6
#define PTIP_PTIP7                      _PTIP.Bits.PTIP7

#define PTIP_PTIP0_MASK                 1U
#define PTIP_PTIP1_MASK                 2U
#define PTIP_PTIP2_MASK                 4U
#define PTIP_PTIP3_MASK                 8U
#define PTIP_PTIP4_MASK                 16U
#define PTIP_PTIP5_MASK                 32U
#define PTIP_PTIP6_MASK                 64U
#define PTIP_PTIP7_MASK                 128U


/*** DDRP - Port P Data Direction Register; 0x000002F2 ***/
typedef union {
  byte Byte;
  struct {
    byte DDRP0       :1;                                       /* Port P data direction select 0 */
    byte DDRP1       :1;                                       /* Port P data direction select 1 */
    byte DDRP2       :1;                                       /* Port P data direction select 2 */
    byte DDRP3       :1;                                       /* Port P data direction select 3 */
    byte DDRP4       :1;                                       /* Port P data direction select 4 */
    byte DDRP5       :1;                                       /* Port P data direction select 5 */
    byte DDRP6       :1;                                       /* Port P data direction select 6 */
    byte DDRP7       :1;                                       /* Port P data direction select 7 */
  } Bits;
} DDRPSTR;
extern volatile DDRPSTR _DDRP @0x000002F2;
#define DDRP                            _DDRP.Byte
#define DDRP_DDRP0                      _DDRP.Bits.DDRP0
#define DDRP_DDRP1                      _DDRP.Bits.DDRP1
#define DDRP_DDRP2                      _DDRP.Bits.DDRP2
#define DDRP_DDRP3                      _DDRP.Bits.DDRP3
#define DDRP_DDRP4                      _DDRP.Bits.DDRP4
#define DDRP_DDRP5                      _DDRP.Bits.DDRP5
#define DDRP_DDRP6                      _DDRP.Bits.DDRP6
#define DDRP_DDRP7                      _DDRP.Bits.DDRP7

#define DDRP_DDRP0_MASK                 1U
#define DDRP_DDRP1_MASK                 2U
#define DDRP_DDRP2_MASK                 4U
#define DDRP_DDRP3_MASK                 8U
#define DDRP_DDRP4_MASK                 16U
#define DDRP_DDRP5_MASK                 32U
#define DDRP_DDRP6_MASK                 64U
#define DDRP_DDRP7_MASK                 128U


/*** PERP - Port P Pull Device Enable Register; 0x000002F3 ***/
typedef union {
  byte Byte;
  struct {
    byte PERP0       :1;                                       /* Port P pull device enable 0 */
    byte PERP1       :1;                                       /* Port P pull device enable 1 */
    byte PERP2       :1;                                       /* Port P pull device enable 2 */
    byte PERP3       :1;                                       /* Port P pull device enable 3 */
    byte PERP4       :1;                                       /* Port P pull device enable 4 */
    byte PERP5       :1;                                       /* Port P pull device enable 5 */
    byte PERP6       :1;                                       /* Port P pull device enable 6 */
    byte PERP7       :1;                                       /* Port P pull device enable 7 */
  } Bits;
} PERPSTR;
extern volatile PERPSTR _PERP @0x000002F3;
#define PERP                            _PERP.Byte
#define PERP_PERP0                      _PERP.Bits.PERP0
#define PERP_PERP1                      _PERP.Bits.PERP1
#define PERP_PERP2                      _PERP.Bits.PERP2
#define PERP_PERP3                      _PERP.Bits.PERP3
#define PERP_PERP4                      _PERP.Bits.PERP4
#define PERP_PERP5                      _PERP.Bits.PERP5
#define PERP_PERP6                      _PERP.Bits.PERP6
#define PERP_PERP7                      _PERP.Bits.PERP7

#define PERP_PERP0_MASK                 1U
#define PERP_PERP1_MASK                 2U
#define PERP_PERP2_MASK                 4U
#define PERP_PERP3_MASK                 8U
#define PERP_PERP4_MASK                 16U
#define PERP_PERP5_MASK                 32U
#define PERP_PERP6_MASK                 64U
#define PERP_PERP7_MASK                 128U


/*** PPSP - Port P Polarity Select Register; 0x000002F4 ***/
typedef union {
  byte Byte;
  struct {
    byte PPSP0       :1;                                       /* Port P pull polarity select 0 */
    byte PPSP1       :1;                                       /* Port P pull polarity select 1 */
    byte PPSP2       :1;                                       /* Port P pull polarity select 2 */
    byte PPSP3       :1;                                       /* Port P pull polarity select 3 */
    byte PPSP4       :1;                                       /* Port P pull polarity select 4 */
    byte PPSP5       :1;                                       /* Port P pull polarity select 5 */
    byte PPSP6       :1;                                       /* Port P pull polarity select 6 */
    byte PPSP7       :1;                                       /* Port P pull polarity select 7 */
  } Bits;
} PPSPSTR;
extern volatile PPSPSTR _PPSP @0x000002F4;
#define PPSP                            _PPSP.Byte
#define PPSP_PPSP0                      _PPSP.Bits.PPSP0
#define PPSP_PPSP1                      _PPSP.Bits.PPSP1
#define PPSP_PPSP2                      _PPSP.Bits.PPSP2
#define PPSP_PPSP3                      _PPSP.Bits.PPSP3
#define PPSP_PPSP4                      _PPSP.Bits.PPSP4
#define PPSP_PPSP5                      _PPSP.Bits.PPSP5
#define PPSP_PPSP6                      _PPSP.Bits.PPSP6
#define PPSP_PPSP7                      _PPSP.Bits.PPSP7

#define PPSP_PPSP0_MASK                 1U
#define PPSP_PPSP1_MASK                 2U
#define PPSP_PPSP2_MASK                 4U
#define PPSP_PPSP3_MASK                 8U
#define PPSP_PPSP4_MASK                 16U
#define PPSP_PPSP5_MASK                 32U
#define PPSP_PPSP6_MASK                 64U
#define PPSP_PPSP7_MASK                 128U


/*** PIEP - Port P Interrupt Enable Register; 0x000002F6 ***/
typedef union {
  byte Byte;
  struct {
    byte PIEP0       :1;                                       /* Port P interrupt enable 0 */
    byte PIEP1       :1;                                       /* Port P interrupt enable 1 */
    byte PIEP2       :1;                                       /* Port P interrupt enable 2 */
    byte PIEP3       :1;                                       /* Port P interrupt enable 3 */
    byte PIEP4       :1;                                       /* Port P interrupt enable 4 */
    byte PIEP5       :1;                                       /* Port P interrupt enable 5 */
    byte PIEP6       :1;                                       /* Port P interrupt enable 6 */
    byte PIEP7       :1;                                       /* Port P interrupt enable 7 */
  } Bits;
} PIEPSTR;
extern volatile PIEPSTR _PIEP @0x000002F6;
#define PIEP                            _PIEP.Byte
#define PIEP_PIEP0                      _PIEP.Bits.PIEP0
#define PIEP_PIEP1                      _PIEP.Bits.PIEP1
#define PIEP_PIEP2                      _PIEP.Bits.PIEP2
#define PIEP_PIEP3                      _PIEP.Bits.PIEP3
#define PIEP_PIEP4                      _PIEP.Bits.PIEP4
#define PIEP_PIEP5                      _PIEP.Bits.PIEP5
#define PIEP_PIEP6                      _PIEP.Bits.PIEP6
#define PIEP_PIEP7                      _PIEP.Bits.PIEP7

#define PIEP_PIEP0_MASK                 1U
#define PIEP_PIEP1_MASK                 2U
#define PIEP_PIEP2_MASK                 4U
#define PIEP_PIEP3_MASK                 8U
#define PIEP_PIEP4_MASK                 16U
#define PIEP_PIEP5_MASK                 32U
#define PIEP_PIEP6_MASK                 64U
#define PIEP_PIEP7_MASK                 128U


/*** PIFP - Port P Interrupt Flag Register; 0x000002F7 ***/
typedef union {
  byte Byte;
  struct {
    byte PIFP0       :1;                                       /* Port P interrupt flag 0 */
    byte PIFP1       :1;                                       /* Port P interrupt flag 1 */
    byte PIFP2       :1;                                       /* Port P interrupt flag 2 */
    byte PIFP3       :1;                                       /* Port P interrupt flag 3 */
    byte PIFP4       :1;                                       /* Port P interrupt flag 4 */
    byte PIFP5       :1;                                       /* Port P interrupt flag 5 */
    byte PIFP6       :1;                                       /* Port P interrupt flag 6 */
    byte PIFP7       :1;                                       /* Port P interrupt flag 7 */
  } Bits;
} PIFPSTR;
extern volatile PIFPSTR _PIFP @0x000002F7;
#define PIFP                            _PIFP.Byte
#define PIFP_PIFP0                      _PIFP.Bits.PIFP0
#define PIFP_PIFP1                      _PIFP.Bits.PIFP1
#define PIFP_PIFP2                      _PIFP.Bits.PIFP2
#define PIFP_PIFP3                      _PIFP.Bits.PIFP3
#define PIFP_PIFP4                      _PIFP.Bits.PIFP4
#define PIFP_PIFP5                      _PIFP.Bits.PIFP5
#define PIFP_PIFP6                      _PIFP.Bits.PIFP6
#define PIFP_PIFP7                      _PIFP.Bits.PIFP7

#define PIFP_PIFP0_MASK                 1U
#define PIFP_PIFP1_MASK                 2U
#define PIFP_PIFP2_MASK                 4U
#define PIFP_PIFP3_MASK                 8U
#define PIFP_PIFP4_MASK                 16U
#define PIFP_PIFP5_MASK                 32U
#define PIFP_PIFP6_MASK                 64U
#define PIFP_PIFP7_MASK                 128U


/*** OCPEP - Port P Over-Current Protection Enable Register; 0x000002F9 ***/
typedef union {
  byte Byte;
  struct {
    byte OCPEP0      :1;                                       /* Over-Current Protection Enable on PP0 */
    byte             :1; 
    byte OCPEP2      :1;                                       /* Over-Current Protection Enable on PP2 */
    byte             :1; 
    byte OCPEP4      :1;                                       /* Over-Current Protection Enable on PP4 */
    byte OCPEP5      :1;                                       /* Over-Current Protection Enable on PP5 */
    byte OCPEP6      :1;                                       /* Over-Current Protection Enable on PP6 */
    byte             :1; 
  } Bits;
  struct {
    byte grpOCPEP :1;
    byte         :1;
    byte grpOCPEP_2 :1;
    byte         :1;
    byte grpOCPEP_4 :3;
    byte         :1;
  } MergedBits;
} OCPEPSTR;
extern volatile OCPEPSTR _OCPEP @0x000002F9;
#define OCPEP                           _OCPEP.Byte
#define OCPEP_OCPEP0                    _OCPEP.Bits.OCPEP0
#define OCPEP_OCPEP2                    _OCPEP.Bits.OCPEP2
#define OCPEP_OCPEP4                    _OCPEP.Bits.OCPEP4
#define OCPEP_OCPEP5                    _OCPEP.Bits.OCPEP5
#define OCPEP_OCPEP6                    _OCPEP.Bits.OCPEP6
#define OCPEP_OCPEP_4                   _OCPEP.MergedBits.grpOCPEP_4

#define OCPEP_OCPEP0_MASK               1U
#define OCPEP_OCPEP2_MASK               4U
#define OCPEP_OCPEP4_MASK               16U
#define OCPEP_OCPEP5_MASK               32U
#define OCPEP_OCPEP6_MASK               64U
#define OCPEP_OCPEP_4_MASK              112U
#define OCPEP_OCPEP_4_BITNUM            4U


/*** OCIEP - Port P Over-Current Interrupt Enable Register; 0x000002FA ***/
typedef union {
  byte Byte;
  struct {
    byte OCIEP0      :1;                                       /* Over-Current Interrupt Enable on PP0 */
    byte             :1; 
    byte OCIEP2      :1;                                       /* Over-Current Interrupt Enable on PP2 */
    byte             :1; 
    byte OCIEP4      :1;                                       /* Over-Current Interrupt Enable on PP4 */
    byte OCIEP5      :1;                                       /* Over-Current Interrupt Enable on PP5 */
    byte OCIEP6      :1;                                       /* Over-Current Interrupt Enable on PP6 */
    byte             :1; 
  } Bits;
  struct {
    byte grpOCIEP :1;
    byte         :1;
    byte grpOCIEP_2 :1;
    byte         :1;
    byte grpOCIEP_4 :3;
    byte         :1;
  } MergedBits;
} OCIEPSTR;
extern volatile OCIEPSTR _OCIEP @0x000002FA;
#define OCIEP                           _OCIEP.Byte
#define OCIEP_OCIEP0                    _OCIEP.Bits.OCIEP0
#define OCIEP_OCIEP2                    _OCIEP.Bits.OCIEP2
#define OCIEP_OCIEP4                    _OCIEP.Bits.OCIEP4
#define OCIEP_OCIEP5                    _OCIEP.Bits.OCIEP5
#define OCIEP_OCIEP6                    _OCIEP.Bits.OCIEP6
#define OCIEP_OCIEP_4                   _OCIEP.MergedBits.grpOCIEP_4

#define OCIEP_OCIEP0_MASK               1U
#define OCIEP_OCIEP2_MASK               4U
#define OCIEP_OCIEP4_MASK               16U
#define OCIEP_OCIEP5_MASK               32U
#define OCIEP_OCIEP6_MASK               64U
#define OCIEP_OCIEP_4_MASK              112U
#define OCIEP_OCIEP_4_BITNUM            4U


/*** OCIFP - Port P Over-Current Interrupt Flag Register; 0x000002FB ***/
typedef union {
  byte Byte;
  struct {
    byte OCIFP0      :1;                                       /* Over-Current Interrupt Flag on PP0 */
    byte             :1; 
    byte OCIFP2      :1;                                       /* Over-Current Interrupt Flag on PP2 */
    byte             :1; 
    byte OCIFP4      :1;                                       /* Over-Current Interrupt Flag on PP4 */
    byte OCIFP5      :1;                                       /* Over-Current Interrupt Flag on PP5 */
    byte OCIFP6      :1;                                       /* Over-Current Interrupt Flag on PP6 */
    byte             :1; 
  } Bits;
  struct {
    byte grpOCIFP :1;
    byte         :1;
    byte grpOCIFP_2 :1;
    byte         :1;
    byte grpOCIFP_4 :3;
    byte         :1;
  } MergedBits;
} OCIFPSTR;
extern volatile OCIFPSTR _OCIFP @0x000002FB;
#define OCIFP                           _OCIFP.Byte
#define OCIFP_OCIFP0                    _OCIFP.Bits.OCIFP0
#define OCIFP_OCIFP2                    _OCIFP.Bits.OCIFP2
#define OCIFP_OCIFP4                    _OCIFP.Bits.OCIFP4
#define OCIFP_OCIFP5                    _OCIFP.Bits.OCIFP5
#define OCIFP_OCIFP6                    _OCIFP.Bits.OCIFP6
#define OCIFP_OCIFP_4                   _OCIFP.MergedBits.grpOCIFP_4

#define OCIFP_OCIFP0_MASK               1U
#define OCIFP_OCIFP2_MASK               4U
#define OCIFP_OCIFP4_MASK               16U
#define OCIFP_OCIFP5_MASK               32U
#define OCIFP_OCIFP6_MASK               64U
#define OCIFP_OCIFP_4_MASK              112U
#define OCIFP_OCIFP_4_BITNUM            4U


/*** RDRP - Port P Reduced Drive Register; 0x000002FD ***/
typedef union {
  byte Byte;
  struct {
    byte RDRP0       :1;                                       /* Port P reduced drive select 0 */
    byte             :1; 
    byte RDRP2       :1;                                       /* Port P reduced drive select 2 */
    byte             :1; 
    byte RDRP4       :1;                                       /* Port P reduced drive select 4 */
    byte RDRP5       :1;                                       /* Port P reduced drive select 5 */
    byte RDRP6       :1;                                       /* Port P reduced drive select 6 */
    byte             :1; 
  } Bits;
  struct {
    byte grpRDRP :1;
    byte         :1;
    byte grpRDRP_2 :1;
    byte         :1;
    byte grpRDRP_4 :3;
    byte         :1;
  } MergedBits;
} RDRPSTR;
extern volatile RDRPSTR _RDRP @0x000002FD;
#define RDRP                            _RDRP.Byte
#define RDRP_RDRP0                      _RDRP.Bits.RDRP0
#define RDRP_RDRP2                      _RDRP.Bits.RDRP2
#define RDRP_RDRP4                      _RDRP.Bits.RDRP4
#define RDRP_RDRP5                      _RDRP.Bits.RDRP5
#define RDRP_RDRP6                      _RDRP.Bits.RDRP6
#define RDRP_RDRP_4                     _RDRP.MergedBits.grpRDRP_4

#define RDRP_RDRP0_MASK                 1U
#define RDRP_RDRP2_MASK                 4U
#define RDRP_RDRP4_MASK                 16U
#define RDRP_RDRP5_MASK                 32U
#define RDRP_RDRP6_MASK                 64U
#define RDRP_RDRP_4_MASK                112U
#define RDRP_RDRP_4_BITNUM              4U


/*** PTJ - Port J Data Register; 0x00000310 ***/
typedef union {
  byte Byte;
  struct {
    byte PTJ0        :1;                                       /* Port J general purpose I/O data 0 */
    byte PTJ1        :1;                                       /* Port J general purpose I/O data 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTJ  :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTJSTR;
extern volatile PTJSTR _PTJ @0x00000310;
#define PTJ                             _PTJ.Byte
#define PTJ_PTJ0                        _PTJ.Bits.PTJ0
#define PTJ_PTJ1                        _PTJ.Bits.PTJ1
#define PTJ_PTJ                         _PTJ.MergedBits.grpPTJ

#define PTJ_PTJ0_MASK                   1U
#define PTJ_PTJ1_MASK                   2U
#define PTJ_PTJ_MASK                    3U
#define PTJ_PTJ_BITNUM                  0U


/*** PTIJ - Port J Input Register; 0x00000311 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIJ0       :1;                                       /* Port J data input 0 */
    byte PTIJ1       :1;                                       /* Port J data input 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTIJ :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTIJSTR;
extern volatile PTIJSTR _PTIJ @0x00000311;
#define PTIJ                            _PTIJ.Byte
#define PTIJ_PTIJ0                      _PTIJ.Bits.PTIJ0
#define PTIJ_PTIJ1                      _PTIJ.Bits.PTIJ1
#define PTIJ_PTIJ                       _PTIJ.MergedBits.grpPTIJ

#define PTIJ_PTIJ0_MASK                 1U
#define PTIJ_PTIJ1_MASK                 2U
#define PTIJ_PTIJ_MASK                  3U
#define PTIJ_PTIJ_BITNUM                0U


/*** DDRJ - Port J Data Direction Register; 0x00000312 ***/
typedef union {
  byte Byte;
  struct {
    byte DDRJ0       :1;                                       /* Port J data direction select 0 */
    byte DDRJ1       :1;                                       /* Port J data direction select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpDDRJ :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} DDRJSTR;
extern volatile DDRJSTR _DDRJ @0x00000312;
#define DDRJ                            _DDRJ.Byte
#define DDRJ_DDRJ0                      _DDRJ.Bits.DDRJ0
#define DDRJ_DDRJ1                      _DDRJ.Bits.DDRJ1
#define DDRJ_DDRJ                       _DDRJ.MergedBits.grpDDRJ

#define DDRJ_DDRJ0_MASK                 1U
#define DDRJ_DDRJ1_MASK                 2U
#define DDRJ_DDRJ_MASK                  3U
#define DDRJ_DDRJ_BITNUM                0U


/*** PERJ - Port J Pull Device Enable Register; 0x00000313 ***/
typedef union {
  byte Byte;
  struct {
    byte PERJ0       :1;                                       /* Port J pull device enable 0 */
    byte PERJ1       :1;                                       /* Port J pull device enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPERJ :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PERJSTR;
extern volatile PERJSTR _PERJ @0x00000313;
#define PERJ                            _PERJ.Byte
#define PERJ_PERJ0                      _PERJ.Bits.PERJ0
#define PERJ_PERJ1                      _PERJ.Bits.PERJ1
#define PERJ_PERJ                       _PERJ.MergedBits.grpPERJ

#define PERJ_PERJ0_MASK                 1U
#define PERJ_PERJ1_MASK                 2U
#define PERJ_PERJ_MASK                  3U
#define PERJ_PERJ_BITNUM                0U


/*** PPSJ - Port J Polarity Select Register; 0x00000314 ***/
typedef union {
  byte Byte;
  struct {
    byte PPSJ0       :1;                                       /* Port J pull polarity select 0 */
    byte PPSJ1       :1;                                       /* Port J pull polarity select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPPSJ :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PPSJSTR;
extern volatile PPSJSTR _PPSJ @0x00000314;
#define PPSJ                            _PPSJ.Byte
#define PPSJ_PPSJ0                      _PPSJ.Bits.PPSJ0
#define PPSJ_PPSJ1                      _PPSJ.Bits.PPSJ1
#define PPSJ_PPSJ                       _PPSJ.MergedBits.grpPPSJ

#define PPSJ_PPSJ0_MASK                 1U
#define PPSJ_PPSJ1_MASK                 2U
#define PPSJ_PPSJ_MASK                  3U
#define PPSJ_PPSJ_BITNUM                0U


/*** WOMJ - Port J Wired-Or Mode Register; 0x0000031F ***/
typedef union {
  byte Byte;
  struct {
    byte WOMJ0       :1;                                       /* Port J wired-or mode 0 */
    byte WOMJ1       :1;                                       /* Port J wired-or mode 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpWOMJ :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} WOMJSTR;
extern volatile WOMJSTR _WOMJ @0x0000031F;
#define WOMJ                            _WOMJ.Byte
#define WOMJ_WOMJ0                      _WOMJ.Bits.WOMJ0
#define WOMJ_WOMJ1                      _WOMJ.Bits.WOMJ1
#define WOMJ_WOMJ                       _WOMJ.MergedBits.grpWOMJ

#define WOMJ_WOMJ0_MASK                 1U
#define WOMJ_WOMJ1_MASK                 2U
#define WOMJ_WOMJ_MASK                  3U
#define WOMJ_WOMJ_BITNUM                0U


/*** PTIL - Port L Input Register; 0x00000331 ***/
typedef union {
  byte Byte;
  struct {
    byte PTIL0       :1;                                       /* Port L data input 0 */
    byte PTIL1       :1;                                       /* Port L data input 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTIL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTILSTR;
extern volatile PTILSTR _PTIL @0x00000331;
#define PTIL                            _PTIL.Byte
#define PTIL_PTIL0                      _PTIL.Bits.PTIL0
#define PTIL_PTIL1                      _PTIL.Bits.PTIL1
#define PTIL_PTIL                       _PTIL.MergedBits.grpPTIL

#define PTIL_PTIL0_MASK                 1U
#define PTIL_PTIL1_MASK                 2U
#define PTIL_PTIL_MASK                  3U
#define PTIL_PTIL_BITNUM                0U


/*** PTPSL - Port L Pull Select Register; 0x00000333 ***/
typedef union {
  byte Byte;
  struct {
    byte PTPSL0      :1;                                       /* Port L Pull Select 0 */
    byte PTPSL1      :1;                                       /* Port L Pull Select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTPSL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTPSLSTR;
extern volatile PTPSLSTR _PTPSL @0x00000333;
#define PTPSL                           _PTPSL.Byte
#define PTPSL_PTPSL0                    _PTPSL.Bits.PTPSL0
#define PTPSL_PTPSL1                    _PTPSL.Bits.PTPSL1
#define PTPSL_PTPSL                     _PTPSL.MergedBits.grpPTPSL

#define PTPSL_PTPSL0_MASK               1U
#define PTPSL_PTPSL1_MASK               2U
#define PTPSL_PTPSL_MASK                3U
#define PTPSL_PTPSL_BITNUM              0U


/*** PPSL - Port L Polarity Select Register; 0x00000334 ***/
typedef union {
  byte Byte;
  struct {
    byte PPSL0       :1;                                       /* Port L pull polarity select 0 */
    byte PPSL1       :1;                                       /* Port L pull polarity select 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPPSL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PPSLSTR;
extern volatile PPSLSTR _PPSL @0x00000334;
#define PPSL                            _PPSL.Byte
#define PPSL_PPSL0                      _PPSL.Bits.PPSL0
#define PPSL_PPSL1                      _PPSL.Bits.PPSL1
#define PPSL_PPSL                       _PPSL.MergedBits.grpPPSL

#define PPSL_PPSL0_MASK                 1U
#define PPSL_PPSL1_MASK                 2U
#define PPSL_PPSL_MASK                  3U
#define PPSL_PPSL_BITNUM                0U


/*** PIEL - Port L Interrupt Enable Register; 0x00000336 ***/
typedef union {
  byte Byte;
  struct {
    byte PIEL0       :1;                                       /* Port L interrupt enable 0 */
    byte PIEL1       :1;                                       /* Port L interrupt enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPIEL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PIELSTR;
extern volatile PIELSTR _PIEL @0x00000336;
#define PIEL                            _PIEL.Byte
#define PIEL_PIEL0                      _PIEL.Bits.PIEL0
#define PIEL_PIEL1                      _PIEL.Bits.PIEL1
#define PIEL_PIEL                       _PIEL.MergedBits.grpPIEL

#define PIEL_PIEL0_MASK                 1U
#define PIEL_PIEL1_MASK                 2U
#define PIEL_PIEL_MASK                  3U
#define PIEL_PIEL_BITNUM                0U


/*** PIFL - Port L Interrupt Flag Register; 0x00000337 ***/
typedef union {
  byte Byte;
  struct {
    byte PIFL0       :1;                                       /* Port L interrupt flag 0 */
    byte PIFL1       :1;                                       /* Port L interrupt flag 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPIFL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PIFLSTR;
extern volatile PIFLSTR _PIFL @0x00000337;
#define PIFL                            _PIFL.Byte
#define PIFL_PIFL0                      _PIFL.Bits.PIFL0
#define PIFL_PIFL1                      _PIFL.Bits.PIFL1
#define PIFL_PIFL                       _PIFL.MergedBits.grpPIFL

#define PIFL_PIFL0_MASK                 1U
#define PIFL_PIFL1_MASK                 2U
#define PIFL_PIFL_MASK                  3U
#define PIFL_PIFL_BITNUM                0U


/*** PTABYPL - Port L ADC Bypass Register; 0x0000033A ***/
typedef union {
  byte Byte;
  struct {
    byte PTABYPL0    :1;                                       /* Port L ADC Connection Bypass 0 */
    byte PTABYPL1    :1;                                       /* Port L ADC Connection Bypass 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTABYPL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTABYPLSTR;
extern volatile PTABYPLSTR _PTABYPL @0x0000033A;
#define PTABYPL                         _PTABYPL.Byte
#define PTABYPL_PTABYPL0                _PTABYPL.Bits.PTABYPL0
#define PTABYPL_PTABYPL1                _PTABYPL.Bits.PTABYPL1
#define PTABYPL_PTABYPL                 _PTABYPL.MergedBits.grpPTABYPL

#define PTABYPL_PTABYPL0_MASK           1U
#define PTABYPL_PTABYPL1_MASK           2U
#define PTABYPL_PTABYPL_MASK            3U
#define PTABYPL_PTABYPL_BITNUM          0U


/*** PTADIRL - Port L ADC Direct Register; 0x0000033B ***/
typedef union {
  byte Byte;
  struct {
    byte PTADIRL0    :1;                                       /* Port L ADC Direct Connection 0 */
    byte PTADIRL1    :1;                                       /* Port L ADC Direct Connection 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTADIRL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTADIRLSTR;
extern volatile PTADIRLSTR _PTADIRL @0x0000033B;
#define PTADIRL                         _PTADIRL.Byte
#define PTADIRL_PTADIRL0                _PTADIRL.Bits.PTADIRL0
#define PTADIRL_PTADIRL1                _PTADIRL.Bits.PTADIRL1
#define PTADIRL_PTADIRL                 _PTADIRL.MergedBits.grpPTADIRL

#define PTADIRL_PTADIRL0_MASK           1U
#define PTADIRL_PTADIRL1_MASK           2U
#define PTADIRL_PTADIRL_MASK            3U
#define PTADIRL_PTADIRL_BITNUM          0U


/*** DIENL - Port LDigital Input Enable Register; 0x0000033C ***/
typedef union {
  byte Byte;
  struct {
    byte DIENL0      :1;                                       /* Digital input enable 0 */
    byte DIENL1      :1;                                       /* Digital input enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpDIENL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} DIENLSTR;
extern volatile DIENLSTR _DIENL @0x0000033C;
#define DIENL                           _DIENL.Byte
#define DIENL_DIENL0                    _DIENL.Bits.DIENL0
#define DIENL_DIENL1                    _DIENL.Bits.DIENL1
#define DIENL_DIENL                     _DIENL.MergedBits.grpDIENL

#define DIENL_DIENL0_MASK               1U
#define DIENL_DIENL1_MASK               2U
#define DIENL_DIENL_MASK                3U
#define DIENL_DIENL_BITNUM              0U


/*** PTAENL - Port L ADC Connection Enable Register; 0x0000033D ***/
typedef union {
  byte Byte;
  struct {
    byte PTAENL0     :1;                                       /* Port L ADC Connection Enable 0 */
    byte PTAENL1     :1;                                       /* Port L ADC Connection Enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTAENL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTAENLSTR;
extern volatile PTAENLSTR _PTAENL @0x0000033D;
#define PTAENL                          _PTAENL.Byte
#define PTAENL_PTAENL0                  _PTAENL.Bits.PTAENL0
#define PTAENL_PTAENL1                  _PTAENL.Bits.PTAENL1
#define PTAENL_PTAENL                   _PTAENL.MergedBits.grpPTAENL

#define PTAENL_PTAENL0_MASK             1U
#define PTAENL_PTAENL1_MASK             2U
#define PTAENL_PTAENL_MASK              3U
#define PTAENL_PTAENL_BITNUM            0U


/*** PIRL - Port L Input Divider Ratio Selection Register; 0x0000033E ***/
typedef union {
  byte Byte;
  struct {
    byte PIRL0       :1;                                       /* Port L Input Divider Ratio Selection bit 0 */
    byte PIRL1       :1;                                       /* Port L Input Divider Ratio Selection bit 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPIRL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PIRLSTR;
extern volatile PIRLSTR _PIRL @0x0000033E;
#define PIRL                            _PIRL.Byte
#define PIRL_PIRL0                      _PIRL.Bits.PIRL0
#define PIRL_PIRL1                      _PIRL.Bits.PIRL1
#define PIRL_PIRL                       _PIRL.MergedBits.grpPIRL

#define PIRL_PIRL0_MASK                 1U
#define PIRL_PIRL1_MASK                 2U
#define PIRL_PIRL_MASK                  3U
#define PIRL_PIRL_BITNUM                0U


/*** PTTEL - Port L Test Enable Register; 0x0000033F ***/
typedef union {
  byte Byte;
  struct {
    byte PTTEL0      :1;                                       /* Port L Test Enable 0 */
    byte PTTEL1      :1;                                       /* Port L Test Enable 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPTTEL :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} PTTELSTR;
extern volatile PTTELSTR _PTTEL @0x0000033F;
#define PTTEL                           _PTTEL.Byte
#define PTTEL_PTTEL0                    _PTTEL.Bits.PTTEL0
#define PTTEL_PTTEL1                    _PTTEL.Bits.PTTEL1
#define PTTEL_PTTEL                     _PTTEL.MergedBits.grpPTTEL

#define PTTEL_PTTEL0_MASK               1U
#define PTTEL_PTTEL1_MASK               2U
#define PTTEL_PTTEL_MASK                3U
#define PTTEL_PTTEL_BITNUM              0U


/*** FCLKDIV - Flash Clock Divider Register; 0x00000380 ***/
typedef union {
  byte Byte;
  struct {
    byte FDIV0       :1;                                       /* Clock Divider Bit 0 */
    byte FDIV1       :1;                                       /* Clock Divider Bit 1 */
    byte FDIV2       :1;                                       /* Clock Divider Bit 2 */
    byte FDIV3       :1;                                       /* Clock Divider Bit 3 */
    byte FDIV4       :1;                                       /* Clock Divider Bit 4 */
    byte FDIV5       :1;                                       /* Clock Divider Bit 5 */
    byte FDIVLCK     :1;                                       /* Clock divider locked */
    byte FDIVLD      :1;                                       /* Clock Divider Loaded */
  } Bits;
  struct {
    byte grpFDIV :6;
    byte         :1;
    byte         :1;
  } MergedBits;
} FCLKDIVSTR;
extern volatile FCLKDIVSTR _FCLKDIV @0x00000380;
#define FCLKDIV                         _FCLKDIV.Byte
#define FCLKDIV_FDIV0                   _FCLKDIV.Bits.FDIV0
#define FCLKDIV_FDIV1                   _FCLKDIV.Bits.FDIV1
#define FCLKDIV_FDIV2                   _FCLKDIV.Bits.FDIV2
#define FCLKDIV_FDIV3                   _FCLKDIV.Bits.FDIV3
#define FCLKDIV_FDIV4                   _FCLKDIV.Bits.FDIV4
#define FCLKDIV_FDIV5                   _FCLKDIV.Bits.FDIV5
#define FCLKDIV_FDIVLCK                 _FCLKDIV.Bits.FDIVLCK
#define FCLKDIV_FDIVLD                  _FCLKDIV.Bits.FDIVLD
#define FCLKDIV_FDIV                    _FCLKDIV.MergedBits.grpFDIV

#define FCLKDIV_FDIV0_MASK              1U
#define FCLKDIV_FDIV1_MASK              2U
#define FCLKDIV_FDIV2_MASK              4U
#define FCLKDIV_FDIV3_MASK              8U
#define FCLKDIV_FDIV4_MASK              16U
#define FCLKDIV_FDIV5_MASK              32U
#define FCLKDIV_FDIVLCK_MASK            64U
#define FCLKDIV_FDIVLD_MASK             128U
#define FCLKDIV_FDIV_MASK               63U
#define FCLKDIV_FDIV_BITNUM             0U


/*** FSEC - Flash Security Register; 0x00000381 ***/
typedef union {
  byte Byte;
  struct {
    byte SEC0        :1;                                       /* Flash Security Bit 0 */
    byte SEC1        :1;                                       /* Flash Security Bit 1 */
    byte RNV2        :1;                                       /* Reserved Nonvolatile Bit 2 */
    byte RNV3        :1;                                       /* Reserved Nonvolatile Bit 3 */
    byte RNV4        :1;                                       /* Reserved Nonvolatile Bit 4 */
    byte RNV5        :1;                                       /* Reserved Nonvolatile Bit 5 */
    byte KEYEN0      :1;                                       /* Backdoor Key Security Enable Bit 0 */
    byte KEYEN1      :1;                                       /* Backdoor Key Security Enable Bit 1 */
  } Bits;
  struct {
    byte grpSEC  :2;
    byte grpRNV_2 :4;
    byte grpKEYEN :2;
  } MergedBits;
} FSECSTR;
extern volatile FSECSTR _FSEC @0x00000381;
#define FSEC                            _FSEC.Byte
#define FSEC_SEC0                       _FSEC.Bits.SEC0
#define FSEC_SEC1                       _FSEC.Bits.SEC1
#define FSEC_RNV2                       _FSEC.Bits.RNV2
#define FSEC_RNV3                       _FSEC.Bits.RNV3
#define FSEC_RNV4                       _FSEC.Bits.RNV4
#define FSEC_RNV5                       _FSEC.Bits.RNV5
#define FSEC_KEYEN0                     _FSEC.Bits.KEYEN0
#define FSEC_KEYEN1                     _FSEC.Bits.KEYEN1
#define FSEC_SEC                        _FSEC.MergedBits.grpSEC
#define FSEC_RNV_2                      _FSEC.MergedBits.grpRNV_2
#define FSEC_KEYEN                      _FSEC.MergedBits.grpKEYEN
#define FSEC_RNV                        FSEC_RNV_2

#define FSEC_SEC0_MASK                  1U
#define FSEC_SEC1_MASK                  2U
#define FSEC_RNV2_MASK                  4U
#define FSEC_RNV3_MASK                  8U
#define FSEC_RNV4_MASK                  16U
#define FSEC_RNV5_MASK                  32U
#define FSEC_KEYEN0_MASK                64U
#define FSEC_KEYEN1_MASK                128U
#define FSEC_SEC_MASK                   3U
#define FSEC_SEC_BITNUM                 0U
#define FSEC_RNV_2_MASK                 60U
#define FSEC_RNV_2_BITNUM               2U
#define FSEC_KEYEN_MASK                 192U
#define FSEC_KEYEN_BITNUM               6U


/*** FCCOBIX - Flash CCOB Index Register; 0x00000382 ***/
typedef union {
  byte Byte;
  struct {
    byte CCOBIX0     :1;                                       /* Common Command Register Index Bit 0 */
    byte CCOBIX1     :1;                                       /* Common Command Register Index Bit 1 */
    byte CCOBIX2     :1;                                       /* Common Command Register Index Bit 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpCCOBIX :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} FCCOBIXSTR;
extern volatile FCCOBIXSTR _FCCOBIX @0x00000382;
#define FCCOBIX                         _FCCOBIX.Byte
#define FCCOBIX_CCOBIX0                 _FCCOBIX.Bits.CCOBIX0
#define FCCOBIX_CCOBIX1                 _FCCOBIX.Bits.CCOBIX1
#define FCCOBIX_CCOBIX2                 _FCCOBIX.Bits.CCOBIX2
#define FCCOBIX_CCOBIX                  _FCCOBIX.MergedBits.grpCCOBIX

#define FCCOBIX_CCOBIX0_MASK            1U
#define FCCOBIX_CCOBIX1_MASK            2U
#define FCCOBIX_CCOBIX2_MASK            4U
#define FCCOBIX_CCOBIX_MASK             7U
#define FCCOBIX_CCOBIX_BITNUM           0U


/*** FPSTAT - Flash Protection Status Register; 0x00000383 ***/
typedef union {
  byte Byte;
  struct {
    byte WSTATACK    :1;                                       /* Wait-State Switch Acknowledge */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte FPOVRD      :1;                                       /* Flash Protection Override Status */
  } Bits;
} FPSTATSTR;
extern volatile FPSTATSTR _FPSTAT @0x00000383;
#define FPSTAT                          _FPSTAT.Byte
#define FPSTAT_WSTATACK                 _FPSTAT.Bits.WSTATACK
#define FPSTAT_FPOVRD                   _FPSTAT.Bits.FPOVRD

#define FPSTAT_WSTATACK_MASK            1U
#define FPSTAT_FPOVRD_MASK              128U


/*** FCNFG - Flash Configuration Register; 0x00000384 ***/
typedef union {
  byte Byte;
  struct {
    byte FSFD        :1;                                       /* Force Single Bit Fault Detect */
    byte FDFD        :1;                                       /* Force Double Bit Fault Detect */
    byte WSTAT       :2;                                       /* Wait State control bits */
    byte IGNSF       :1;                                       /* Ignore Single Bit Fault */
    byte ERSAREQ     :1;                                       /* Erase All Request */
    byte             :1; 
    byte CCIE        :1;                                       /* Command Complete Interrupt Enable */
  } Bits;
} FCNFGSTR;
extern volatile FCNFGSTR _FCNFG @0x00000384;
#define FCNFG                           _FCNFG.Byte
#define FCNFG_FSFD                      _FCNFG.Bits.FSFD
#define FCNFG_FDFD                      _FCNFG.Bits.FDFD
#define FCNFG_WSTAT                     _FCNFG.Bits.WSTAT
#define FCNFG_IGNSF                     _FCNFG.Bits.IGNSF
#define FCNFG_ERSAREQ                   _FCNFG.Bits.ERSAREQ
#define FCNFG_CCIE                      _FCNFG.Bits.CCIE

#define FCNFG_FSFD_MASK                 1U
#define FCNFG_FDFD_MASK                 2U
#define FCNFG_WSTAT_MASK                12U
#define FCNFG_WSTAT_BITNUM              2U
#define FCNFG_IGNSF_MASK                16U
#define FCNFG_ERSAREQ_MASK              32U
#define FCNFG_CCIE_MASK                 128U


/*** FERCNFG - Flash Error Configuration Register; 0x00000385 ***/
typedef union {
  byte Byte;
  struct {
    byte SFDIE       :1;                                       /* Single Bit Fault Detect Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} FERCNFGSTR;
extern volatile FERCNFGSTR _FERCNFG @0x00000385;
#define FERCNFG                         _FERCNFG.Byte
#define FERCNFG_SFDIE                   _FERCNFG.Bits.SFDIE

#define FERCNFG_SFDIE_MASK              1U


/*** FSTAT - Flash Status Register; 0x00000386 ***/
typedef union {
  byte Byte;
  struct {
    byte MGSTAT0     :1;                                       /* Memory Controller Command Completion Status Flag 0 */
    byte MGSTAT1     :1;                                       /* Memory Controller Command Completion Status Flag 1 */
    byte             :1; 
    byte MGBUSY      :1;                                       /* Memory Controller Busy Flag */
    byte FPVIOL      :1;                                       /* Flash Protection Violation Flag */
    byte ACCERR      :1;                                       /* Flash Access Error Flag */
    byte             :1; 
    byte CCIF        :1;                                       /* Command Complete Interrupt Flag */
  } Bits;
  struct {
    byte grpMGSTAT :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} FSTATSTR;
extern volatile FSTATSTR _FSTAT @0x00000386;
#define FSTAT                           _FSTAT.Byte
#define FSTAT_MGSTAT0                   _FSTAT.Bits.MGSTAT0
#define FSTAT_MGSTAT1                   _FSTAT.Bits.MGSTAT1
#define FSTAT_MGBUSY                    _FSTAT.Bits.MGBUSY
#define FSTAT_FPVIOL                    _FSTAT.Bits.FPVIOL
#define FSTAT_ACCERR                    _FSTAT.Bits.ACCERR
#define FSTAT_CCIF                      _FSTAT.Bits.CCIF
#define FSTAT_MGSTAT                    _FSTAT.MergedBits.grpMGSTAT

#define FSTAT_MGSTAT0_MASK              1U
#define FSTAT_MGSTAT1_MASK              2U
#define FSTAT_MGBUSY_MASK               8U
#define FSTAT_FPVIOL_MASK               16U
#define FSTAT_ACCERR_MASK               32U
#define FSTAT_CCIF_MASK                 128U
#define FSTAT_MGSTAT_MASK               3U
#define FSTAT_MGSTAT_BITNUM             0U


/*** FERSTAT - Flash Error Status Register; 0x00000387 ***/
typedef union {
  byte Byte;
  struct {
    byte SFDIF       :1;                                       /* Single Bit Fault Detect Interrupt Flag */
    byte DFDF        :1;                                       /* Double Bit Fault Detect Flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} FERSTATSTR;
extern volatile FERSTATSTR _FERSTAT @0x00000387;
#define FERSTAT                         _FERSTAT.Byte
#define FERSTAT_SFDIF                   _FERSTAT.Bits.SFDIF
#define FERSTAT_DFDF                    _FERSTAT.Bits.DFDF

#define FERSTAT_SFDIF_MASK              1U
#define FERSTAT_DFDF_MASK               2U


/*** FPROT - P-Flash Protection Register; 0x00000388 ***/
typedef union {
  byte Byte;
  struct {
    byte FPLS0       :1;                                       /* Flash Protection Lower Address Size Bit 0 */
    byte FPLS1       :1;                                       /* Flash Protection Lower Address Size Bit 1 */
    byte FPLDIS      :1;                                       /* Flash Protection Lower Address Range Disable */
    byte FPHS0       :1;                                       /* Flash Protection Higher Address Size Bit 0 */
    byte FPHS1       :1;                                       /* Flash Protection Higher Address Size Bit 1 */
    byte FPHDIS      :1;                                       /* Flash Protection Higher Address Range Disable */
    byte RNV6        :1;                                       /* Reserved Nonvolatile Bit */
    byte FPOPEN      :1;                                       /* Flash Protection Operation Enable */
  } Bits;
  struct {
    byte grpFPLS :2;
    byte         :1;
    byte grpFPHS :2;
    byte         :1;
    byte grpRNV_6 :1;
    byte         :1;
  } MergedBits;
} FPROTSTR;
extern volatile FPROTSTR _FPROT @0x00000388;
#define FPROT                           _FPROT.Byte
#define FPROT_FPLS0                     _FPROT.Bits.FPLS0
#define FPROT_FPLS1                     _FPROT.Bits.FPLS1
#define FPROT_FPLDIS                    _FPROT.Bits.FPLDIS
#define FPROT_FPHS0                     _FPROT.Bits.FPHS0
#define FPROT_FPHS1                     _FPROT.Bits.FPHS1
#define FPROT_FPHDIS                    _FPROT.Bits.FPHDIS
#define FPROT_RNV6                      _FPROT.Bits.RNV6
#define FPROT_FPOPEN                    _FPROT.Bits.FPOPEN
#define FPROT_FPLS                      _FPROT.MergedBits.grpFPLS
#define FPROT_FPHS                      _FPROT.MergedBits.grpFPHS

#define FPROT_FPLS0_MASK                1U
#define FPROT_FPLS1_MASK                2U
#define FPROT_FPLDIS_MASK               4U
#define FPROT_FPHS0_MASK                8U
#define FPROT_FPHS1_MASK                16U
#define FPROT_FPHDIS_MASK               32U
#define FPROT_RNV6_MASK                 64U
#define FPROT_FPOPEN_MASK               128U
#define FPROT_FPLS_MASK                 3U
#define FPROT_FPLS_BITNUM               0U
#define FPROT_FPHS_MASK                 24U
#define FPROT_FPHS_BITNUM               3U


/*** DFPROT - D-Flash Protection Register; 0x00000389 ***/
typedef union {
  byte Byte;
  struct {
    byte DPS0        :1;                                       /* D-Flash Protection Size Bit 0 */
    byte DPS1        :1;                                       /* D-Flash Protection Size Bit 1 */
    byte DPS2        :1;                                       /* D-Flash Protection Size Bit 2 */
    byte DPS3        :1;                                       /* D-Flash Protection Size Bit 3 */
    byte DPS4        :1;                                       /* D-Flash Protection Size Bit 4 */
    byte DPS5        :1;                                       /* D-Flash Protection Size Bit 5 */
    byte             :1; 
    byte DPOPEN      :1;                                       /* D-Flash Protection Control */
  } Bits;
  struct {
    byte grpDPS  :6;
    byte         :1;
    byte         :1;
  } MergedBits;
} DFPROTSTR;
extern volatile DFPROTSTR _DFPROT @0x00000389;
#define DFPROT                          _DFPROT.Byte
#define DFPROT_DPS0                     _DFPROT.Bits.DPS0
#define DFPROT_DPS1                     _DFPROT.Bits.DPS1
#define DFPROT_DPS2                     _DFPROT.Bits.DPS2
#define DFPROT_DPS3                     _DFPROT.Bits.DPS3
#define DFPROT_DPS4                     _DFPROT.Bits.DPS4
#define DFPROT_DPS5                     _DFPROT.Bits.DPS5
#define DFPROT_DPOPEN                   _DFPROT.Bits.DPOPEN
#define DFPROT_DPS                      _DFPROT.MergedBits.grpDPS

#define DFPROT_DPS0_MASK                1U
#define DFPROT_DPS1_MASK                2U
#define DFPROT_DPS2_MASK                4U
#define DFPROT_DPS3_MASK                8U
#define DFPROT_DPS4_MASK                16U
#define DFPROT_DPS5_MASK                32U
#define DFPROT_DPOPEN_MASK              128U
#define DFPROT_DPS_MASK                 63U
#define DFPROT_DPS_BITNUM               0U


/*** FOPT - Flash Option Register; 0x0000038A ***/
typedef union {
  byte Byte;
  struct {
    byte NV0         :1;                                       /* Nonvolatile Bit 0 */
    byte NV1         :1;                                       /* Nonvolatile Bit 1 */
    byte NV2         :1;                                       /* Nonvolatile Bit 2 */
    byte NV3         :1;                                       /* Nonvolatile Bit 3 */
    byte NV4         :1;                                       /* Nonvolatile Bit 4 */
    byte NV5         :1;                                       /* Nonvolatile Bit 5 */
    byte NV6         :1;                                       /* Nonvolatile Bit 6 */
    byte NV7         :1;                                       /* Nonvolatile Bit 7 */
  } Bits;
} FOPTSTR;
extern volatile FOPTSTR _FOPT @0x0000038A;
#define FOPT                            _FOPT.Byte
#define FOPT_NV0                        _FOPT.Bits.NV0
#define FOPT_NV1                        _FOPT.Bits.NV1
#define FOPT_NV2                        _FOPT.Bits.NV2
#define FOPT_NV3                        _FOPT.Bits.NV3
#define FOPT_NV4                        _FOPT.Bits.NV4
#define FOPT_NV5                        _FOPT.Bits.NV5
#define FOPT_NV6                        _FOPT.Bits.NV6
#define FOPT_NV7                        _FOPT.Bits.NV7

#define FOPT_NV0_MASK                   1U
#define FOPT_NV1_MASK                   2U
#define FOPT_NV2_MASK                   4U
#define FOPT_NV3_MASK                   8U
#define FOPT_NV4_MASK                   16U
#define FOPT_NV5_MASK                   32U
#define FOPT_NV6_MASK                   64U
#define FOPT_NV7_MASK                   128U


/*** FCCOB0 - Flash Common Command Object Register; 0x0000038C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB0HI - Flash Common Command Object Register High; 0x0000038C ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB0HISTR;
    #define FCCOB0HI                    _FCCOB0.Overlap_STR.FCCOB0HISTR.Byte
    #define FCCOB0HI_CCOB8              _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB8
    #define FCCOB0HI_CCOB9              _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB9
    #define FCCOB0HI_CCOB10             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB10
    #define FCCOB0HI_CCOB11             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB11
    #define FCCOB0HI_CCOB12             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB12
    #define FCCOB0HI_CCOB13             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB13
    #define FCCOB0HI_CCOB14             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB14
    #define FCCOB0HI_CCOB15             _FCCOB0.Overlap_STR.FCCOB0HISTR.Bits.CCOB15
    
    #define FCCOB0HI_CCOB8_MASK         1U
    #define FCCOB0HI_CCOB9_MASK         2U
    #define FCCOB0HI_CCOB10_MASK        4U
    #define FCCOB0HI_CCOB11_MASK        8U
    #define FCCOB0HI_CCOB12_MASK        16U
    #define FCCOB0HI_CCOB13_MASK        32U
    #define FCCOB0HI_CCOB14_MASK        64U
    #define FCCOB0HI_CCOB15_MASK        128U
    

    /*** FCCOB0LO - Flash Common Command Object Register Low; 0x0000038D ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB0LOSTR;
    #define FCCOB0LO                    _FCCOB0.Overlap_STR.FCCOB0LOSTR.Byte
    #define FCCOB0LO_CCOB0              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB0
    #define FCCOB0LO_CCOB1              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB1
    #define FCCOB0LO_CCOB2              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB2
    #define FCCOB0LO_CCOB3              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB3
    #define FCCOB0LO_CCOB4              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB4
    #define FCCOB0LO_CCOB5              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB5
    #define FCCOB0LO_CCOB6              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB6
    #define FCCOB0LO_CCOB7              _FCCOB0.Overlap_STR.FCCOB0LOSTR.Bits.CCOB7
    
    #define FCCOB0LO_CCOB0_MASK         1U
    #define FCCOB0LO_CCOB1_MASK         2U
    #define FCCOB0LO_CCOB2_MASK         4U
    #define FCCOB0LO_CCOB3_MASK         8U
    #define FCCOB0LO_CCOB4_MASK         16U
    #define FCCOB0LO_CCOB5_MASK         32U
    #define FCCOB0LO_CCOB6_MASK         64U
    #define FCCOB0LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB0STR;
extern volatile FCCOB0STR _FCCOB0 @0x0000038C;
#define FCCOB0                          _FCCOB0.Word
#define FCCOB0_CCOB0                    _FCCOB0.Bits.CCOB0
#define FCCOB0_CCOB1                    _FCCOB0.Bits.CCOB1
#define FCCOB0_CCOB2                    _FCCOB0.Bits.CCOB2
#define FCCOB0_CCOB3                    _FCCOB0.Bits.CCOB3
#define FCCOB0_CCOB4                    _FCCOB0.Bits.CCOB4
#define FCCOB0_CCOB5                    _FCCOB0.Bits.CCOB5
#define FCCOB0_CCOB6                    _FCCOB0.Bits.CCOB6
#define FCCOB0_CCOB7                    _FCCOB0.Bits.CCOB7
#define FCCOB0_CCOB8                    _FCCOB0.Bits.CCOB8
#define FCCOB0_CCOB9                    _FCCOB0.Bits.CCOB9
#define FCCOB0_CCOB10                   _FCCOB0.Bits.CCOB10
#define FCCOB0_CCOB11                   _FCCOB0.Bits.CCOB11
#define FCCOB0_CCOB12                   _FCCOB0.Bits.CCOB12
#define FCCOB0_CCOB13                   _FCCOB0.Bits.CCOB13
#define FCCOB0_CCOB14                   _FCCOB0.Bits.CCOB14
#define FCCOB0_CCOB15                   _FCCOB0.Bits.CCOB15
/* FCCOB_ARR: Access 6 FCCOBx registers in an array */
#define FCCOB_ARR                       ((volatile word *) &FCCOB0)

#define FCCOB0_CCOB0_MASK               1U
#define FCCOB0_CCOB1_MASK               2U
#define FCCOB0_CCOB2_MASK               4U
#define FCCOB0_CCOB3_MASK               8U
#define FCCOB0_CCOB4_MASK               16U
#define FCCOB0_CCOB5_MASK               32U
#define FCCOB0_CCOB6_MASK               64U
#define FCCOB0_CCOB7_MASK               128U
#define FCCOB0_CCOB8_MASK               256U
#define FCCOB0_CCOB9_MASK               512U
#define FCCOB0_CCOB10_MASK              1024U
#define FCCOB0_CCOB11_MASK              2048U
#define FCCOB0_CCOB12_MASK              4096U
#define FCCOB0_CCOB13_MASK              8192U
#define FCCOB0_CCOB14_MASK              16384U
#define FCCOB0_CCOB15_MASK              32768U


/*** FCCOB1 - Flash Common Command Object Register; 0x0000038E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB1HI - Flash Common Command Object Register High; 0x0000038E ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB1HISTR;
    #define FCCOB1HI                    _FCCOB1.Overlap_STR.FCCOB1HISTR.Byte
    #define FCCOB1HI_CCOB8              _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB8
    #define FCCOB1HI_CCOB9              _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB9
    #define FCCOB1HI_CCOB10             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB10
    #define FCCOB1HI_CCOB11             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB11
    #define FCCOB1HI_CCOB12             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB12
    #define FCCOB1HI_CCOB13             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB13
    #define FCCOB1HI_CCOB14             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB14
    #define FCCOB1HI_CCOB15             _FCCOB1.Overlap_STR.FCCOB1HISTR.Bits.CCOB15
    
    #define FCCOB1HI_CCOB8_MASK         1U
    #define FCCOB1HI_CCOB9_MASK         2U
    #define FCCOB1HI_CCOB10_MASK        4U
    #define FCCOB1HI_CCOB11_MASK        8U
    #define FCCOB1HI_CCOB12_MASK        16U
    #define FCCOB1HI_CCOB13_MASK        32U
    #define FCCOB1HI_CCOB14_MASK        64U
    #define FCCOB1HI_CCOB15_MASK        128U
    

    /*** FCCOB1LO - Flash Common Command Object Register Low; 0x0000038F ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB1LOSTR;
    #define FCCOB1LO                    _FCCOB1.Overlap_STR.FCCOB1LOSTR.Byte
    #define FCCOB1LO_CCOB0              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB0
    #define FCCOB1LO_CCOB1              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB1
    #define FCCOB1LO_CCOB2              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB2
    #define FCCOB1LO_CCOB3              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB3
    #define FCCOB1LO_CCOB4              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB4
    #define FCCOB1LO_CCOB5              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB5
    #define FCCOB1LO_CCOB6              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB6
    #define FCCOB1LO_CCOB7              _FCCOB1.Overlap_STR.FCCOB1LOSTR.Bits.CCOB7
    
    #define FCCOB1LO_CCOB0_MASK         1U
    #define FCCOB1LO_CCOB1_MASK         2U
    #define FCCOB1LO_CCOB2_MASK         4U
    #define FCCOB1LO_CCOB3_MASK         8U
    #define FCCOB1LO_CCOB4_MASK         16U
    #define FCCOB1LO_CCOB5_MASK         32U
    #define FCCOB1LO_CCOB6_MASK         64U
    #define FCCOB1LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB1STR;
extern volatile FCCOB1STR _FCCOB1 @0x0000038E;
#define FCCOB1                          _FCCOB1.Word
#define FCCOB1_CCOB0                    _FCCOB1.Bits.CCOB0
#define FCCOB1_CCOB1                    _FCCOB1.Bits.CCOB1
#define FCCOB1_CCOB2                    _FCCOB1.Bits.CCOB2
#define FCCOB1_CCOB3                    _FCCOB1.Bits.CCOB3
#define FCCOB1_CCOB4                    _FCCOB1.Bits.CCOB4
#define FCCOB1_CCOB5                    _FCCOB1.Bits.CCOB5
#define FCCOB1_CCOB6                    _FCCOB1.Bits.CCOB6
#define FCCOB1_CCOB7                    _FCCOB1.Bits.CCOB7
#define FCCOB1_CCOB8                    _FCCOB1.Bits.CCOB8
#define FCCOB1_CCOB9                    _FCCOB1.Bits.CCOB9
#define FCCOB1_CCOB10                   _FCCOB1.Bits.CCOB10
#define FCCOB1_CCOB11                   _FCCOB1.Bits.CCOB11
#define FCCOB1_CCOB12                   _FCCOB1.Bits.CCOB12
#define FCCOB1_CCOB13                   _FCCOB1.Bits.CCOB13
#define FCCOB1_CCOB14                   _FCCOB1.Bits.CCOB14
#define FCCOB1_CCOB15                   _FCCOB1.Bits.CCOB15

#define FCCOB1_CCOB0_MASK               1U
#define FCCOB1_CCOB1_MASK               2U
#define FCCOB1_CCOB2_MASK               4U
#define FCCOB1_CCOB3_MASK               8U
#define FCCOB1_CCOB4_MASK               16U
#define FCCOB1_CCOB5_MASK               32U
#define FCCOB1_CCOB6_MASK               64U
#define FCCOB1_CCOB7_MASK               128U
#define FCCOB1_CCOB8_MASK               256U
#define FCCOB1_CCOB9_MASK               512U
#define FCCOB1_CCOB10_MASK              1024U
#define FCCOB1_CCOB11_MASK              2048U
#define FCCOB1_CCOB12_MASK              4096U
#define FCCOB1_CCOB13_MASK              8192U
#define FCCOB1_CCOB14_MASK              16384U
#define FCCOB1_CCOB15_MASK              32768U


/*** FCCOB2 - Flash Common Command Object Register; 0x00000390 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB2HI - Flash Common Command Object Register High; 0x00000390 ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB2HISTR;
    #define FCCOB2HI                    _FCCOB2.Overlap_STR.FCCOB2HISTR.Byte
    #define FCCOB2HI_CCOB8              _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB8
    #define FCCOB2HI_CCOB9              _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB9
    #define FCCOB2HI_CCOB10             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB10
    #define FCCOB2HI_CCOB11             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB11
    #define FCCOB2HI_CCOB12             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB12
    #define FCCOB2HI_CCOB13             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB13
    #define FCCOB2HI_CCOB14             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB14
    #define FCCOB2HI_CCOB15             _FCCOB2.Overlap_STR.FCCOB2HISTR.Bits.CCOB15
    
    #define FCCOB2HI_CCOB8_MASK         1U
    #define FCCOB2HI_CCOB9_MASK         2U
    #define FCCOB2HI_CCOB10_MASK        4U
    #define FCCOB2HI_CCOB11_MASK        8U
    #define FCCOB2HI_CCOB12_MASK        16U
    #define FCCOB2HI_CCOB13_MASK        32U
    #define FCCOB2HI_CCOB14_MASK        64U
    #define FCCOB2HI_CCOB15_MASK        128U
    

    /*** FCCOB2LO - Flash Common Command Object Register Low; 0x00000391 ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB2LOSTR;
    #define FCCOB2LO                    _FCCOB2.Overlap_STR.FCCOB2LOSTR.Byte
    #define FCCOB2LO_CCOB0              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB0
    #define FCCOB2LO_CCOB1              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB1
    #define FCCOB2LO_CCOB2              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB2
    #define FCCOB2LO_CCOB3              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB3
    #define FCCOB2LO_CCOB4              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB4
    #define FCCOB2LO_CCOB5              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB5
    #define FCCOB2LO_CCOB6              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB6
    #define FCCOB2LO_CCOB7              _FCCOB2.Overlap_STR.FCCOB2LOSTR.Bits.CCOB7
    
    #define FCCOB2LO_CCOB0_MASK         1U
    #define FCCOB2LO_CCOB1_MASK         2U
    #define FCCOB2LO_CCOB2_MASK         4U
    #define FCCOB2LO_CCOB3_MASK         8U
    #define FCCOB2LO_CCOB4_MASK         16U
    #define FCCOB2LO_CCOB5_MASK         32U
    #define FCCOB2LO_CCOB6_MASK         64U
    #define FCCOB2LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB2STR;
extern volatile FCCOB2STR _FCCOB2 @0x00000390;
#define FCCOB2                          _FCCOB2.Word
#define FCCOB2_CCOB0                    _FCCOB2.Bits.CCOB0
#define FCCOB2_CCOB1                    _FCCOB2.Bits.CCOB1
#define FCCOB2_CCOB2                    _FCCOB2.Bits.CCOB2
#define FCCOB2_CCOB3                    _FCCOB2.Bits.CCOB3
#define FCCOB2_CCOB4                    _FCCOB2.Bits.CCOB4
#define FCCOB2_CCOB5                    _FCCOB2.Bits.CCOB5
#define FCCOB2_CCOB6                    _FCCOB2.Bits.CCOB6
#define FCCOB2_CCOB7                    _FCCOB2.Bits.CCOB7
#define FCCOB2_CCOB8                    _FCCOB2.Bits.CCOB8
#define FCCOB2_CCOB9                    _FCCOB2.Bits.CCOB9
#define FCCOB2_CCOB10                   _FCCOB2.Bits.CCOB10
#define FCCOB2_CCOB11                   _FCCOB2.Bits.CCOB11
#define FCCOB2_CCOB12                   _FCCOB2.Bits.CCOB12
#define FCCOB2_CCOB13                   _FCCOB2.Bits.CCOB13
#define FCCOB2_CCOB14                   _FCCOB2.Bits.CCOB14
#define FCCOB2_CCOB15                   _FCCOB2.Bits.CCOB15

#define FCCOB2_CCOB0_MASK               1U
#define FCCOB2_CCOB1_MASK               2U
#define FCCOB2_CCOB2_MASK               4U
#define FCCOB2_CCOB3_MASK               8U
#define FCCOB2_CCOB4_MASK               16U
#define FCCOB2_CCOB5_MASK               32U
#define FCCOB2_CCOB6_MASK               64U
#define FCCOB2_CCOB7_MASK               128U
#define FCCOB2_CCOB8_MASK               256U
#define FCCOB2_CCOB9_MASK               512U
#define FCCOB2_CCOB10_MASK              1024U
#define FCCOB2_CCOB11_MASK              2048U
#define FCCOB2_CCOB12_MASK              4096U
#define FCCOB2_CCOB13_MASK              8192U
#define FCCOB2_CCOB14_MASK              16384U
#define FCCOB2_CCOB15_MASK              32768U


/*** FCCOB3 - Flash Common Command Object Register; 0x00000392 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB3HI - Flash Common Command Object Register High; 0x00000392 ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB3HISTR;
    #define FCCOB3HI                    _FCCOB3.Overlap_STR.FCCOB3HISTR.Byte
    #define FCCOB3HI_CCOB8              _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB8
    #define FCCOB3HI_CCOB9              _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB9
    #define FCCOB3HI_CCOB10             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB10
    #define FCCOB3HI_CCOB11             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB11
    #define FCCOB3HI_CCOB12             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB12
    #define FCCOB3HI_CCOB13             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB13
    #define FCCOB3HI_CCOB14             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB14
    #define FCCOB3HI_CCOB15             _FCCOB3.Overlap_STR.FCCOB3HISTR.Bits.CCOB15
    
    #define FCCOB3HI_CCOB8_MASK         1U
    #define FCCOB3HI_CCOB9_MASK         2U
    #define FCCOB3HI_CCOB10_MASK        4U
    #define FCCOB3HI_CCOB11_MASK        8U
    #define FCCOB3HI_CCOB12_MASK        16U
    #define FCCOB3HI_CCOB13_MASK        32U
    #define FCCOB3HI_CCOB14_MASK        64U
    #define FCCOB3HI_CCOB15_MASK        128U
    

    /*** FCCOB3LO - Flash Common Command Object Register Low; 0x00000393 ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB3LOSTR;
    #define FCCOB3LO                    _FCCOB3.Overlap_STR.FCCOB3LOSTR.Byte
    #define FCCOB3LO_CCOB0              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB0
    #define FCCOB3LO_CCOB1              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB1
    #define FCCOB3LO_CCOB2              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB2
    #define FCCOB3LO_CCOB3              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB3
    #define FCCOB3LO_CCOB4              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB4
    #define FCCOB3LO_CCOB5              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB5
    #define FCCOB3LO_CCOB6              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB6
    #define FCCOB3LO_CCOB7              _FCCOB3.Overlap_STR.FCCOB3LOSTR.Bits.CCOB7
    
    #define FCCOB3LO_CCOB0_MASK         1U
    #define FCCOB3LO_CCOB1_MASK         2U
    #define FCCOB3LO_CCOB2_MASK         4U
    #define FCCOB3LO_CCOB3_MASK         8U
    #define FCCOB3LO_CCOB4_MASK         16U
    #define FCCOB3LO_CCOB5_MASK         32U
    #define FCCOB3LO_CCOB6_MASK         64U
    #define FCCOB3LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB3STR;
extern volatile FCCOB3STR _FCCOB3 @0x00000392;
#define FCCOB3                          _FCCOB3.Word
#define FCCOB3_CCOB0                    _FCCOB3.Bits.CCOB0
#define FCCOB3_CCOB1                    _FCCOB3.Bits.CCOB1
#define FCCOB3_CCOB2                    _FCCOB3.Bits.CCOB2
#define FCCOB3_CCOB3                    _FCCOB3.Bits.CCOB3
#define FCCOB3_CCOB4                    _FCCOB3.Bits.CCOB4
#define FCCOB3_CCOB5                    _FCCOB3.Bits.CCOB5
#define FCCOB3_CCOB6                    _FCCOB3.Bits.CCOB6
#define FCCOB3_CCOB7                    _FCCOB3.Bits.CCOB7
#define FCCOB3_CCOB8                    _FCCOB3.Bits.CCOB8
#define FCCOB3_CCOB9                    _FCCOB3.Bits.CCOB9
#define FCCOB3_CCOB10                   _FCCOB3.Bits.CCOB10
#define FCCOB3_CCOB11                   _FCCOB3.Bits.CCOB11
#define FCCOB3_CCOB12                   _FCCOB3.Bits.CCOB12
#define FCCOB3_CCOB13                   _FCCOB3.Bits.CCOB13
#define FCCOB3_CCOB14                   _FCCOB3.Bits.CCOB14
#define FCCOB3_CCOB15                   _FCCOB3.Bits.CCOB15

#define FCCOB3_CCOB0_MASK               1U
#define FCCOB3_CCOB1_MASK               2U
#define FCCOB3_CCOB2_MASK               4U
#define FCCOB3_CCOB3_MASK               8U
#define FCCOB3_CCOB4_MASK               16U
#define FCCOB3_CCOB5_MASK               32U
#define FCCOB3_CCOB6_MASK               64U
#define FCCOB3_CCOB7_MASK               128U
#define FCCOB3_CCOB8_MASK               256U
#define FCCOB3_CCOB9_MASK               512U
#define FCCOB3_CCOB10_MASK              1024U
#define FCCOB3_CCOB11_MASK              2048U
#define FCCOB3_CCOB12_MASK              4096U
#define FCCOB3_CCOB13_MASK              8192U
#define FCCOB3_CCOB14_MASK              16384U
#define FCCOB3_CCOB15_MASK              32768U


/*** FCCOB4 - Flash Common Command Object Register; 0x00000394 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB4HI - Flash Common Command Object Register High; 0x00000394 ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB4HISTR;
    #define FCCOB4HI                    _FCCOB4.Overlap_STR.FCCOB4HISTR.Byte
    #define FCCOB4HI_CCOB8              _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB8
    #define FCCOB4HI_CCOB9              _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB9
    #define FCCOB4HI_CCOB10             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB10
    #define FCCOB4HI_CCOB11             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB11
    #define FCCOB4HI_CCOB12             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB12
    #define FCCOB4HI_CCOB13             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB13
    #define FCCOB4HI_CCOB14             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB14
    #define FCCOB4HI_CCOB15             _FCCOB4.Overlap_STR.FCCOB4HISTR.Bits.CCOB15
    
    #define FCCOB4HI_CCOB8_MASK         1U
    #define FCCOB4HI_CCOB9_MASK         2U
    #define FCCOB4HI_CCOB10_MASK        4U
    #define FCCOB4HI_CCOB11_MASK        8U
    #define FCCOB4HI_CCOB12_MASK        16U
    #define FCCOB4HI_CCOB13_MASK        32U
    #define FCCOB4HI_CCOB14_MASK        64U
    #define FCCOB4HI_CCOB15_MASK        128U
    

    /*** FCCOB4LO - Flash Common Command Object Register Low; 0x00000395 ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB4LOSTR;
    #define FCCOB4LO                    _FCCOB4.Overlap_STR.FCCOB4LOSTR.Byte
    #define FCCOB4LO_CCOB0              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB0
    #define FCCOB4LO_CCOB1              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB1
    #define FCCOB4LO_CCOB2              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB2
    #define FCCOB4LO_CCOB3              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB3
    #define FCCOB4LO_CCOB4              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB4
    #define FCCOB4LO_CCOB5              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB5
    #define FCCOB4LO_CCOB6              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB6
    #define FCCOB4LO_CCOB7              _FCCOB4.Overlap_STR.FCCOB4LOSTR.Bits.CCOB7
    
    #define FCCOB4LO_CCOB0_MASK         1U
    #define FCCOB4LO_CCOB1_MASK         2U
    #define FCCOB4LO_CCOB2_MASK         4U
    #define FCCOB4LO_CCOB3_MASK         8U
    #define FCCOB4LO_CCOB4_MASK         16U
    #define FCCOB4LO_CCOB5_MASK         32U
    #define FCCOB4LO_CCOB6_MASK         64U
    #define FCCOB4LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB4STR;
extern volatile FCCOB4STR _FCCOB4 @0x00000394;
#define FCCOB4                          _FCCOB4.Word
#define FCCOB4_CCOB0                    _FCCOB4.Bits.CCOB0
#define FCCOB4_CCOB1                    _FCCOB4.Bits.CCOB1
#define FCCOB4_CCOB2                    _FCCOB4.Bits.CCOB2
#define FCCOB4_CCOB3                    _FCCOB4.Bits.CCOB3
#define FCCOB4_CCOB4                    _FCCOB4.Bits.CCOB4
#define FCCOB4_CCOB5                    _FCCOB4.Bits.CCOB5
#define FCCOB4_CCOB6                    _FCCOB4.Bits.CCOB6
#define FCCOB4_CCOB7                    _FCCOB4.Bits.CCOB7
#define FCCOB4_CCOB8                    _FCCOB4.Bits.CCOB8
#define FCCOB4_CCOB9                    _FCCOB4.Bits.CCOB9
#define FCCOB4_CCOB10                   _FCCOB4.Bits.CCOB10
#define FCCOB4_CCOB11                   _FCCOB4.Bits.CCOB11
#define FCCOB4_CCOB12                   _FCCOB4.Bits.CCOB12
#define FCCOB4_CCOB13                   _FCCOB4.Bits.CCOB13
#define FCCOB4_CCOB14                   _FCCOB4.Bits.CCOB14
#define FCCOB4_CCOB15                   _FCCOB4.Bits.CCOB15

#define FCCOB4_CCOB0_MASK               1U
#define FCCOB4_CCOB1_MASK               2U
#define FCCOB4_CCOB2_MASK               4U
#define FCCOB4_CCOB3_MASK               8U
#define FCCOB4_CCOB4_MASK               16U
#define FCCOB4_CCOB5_MASK               32U
#define FCCOB4_CCOB6_MASK               64U
#define FCCOB4_CCOB7_MASK               128U
#define FCCOB4_CCOB8_MASK               256U
#define FCCOB4_CCOB9_MASK               512U
#define FCCOB4_CCOB10_MASK              1024U
#define FCCOB4_CCOB11_MASK              2048U
#define FCCOB4_CCOB12_MASK              4096U
#define FCCOB4_CCOB13_MASK              8192U
#define FCCOB4_CCOB14_MASK              16384U
#define FCCOB4_CCOB15_MASK              32768U


/*** FCCOB5 - Flash Common Command Object Register; 0x00000396 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** FCCOB5HI - Flash Common Command Object Register High; 0x00000396 ***/
    union {
      byte Byte;
      struct {
        byte CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
        byte CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
        byte CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
        byte CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
        byte CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
        byte CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
        byte CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
        byte CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
      } Bits;
    } FCCOB5HISTR;
    #define FCCOB5HI                    _FCCOB5.Overlap_STR.FCCOB5HISTR.Byte
    #define FCCOB5HI_CCOB8              _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB8
    #define FCCOB5HI_CCOB9              _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB9
    #define FCCOB5HI_CCOB10             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB10
    #define FCCOB5HI_CCOB11             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB11
    #define FCCOB5HI_CCOB12             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB12
    #define FCCOB5HI_CCOB13             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB13
    #define FCCOB5HI_CCOB14             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB14
    #define FCCOB5HI_CCOB15             _FCCOB5.Overlap_STR.FCCOB5HISTR.Bits.CCOB15
    
    #define FCCOB5HI_CCOB8_MASK         1U
    #define FCCOB5HI_CCOB9_MASK         2U
    #define FCCOB5HI_CCOB10_MASK        4U
    #define FCCOB5HI_CCOB11_MASK        8U
    #define FCCOB5HI_CCOB12_MASK        16U
    #define FCCOB5HI_CCOB13_MASK        32U
    #define FCCOB5HI_CCOB14_MASK        64U
    #define FCCOB5HI_CCOB15_MASK        128U
    

    /*** FCCOB5LO - Flash Common Command Object Register Low; 0x00000397 ***/
    union {
      byte Byte;
      struct {
        byte CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
        byte CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
        byte CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
        byte CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
        byte CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
        byte CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
        byte CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
        byte CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
      } Bits;
    } FCCOB5LOSTR;
    #define FCCOB5LO                    _FCCOB5.Overlap_STR.FCCOB5LOSTR.Byte
    #define FCCOB5LO_CCOB0              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB0
    #define FCCOB5LO_CCOB1              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB1
    #define FCCOB5LO_CCOB2              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB2
    #define FCCOB5LO_CCOB3              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB3
    #define FCCOB5LO_CCOB4              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB4
    #define FCCOB5LO_CCOB5              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB5
    #define FCCOB5LO_CCOB6              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB6
    #define FCCOB5LO_CCOB7              _FCCOB5.Overlap_STR.FCCOB5LOSTR.Bits.CCOB7
    
    #define FCCOB5LO_CCOB0_MASK         1U
    #define FCCOB5LO_CCOB1_MASK         2U
    #define FCCOB5LO_CCOB2_MASK         4U
    #define FCCOB5LO_CCOB3_MASK         8U
    #define FCCOB5LO_CCOB4_MASK         16U
    #define FCCOB5LO_CCOB5_MASK         32U
    #define FCCOB5LO_CCOB6_MASK         64U
    #define FCCOB5LO_CCOB7_MASK         128U
    
  } Overlap_STR;

  struct {
    word CCOB0       :1;                                       /* Flash Common Command Object Bit 0 */
    word CCOB1       :1;                                       /* Flash Common Command Object Bit 1 */
    word CCOB2       :1;                                       /* Flash Common Command Object Bit 2 */
    word CCOB3       :1;                                       /* Flash Common Command Object Bit 3 */
    word CCOB4       :1;                                       /* Flash Common Command Object Bit 4 */
    word CCOB5       :1;                                       /* Flash Common Command Object Bit 5 */
    word CCOB6       :1;                                       /* Flash Common Command Object Bit 6 */
    word CCOB7       :1;                                       /* Flash Common Command Object Bit 7 */
    word CCOB8       :1;                                       /* Flash Common Command Object Bit 8 */
    word CCOB9       :1;                                       /* Flash Common Command Object Bit 9 */
    word CCOB10      :1;                                       /* Flash Common Command Object Bit 10 */
    word CCOB11      :1;                                       /* Flash Common Command Object Bit 11 */
    word CCOB12      :1;                                       /* Flash Common Command Object Bit 12 */
    word CCOB13      :1;                                       /* Flash Common Command Object Bit 13 */
    word CCOB14      :1;                                       /* Flash Common Command Object Bit 14 */
    word CCOB15      :1;                                       /* Flash Common Command Object Bit 15 */
  } Bits;
} FCCOB5STR;
extern volatile FCCOB5STR _FCCOB5 @0x00000396;
#define FCCOB5                          _FCCOB5.Word
#define FCCOB5_CCOB0                    _FCCOB5.Bits.CCOB0
#define FCCOB5_CCOB1                    _FCCOB5.Bits.CCOB1
#define FCCOB5_CCOB2                    _FCCOB5.Bits.CCOB2
#define FCCOB5_CCOB3                    _FCCOB5.Bits.CCOB3
#define FCCOB5_CCOB4                    _FCCOB5.Bits.CCOB4
#define FCCOB5_CCOB5                    _FCCOB5.Bits.CCOB5
#define FCCOB5_CCOB6                    _FCCOB5.Bits.CCOB6
#define FCCOB5_CCOB7                    _FCCOB5.Bits.CCOB7
#define FCCOB5_CCOB8                    _FCCOB5.Bits.CCOB8
#define FCCOB5_CCOB9                    _FCCOB5.Bits.CCOB9
#define FCCOB5_CCOB10                   _FCCOB5.Bits.CCOB10
#define FCCOB5_CCOB11                   _FCCOB5.Bits.CCOB11
#define FCCOB5_CCOB12                   _FCCOB5.Bits.CCOB12
#define FCCOB5_CCOB13                   _FCCOB5.Bits.CCOB13
#define FCCOB5_CCOB14                   _FCCOB5.Bits.CCOB14
#define FCCOB5_CCOB15                   _FCCOB5.Bits.CCOB15

#define FCCOB5_CCOB0_MASK               1U
#define FCCOB5_CCOB1_MASK               2U
#define FCCOB5_CCOB2_MASK               4U
#define FCCOB5_CCOB3_MASK               8U
#define FCCOB5_CCOB4_MASK               16U
#define FCCOB5_CCOB5_MASK               32U
#define FCCOB5_CCOB6_MASK               64U
#define FCCOB5_CCOB7_MASK               128U
#define FCCOB5_CCOB8_MASK               256U
#define FCCOB5_CCOB9_MASK               512U
#define FCCOB5_CCOB10_MASK              1024U
#define FCCOB5_CCOB11_MASK              2048U
#define FCCOB5_CCOB12_MASK              4096U
#define FCCOB5_CCOB13_MASK              8192U
#define FCCOB5_CCOB14_MASK              16384U
#define FCCOB5_CCOB15_MASK              32768U


/*** ECCSTAT - ECC Status Register; 0x000003C0 ***/
typedef union {
  byte Byte;
  struct {
    byte RDY         :1;                                       /* ECC Ready */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ECCSTATSTR;
extern volatile ECCSTATSTR _ECCSTAT @0x000003C0;
#define ECCSTAT                         _ECCSTAT.Byte
#define ECCSTAT_RDY                     _ECCSTAT.Bits.RDY

#define ECCSTAT_RDY_MASK                1U


/*** ECCIE - ECC Interrupt Enable Register; 0x000003C1 ***/
typedef union {
  byte Byte;
  struct {
    byte SBEEIE      :1;                                       /* Single Bit ECC Error Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ECCIESTR;
extern volatile ECCIESTR _ECCIE @0x000003C1;
#define ECCIE                           _ECCIE.Byte
#define ECCIE_SBEEIE                    _ECCIE.Bits.SBEEIE

#define ECCIE_SBEEIE_MASK               1U


/*** ECCIF - ECC Interrupt Flag Register; 0x000003C2 ***/
typedef union {
  byte Byte;
  struct {
    byte SBEEIF      :1;                                       /* Single bit ECC Error Interrupt Flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ECCIFSTR;
extern volatile ECCIFSTR _ECCIF @0x000003C2;
#define ECCIF                           _ECCIF.Byte
#define ECCIF_SBEEIF                    _ECCIF.Bits.SBEEIF

#define ECCIF_SBEEIF_MASK               1U


/*** ECCDPTRH - ECC Debug Point Register High; 0x000003C7 ***/
typedef union {
  byte Byte;
  struct {
    byte DPTR        :8;                                       /* ECC Debug Pointer */
  } Bits;
} ECCDPTRHSTR;
extern volatile ECCDPTRHSTR _ECCDPTRH @0x000003C7;
#define ECCDPTRH                        _ECCDPTRH.Byte
#define ECCDPTRH_DPTR                   _ECCDPTRH.Bits.DPTR

#define ECCDPTRH_DPTR_MASK              255U
#define ECCDPTRH_DPTR_BITNUM            0U


/*** ECCDPTRM - ECC Debug Point Register Middle; 0x000003C8 ***/
typedef union {
  byte Byte;
  struct {
    byte DPTR        :8;                                       /* ECC Debug Pointer */
  } Bits;
} ECCDPTRMSTR;
extern volatile ECCDPTRMSTR _ECCDPTRM @0x000003C8;
#define ECCDPTRM                        _ECCDPTRM.Byte
#define ECCDPTRM_DPTR                   _ECCDPTRM.Bits.DPTR

#define ECCDPTRM_DPTR_MASK              255U
#define ECCDPTRM_DPTR_BITNUM            0U


/*** ECCDPTRL - ECC Debug Point Register Low; 0x000003C9 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte DPTR        :7;                                       /* ECC Debug Pointer */
  } Bits;
} ECCDPTRLSTR;
extern volatile ECCDPTRLSTR _ECCDPTRL @0x000003C9;
#define ECCDPTRL                        _ECCDPTRL.Byte
#define ECCDPTRL_DPTR                   _ECCDPTRL.Bits.DPTR

#define ECCDPTRL_DPTR_MASK              254U
#define ECCDPTRL_DPTR_BITNUM            1U


/*** ECCDD - ECC Debug Data; 0x000003CC ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** ECCDDH - ECC Debug Data High; 0x000003CC ***/
    union {
      byte Byte;
      struct {
        byte DDATA       :8;                                       /* ECC Debug Data */
      } Bits;
    } ECCDDHSTR;
    #define ECCDDH                      _ECCDD.Overlap_STR.ECCDDHSTR.Byte
    #define ECCDDH_DDATA                _ECCDD.Overlap_STR.ECCDDHSTR.Bits.DDATA
    
    #define ECCDDH_DDATA_MASK           255U
    #define ECCDDH_DDATA_BITNUM         0U
    

    /*** ECCDDL - ECC Debug Data Low; 0x000003CD ***/
    union {
      byte Byte;
      struct {
        byte DDATA       :8;                                       /* ECC Debug Data */
      } Bits;
    } ECCDDLSTR;
    #define ECCDDL                      _ECCDD.Overlap_STR.ECCDDLSTR.Byte
    #define ECCDDL_DDATA                _ECCDD.Overlap_STR.ECCDDLSTR.Bits.DDATA
    
    #define ECCDDL_DDATA_MASK           255U
    #define ECCDDL_DDATA_BITNUM         0U
    
  } Overlap_STR;

  struct {
    word DDATA       :16;                                      /* ECC Debug Data */
  } Bits;
} ECCDDSTR;
extern volatile ECCDDSTR _ECCDD @0x000003CC;
#define ECCDD                           _ECCDD.Word
#define ECCDD_DDATA                     _ECCDD.Bits.DDATA

#define ECCDD_DDATA_MASK                65535U
#define ECCDD_DDATA_BITNUM              0U


/*** ECCDE - ECC Debug ECC; 0x000003CE ***/
typedef union {
  byte Byte;
  struct {
    byte DECC        :6;                                       /* ECC Debug ECC */
    byte             :1; 
    byte             :1; 
  } Bits;
} ECCDESTR;
extern volatile ECCDESTR _ECCDE @0x000003CE;
#define ECCDE                           _ECCDE.Byte
#define ECCDE_DECC                      _ECCDE.Bits.DECC

#define ECCDE_DECC_MASK                 63U
#define ECCDE_DECC_BITNUM               0U


/*** ECCDCMD - ECC Debug Comamnd; 0x000003CF ***/
typedef union {
  byte Byte;
  struct {
    byte ECCDR       :1;                                       /* ECC Debug Read Command */
    byte ECCDW       :1;                                       /* ECC Debug Write Command */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte ECCDRR      :1;                                       /* ECC Disable Read Repair Function */
  } Bits;
} ECCDCMDSTR;
extern volatile ECCDCMDSTR _ECCDCMD @0x000003CF;
#define ECCDCMD                         _ECCDCMD.Byte
#define ECCDCMD_ECCDR                   _ECCDCMD.Bits.ECCDR
#define ECCDCMD_ECCDW                   _ECCDCMD.Bits.ECCDW
#define ECCDCMD_ECCDRR                  _ECCDCMD.Bits.ECCDRR

#define ECCDCMD_ECCDR_MASK              1U
#define ECCDCMD_ECCDW_MASK              2U
#define ECCDCMD_ECCDRR_MASK             128U


/*** TIM1TIOS - Timer Input Capture/Output Compare Select; 0x00000400 ***/
typedef union {
  byte Byte;
  struct {
    byte IOS0        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 0 */
    byte IOS1        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 1 */
    byte IOS2        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 2 */
    byte IOS3        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpIOS  :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM1TIOSSTR;
extern volatile TIM1TIOSSTR _TIM1TIOS @0x00000400;
#define TIM1TIOS                        _TIM1TIOS.Byte
#define TIM1TIOS_IOS0                   _TIM1TIOS.Bits.IOS0
#define TIM1TIOS_IOS1                   _TIM1TIOS.Bits.IOS1
#define TIM1TIOS_IOS2                   _TIM1TIOS.Bits.IOS2
#define TIM1TIOS_IOS3                   _TIM1TIOS.Bits.IOS3
#define TIM1TIOS_IOS                    _TIM1TIOS.MergedBits.grpIOS

#define TIM1TIOS_IOS0_MASK              1U
#define TIM1TIOS_IOS1_MASK              2U
#define TIM1TIOS_IOS2_MASK              4U
#define TIM1TIOS_IOS3_MASK              8U
#define TIM1TIOS_IOS_MASK               15U
#define TIM1TIOS_IOS_BITNUM             0U


/*** TIM1CFORC - Timer Compare Force Register; 0x00000401 ***/
typedef union {
  byte Byte;
  struct {
    byte FOC0        :1;                                       /* Force Output Compare Action for Channel 0 */
    byte FOC1        :1;                                       /* Force Output Compare Action for Channel 1 */
    byte FOC2        :1;                                       /* Force Output Compare Action for Channel 2 */
    byte FOC3        :1;                                       /* Force Output Compare Action for Channel 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpFOC  :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM1CFORCSTR;
extern volatile TIM1CFORCSTR _TIM1CFORC @0x00000401;
#define TIM1CFORC                       _TIM1CFORC.Byte
#define TIM1CFORC_FOC0                  _TIM1CFORC.Bits.FOC0
#define TIM1CFORC_FOC1                  _TIM1CFORC.Bits.FOC1
#define TIM1CFORC_FOC2                  _TIM1CFORC.Bits.FOC2
#define TIM1CFORC_FOC3                  _TIM1CFORC.Bits.FOC3
#define TIM1CFORC_FOC                   _TIM1CFORC.MergedBits.grpFOC

#define TIM1CFORC_FOC0_MASK             1U
#define TIM1CFORC_FOC1_MASK             2U
#define TIM1CFORC_FOC2_MASK             4U
#define TIM1CFORC_FOC3_MASK             8U
#define TIM1CFORC_FOC_MASK              15U
#define TIM1CFORC_FOC_BITNUM            0U


/*** TIM1TCNT - Timer Count Register; 0x00000404 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM1TCNTHi - Timer Count Register High (OBSOLETE - defined for backward compatibility); 0x00000404 ***/
    union {
      byte Byte;
      /*** TIM1TCNTHi - Timer Count Register High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TCNTHi                _TIM1TCNT.Overlap_STR.TIM1TCNTHiSTR.Byte
      
      /*** TIM1TCNTH - Timer Count Register High; Several registers at the same address ***/
      #define TIM1TCNTH                 _TIM1TCNT.Overlap_STR.TIM1TCNTHiSTR.Byte
      
    } TIM1TCNTHiSTR;
    

    /*** TIM1TCNTLo - Timer Count Register Low (OBSOLETE - defined for backward compatibility); 0x00000405 ***/
    union {
      byte Byte;
      /*** TIM1TCNTLo - Timer Count Register Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TCNTLo                _TIM1TCNT.Overlap_STR.TIM1TCNTLoSTR.Byte
      
      /*** TIM1TCNTL - Timer Count Register Low; Several registers at the same address ***/
      #define TIM1TCNTL                 _TIM1TCNT.Overlap_STR.TIM1TCNTLoSTR.Byte
      
    } TIM1TCNTLoSTR;
    
  } Overlap_STR;

} TIM1TCNTSTR;
extern volatile TIM1TCNTSTR _TIM1TCNT @0x00000404;
#define TIM1TCNT                        _TIM1TCNT.Word


/*** TIM1TSCR1 - Timer System Control Register1; 0x00000406 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte PRNT        :1;                                       /* Precision Timer */
    byte TFFCA       :1;                                       /* Timer Fast Flag Clear All */
    byte TSFRZ       :1;                                       /* Timer and Modulus Counter Stop While in Freeze Mode */
    byte TSWAI       :1;                                       /* Timer Module Stops While in Wait */
    byte TEN         :1;                                       /* Timer Enable */
  } Bits;
} TIM1TSCR1STR;
extern volatile TIM1TSCR1STR _TIM1TSCR1 @0x00000406;
#define TIM1TSCR1                       _TIM1TSCR1.Byte
#define TIM1TSCR1_PRNT                  _TIM1TSCR1.Bits.PRNT
#define TIM1TSCR1_TFFCA                 _TIM1TSCR1.Bits.TFFCA
#define TIM1TSCR1_TSFRZ                 _TIM1TSCR1.Bits.TSFRZ
#define TIM1TSCR1_TSWAI                 _TIM1TSCR1.Bits.TSWAI
#define TIM1TSCR1_TEN                   _TIM1TSCR1.Bits.TEN

#define TIM1TSCR1_PRNT_MASK             8U
#define TIM1TSCR1_TFFCA_MASK            16U
#define TIM1TSCR1_TSFRZ_MASK            32U
#define TIM1TSCR1_TSWAI_MASK            64U
#define TIM1TSCR1_TEN_MASK              128U


/*** TIM1TTOV - Timer Toggle On Overflow Register; 0x00000407 ***/
typedef union {
  byte Byte;
  struct {
    byte TOV0        :1;                                       /* Toggle On Overflow Bit 0 */
    byte TOV1        :1;                                       /* Toggle On Overflow Bit 1 */
    byte TOV2        :1;                                       /* Toggle On Overflow Bit 2 */
    byte TOV3        :1;                                       /* Toggle On Overflow Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpTOV  :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM1TTOVSTR;
extern volatile TIM1TTOVSTR _TIM1TTOV @0x00000407;
#define TIM1TTOV                        _TIM1TTOV.Byte
#define TIM1TTOV_TOV0                   _TIM1TTOV.Bits.TOV0
#define TIM1TTOV_TOV1                   _TIM1TTOV.Bits.TOV1
#define TIM1TTOV_TOV2                   _TIM1TTOV.Bits.TOV2
#define TIM1TTOV_TOV3                   _TIM1TTOV.Bits.TOV3
#define TIM1TTOV_TOV                    _TIM1TTOV.MergedBits.grpTOV

#define TIM1TTOV_TOV0_MASK              1U
#define TIM1TTOV_TOV1_MASK              2U
#define TIM1TTOV_TOV2_MASK              4U
#define TIM1TTOV_TOV3_MASK              8U
#define TIM1TTOV_TOV_MASK               15U
#define TIM1TTOV_TOV_BITNUM             0U


/*** TIM1TCTL2 - Timer Control Register 2; 0x00000409 ***/
typedef union {
  byte Byte;
  struct {
    byte OL0         :1;                                       /* Output Level Bit 0 */
    byte OM0         :1;                                       /* Output Mode Bit 0 */
    byte OL1         :1;                                       /* Output Level Bit 1 */
    byte OM1         :1;                                       /* Output Mode Bit 1 */
    byte OL2         :1;                                       /* Output Level Bit 2 */
    byte OM2         :1;                                       /* Output Mode Bit 2 */
    byte OL3         :1;                                       /* Output Level Bit 3 */
    byte OM3         :1;                                       /* Output Mode Bit 3 */
  } Bits;
} TIM1TCTL2STR;
extern volatile TIM1TCTL2STR _TIM1TCTL2 @0x00000409;
#define TIM1TCTL2                       _TIM1TCTL2.Byte
#define TIM1TCTL2_OL0                   _TIM1TCTL2.Bits.OL0
#define TIM1TCTL2_OM0                   _TIM1TCTL2.Bits.OM0
#define TIM1TCTL2_OL1                   _TIM1TCTL2.Bits.OL1
#define TIM1TCTL2_OM1                   _TIM1TCTL2.Bits.OM1
#define TIM1TCTL2_OL2                   _TIM1TCTL2.Bits.OL2
#define TIM1TCTL2_OM2                   _TIM1TCTL2.Bits.OM2
#define TIM1TCTL2_OL3                   _TIM1TCTL2.Bits.OL3
#define TIM1TCTL2_OM3                   _TIM1TCTL2.Bits.OM3

#define TIM1TCTL2_OL0_MASK              1U
#define TIM1TCTL2_OM0_MASK              2U
#define TIM1TCTL2_OL1_MASK              4U
#define TIM1TCTL2_OM1_MASK              8U
#define TIM1TCTL2_OL2_MASK              16U
#define TIM1TCTL2_OM2_MASK              32U
#define TIM1TCTL2_OL3_MASK              64U
#define TIM1TCTL2_OM3_MASK              128U


/*** TIM1TCTL4 - Timer Control Register 4; 0x0000040B ***/
typedef union {
  byte Byte;
  struct {
    byte EDG0A       :1;                                       /* Input Capture Edge Control 0A */
    byte EDG0B       :1;                                       /* Input Capture Edge Control 0B */
    byte EDG1A       :1;                                       /* Input Capture Edge Control 1A */
    byte EDG1B       :1;                                       /* Input Capture Edge Control 1B */
    byte EDG2A       :1;                                       /* Input Capture Edge Control 2A */
    byte EDG2B       :1;                                       /* Input Capture Edge Control 2B */
    byte EDG3A       :1;                                       /* Input Capture Edge Control 3A */
    byte EDG3B       :1;                                       /* Input Capture Edge Control 3B */
  } Bits;
  struct {
    byte grpEDG0x :2;
    byte grpEDG1x :2;
    byte grpEDG2x :2;
    byte grpEDG3x :2;
  } MergedBits;
} TIM1TCTL4STR;
extern volatile TIM1TCTL4STR _TIM1TCTL4 @0x0000040B;
#define TIM1TCTL4                       _TIM1TCTL4.Byte
#define TIM1TCTL4_EDG0A                 _TIM1TCTL4.Bits.EDG0A
#define TIM1TCTL4_EDG0B                 _TIM1TCTL4.Bits.EDG0B
#define TIM1TCTL4_EDG1A                 _TIM1TCTL4.Bits.EDG1A
#define TIM1TCTL4_EDG1B                 _TIM1TCTL4.Bits.EDG1B
#define TIM1TCTL4_EDG2A                 _TIM1TCTL4.Bits.EDG2A
#define TIM1TCTL4_EDG2B                 _TIM1TCTL4.Bits.EDG2B
#define TIM1TCTL4_EDG3A                 _TIM1TCTL4.Bits.EDG3A
#define TIM1TCTL4_EDG3B                 _TIM1TCTL4.Bits.EDG3B
#define TIM1TCTL4_EDG0x                 _TIM1TCTL4.MergedBits.grpEDG0x
#define TIM1TCTL4_EDG1x                 _TIM1TCTL4.MergedBits.grpEDG1x
#define TIM1TCTL4_EDG2x                 _TIM1TCTL4.MergedBits.grpEDG2x
#define TIM1TCTL4_EDG3x                 _TIM1TCTL4.MergedBits.grpEDG3x

#define TIM1TCTL4_EDG0A_MASK            1U
#define TIM1TCTL4_EDG0B_MASK            2U
#define TIM1TCTL4_EDG1A_MASK            4U
#define TIM1TCTL4_EDG1B_MASK            8U
#define TIM1TCTL4_EDG2A_MASK            16U
#define TIM1TCTL4_EDG2B_MASK            32U
#define TIM1TCTL4_EDG3A_MASK            64U
#define TIM1TCTL4_EDG3B_MASK            128U
#define TIM1TCTL4_EDG0x_MASK            3U
#define TIM1TCTL4_EDG0x_BITNUM          0U
#define TIM1TCTL4_EDG1x_MASK            12U
#define TIM1TCTL4_EDG1x_BITNUM          2U
#define TIM1TCTL4_EDG2x_MASK            48U
#define TIM1TCTL4_EDG2x_BITNUM          4U
#define TIM1TCTL4_EDG3x_MASK            192U
#define TIM1TCTL4_EDG3x_BITNUM          6U


/*** TIM1TIE - Timer Interrupt Enable Register; 0x0000040C ***/
typedef union {
  byte Byte;
  struct {
    byte C0I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 0 */
    byte C1I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 1 */
    byte C2I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 2 */
    byte C3I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} TIM1TIESTR;
extern volatile TIM1TIESTR _TIM1TIE @0x0000040C;
#define TIM1TIE                         _TIM1TIE.Byte
#define TIM1TIE_C0I                     _TIM1TIE.Bits.C0I
#define TIM1TIE_C1I                     _TIM1TIE.Bits.C1I
#define TIM1TIE_C2I                     _TIM1TIE.Bits.C2I
#define TIM1TIE_C3I                     _TIM1TIE.Bits.C3I

#define TIM1TIE_C0I_MASK                1U
#define TIM1TIE_C1I_MASK                2U
#define TIM1TIE_C2I_MASK                4U
#define TIM1TIE_C3I_MASK                8U


/*** TIM1TSCR2 - Timer System Control Register 2; 0x0000040D ***/
typedef union {
  byte Byte;
  struct {
    byte PR0         :1;                                       /* Timer Prescaler Select Bit 0 */
    byte PR1         :1;                                       /* Timer Prescaler Select Bit 1 */
    byte PR2         :1;                                       /* Timer Prescaler Select Bit 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte TOI         :1;                                       /* Timer Overflow Interrupt Enable */
  } Bits;
  struct {
    byte grpPR   :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM1TSCR2STR;
extern volatile TIM1TSCR2STR _TIM1TSCR2 @0x0000040D;
#define TIM1TSCR2                       _TIM1TSCR2.Byte
#define TIM1TSCR2_PR0                   _TIM1TSCR2.Bits.PR0
#define TIM1TSCR2_PR1                   _TIM1TSCR2.Bits.PR1
#define TIM1TSCR2_PR2                   _TIM1TSCR2.Bits.PR2
#define TIM1TSCR2_TOI                   _TIM1TSCR2.Bits.TOI
#define TIM1TSCR2_PR                    _TIM1TSCR2.MergedBits.grpPR

#define TIM1TSCR2_PR0_MASK              1U
#define TIM1TSCR2_PR1_MASK              2U
#define TIM1TSCR2_PR2_MASK              4U
#define TIM1TSCR2_TOI_MASK              128U
#define TIM1TSCR2_PR_MASK               7U
#define TIM1TSCR2_PR_BITNUM             0U


/*** TIM1TFLG1 - Main Timer Interrupt Flag 1; 0x0000040E ***/
typedef union {
  byte Byte;
  struct {
    byte C0F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 0 */
    byte C1F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 1 */
    byte C2F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 2 */
    byte C3F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} TIM1TFLG1STR;
extern volatile TIM1TFLG1STR _TIM1TFLG1 @0x0000040E;
#define TIM1TFLG1                       _TIM1TFLG1.Byte
#define TIM1TFLG1_C0F                   _TIM1TFLG1.Bits.C0F
#define TIM1TFLG1_C1F                   _TIM1TFLG1.Bits.C1F
#define TIM1TFLG1_C2F                   _TIM1TFLG1.Bits.C2F
#define TIM1TFLG1_C3F                   _TIM1TFLG1.Bits.C3F

#define TIM1TFLG1_C0F_MASK              1U
#define TIM1TFLG1_C1F_MASK              2U
#define TIM1TFLG1_C2F_MASK              4U
#define TIM1TFLG1_C3F_MASK              8U


/*** TIM1TFLG2 - Main Timer Interrupt Flag 2; 0x0000040F ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte TOF         :1;                                       /* Timer Overflow interrupt flag */
  } Bits;
} TIM1TFLG2STR;
extern volatile TIM1TFLG2STR _TIM1TFLG2 @0x0000040F;
#define TIM1TFLG2                       _TIM1TFLG2.Byte
#define TIM1TFLG2_TOF                   _TIM1TFLG2.Bits.TOF

#define TIM1TFLG2_TOF_MASK              128U


/*** TIM1TC0 - Timer Input Capture/Output Compare Register 0; 0x00000410 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM1TC0Hi - Timer Input Capture/Output Compare Register 0 High (OBSOLETE - defined for backward compatibility); 0x00000410 ***/
    union {
      byte Byte;
      /*** TIM1TC0Hi - Timer Input Capture/Output Compare Register 0 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC0Hi                 _TIM1TC0.Overlap_STR.TIM1TC0HiSTR.Byte
      
      /*** TIM1TC0H - Timer Input Capture/Output Compare Register 0 High; Several registers at the same address ***/
      #define TIM1TC0H                  _TIM1TC0.Overlap_STR.TIM1TC0HiSTR.Byte
      
    } TIM1TC0HiSTR;
    

    /*** TIM1TC0Lo - Timer Input Capture/Output Compare Register 0 Low (OBSOLETE - defined for backward compatibility); 0x00000411 ***/
    union {
      byte Byte;
      /*** TIM1TC0Lo - Timer Input Capture/Output Compare Register 0 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC0Lo                 _TIM1TC0.Overlap_STR.TIM1TC0LoSTR.Byte
      
      /*** TIM1TC0L - Timer Input Capture/Output Compare Register 0 Low; Several registers at the same address ***/
      #define TIM1TC0L                  _TIM1TC0.Overlap_STR.TIM1TC0LoSTR.Byte
      
    } TIM1TC0LoSTR;
    
  } Overlap_STR;

} TIM1TC0STR;
extern volatile TIM1TC0STR _TIM1TC0 @0x00000410;
#define TIM1TC0                         _TIM1TC0.Word
/* TIM1TC_ARR: Access 4 TIM1TCx registers in an array */
#define TIM1TC_ARR                      ((volatile word *) &TIM1TC0)


/*** TIM1TC1 - Timer Input Capture/Output Compare Register 1; 0x00000412 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM1TC1Hi - Timer Input Capture/Output Compare Register 1 High (OBSOLETE - defined for backward compatibility); 0x00000412 ***/
    union {
      byte Byte;
      /*** TIM1TC1Hi - Timer Input Capture/Output Compare Register 1 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC1Hi                 _TIM1TC1.Overlap_STR.TIM1TC1HiSTR.Byte
      
      /*** TIM1TC1H - Timer Input Capture/Output Compare Register 1 High; Several registers at the same address ***/
      #define TIM1TC1H                  _TIM1TC1.Overlap_STR.TIM1TC1HiSTR.Byte
      
    } TIM1TC1HiSTR;
    

    /*** TIM1TC1Lo - Timer Input Capture/Output Compare Register 1 Low (OBSOLETE - defined for backward compatibility); 0x00000413 ***/
    union {
      byte Byte;
      /*** TIM1TC1Lo - Timer Input Capture/Output Compare Register 1 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC1Lo                 _TIM1TC1.Overlap_STR.TIM1TC1LoSTR.Byte
      
      /*** TIM1TC1L - Timer Input Capture/Output Compare Register 1 Low; Several registers at the same address ***/
      #define TIM1TC1L                  _TIM1TC1.Overlap_STR.TIM1TC1LoSTR.Byte
      
    } TIM1TC1LoSTR;
    
  } Overlap_STR;

} TIM1TC1STR;
extern volatile TIM1TC1STR _TIM1TC1 @0x00000412;
#define TIM1TC1                         _TIM1TC1.Word


/*** TIM1TC2 - Timer Input Capture/Output Compare Register 2; 0x00000414 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM1TC2Hi - Timer Input Capture/Output Compare Register 2 High (OBSOLETE - defined for backward compatibility); 0x00000414 ***/
    union {
      byte Byte;
      /*** TIM1TC2Hi - Timer Input Capture/Output Compare Register 2 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC2Hi                 _TIM1TC2.Overlap_STR.TIM1TC2HiSTR.Byte
      
      /*** TIM1TC2H - Timer Input Capture/Output Compare Register 2 High; Several registers at the same address ***/
      #define TIM1TC2H                  _TIM1TC2.Overlap_STR.TIM1TC2HiSTR.Byte
      
    } TIM1TC2HiSTR;
    

    /*** TIM1TC2Lo - Timer Input Capture/Output Compare Register 2 Low (OBSOLETE - defined for backward compatibility); 0x00000415 ***/
    union {
      byte Byte;
      /*** TIM1TC2Lo - Timer Input Capture/Output Compare Register 2 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC2Lo                 _TIM1TC2.Overlap_STR.TIM1TC2LoSTR.Byte
      
      /*** TIM1TC2L - Timer Input Capture/Output Compare Register 2 Low; Several registers at the same address ***/
      #define TIM1TC2L                  _TIM1TC2.Overlap_STR.TIM1TC2LoSTR.Byte
      
    } TIM1TC2LoSTR;
    
  } Overlap_STR;

} TIM1TC2STR;
extern volatile TIM1TC2STR _TIM1TC2 @0x00000414;
#define TIM1TC2                         _TIM1TC2.Word


/*** TIM1TC3 - Timer Input Capture/Output Compare Register 3; 0x00000416 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM1TC3Hi - Timer Input Capture/Output Compare Register 3 High (OBSOLETE - defined for backward compatibility); 0x00000416 ***/
    union {
      byte Byte;
      /*** TIM1TC3Hi - Timer Input Capture/Output Compare Register 3 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC3Hi                 _TIM1TC3.Overlap_STR.TIM1TC3HiSTR.Byte
      
      /*** TIM1TC3H - Timer Input Capture/Output Compare Register 3 High; Several registers at the same address ***/
      #define TIM1TC3H                  _TIM1TC3.Overlap_STR.TIM1TC3HiSTR.Byte
      
    } TIM1TC3HiSTR;
    

    /*** TIM1TC3Lo - Timer Input Capture/Output Compare Register 3 Low (OBSOLETE - defined for backward compatibility); 0x00000417 ***/
    union {
      byte Byte;
      /*** TIM1TC3Lo - Timer Input Capture/Output Compare Register 3 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM1TC3Lo                 _TIM1TC3.Overlap_STR.TIM1TC3LoSTR.Byte
      
      /*** TIM1TC3L - Timer Input Capture/Output Compare Register 3 Low; Several registers at the same address ***/
      #define TIM1TC3L                  _TIM1TC3.Overlap_STR.TIM1TC3LoSTR.Byte
      
    } TIM1TC3LoSTR;
    
  } Overlap_STR;

} TIM1TC3STR;
extern volatile TIM1TC3STR _TIM1TC3 @0x00000416;
#define TIM1TC3                         _TIM1TC3.Word


/*** TIM1OCPD - Output Compare Pin Disconnect Register; 0x0000042C ***/
typedef union {
  byte Byte;
  struct {
    byte OCPD0       :1;                                       /* Output Compare Pin Disconnect Bit 0 */
    byte OCPD1       :1;                                       /* Output Compare Pin Disconnect Bit 1 */
    byte OCPD2       :1;                                       /* Output Compare Pin Disconnect Bit 2 */
    byte OCPD3       :1;                                       /* Output Compare Pin Disconnect Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpOCPD :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM1OCPDSTR;
extern volatile TIM1OCPDSTR _TIM1OCPD @0x0000042C;
#define TIM1OCPD                        _TIM1OCPD.Byte
#define TIM1OCPD_OCPD0                  _TIM1OCPD.Bits.OCPD0
#define TIM1OCPD_OCPD1                  _TIM1OCPD.Bits.OCPD1
#define TIM1OCPD_OCPD2                  _TIM1OCPD.Bits.OCPD2
#define TIM1OCPD_OCPD3                  _TIM1OCPD.Bits.OCPD3
#define TIM1OCPD_OCPD                   _TIM1OCPD.MergedBits.grpOCPD

#define TIM1OCPD_OCPD0_MASK             1U
#define TIM1OCPD_OCPD1_MASK             2U
#define TIM1OCPD_OCPD2_MASK             4U
#define TIM1OCPD_OCPD3_MASK             8U
#define TIM1OCPD_OCPD_MASK              15U
#define TIM1OCPD_OCPD_BITNUM            0U


/*** TIM1PTPSR - Precision Timer Prescaler Select Register; 0x0000042E ***/
typedef union {
  byte Byte;
  struct {
    byte PTPS0       :1;                                       /* Precision Timer Prescaler Select Bit 0 */
    byte PTPS1       :1;                                       /* Precision Timer Prescaler Select Bit 1 */
    byte PTPS2       :1;                                       /* Precision Timer Prescaler Select Bit 2 */
    byte PTPS3       :1;                                       /* Precision Timer Prescaler Select Bit 3 */
    byte PTPS4       :1;                                       /* Precision Timer Prescaler Select Bit 4 */
    byte PTPS5       :1;                                       /* Precision Timer Prescaler Select Bit 5 */
    byte PTPS6       :1;                                       /* Precision Timer Prescaler Select Bit 6 */
    byte PTPS7       :1;                                       /* Precision Timer Prescaler Select Bit 7 */
  } Bits;
} TIM1PTPSRSTR;
extern volatile TIM1PTPSRSTR _TIM1PTPSR @0x0000042E;
#define TIM1PTPSR                       _TIM1PTPSR.Byte
#define TIM1PTPSR_PTPS0                 _TIM1PTPSR.Bits.PTPS0
#define TIM1PTPSR_PTPS1                 _TIM1PTPSR.Bits.PTPS1
#define TIM1PTPSR_PTPS2                 _TIM1PTPSR.Bits.PTPS2
#define TIM1PTPSR_PTPS3                 _TIM1PTPSR.Bits.PTPS3
#define TIM1PTPSR_PTPS4                 _TIM1PTPSR.Bits.PTPS4
#define TIM1PTPSR_PTPS5                 _TIM1PTPSR.Bits.PTPS5
#define TIM1PTPSR_PTPS6                 _TIM1PTPSR.Bits.PTPS6
#define TIM1PTPSR_PTPS7                 _TIM1PTPSR.Bits.PTPS7

#define TIM1PTPSR_PTPS0_MASK            1U
#define TIM1PTPSR_PTPS1_MASK            2U
#define TIM1PTPSR_PTPS2_MASK            4U
#define TIM1PTPSR_PTPS3_MASK            8U
#define TIM1PTPSR_PTPS4_MASK            16U
#define TIM1PTPSR_PTPS5_MASK            32U
#define TIM1PTPSR_PTPS6_MASK            64U
#define TIM1PTPSR_PTPS7_MASK            128U


/*** PWM0E - PWM0 Enable Register; 0x00000480 ***/
typedef union {
  byte Byte;
  struct {
    byte PWME0       :1;                                       /* Pulse Width Channel 0 Enable */
    byte PWME1       :1;                                       /* Pulse Width Channel 1 Enable */
    byte PWME2       :1;                                       /* Pulse Width Channel 2 Enable */
    byte PWME3       :1;                                       /* Pulse Width Channel 3 Enable */
    byte PWME4       :1;                                       /* Pulse Width Channel 4 Enable */
    byte PWME5       :1;                                       /* Pulse Width Channel 5 Enable */
    byte PWME6       :1;                                       /* Pulse Width Channel 6 Enable */
    byte PWME7       :1;                                       /* Pulse Width Channel 7 Enable */
  } Bits;
} PWM0ESTR;
extern volatile PWM0ESTR _PWM0E @0x00000480;
#define PWM0E                           _PWM0E.Byte
#define PWM0E_PWME0                     _PWM0E.Bits.PWME0
#define PWM0E_PWME1                     _PWM0E.Bits.PWME1
#define PWM0E_PWME2                     _PWM0E.Bits.PWME2
#define PWM0E_PWME3                     _PWM0E.Bits.PWME3
#define PWM0E_PWME4                     _PWM0E.Bits.PWME4
#define PWM0E_PWME5                     _PWM0E.Bits.PWME5
#define PWM0E_PWME6                     _PWM0E.Bits.PWME6
#define PWM0E_PWME7                     _PWM0E.Bits.PWME7

#define PWM0E_PWME0_MASK                1U
#define PWM0E_PWME1_MASK                2U
#define PWM0E_PWME2_MASK                4U
#define PWM0E_PWME3_MASK                8U
#define PWM0E_PWME4_MASK                16U
#define PWM0E_PWME5_MASK                32U
#define PWM0E_PWME6_MASK                64U
#define PWM0E_PWME7_MASK                128U


/*** PWM0POL - PWM0 Polarity Register; 0x00000481 ***/
typedef union {
  byte Byte;
  struct {
    byte PPOL0       :1;                                       /* Pulse Width Channel 0 Polarity */
    byte PPOL1       :1;                                       /* Pulse Width Channel 1 Polarity */
    byte PPOL2       :1;                                       /* Pulse Width Channel 2 Polarity */
    byte PPOL3       :1;                                       /* Pulse Width Channel 3 Polarity */
    byte PPOL4       :1;                                       /* Pulse Width Channel 4 Polarity */
    byte PPOL5       :1;                                       /* Pulse Width Channel 5 Polarity */
    byte PPOL6       :1;                                       /* Pulse Width Channel 6 Polarity */
    byte PPOL7       :1;                                       /* Pulse Width Channel 7 Polarity */
  } Bits;
} PWM0POLSTR;
extern volatile PWM0POLSTR _PWM0POL @0x00000481;
#define PWM0POL                         _PWM0POL.Byte
#define PWM0POL_PPOL0                   _PWM0POL.Bits.PPOL0
#define PWM0POL_PPOL1                   _PWM0POL.Bits.PPOL1
#define PWM0POL_PPOL2                   _PWM0POL.Bits.PPOL2
#define PWM0POL_PPOL3                   _PWM0POL.Bits.PPOL3
#define PWM0POL_PPOL4                   _PWM0POL.Bits.PPOL4
#define PWM0POL_PPOL5                   _PWM0POL.Bits.PPOL5
#define PWM0POL_PPOL6                   _PWM0POL.Bits.PPOL6
#define PWM0POL_PPOL7                   _PWM0POL.Bits.PPOL7

#define PWM0POL_PPOL0_MASK              1U
#define PWM0POL_PPOL1_MASK              2U
#define PWM0POL_PPOL2_MASK              4U
#define PWM0POL_PPOL3_MASK              8U
#define PWM0POL_PPOL4_MASK              16U
#define PWM0POL_PPOL5_MASK              32U
#define PWM0POL_PPOL6_MASK              64U
#define PWM0POL_PPOL7_MASK              128U


/*** PWM0CLK - PWM0 Clock Select Register; 0x00000482 ***/
typedef union {
  byte Byte;
  struct {
    byte PCLK0       :1;                                       /* Pulse Width Channel 0 Clock Select */
    byte PCLK1       :1;                                       /* Pulse Width Channel 1 Clock Select */
    byte PCLK2       :1;                                       /* Pulse Width Channel 2 Clock Select */
    byte PCLK3       :1;                                       /* Pulse Width Channel 3 Clock Select */
    byte PCLK4       :1;                                       /* Pulse Width Channel 4 Clock Select */
    byte PCLK5       :1;                                       /* Pulse Width Channel 5 Clock Select */
    byte PCLK6       :1;                                       /* Pulse Width Channel 6 Clock Select */
    byte PCLK7       :1;                                       /* Pulse Width Channel 7 Clock Select */
  } Bits;
} PWM0CLKSTR;
extern volatile PWM0CLKSTR _PWM0CLK @0x00000482;
#define PWM0CLK                         _PWM0CLK.Byte
#define PWM0CLK_PCLK0                   _PWM0CLK.Bits.PCLK0
#define PWM0CLK_PCLK1                   _PWM0CLK.Bits.PCLK1
#define PWM0CLK_PCLK2                   _PWM0CLK.Bits.PCLK2
#define PWM0CLK_PCLK3                   _PWM0CLK.Bits.PCLK3
#define PWM0CLK_PCLK4                   _PWM0CLK.Bits.PCLK4
#define PWM0CLK_PCLK5                   _PWM0CLK.Bits.PCLK5
#define PWM0CLK_PCLK6                   _PWM0CLK.Bits.PCLK6
#define PWM0CLK_PCLK7                   _PWM0CLK.Bits.PCLK7

#define PWM0CLK_PCLK0_MASK              1U
#define PWM0CLK_PCLK1_MASK              2U
#define PWM0CLK_PCLK2_MASK              4U
#define PWM0CLK_PCLK3_MASK              8U
#define PWM0CLK_PCLK4_MASK              16U
#define PWM0CLK_PCLK5_MASK              32U
#define PWM0CLK_PCLK6_MASK              64U
#define PWM0CLK_PCLK7_MASK              128U


/*** PWM0PRCLK - PWM0 Prescale Clock Select Register; 0x00000483 ***/
typedef union {
  byte Byte;
  struct {
    byte PCKA0       :1;                                       /* Prescaler Select for Clock A 0 */
    byte PCKA1       :1;                                       /* Prescaler Select for Clock A 1 */
    byte PCKA2       :1;                                       /* Prescaler Select for Clock A 2 */
    byte             :1; 
    byte PCKB0       :1;                                       /* Prescaler Select for Clock B 0 */
    byte PCKB1       :1;                                       /* Prescaler Select for Clock B 1 */
    byte PCKB2       :1;                                       /* Prescaler Select for Clock B 2 */
    byte             :1; 
  } Bits;
  struct {
    byte grpPCKA :3;
    byte         :1;
    byte grpPCKB :3;
    byte         :1;
  } MergedBits;
} PWM0PRCLKSTR;
extern volatile PWM0PRCLKSTR _PWM0PRCLK @0x00000483;
#define PWM0PRCLK                       _PWM0PRCLK.Byte
#define PWM0PRCLK_PCKA0                 _PWM0PRCLK.Bits.PCKA0
#define PWM0PRCLK_PCKA1                 _PWM0PRCLK.Bits.PCKA1
#define PWM0PRCLK_PCKA2                 _PWM0PRCLK.Bits.PCKA2
#define PWM0PRCLK_PCKB0                 _PWM0PRCLK.Bits.PCKB0
#define PWM0PRCLK_PCKB1                 _PWM0PRCLK.Bits.PCKB1
#define PWM0PRCLK_PCKB2                 _PWM0PRCLK.Bits.PCKB2
#define PWM0PRCLK_PCKA                  _PWM0PRCLK.MergedBits.grpPCKA
#define PWM0PRCLK_PCKB                  _PWM0PRCLK.MergedBits.grpPCKB

#define PWM0PRCLK_PCKA0_MASK            1U
#define PWM0PRCLK_PCKA1_MASK            2U
#define PWM0PRCLK_PCKA2_MASK            4U
#define PWM0PRCLK_PCKB0_MASK            16U
#define PWM0PRCLK_PCKB1_MASK            32U
#define PWM0PRCLK_PCKB2_MASK            64U
#define PWM0PRCLK_PCKA_MASK             7U
#define PWM0PRCLK_PCKA_BITNUM           0U
#define PWM0PRCLK_PCKB_MASK             112U
#define PWM0PRCLK_PCKB_BITNUM           4U


/*** PWM0CAE - PWM0 Center Align Enable Register; 0x00000484 ***/
typedef union {
  byte Byte;
  struct {
    byte CAE0        :1;                                       /* Center Aligned Output Mode on channel 0 */
    byte CAE1        :1;                                       /* Center Aligned Output Mode on channel 1 */
    byte CAE2        :1;                                       /* Center Aligned Output Mode on channel 2 */
    byte CAE3        :1;                                       /* Center Aligned Output Mode on channel 3 */
    byte CAE4        :1;                                       /* Center Aligned Output Mode on channel 4 */
    byte CAE5        :1;                                       /* Center Aligned Output Mode on channel 5 */
    byte CAE6        :1;                                       /* Center Aligned Output Mode on channel 6 */
    byte CAE7        :1;                                       /* Center Aligned Output Mode on channel 7 */
  } Bits;
} PWM0CAESTR;
extern volatile PWM0CAESTR _PWM0CAE @0x00000484;
#define PWM0CAE                         _PWM0CAE.Byte
#define PWM0CAE_CAE0                    _PWM0CAE.Bits.CAE0
#define PWM0CAE_CAE1                    _PWM0CAE.Bits.CAE1
#define PWM0CAE_CAE2                    _PWM0CAE.Bits.CAE2
#define PWM0CAE_CAE3                    _PWM0CAE.Bits.CAE3
#define PWM0CAE_CAE4                    _PWM0CAE.Bits.CAE4
#define PWM0CAE_CAE5                    _PWM0CAE.Bits.CAE5
#define PWM0CAE_CAE6                    _PWM0CAE.Bits.CAE6
#define PWM0CAE_CAE7                    _PWM0CAE.Bits.CAE7

#define PWM0CAE_CAE0_MASK               1U
#define PWM0CAE_CAE1_MASK               2U
#define PWM0CAE_CAE2_MASK               4U
#define PWM0CAE_CAE3_MASK               8U
#define PWM0CAE_CAE4_MASK               16U
#define PWM0CAE_CAE5_MASK               32U
#define PWM0CAE_CAE6_MASK               64U
#define PWM0CAE_CAE7_MASK               128U


/*** PWM0CTL - PWM0 Control Register; 0x00000485 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte PFRZ        :1;                                       /* PWM0 Counters Stop in Freeze Mode */
    byte PSWAI       :1;                                       /* PWM0 Stops in Wait Mode */
    byte CON01       :1;                                       /* Concatenate channels 0 and 1 */
    byte CON23       :1;                                       /* Concatenate channels 2 and 3 */
    byte CON45       :1;                                       /* Concatenate channels 4 and 5 */
    byte CON67       :1;                                       /* Concatenate channels 6 and 7 */
  } Bits;
} PWM0CTLSTR;
extern volatile PWM0CTLSTR _PWM0CTL @0x00000485;
#define PWM0CTL                         _PWM0CTL.Byte
#define PWM0CTL_PFRZ                    _PWM0CTL.Bits.PFRZ
#define PWM0CTL_PSWAI                   _PWM0CTL.Bits.PSWAI
#define PWM0CTL_CON01                   _PWM0CTL.Bits.CON01
#define PWM0CTL_CON23                   _PWM0CTL.Bits.CON23
#define PWM0CTL_CON45                   _PWM0CTL.Bits.CON45
#define PWM0CTL_CON67                   _PWM0CTL.Bits.CON67

#define PWM0CTL_PFRZ_MASK               4U
#define PWM0CTL_PSWAI_MASK              8U
#define PWM0CTL_CON01_MASK              16U
#define PWM0CTL_CON23_MASK              32U
#define PWM0CTL_CON45_MASK              64U
#define PWM0CTL_CON67_MASK              128U


/*** PWM0CLKAB - PWM0 Clock Select Register; 0x00000486 ***/
typedef union {
  byte Byte;
  struct {
    byte PCLKAB0     :1;                                       /* Pulse Width Channel 0 Clock A/B Select */
    byte PCLKAB1     :1;                                       /* Pulse Width Channel 1 Clock A/B Select */
    byte PCLKAB2     :1;                                       /* Pulse Width Channel 2 Clock A/B Select */
    byte PCLKAB3     :1;                                       /* Pulse Width Channel 3 Clock A/B Select */
    byte PCLKAB4     :1;                                       /* Pulse Width Channel 4 Clock A/B Select */
    byte PCLKAB5     :1;                                       /* Pulse Width Channel 5 Clock A/B Select */
    byte PCLKAB6     :1;                                       /* Pulse Width Channel 6 Clock A/B Select */
    byte PCLKAB7     :1;                                       /* Pulse Width Channel 7 Clock A/B Select */
  } Bits;
} PWM0CLKABSTR;
extern volatile PWM0CLKABSTR _PWM0CLKAB @0x00000486;
#define PWM0CLKAB                       _PWM0CLKAB.Byte
#define PWM0CLKAB_PCLKAB0               _PWM0CLKAB.Bits.PCLKAB0
#define PWM0CLKAB_PCLKAB1               _PWM0CLKAB.Bits.PCLKAB1
#define PWM0CLKAB_PCLKAB2               _PWM0CLKAB.Bits.PCLKAB2
#define PWM0CLKAB_PCLKAB3               _PWM0CLKAB.Bits.PCLKAB3
#define PWM0CLKAB_PCLKAB4               _PWM0CLKAB.Bits.PCLKAB4
#define PWM0CLKAB_PCLKAB5               _PWM0CLKAB.Bits.PCLKAB5
#define PWM0CLKAB_PCLKAB6               _PWM0CLKAB.Bits.PCLKAB6
#define PWM0CLKAB_PCLKAB7               _PWM0CLKAB.Bits.PCLKAB7

#define PWM0CLKAB_PCLKAB0_MASK          1U
#define PWM0CLKAB_PCLKAB1_MASK          2U
#define PWM0CLKAB_PCLKAB2_MASK          4U
#define PWM0CLKAB_PCLKAB3_MASK          8U
#define PWM0CLKAB_PCLKAB4_MASK          16U
#define PWM0CLKAB_PCLKAB5_MASK          32U
#define PWM0CLKAB_PCLKAB6_MASK          64U
#define PWM0CLKAB_PCLKAB7_MASK          128U


/*** PWM0SCLA - PWM0 Scale A Register; 0x00000488 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* PWM0 Scale A Bit 0 */
    byte BIT1        :1;                                       /* PWM0 Scale A Bit 1 */
    byte BIT2        :1;                                       /* PWM0 Scale A Bit 2 */
    byte BIT3        :1;                                       /* PWM0 Scale A Bit 3 */
    byte BIT4        :1;                                       /* PWM0 Scale A Bit 4 */
    byte BIT5        :1;                                       /* PWM0 Scale A Bit 5 */
    byte BIT6        :1;                                       /* PWM0 Scale A Bit 6 */
    byte BIT7        :1;                                       /* PWM0 Scale A Bit 7 */
  } Bits;
} PWM0SCLASTR;
extern volatile PWM0SCLASTR _PWM0SCLA @0x00000488;
#define PWM0SCLA                        _PWM0SCLA.Byte
#define PWM0SCLA_BIT0                   _PWM0SCLA.Bits.BIT0
#define PWM0SCLA_BIT1                   _PWM0SCLA.Bits.BIT1
#define PWM0SCLA_BIT2                   _PWM0SCLA.Bits.BIT2
#define PWM0SCLA_BIT3                   _PWM0SCLA.Bits.BIT3
#define PWM0SCLA_BIT4                   _PWM0SCLA.Bits.BIT4
#define PWM0SCLA_BIT5                   _PWM0SCLA.Bits.BIT5
#define PWM0SCLA_BIT6                   _PWM0SCLA.Bits.BIT6
#define PWM0SCLA_BIT7                   _PWM0SCLA.Bits.BIT7

#define PWM0SCLA_BIT0_MASK              1U
#define PWM0SCLA_BIT1_MASK              2U
#define PWM0SCLA_BIT2_MASK              4U
#define PWM0SCLA_BIT3_MASK              8U
#define PWM0SCLA_BIT4_MASK              16U
#define PWM0SCLA_BIT5_MASK              32U
#define PWM0SCLA_BIT6_MASK              64U
#define PWM0SCLA_BIT7_MASK              128U


/*** PWM0SCLB - PWM0 Scale B Register; 0x00000489 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* PWM0 Scale B Bit 0 */
    byte BIT1        :1;                                       /* PWM0 Scale B Bit 1 */
    byte BIT2        :1;                                       /* PWM0 Scale B Bit 2 */
    byte BIT3        :1;                                       /* PWM0 Scale B Bit 3 */
    byte BIT4        :1;                                       /* PWM0 Scale B Bit 4 */
    byte BIT5        :1;                                       /* PWM0 Scale B Bit 5 */
    byte BIT6        :1;                                       /* PWM0 Scale B Bit 6 */
    byte BIT7        :1;                                       /* PWM0 Scale B Bit 7 */
  } Bits;
} PWM0SCLBSTR;
extern volatile PWM0SCLBSTR _PWM0SCLB @0x00000489;
#define PWM0SCLB                        _PWM0SCLB.Byte
#define PWM0SCLB_BIT0                   _PWM0SCLB.Bits.BIT0
#define PWM0SCLB_BIT1                   _PWM0SCLB.Bits.BIT1
#define PWM0SCLB_BIT2                   _PWM0SCLB.Bits.BIT2
#define PWM0SCLB_BIT3                   _PWM0SCLB.Bits.BIT3
#define PWM0SCLB_BIT4                   _PWM0SCLB.Bits.BIT4
#define PWM0SCLB_BIT5                   _PWM0SCLB.Bits.BIT5
#define PWM0SCLB_BIT6                   _PWM0SCLB.Bits.BIT6
#define PWM0SCLB_BIT7                   _PWM0SCLB.Bits.BIT7

#define PWM0SCLB_BIT0_MASK              1U
#define PWM0SCLB_BIT1_MASK              2U
#define PWM0SCLB_BIT2_MASK              4U
#define PWM0SCLB_BIT3_MASK              8U
#define PWM0SCLB_BIT4_MASK              16U
#define PWM0SCLB_BIT5_MASK              32U
#define PWM0SCLB_BIT6_MASK              64U
#define PWM0SCLB_BIT7_MASK              128U


/*** PWM0CNT01 - PWM0 Channel Counter 01 Register; 0x0000048C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0CNT0 - PWM0 Channel Counter 0 Register; 0x0000048C ***/
    union {
      byte Byte;
    } PWM0CNT0STR;
    #define PWM0CNT0                    _PWM0CNT01.Overlap_STR.PWM0CNT0STR.Byte
    /* PWM0CNT_ARR: Access 8 PWM0CNTx registers in an array */
    #define PWM0CNT_ARR                 ((volatile byte *) &PWM0CNT0)
    

    /*** PWM0CNT1 - PWM0 Channel Counter 1 Register; 0x0000048D ***/
    union {
      byte Byte;
    } PWM0CNT1STR;
    #define PWM0CNT1                    _PWM0CNT01.Overlap_STR.PWM0CNT1STR.Byte
    
  } Overlap_STR;

} PWM0CNT01STR;
extern volatile PWM0CNT01STR _PWM0CNT01 @0x0000048C;
#define PWM0CNT01                       _PWM0CNT01.Word


/*** PWM0CNT23 - PWM0 Channel Counter 23 Register; 0x0000048E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0CNT2 - PWM0 Channel Counter 2 Register; 0x0000048E ***/
    union {
      byte Byte;
    } PWM0CNT2STR;
    #define PWM0CNT2                    _PWM0CNT23.Overlap_STR.PWM0CNT2STR.Byte
    

    /*** PWM0CNT3 - PWM0 Channel Counter 3 Register; 0x0000048F ***/
    union {
      byte Byte;
    } PWM0CNT3STR;
    #define PWM0CNT3                    _PWM0CNT23.Overlap_STR.PWM0CNT3STR.Byte
    
  } Overlap_STR;

} PWM0CNT23STR;
extern volatile PWM0CNT23STR _PWM0CNT23 @0x0000048E;
#define PWM0CNT23                       _PWM0CNT23.Word


/*** PWM0CNT45 - PWM0 Channel Counter 45 Register; 0x00000490 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0CNT4 - PWM0 Channel Counter 4 Register; 0x00000490 ***/
    union {
      byte Byte;
    } PWM0CNT4STR;
    #define PWM0CNT4                    _PWM0CNT45.Overlap_STR.PWM0CNT4STR.Byte
    

    /*** PWM0CNT5 - PWM0 Channel Counter 5 Register; 0x00000491 ***/
    union {
      byte Byte;
    } PWM0CNT5STR;
    #define PWM0CNT5                    _PWM0CNT45.Overlap_STR.PWM0CNT5STR.Byte
    
  } Overlap_STR;

} PWM0CNT45STR;
extern volatile PWM0CNT45STR _PWM0CNT45 @0x00000490;
#define PWM0CNT45                       _PWM0CNT45.Word


/*** PWM0CNT67 - PWM0 Channel Counter 67 Register; 0x00000492 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0CNT6 - PWM0 Channel Counter 6 Register; 0x00000492 ***/
    union {
      byte Byte;
    } PWM0CNT6STR;
    #define PWM0CNT6                    _PWM0CNT67.Overlap_STR.PWM0CNT6STR.Byte
    

    /*** PWM0CNT7 - PWM0 Channel Counter 7 Register; 0x00000493 ***/
    union {
      byte Byte;
    } PWM0CNT7STR;
    #define PWM0CNT7                    _PWM0CNT67.Overlap_STR.PWM0CNT7STR.Byte
    
  } Overlap_STR;

} PWM0CNT67STR;
extern volatile PWM0CNT67STR _PWM0CNT67 @0x00000492;
#define PWM0CNT67                       _PWM0CNT67.Word


/*** PWM0PER01 - PWM0 Channel Period 01 Register; 0x00000494 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0PER0 - PWM0 Channel Period 0 Register; 0x00000494 ***/
    union {
      byte Byte;
    } PWM0PER0STR;
    #define PWM0PER0                    _PWM0PER01.Overlap_STR.PWM0PER0STR.Byte
    /* PWM0PER_ARR: Access 8 PWM0PERx registers in an array */
    #define PWM0PER_ARR                 ((volatile byte *) &PWM0PER0)
    

    /*** PWM0PER1 - PWM0 Channel Period 1 Register; 0x00000495 ***/
    union {
      byte Byte;
    } PWM0PER1STR;
    #define PWM0PER1                    _PWM0PER01.Overlap_STR.PWM0PER1STR.Byte
    
  } Overlap_STR;

} PWM0PER01STR;
extern volatile PWM0PER01STR _PWM0PER01 @0x00000494;
#define PWM0PER01                       _PWM0PER01.Word


/*** PWM0PER23 - PWM0 Channel Period 23 Register; 0x00000496 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0PER2 - PWM0 Channel Period 2 Register; 0x00000496 ***/
    union {
      byte Byte;
    } PWM0PER2STR;
    #define PWM0PER2                    _PWM0PER23.Overlap_STR.PWM0PER2STR.Byte
    

    /*** PWM0PER3 - PWM0 Channel Period 3 Register; 0x00000497 ***/
    union {
      byte Byte;
    } PWM0PER3STR;
    #define PWM0PER3                    _PWM0PER23.Overlap_STR.PWM0PER3STR.Byte
    
  } Overlap_STR;

} PWM0PER23STR;
extern volatile PWM0PER23STR _PWM0PER23 @0x00000496;
#define PWM0PER23                       _PWM0PER23.Word


/*** PWM0PER45 - PWM0 Channel Period 45 Register; 0x00000498 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0PER4 - PWM0 Channel Period 4 Register; 0x00000498 ***/
    union {
      byte Byte;
    } PWM0PER4STR;
    #define PWM0PER4                    _PWM0PER45.Overlap_STR.PWM0PER4STR.Byte
    

    /*** PWM0PER5 - PWM0 Channel Period 5 Register; 0x00000499 ***/
    union {
      byte Byte;
    } PWM0PER5STR;
    #define PWM0PER5                    _PWM0PER45.Overlap_STR.PWM0PER5STR.Byte
    
  } Overlap_STR;

} PWM0PER45STR;
extern volatile PWM0PER45STR _PWM0PER45 @0x00000498;
#define PWM0PER45                       _PWM0PER45.Word


/*** PWM0PER67 - PWM0 Channel Period 67 Register; 0x0000049A ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0PER6 - PWM0 Channel Period 6 Register; 0x0000049A ***/
    union {
      byte Byte;
    } PWM0PER6STR;
    #define PWM0PER6                    _PWM0PER67.Overlap_STR.PWM0PER6STR.Byte
    

    /*** PWM0PER7 - PWM0 Channel Period 7 Register; 0x0000049B ***/
    union {
      byte Byte;
    } PWM0PER7STR;
    #define PWM0PER7                    _PWM0PER67.Overlap_STR.PWM0PER7STR.Byte
    
  } Overlap_STR;

} PWM0PER67STR;
extern volatile PWM0PER67STR _PWM0PER67 @0x0000049A;
#define PWM0PER67                       _PWM0PER67.Word


/*** PWM0DTY01 - PWM0 Channel Duty 01 Register; 0x0000049C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0DTY0 - PWM0 Channel Duty 0 Register; 0x0000049C ***/
    union {
      byte Byte;
    } PWM0DTY0STR;
    #define PWM0DTY0                    _PWM0DTY01.Overlap_STR.PWM0DTY0STR.Byte
    /* PWM0DTY_ARR: Access 8 PWM0DTYx registers in an array */
    #define PWM0DTY_ARR                 ((volatile byte *) &PWM0DTY0)
    

    /*** PWM0DTY1 - PWM0 Channel Duty 1 Register; 0x0000049D ***/
    union {
      byte Byte;
    } PWM0DTY1STR;
    #define PWM0DTY1                    _PWM0DTY01.Overlap_STR.PWM0DTY1STR.Byte
    
  } Overlap_STR;

} PWM0DTY01STR;
extern volatile PWM0DTY01STR _PWM0DTY01 @0x0000049C;
#define PWM0DTY01                       _PWM0DTY01.Word


/*** PWM0DTY23 - PWM0 Channel Duty 23 Register; 0x0000049E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0DTY2 - PWM0 Channel Duty 2 Register; 0x0000049E ***/
    union {
      byte Byte;
    } PWM0DTY2STR;
    #define PWM0DTY2                    _PWM0DTY23.Overlap_STR.PWM0DTY2STR.Byte
    

    /*** PWM0DTY3 - PWM0 Channel Duty 3 Register; 0x0000049F ***/
    union {
      byte Byte;
    } PWM0DTY3STR;
    #define PWM0DTY3                    _PWM0DTY23.Overlap_STR.PWM0DTY3STR.Byte
    
  } Overlap_STR;

} PWM0DTY23STR;
extern volatile PWM0DTY23STR _PWM0DTY23 @0x0000049E;
#define PWM0DTY23                       _PWM0DTY23.Word


/*** PWM0DTY45 - PWM0 Channel Duty 45 Register; 0x000004A0 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0DTY4 - PWM0 Channel Duty 4 Register; 0x000004A0 ***/
    union {
      byte Byte;
    } PWM0DTY4STR;
    #define PWM0DTY4                    _PWM0DTY45.Overlap_STR.PWM0DTY4STR.Byte
    

    /*** PWM0DTY5 - PWM0 Channel Duty 5 Register; 0x000004A1 ***/
    union {
      byte Byte;
    } PWM0DTY5STR;
    #define PWM0DTY5                    _PWM0DTY45.Overlap_STR.PWM0DTY5STR.Byte
    
  } Overlap_STR;

} PWM0DTY45STR;
extern volatile PWM0DTY45STR _PWM0DTY45 @0x000004A0;
#define PWM0DTY45                       _PWM0DTY45.Word


/*** PWM0DTY67 - PWM0 Channel Duty 67 Register; 0x000004A2 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM0DTY6 - PWM0 Channel Duty 6 Register; 0x000004A2 ***/
    union {
      byte Byte;
    } PWM0DTY6STR;
    #define PWM0DTY6                    _PWM0DTY67.Overlap_STR.PWM0DTY6STR.Byte
    

    /*** PWM0DTY7 - PWM0 Channel Duty 7 Register; 0x000004A3 ***/
    union {
      byte Byte;
    } PWM0DTY7STR;
    #define PWM0DTY7                    _PWM0DTY67.Overlap_STR.PWM0DTY7STR.Byte
    
  } Overlap_STR;

} PWM0DTY67STR;
extern volatile PWM0DTY67STR _PWM0DTY67 @0x000004A2;
#define PWM0DTY67                       _PWM0DTY67.Word


/*** PWM1E - PWM1 Enable Register; 0x00000500 ***/
typedef union {
  byte Byte;
  struct {
    byte PWME0       :1;                                       /* Pulse Width Channel 0 Enable */
    byte PWME1       :1;                                       /* Pulse Width Channel 1 Enable */
    byte PWME2       :1;                                       /* Pulse Width Channel 2 Enable */
    byte PWME3       :1;                                       /* Pulse Width Channel 3 Enable */
    byte PWME4       :1;                                       /* Pulse Width Channel 4 Enable */
    byte PWME5       :1;                                       /* Pulse Width Channel 5 Enable */
    byte PWME6       :1;                                       /* Pulse Width Channel 6 Enable */
    byte PWME7       :1;                                       /* Pulse Width Channel 7 Enable */
  } Bits;
} PWM1ESTR;
extern volatile PWM1ESTR _PWM1E @0x00000500;
#define PWM1E                           _PWM1E.Byte
#define PWM1E_PWME0                     _PWM1E.Bits.PWME0
#define PWM1E_PWME1                     _PWM1E.Bits.PWME1
#define PWM1E_PWME2                     _PWM1E.Bits.PWME2
#define PWM1E_PWME3                     _PWM1E.Bits.PWME3
#define PWM1E_PWME4                     _PWM1E.Bits.PWME4
#define PWM1E_PWME5                     _PWM1E.Bits.PWME5
#define PWM1E_PWME6                     _PWM1E.Bits.PWME6
#define PWM1E_PWME7                     _PWM1E.Bits.PWME7

#define PWM1E_PWME0_MASK                1U
#define PWM1E_PWME1_MASK                2U
#define PWM1E_PWME2_MASK                4U
#define PWM1E_PWME3_MASK                8U
#define PWM1E_PWME4_MASK                16U
#define PWM1E_PWME5_MASK                32U
#define PWM1E_PWME6_MASK                64U
#define PWM1E_PWME7_MASK                128U


/*** PWM1POL - PWM1 Polarity Register; 0x00000501 ***/
typedef union {
  byte Byte;
  struct {
    byte PPOL0       :1;                                       /* Pulse Width Channel 0 Polarity */
    byte PPOL1       :1;                                       /* Pulse Width Channel 1 Polarity */
    byte PPOL2       :1;                                       /* Pulse Width Channel 2 Polarity */
    byte PPOL3       :1;                                       /* Pulse Width Channel 3 Polarity */
    byte PPOL4       :1;                                       /* Pulse Width Channel 4 Polarity */
    byte PPOL5       :1;                                       /* Pulse Width Channel 5 Polarity */
    byte PPOL6       :1;                                       /* Pulse Width Channel 6 Polarity */
    byte PPOL7       :1;                                       /* Pulse Width Channel 7 Polarity */
  } Bits;
} PWM1POLSTR;
extern volatile PWM1POLSTR _PWM1POL @0x00000501;
#define PWM1POL                         _PWM1POL.Byte
#define PWM1POL_PPOL0                   _PWM1POL.Bits.PPOL0
#define PWM1POL_PPOL1                   _PWM1POL.Bits.PPOL1
#define PWM1POL_PPOL2                   _PWM1POL.Bits.PPOL2
#define PWM1POL_PPOL3                   _PWM1POL.Bits.PPOL3
#define PWM1POL_PPOL4                   _PWM1POL.Bits.PPOL4
#define PWM1POL_PPOL5                   _PWM1POL.Bits.PPOL5
#define PWM1POL_PPOL6                   _PWM1POL.Bits.PPOL6
#define PWM1POL_PPOL7                   _PWM1POL.Bits.PPOL7

#define PWM1POL_PPOL0_MASK              1U
#define PWM1POL_PPOL1_MASK              2U
#define PWM1POL_PPOL2_MASK              4U
#define PWM1POL_PPOL3_MASK              8U
#define PWM1POL_PPOL4_MASK              16U
#define PWM1POL_PPOL5_MASK              32U
#define PWM1POL_PPOL6_MASK              64U
#define PWM1POL_PPOL7_MASK              128U


/*** PWM1CLK - PWM1 Clock Select Register; 0x00000502 ***/
typedef union {
  byte Byte;
  struct {
    byte PCLK0       :1;                                       /* Pulse Width Channel 0 Clock Select */
    byte PCLK1       :1;                                       /* Pulse Width Channel 1 Clock Select */
    byte PCLK2       :1;                                       /* Pulse Width Channel 2 Clock Select */
    byte PCLK3       :1;                                       /* Pulse Width Channel 3 Clock Select */
    byte PCLK4       :1;                                       /* Pulse Width Channel 4 Clock Select */
    byte PCLK5       :1;                                       /* Pulse Width Channel 5 Clock Select */
    byte PCLK6       :1;                                       /* Pulse Width Channel 6 Clock Select */
    byte PCLK7       :1;                                       /* Pulse Width Channel 7 Clock Select */
  } Bits;
} PWM1CLKSTR;
extern volatile PWM1CLKSTR _PWM1CLK @0x00000502;
#define PWM1CLK                         _PWM1CLK.Byte
#define PWM1CLK_PCLK0                   _PWM1CLK.Bits.PCLK0
#define PWM1CLK_PCLK1                   _PWM1CLK.Bits.PCLK1
#define PWM1CLK_PCLK2                   _PWM1CLK.Bits.PCLK2
#define PWM1CLK_PCLK3                   _PWM1CLK.Bits.PCLK3
#define PWM1CLK_PCLK4                   _PWM1CLK.Bits.PCLK4
#define PWM1CLK_PCLK5                   _PWM1CLK.Bits.PCLK5
#define PWM1CLK_PCLK6                   _PWM1CLK.Bits.PCLK6
#define PWM1CLK_PCLK7                   _PWM1CLK.Bits.PCLK7

#define PWM1CLK_PCLK0_MASK              1U
#define PWM1CLK_PCLK1_MASK              2U
#define PWM1CLK_PCLK2_MASK              4U
#define PWM1CLK_PCLK3_MASK              8U
#define PWM1CLK_PCLK4_MASK              16U
#define PWM1CLK_PCLK5_MASK              32U
#define PWM1CLK_PCLK6_MASK              64U
#define PWM1CLK_PCLK7_MASK              128U


/*** PWM1PRCLK - PWM1 Prescale Clock Select Register; 0x00000503 ***/
typedef union {
  byte Byte;
  struct {
    byte PCKA0       :1;                                       /* Prescaler Select for Clock A 0 */
    byte PCKA1       :1;                                       /* Prescaler Select for Clock A 1 */
    byte PCKA2       :1;                                       /* Prescaler Select for Clock A 2 */
    byte             :1; 
    byte PCKB0       :1;                                       /* Prescaler Select for Clock B 0 */
    byte PCKB1       :1;                                       /* Prescaler Select for Clock B 1 */
    byte PCKB2       :1;                                       /* Prescaler Select for Clock B 2 */
    byte             :1; 
  } Bits;
  struct {
    byte grpPCKA :3;
    byte         :1;
    byte grpPCKB :3;
    byte         :1;
  } MergedBits;
} PWM1PRCLKSTR;
extern volatile PWM1PRCLKSTR _PWM1PRCLK @0x00000503;
#define PWM1PRCLK                       _PWM1PRCLK.Byte
#define PWM1PRCLK_PCKA0                 _PWM1PRCLK.Bits.PCKA0
#define PWM1PRCLK_PCKA1                 _PWM1PRCLK.Bits.PCKA1
#define PWM1PRCLK_PCKA2                 _PWM1PRCLK.Bits.PCKA2
#define PWM1PRCLK_PCKB0                 _PWM1PRCLK.Bits.PCKB0
#define PWM1PRCLK_PCKB1                 _PWM1PRCLK.Bits.PCKB1
#define PWM1PRCLK_PCKB2                 _PWM1PRCLK.Bits.PCKB2
#define PWM1PRCLK_PCKA                  _PWM1PRCLK.MergedBits.grpPCKA
#define PWM1PRCLK_PCKB                  _PWM1PRCLK.MergedBits.grpPCKB

#define PWM1PRCLK_PCKA0_MASK            1U
#define PWM1PRCLK_PCKA1_MASK            2U
#define PWM1PRCLK_PCKA2_MASK            4U
#define PWM1PRCLK_PCKB0_MASK            16U
#define PWM1PRCLK_PCKB1_MASK            32U
#define PWM1PRCLK_PCKB2_MASK            64U
#define PWM1PRCLK_PCKA_MASK             7U
#define PWM1PRCLK_PCKA_BITNUM           0U
#define PWM1PRCLK_PCKB_MASK             112U
#define PWM1PRCLK_PCKB_BITNUM           4U


/*** PWM1CAE - PWM1 Center Align Enable Register; 0x00000504 ***/
typedef union {
  byte Byte;
  struct {
    byte CAE0        :1;                                       /* Center Aligned Output Mode on channel 0 */
    byte CAE1        :1;                                       /* Center Aligned Output Mode on channel 1 */
    byte CAE2        :1;                                       /* Center Aligned Output Mode on channel 2 */
    byte CAE3        :1;                                       /* Center Aligned Output Mode on channel 3 */
    byte CAE4        :1;                                       /* Center Aligned Output Mode on channel 4 */
    byte CAE5        :1;                                       /* Center Aligned Output Mode on channel 5 */
    byte CAE6        :1;                                       /* Center Aligned Output Mode on channel 6 */
    byte CAE7        :1;                                       /* Center Aligned Output Mode on channel 7 */
  } Bits;
} PWM1CAESTR;
extern volatile PWM1CAESTR _PWM1CAE @0x00000504;
#define PWM1CAE                         _PWM1CAE.Byte
#define PWM1CAE_CAE0                    _PWM1CAE.Bits.CAE0
#define PWM1CAE_CAE1                    _PWM1CAE.Bits.CAE1
#define PWM1CAE_CAE2                    _PWM1CAE.Bits.CAE2
#define PWM1CAE_CAE3                    _PWM1CAE.Bits.CAE3
#define PWM1CAE_CAE4                    _PWM1CAE.Bits.CAE4
#define PWM1CAE_CAE5                    _PWM1CAE.Bits.CAE5
#define PWM1CAE_CAE6                    _PWM1CAE.Bits.CAE6
#define PWM1CAE_CAE7                    _PWM1CAE.Bits.CAE7

#define PWM1CAE_CAE0_MASK               1U
#define PWM1CAE_CAE1_MASK               2U
#define PWM1CAE_CAE2_MASK               4U
#define PWM1CAE_CAE3_MASK               8U
#define PWM1CAE_CAE4_MASK               16U
#define PWM1CAE_CAE5_MASK               32U
#define PWM1CAE_CAE6_MASK               64U
#define PWM1CAE_CAE7_MASK               128U


/*** PWM1CTL - PWM1 Control Register; 0x00000505 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte PFRZ        :1;                                       /* PWM1 Counters Stop in Freeze Mode */
    byte PSWAI       :1;                                       /* PWM1 Stops in Wait Mode */
    byte CON01       :1;                                       /* Concatenate channels 0 and 1 */
    byte CON23       :1;                                       /* Concatenate channels 2 and 3 */
    byte CON45       :1;                                       /* Concatenate channels 4 and 5 */
    byte CON67       :1;                                       /* Concatenate channels 6 and 7 */
  } Bits;
} PWM1CTLSTR;
extern volatile PWM1CTLSTR _PWM1CTL @0x00000505;
#define PWM1CTL                         _PWM1CTL.Byte
#define PWM1CTL_PFRZ                    _PWM1CTL.Bits.PFRZ
#define PWM1CTL_PSWAI                   _PWM1CTL.Bits.PSWAI
#define PWM1CTL_CON01                   _PWM1CTL.Bits.CON01
#define PWM1CTL_CON23                   _PWM1CTL.Bits.CON23
#define PWM1CTL_CON45                   _PWM1CTL.Bits.CON45
#define PWM1CTL_CON67                   _PWM1CTL.Bits.CON67

#define PWM1CTL_PFRZ_MASK               4U
#define PWM1CTL_PSWAI_MASK              8U
#define PWM1CTL_CON01_MASK              16U
#define PWM1CTL_CON23_MASK              32U
#define PWM1CTL_CON45_MASK              64U
#define PWM1CTL_CON67_MASK              128U


/*** PWM1CLKAB - PWM1 Clock Select Register; 0x00000506 ***/
typedef union {
  byte Byte;
  struct {
    byte PCLKAB0     :1;                                       /* Pulse Width Channel 0 Clock A/B Select */
    byte PCLKAB1     :1;                                       /* Pulse Width Channel 1 Clock A/B Select */
    byte PCLKAB2     :1;                                       /* Pulse Width Channel 2 Clock A/B Select */
    byte PCLKAB3     :1;                                       /* Pulse Width Channel 3 Clock A/B Select */
    byte PCLKAB4     :1;                                       /* Pulse Width Channel 4 Clock A/B Select */
    byte PCLKAB5     :1;                                       /* Pulse Width Channel 5 Clock A/B Select */
    byte PCLKAB6     :1;                                       /* Pulse Width Channel 6 Clock A/B Select */
    byte PCLKAB7     :1;                                       /* Pulse Width Channel 7 Clock A/B Select */
  } Bits;
} PWM1CLKABSTR;
extern volatile PWM1CLKABSTR _PWM1CLKAB @0x00000506;
#define PWM1CLKAB                       _PWM1CLKAB.Byte
#define PWM1CLKAB_PCLKAB0               _PWM1CLKAB.Bits.PCLKAB0
#define PWM1CLKAB_PCLKAB1               _PWM1CLKAB.Bits.PCLKAB1
#define PWM1CLKAB_PCLKAB2               _PWM1CLKAB.Bits.PCLKAB2
#define PWM1CLKAB_PCLKAB3               _PWM1CLKAB.Bits.PCLKAB3
#define PWM1CLKAB_PCLKAB4               _PWM1CLKAB.Bits.PCLKAB4
#define PWM1CLKAB_PCLKAB5               _PWM1CLKAB.Bits.PCLKAB5
#define PWM1CLKAB_PCLKAB6               _PWM1CLKAB.Bits.PCLKAB6
#define PWM1CLKAB_PCLKAB7               _PWM1CLKAB.Bits.PCLKAB7

#define PWM1CLKAB_PCLKAB0_MASK          1U
#define PWM1CLKAB_PCLKAB1_MASK          2U
#define PWM1CLKAB_PCLKAB2_MASK          4U
#define PWM1CLKAB_PCLKAB3_MASK          8U
#define PWM1CLKAB_PCLKAB4_MASK          16U
#define PWM1CLKAB_PCLKAB5_MASK          32U
#define PWM1CLKAB_PCLKAB6_MASK          64U
#define PWM1CLKAB_PCLKAB7_MASK          128U


/*** PWM1SCLA - PWM1 Scale A Register; 0x00000508 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* PWM1 Scale A Bit 0 */
    byte BIT1        :1;                                       /* PWM1 Scale A Bit 1 */
    byte BIT2        :1;                                       /* PWM1 Scale A Bit 2 */
    byte BIT3        :1;                                       /* PWM1 Scale A Bit 3 */
    byte BIT4        :1;                                       /* PWM1 Scale A Bit 4 */
    byte BIT5        :1;                                       /* PWM1 Scale A Bit 5 */
    byte BIT6        :1;                                       /* PWM1 Scale A Bit 6 */
    byte BIT7        :1;                                       /* PWM1 Scale A Bit 7 */
  } Bits;
} PWM1SCLASTR;
extern volatile PWM1SCLASTR _PWM1SCLA @0x00000508;
#define PWM1SCLA                        _PWM1SCLA.Byte
#define PWM1SCLA_BIT0                   _PWM1SCLA.Bits.BIT0
#define PWM1SCLA_BIT1                   _PWM1SCLA.Bits.BIT1
#define PWM1SCLA_BIT2                   _PWM1SCLA.Bits.BIT2
#define PWM1SCLA_BIT3                   _PWM1SCLA.Bits.BIT3
#define PWM1SCLA_BIT4                   _PWM1SCLA.Bits.BIT4
#define PWM1SCLA_BIT5                   _PWM1SCLA.Bits.BIT5
#define PWM1SCLA_BIT6                   _PWM1SCLA.Bits.BIT6
#define PWM1SCLA_BIT7                   _PWM1SCLA.Bits.BIT7

#define PWM1SCLA_BIT0_MASK              1U
#define PWM1SCLA_BIT1_MASK              2U
#define PWM1SCLA_BIT2_MASK              4U
#define PWM1SCLA_BIT3_MASK              8U
#define PWM1SCLA_BIT4_MASK              16U
#define PWM1SCLA_BIT5_MASK              32U
#define PWM1SCLA_BIT6_MASK              64U
#define PWM1SCLA_BIT7_MASK              128U


/*** PWM1SCLB - PWM1 Scale B Register; 0x00000509 ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* PWM1 Scale B Bit 0 */
    byte BIT1        :1;                                       /* PWM1 Scale B Bit 1 */
    byte BIT2        :1;                                       /* PWM1 Scale B Bit 2 */
    byte BIT3        :1;                                       /* PWM1 Scale B Bit 3 */
    byte BIT4        :1;                                       /* PWM1 Scale B Bit 4 */
    byte BIT5        :1;                                       /* PWM1 Scale B Bit 5 */
    byte BIT6        :1;                                       /* PWM1 Scale B Bit 6 */
    byte BIT7        :1;                                       /* PWM1 Scale B Bit 7 */
  } Bits;
} PWM1SCLBSTR;
extern volatile PWM1SCLBSTR _PWM1SCLB @0x00000509;
#define PWM1SCLB                        _PWM1SCLB.Byte
#define PWM1SCLB_BIT0                   _PWM1SCLB.Bits.BIT0
#define PWM1SCLB_BIT1                   _PWM1SCLB.Bits.BIT1
#define PWM1SCLB_BIT2                   _PWM1SCLB.Bits.BIT2
#define PWM1SCLB_BIT3                   _PWM1SCLB.Bits.BIT3
#define PWM1SCLB_BIT4                   _PWM1SCLB.Bits.BIT4
#define PWM1SCLB_BIT5                   _PWM1SCLB.Bits.BIT5
#define PWM1SCLB_BIT6                   _PWM1SCLB.Bits.BIT6
#define PWM1SCLB_BIT7                   _PWM1SCLB.Bits.BIT7

#define PWM1SCLB_BIT0_MASK              1U
#define PWM1SCLB_BIT1_MASK              2U
#define PWM1SCLB_BIT2_MASK              4U
#define PWM1SCLB_BIT3_MASK              8U
#define PWM1SCLB_BIT4_MASK              16U
#define PWM1SCLB_BIT5_MASK              32U
#define PWM1SCLB_BIT6_MASK              64U
#define PWM1SCLB_BIT7_MASK              128U


/*** PWM1CNT01 - PWM1 Channel Counter 01 Register; 0x0000050C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1CNT0 - PWM1 Channel Counter 0 Register; 0x0000050C ***/
    union {
      byte Byte;
    } PWM1CNT0STR;
    #define PWM1CNT0                    _PWM1CNT01.Overlap_STR.PWM1CNT0STR.Byte
    /* PWM1CNT_ARR: Access 8 PWM1CNTx registers in an array */
    #define PWM1CNT_ARR                 ((volatile byte *) &PWM1CNT0)
    

    /*** PWM1CNT1 - PWM1 Channel Counter 1 Register; 0x0000050D ***/
    union {
      byte Byte;
    } PWM1CNT1STR;
    #define PWM1CNT1                    _PWM1CNT01.Overlap_STR.PWM1CNT1STR.Byte
    
  } Overlap_STR;

} PWM1CNT01STR;
extern volatile PWM1CNT01STR _PWM1CNT01 @0x0000050C;
#define PWM1CNT01                       _PWM1CNT01.Word


/*** PWM1CNT23 - PWM1 Channel Counter 23 Register; 0x0000050E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1CNT2 - PWM1 Channel Counter 2 Register; 0x0000050E ***/
    union {
      byte Byte;
    } PWM1CNT2STR;
    #define PWM1CNT2                    _PWM1CNT23.Overlap_STR.PWM1CNT2STR.Byte
    

    /*** PWM1CNT3 - PWM1 Channel Counter 3 Register; 0x0000050F ***/
    union {
      byte Byte;
    } PWM1CNT3STR;
    #define PWM1CNT3                    _PWM1CNT23.Overlap_STR.PWM1CNT3STR.Byte
    
  } Overlap_STR;

} PWM1CNT23STR;
extern volatile PWM1CNT23STR _PWM1CNT23 @0x0000050E;
#define PWM1CNT23                       _PWM1CNT23.Word


/*** PWM1CNT45 - PWM1 Channel Counter 45 Register; 0x00000510 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1CNT4 - PWM1 Channel Counter 4 Register; 0x00000510 ***/
    union {
      byte Byte;
    } PWM1CNT4STR;
    #define PWM1CNT4                    _PWM1CNT45.Overlap_STR.PWM1CNT4STR.Byte
    

    /*** PWM1CNT5 - PWM1 Channel Counter 5 Register; 0x00000511 ***/
    union {
      byte Byte;
    } PWM1CNT5STR;
    #define PWM1CNT5                    _PWM1CNT45.Overlap_STR.PWM1CNT5STR.Byte
    
  } Overlap_STR;

} PWM1CNT45STR;
extern volatile PWM1CNT45STR _PWM1CNT45 @0x00000510;
#define PWM1CNT45                       _PWM1CNT45.Word


/*** PWM1CNT67 - PWM1 Channel Counter 67 Register; 0x00000512 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1CNT6 - PWM1 Channel Counter 6 Register; 0x00000512 ***/
    union {
      byte Byte;
    } PWM1CNT6STR;
    #define PWM1CNT6                    _PWM1CNT67.Overlap_STR.PWM1CNT6STR.Byte
    

    /*** PWM1CNT7 - PWM1 Channel Counter 7 Register; 0x00000513 ***/
    union {
      byte Byte;
    } PWM1CNT7STR;
    #define PWM1CNT7                    _PWM1CNT67.Overlap_STR.PWM1CNT7STR.Byte
    
  } Overlap_STR;

} PWM1CNT67STR;
extern volatile PWM1CNT67STR _PWM1CNT67 @0x00000512;
#define PWM1CNT67                       _PWM1CNT67.Word


/*** PWM1PER01 - PWM1 Channel Period 01 Register; 0x00000514 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1PER0 - PWM1 Channel Period 0 Register; 0x00000514 ***/
    union {
      byte Byte;
    } PWM1PER0STR;
    #define PWM1PER0                    _PWM1PER01.Overlap_STR.PWM1PER0STR.Byte
    /* PWM1PER_ARR: Access 8 PWM1PERx registers in an array */
    #define PWM1PER_ARR                 ((volatile byte *) &PWM1PER0)
    

    /*** PWM1PER1 - PWM1 Channel Period 1 Register; 0x00000515 ***/
    union {
      byte Byte;
    } PWM1PER1STR;
    #define PWM1PER1                    _PWM1PER01.Overlap_STR.PWM1PER1STR.Byte
    
  } Overlap_STR;

} PWM1PER01STR;
extern volatile PWM1PER01STR _PWM1PER01 @0x00000514;
#define PWM1PER01                       _PWM1PER01.Word


/*** PWM1PER23 - PWM1 Channel Period 23 Register; 0x00000516 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1PER2 - PWM1 Channel Period 2 Register; 0x00000516 ***/
    union {
      byte Byte;
    } PWM1PER2STR;
    #define PWM1PER2                    _PWM1PER23.Overlap_STR.PWM1PER2STR.Byte
    

    /*** PWM1PER3 - PWM1 Channel Period 3 Register; 0x00000517 ***/
    union {
      byte Byte;
    } PWM1PER3STR;
    #define PWM1PER3                    _PWM1PER23.Overlap_STR.PWM1PER3STR.Byte
    
  } Overlap_STR;

} PWM1PER23STR;
extern volatile PWM1PER23STR _PWM1PER23 @0x00000516;
#define PWM1PER23                       _PWM1PER23.Word


/*** PWM1PER45 - PWM1 Channel Period 45 Register; 0x00000518 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1PER4 - PWM1 Channel Period 4 Register; 0x00000518 ***/
    union {
      byte Byte;
    } PWM1PER4STR;
    #define PWM1PER4                    _PWM1PER45.Overlap_STR.PWM1PER4STR.Byte
    

    /*** PWM1PER5 - PWM1 Channel Period 5 Register; 0x00000519 ***/
    union {
      byte Byte;
    } PWM1PER5STR;
    #define PWM1PER5                    _PWM1PER45.Overlap_STR.PWM1PER5STR.Byte
    
  } Overlap_STR;

} PWM1PER45STR;
extern volatile PWM1PER45STR _PWM1PER45 @0x00000518;
#define PWM1PER45                       _PWM1PER45.Word


/*** PWM1PER67 - PWM1 Channel Period 67 Register; 0x0000051A ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1PER6 - PWM1 Channel Period 6 Register; 0x0000051A ***/
    union {
      byte Byte;
    } PWM1PER6STR;
    #define PWM1PER6                    _PWM1PER67.Overlap_STR.PWM1PER6STR.Byte
    

    /*** PWM1PER7 - PWM1 Channel Period 7 Register; 0x0000051B ***/
    union {
      byte Byte;
    } PWM1PER7STR;
    #define PWM1PER7                    _PWM1PER67.Overlap_STR.PWM1PER7STR.Byte
    
  } Overlap_STR;

} PWM1PER67STR;
extern volatile PWM1PER67STR _PWM1PER67 @0x0000051A;
#define PWM1PER67                       _PWM1PER67.Word


/*** PWM1DTY01 - PWM1 Channel Duty 01 Register; 0x0000051C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1DTY0 - PWM1 Channel Duty 0 Register; 0x0000051C ***/
    union {
      byte Byte;
    } PWM1DTY0STR;
    #define PWM1DTY0                    _PWM1DTY01.Overlap_STR.PWM1DTY0STR.Byte
    /* PWM1DTY_ARR: Access 8 PWM1DTYx registers in an array */
    #define PWM1DTY_ARR                 ((volatile byte *) &PWM1DTY0)
    

    /*** PWM1DTY1 - PWM1 Channel Duty 1 Register; 0x0000051D ***/
    union {
      byte Byte;
    } PWM1DTY1STR;
    #define PWM1DTY1                    _PWM1DTY01.Overlap_STR.PWM1DTY1STR.Byte
    
  } Overlap_STR;

} PWM1DTY01STR;
extern volatile PWM1DTY01STR _PWM1DTY01 @0x0000051C;
#define PWM1DTY01                       _PWM1DTY01.Word


/*** PWM1DTY23 - PWM1 Channel Duty 23 Register; 0x0000051E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1DTY2 - PWM1 Channel Duty 2 Register; 0x0000051E ***/
    union {
      byte Byte;
    } PWM1DTY2STR;
    #define PWM1DTY2                    _PWM1DTY23.Overlap_STR.PWM1DTY2STR.Byte
    

    /*** PWM1DTY3 - PWM1 Channel Duty 3 Register; 0x0000051F ***/
    union {
      byte Byte;
    } PWM1DTY3STR;
    #define PWM1DTY3                    _PWM1DTY23.Overlap_STR.PWM1DTY3STR.Byte
    
  } Overlap_STR;

} PWM1DTY23STR;
extern volatile PWM1DTY23STR _PWM1DTY23 @0x0000051E;
#define PWM1DTY23                       _PWM1DTY23.Word


/*** PWM1DTY45 - PWM1 Channel Duty 45 Register; 0x00000520 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1DTY4 - PWM1 Channel Duty 4 Register; 0x00000520 ***/
    union {
      byte Byte;
    } PWM1DTY4STR;
    #define PWM1DTY4                    _PWM1DTY45.Overlap_STR.PWM1DTY4STR.Byte
    

    /*** PWM1DTY5 - PWM1 Channel Duty 5 Register; 0x00000521 ***/
    union {
      byte Byte;
    } PWM1DTY5STR;
    #define PWM1DTY5                    _PWM1DTY45.Overlap_STR.PWM1DTY5STR.Byte
    
  } Overlap_STR;

} PWM1DTY45STR;
extern volatile PWM1DTY45STR _PWM1DTY45 @0x00000520;
#define PWM1DTY45                       _PWM1DTY45.Word


/*** PWM1DTY67 - PWM1 Channel Duty 67 Register; 0x00000522 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PWM1DTY6 - PWM1 Channel Duty 6 Register; 0x00000522 ***/
    union {
      byte Byte;
    } PWM1DTY6STR;
    #define PWM1DTY6                    _PWM1DTY67.Overlap_STR.PWM1DTY6STR.Byte
    

    /*** PWM1DTY7 - PWM1 Channel Duty 7 Register; 0x00000523 ***/
    union {
      byte Byte;
    } PWM1DTY7STR;
    #define PWM1DTY7                    _PWM1DTY67.Overlap_STR.PWM1DTY7STR.Byte
    
  } Overlap_STR;

} PWM1DTY67STR;
extern volatile PWM1DTY67STR _PWM1DTY67 @0x00000522;
#define PWM1DTY67                       _PWM1DTY67.Word


/*** TIM0TIOS - Timer Input Capture/Output Compare Select; 0x000005C0 ***/
typedef union {
  byte Byte;
  struct {
    byte IOS0        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 0 */
    byte IOS1        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 1 */
    byte IOS2        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 2 */
    byte IOS3        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 3 */
    byte IOS4        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 4 */
    byte IOS5        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 5 */
    byte IOS6        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 6 */
    byte IOS7        :1;                                       /* Input Capture or Output Compare Channel Configuration Bit 7 */
  } Bits;
} TIM0TIOSSTR;
extern volatile TIM0TIOSSTR _TIM0TIOS @0x000005C0;
#define TIM0TIOS                        _TIM0TIOS.Byte
#define TIM0TIOS_IOS0                   _TIM0TIOS.Bits.IOS0
#define TIM0TIOS_IOS1                   _TIM0TIOS.Bits.IOS1
#define TIM0TIOS_IOS2                   _TIM0TIOS.Bits.IOS2
#define TIM0TIOS_IOS3                   _TIM0TIOS.Bits.IOS3
#define TIM0TIOS_IOS4                   _TIM0TIOS.Bits.IOS4
#define TIM0TIOS_IOS5                   _TIM0TIOS.Bits.IOS5
#define TIM0TIOS_IOS6                   _TIM0TIOS.Bits.IOS6
#define TIM0TIOS_IOS7                   _TIM0TIOS.Bits.IOS7

#define TIM0TIOS_IOS0_MASK              1U
#define TIM0TIOS_IOS1_MASK              2U
#define TIM0TIOS_IOS2_MASK              4U
#define TIM0TIOS_IOS3_MASK              8U
#define TIM0TIOS_IOS4_MASK              16U
#define TIM0TIOS_IOS5_MASK              32U
#define TIM0TIOS_IOS6_MASK              64U
#define TIM0TIOS_IOS7_MASK              128U


/*** TIM0CFORC - Timer Compare Force Register; 0x000005C1 ***/
typedef union {
  byte Byte;
  struct {
    byte FOC0        :1;                                       /* Force Output Compare Action for Channel 0 */
    byte FOC1        :1;                                       /* Force Output Compare Action for Channel 1 */
    byte FOC2        :1;                                       /* Force Output Compare Action for Channel 2 */
    byte FOC3        :1;                                       /* Force Output Compare Action for Channel 3 */
    byte FOC4        :1;                                       /* Force Output Compare Action for Channel 4 */
    byte FOC5        :1;                                       /* Force Output Compare Action for Channel 5 */
    byte FOC6        :1;                                       /* Force Output Compare Action for Channel 6 */
    byte FOC7        :1;                                       /* Force Output Compare Action for Channel 7 */
  } Bits;
} TIM0CFORCSTR;
extern volatile TIM0CFORCSTR _TIM0CFORC @0x000005C1;
#define TIM0CFORC                       _TIM0CFORC.Byte
#define TIM0CFORC_FOC0                  _TIM0CFORC.Bits.FOC0
#define TIM0CFORC_FOC1                  _TIM0CFORC.Bits.FOC1
#define TIM0CFORC_FOC2                  _TIM0CFORC.Bits.FOC2
#define TIM0CFORC_FOC3                  _TIM0CFORC.Bits.FOC3
#define TIM0CFORC_FOC4                  _TIM0CFORC.Bits.FOC4
#define TIM0CFORC_FOC5                  _TIM0CFORC.Bits.FOC5
#define TIM0CFORC_FOC6                  _TIM0CFORC.Bits.FOC6
#define TIM0CFORC_FOC7                  _TIM0CFORC.Bits.FOC7

#define TIM0CFORC_FOC0_MASK             1U
#define TIM0CFORC_FOC1_MASK             2U
#define TIM0CFORC_FOC2_MASK             4U
#define TIM0CFORC_FOC3_MASK             8U
#define TIM0CFORC_FOC4_MASK             16U
#define TIM0CFORC_FOC5_MASK             32U
#define TIM0CFORC_FOC6_MASK             64U
#define TIM0CFORC_FOC7_MASK             128U


/*** TIM0OC7M - Output Compare 7 Mask Register; 0x000005C2 ***/
typedef union {
  byte Byte;
  struct {
    byte OC7M0       :1;                                       /* Output Compare 7 Mask Bit 0 */
    byte OC7M1       :1;                                       /* Output Compare 7 Mask Bit 1 */
    byte OC7M2       :1;                                       /* Output Compare 7 Mask Bit 2 */
    byte OC7M3       :1;                                       /* Output Compare 7 Mask Bit 3 */
    byte OC7M4       :1;                                       /* Output Compare 7 Mask Bit 4 */
    byte OC7M5       :1;                                       /* Output Compare 7 Mask Bit 5 */
    byte OC7M6       :1;                                       /* Output Compare 7 Mask Bit 6 */
    byte OC7M7       :1;                                       /* Output Compare 7 Mask Bit 7 */
  } Bits;
} TIM0OC7MSTR;
extern volatile TIM0OC7MSTR _TIM0OC7M @0x000005C2;
#define TIM0OC7M                        _TIM0OC7M.Byte
#define TIM0OC7M_OC7M0                  _TIM0OC7M.Bits.OC7M0
#define TIM0OC7M_OC7M1                  _TIM0OC7M.Bits.OC7M1
#define TIM0OC7M_OC7M2                  _TIM0OC7M.Bits.OC7M2
#define TIM0OC7M_OC7M3                  _TIM0OC7M.Bits.OC7M3
#define TIM0OC7M_OC7M4                  _TIM0OC7M.Bits.OC7M4
#define TIM0OC7M_OC7M5                  _TIM0OC7M.Bits.OC7M5
#define TIM0OC7M_OC7M6                  _TIM0OC7M.Bits.OC7M6
#define TIM0OC7M_OC7M7                  _TIM0OC7M.Bits.OC7M7

#define TIM0OC7M_OC7M0_MASK             1U
#define TIM0OC7M_OC7M1_MASK             2U
#define TIM0OC7M_OC7M2_MASK             4U
#define TIM0OC7M_OC7M3_MASK             8U
#define TIM0OC7M_OC7M4_MASK             16U
#define TIM0OC7M_OC7M5_MASK             32U
#define TIM0OC7M_OC7M6_MASK             64U
#define TIM0OC7M_OC7M7_MASK             128U


/*** TIM0OC7D - Output Compare 7 Data Register; 0x000005C3 ***/
typedef union {
  byte Byte;
  struct {
    byte OC7D0       :1;                                       /* Output Compare 7 Bit 0 */
    byte OC7D1       :1;                                       /* Output Compare 7 Bit 1 */
    byte OC7D2       :1;                                       /* Output Compare 7 Bit 2 */
    byte OC7D3       :1;                                       /* Output Compare 7 Bit 3 */
    byte OC7D4       :1;                                       /* Output Compare 7 Bit 4 */
    byte OC7D5       :1;                                       /* Output Compare 7 Bit 5 */
    byte OC7D6       :1;                                       /* Output Compare 7 Bit 6 */
    byte OC7D7       :1;                                       /* Output Compare 7 Bit 7 */
  } Bits;
} TIM0OC7DSTR;
extern volatile TIM0OC7DSTR _TIM0OC7D @0x000005C3;
#define TIM0OC7D                        _TIM0OC7D.Byte
#define TIM0OC7D_OC7D0                  _TIM0OC7D.Bits.OC7D0
#define TIM0OC7D_OC7D1                  _TIM0OC7D.Bits.OC7D1
#define TIM0OC7D_OC7D2                  _TIM0OC7D.Bits.OC7D2
#define TIM0OC7D_OC7D3                  _TIM0OC7D.Bits.OC7D3
#define TIM0OC7D_OC7D4                  _TIM0OC7D.Bits.OC7D4
#define TIM0OC7D_OC7D5                  _TIM0OC7D.Bits.OC7D5
#define TIM0OC7D_OC7D6                  _TIM0OC7D.Bits.OC7D6
#define TIM0OC7D_OC7D7                  _TIM0OC7D.Bits.OC7D7

#define TIM0OC7D_OC7D0_MASK             1U
#define TIM0OC7D_OC7D1_MASK             2U
#define TIM0OC7D_OC7D2_MASK             4U
#define TIM0OC7D_OC7D3_MASK             8U
#define TIM0OC7D_OC7D4_MASK             16U
#define TIM0OC7D_OC7D5_MASK             32U
#define TIM0OC7D_OC7D6_MASK             64U
#define TIM0OC7D_OC7D7_MASK             128U


/*** TIM0TCNT - Timer Count Register; 0x000005C4 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TCNTHi - Timer Count Register High (OBSOLETE - defined for backward compatibility); 0x000005C4 ***/
    union {
      byte Byte;
      /*** TIM0TCNTHi - Timer Count Register High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TCNTHi                _TIM0TCNT.Overlap_STR.TIM0TCNTHiSTR.Byte
      
      /*** TIM0TCNTH - Timer Count Register High; Several registers at the same address ***/
      #define TIM0TCNTH                 _TIM0TCNT.Overlap_STR.TIM0TCNTHiSTR.Byte
      
    } TIM0TCNTHiSTR;
    

    /*** TIM0TCNTLo - Timer Count Register Low (OBSOLETE - defined for backward compatibility); 0x000005C5 ***/
    union {
      byte Byte;
      /*** TIM0TCNTLo - Timer Count Register Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TCNTLo                _TIM0TCNT.Overlap_STR.TIM0TCNTLoSTR.Byte
      
      /*** TIM0TCNTL - Timer Count Register Low; Several registers at the same address ***/
      #define TIM0TCNTL                 _TIM0TCNT.Overlap_STR.TIM0TCNTLoSTR.Byte
      
    } TIM0TCNTLoSTR;
    
  } Overlap_STR;

} TIM0TCNTSTR;
extern volatile TIM0TCNTSTR _TIM0TCNT @0x000005C4;
#define TIM0TCNT                        _TIM0TCNT.Word


/*** TIM0TSCR1 - Timer System Control Register1; 0x000005C6 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte PRNT        :1;                                       /* Precision Timer */
    byte TFFCA       :1;                                       /* Timer Fast Flag Clear All */
    byte TSFRZ       :1;                                       /* Timer and Modulus Counter Stop While in Freeze Mode */
    byte TSWAI       :1;                                       /* Timer Module Stops While in Wait */
    byte TEN         :1;                                       /* Timer Enable */
  } Bits;
} TIM0TSCR1STR;
extern volatile TIM0TSCR1STR _TIM0TSCR1 @0x000005C6;
#define TIM0TSCR1                       _TIM0TSCR1.Byte
#define TIM0TSCR1_PRNT                  _TIM0TSCR1.Bits.PRNT
#define TIM0TSCR1_TFFCA                 _TIM0TSCR1.Bits.TFFCA
#define TIM0TSCR1_TSFRZ                 _TIM0TSCR1.Bits.TSFRZ
#define TIM0TSCR1_TSWAI                 _TIM0TSCR1.Bits.TSWAI
#define TIM0TSCR1_TEN                   _TIM0TSCR1.Bits.TEN

#define TIM0TSCR1_PRNT_MASK             8U
#define TIM0TSCR1_TFFCA_MASK            16U
#define TIM0TSCR1_TSFRZ_MASK            32U
#define TIM0TSCR1_TSWAI_MASK            64U
#define TIM0TSCR1_TEN_MASK              128U


/*** TIM0TTOV - Timer Toggle On Overflow Register; 0x000005C7 ***/
typedef union {
  byte Byte;
  struct {
    byte TOV0        :1;                                       /* Toggle On Overflow Bit 0 */
    byte TOV1        :1;                                       /* Toggle On Overflow Bit 1 */
    byte TOV2        :1;                                       /* Toggle On Overflow Bit 2 */
    byte TOV3        :1;                                       /* Toggle On Overflow Bit 3 */
    byte TOV4        :1;                                       /* Toggle On Overflow Bit 4 */
    byte TOV5        :1;                                       /* Toggle On Overflow Bit 5 */
    byte TOV6        :1;                                       /* Toggle On Overflow Bit 6 */
    byte TOV7        :1;                                       /* Toggle On Overflow Bit 7 */
  } Bits;
} TIM0TTOVSTR;
extern volatile TIM0TTOVSTR _TIM0TTOV @0x000005C7;
#define TIM0TTOV                        _TIM0TTOV.Byte
#define TIM0TTOV_TOV0                   _TIM0TTOV.Bits.TOV0
#define TIM0TTOV_TOV1                   _TIM0TTOV.Bits.TOV1
#define TIM0TTOV_TOV2                   _TIM0TTOV.Bits.TOV2
#define TIM0TTOV_TOV3                   _TIM0TTOV.Bits.TOV3
#define TIM0TTOV_TOV4                   _TIM0TTOV.Bits.TOV4
#define TIM0TTOV_TOV5                   _TIM0TTOV.Bits.TOV5
#define TIM0TTOV_TOV6                   _TIM0TTOV.Bits.TOV6
#define TIM0TTOV_TOV7                   _TIM0TTOV.Bits.TOV7

#define TIM0TTOV_TOV0_MASK              1U
#define TIM0TTOV_TOV1_MASK              2U
#define TIM0TTOV_TOV2_MASK              4U
#define TIM0TTOV_TOV3_MASK              8U
#define TIM0TTOV_TOV4_MASK              16U
#define TIM0TTOV_TOV5_MASK              32U
#define TIM0TTOV_TOV6_MASK              64U
#define TIM0TTOV_TOV7_MASK              128U


/*** TIM0TCTL1 - Timer Control Register 1; 0x000005C8 ***/
typedef union {
  byte Byte;
  struct {
    byte OL4         :1;                                       /* Output Level Bit 4 */
    byte OM4         :1;                                       /* Output Mode Bit 4 */
    byte OL5         :1;                                       /* Output Level Bit 5 */
    byte OM5         :1;                                       /* Output Mode Bit 5 */
    byte OL6         :1;                                       /* Output Level Bit 6 */
    byte OM6         :1;                                       /* Output Mode Bit 6 */
    byte OL7         :1;                                       /* Output Level Bit 7 */
    byte OM7         :1;                                       /* Output Mode Bit 7 */
  } Bits;
} TIM0TCTL1STR;
extern volatile TIM0TCTL1STR _TIM0TCTL1 @0x000005C8;
#define TIM0TCTL1                       _TIM0TCTL1.Byte
#define TIM0TCTL1_OL4                   _TIM0TCTL1.Bits.OL4
#define TIM0TCTL1_OM4                   _TIM0TCTL1.Bits.OM4
#define TIM0TCTL1_OL5                   _TIM0TCTL1.Bits.OL5
#define TIM0TCTL1_OM5                   _TIM0TCTL1.Bits.OM5
#define TIM0TCTL1_OL6                   _TIM0TCTL1.Bits.OL6
#define TIM0TCTL1_OM6                   _TIM0TCTL1.Bits.OM6
#define TIM0TCTL1_OL7                   _TIM0TCTL1.Bits.OL7
#define TIM0TCTL1_OM7                   _TIM0TCTL1.Bits.OM7

#define TIM0TCTL1_OL4_MASK              1U
#define TIM0TCTL1_OM4_MASK              2U
#define TIM0TCTL1_OL5_MASK              4U
#define TIM0TCTL1_OM5_MASK              8U
#define TIM0TCTL1_OL6_MASK              16U
#define TIM0TCTL1_OM6_MASK              32U
#define TIM0TCTL1_OL7_MASK              64U
#define TIM0TCTL1_OM7_MASK              128U


/*** TIM0TCTL2 - Timer Control Register 2; 0x000005C9 ***/
typedef union {
  byte Byte;
  struct {
    byte OL0         :1;                                       /* Output Level Bit 0 */
    byte OM0         :1;                                       /* Output Mode Bit 0 */
    byte OL1         :1;                                       /* Output Level Bit 1 */
    byte OM1         :1;                                       /* Output Mode Bit 1 */
    byte OL2         :1;                                       /* Output Level Bit 2 */
    byte OM2         :1;                                       /* Output Mode Bit 2 */
    byte OL3         :1;                                       /* Output Level Bit 3 */
    byte OM3         :1;                                       /* Output Mode Bit 3 */
  } Bits;
} TIM0TCTL2STR;
extern volatile TIM0TCTL2STR _TIM0TCTL2 @0x000005C9;
#define TIM0TCTL2                       _TIM0TCTL2.Byte
#define TIM0TCTL2_OL0                   _TIM0TCTL2.Bits.OL0
#define TIM0TCTL2_OM0                   _TIM0TCTL2.Bits.OM0
#define TIM0TCTL2_OL1                   _TIM0TCTL2.Bits.OL1
#define TIM0TCTL2_OM1                   _TIM0TCTL2.Bits.OM1
#define TIM0TCTL2_OL2                   _TIM0TCTL2.Bits.OL2
#define TIM0TCTL2_OM2                   _TIM0TCTL2.Bits.OM2
#define TIM0TCTL2_OL3                   _TIM0TCTL2.Bits.OL3
#define TIM0TCTL2_OM3                   _TIM0TCTL2.Bits.OM3

#define TIM0TCTL2_OL0_MASK              1U
#define TIM0TCTL2_OM0_MASK              2U
#define TIM0TCTL2_OL1_MASK              4U
#define TIM0TCTL2_OM1_MASK              8U
#define TIM0TCTL2_OL2_MASK              16U
#define TIM0TCTL2_OM2_MASK              32U
#define TIM0TCTL2_OL3_MASK              64U
#define TIM0TCTL2_OM3_MASK              128U


/*** TIM0TCTL3 - Timer Control Register 3; 0x000005CA ***/
typedef union {
  byte Byte;
  struct {
    byte EDG4A       :1;                                       /* Input Capture Edge Control 4A */
    byte EDG4B       :1;                                       /* Input Capture Edge Control 4B */
    byte EDG5A       :1;                                       /* Input Capture Edge Control 5A */
    byte EDG5B       :1;                                       /* Input Capture Edge Control 5B */
    byte EDG6A       :1;                                       /* Input Capture Edge Control 6A */
    byte EDG6B       :1;                                       /* Input Capture Edge Control 6B */
    byte EDG7A       :1;                                       /* Input Capture Edge Control 7A */
    byte EDG7B       :1;                                       /* Input Capture Edge Control 7B */
  } Bits;
  struct {
    byte grpEDG4x :2;
    byte grpEDG5x :2;
    byte grpEDG6x :2;
    byte grpEDG7x :2;
  } MergedBits;
} TIM0TCTL3STR;
extern volatile TIM0TCTL3STR _TIM0TCTL3 @0x000005CA;
#define TIM0TCTL3                       _TIM0TCTL3.Byte
#define TIM0TCTL3_EDG4A                 _TIM0TCTL3.Bits.EDG4A
#define TIM0TCTL3_EDG4B                 _TIM0TCTL3.Bits.EDG4B
#define TIM0TCTL3_EDG5A                 _TIM0TCTL3.Bits.EDG5A
#define TIM0TCTL3_EDG5B                 _TIM0TCTL3.Bits.EDG5B
#define TIM0TCTL3_EDG6A                 _TIM0TCTL3.Bits.EDG6A
#define TIM0TCTL3_EDG6B                 _TIM0TCTL3.Bits.EDG6B
#define TIM0TCTL3_EDG7A                 _TIM0TCTL3.Bits.EDG7A
#define TIM0TCTL3_EDG7B                 _TIM0TCTL3.Bits.EDG7B
#define TIM0TCTL3_EDG4x                 _TIM0TCTL3.MergedBits.grpEDG4x
#define TIM0TCTL3_EDG5x                 _TIM0TCTL3.MergedBits.grpEDG5x
#define TIM0TCTL3_EDG6x                 _TIM0TCTL3.MergedBits.grpEDG6x
#define TIM0TCTL3_EDG7x                 _TIM0TCTL3.MergedBits.grpEDG7x

#define TIM0TCTL3_EDG4A_MASK            1U
#define TIM0TCTL3_EDG4B_MASK            2U
#define TIM0TCTL3_EDG5A_MASK            4U
#define TIM0TCTL3_EDG5B_MASK            8U
#define TIM0TCTL3_EDG6A_MASK            16U
#define TIM0TCTL3_EDG6B_MASK            32U
#define TIM0TCTL3_EDG7A_MASK            64U
#define TIM0TCTL3_EDG7B_MASK            128U
#define TIM0TCTL3_EDG4x_MASK            3U
#define TIM0TCTL3_EDG4x_BITNUM          0U
#define TIM0TCTL3_EDG5x_MASK            12U
#define TIM0TCTL3_EDG5x_BITNUM          2U
#define TIM0TCTL3_EDG6x_MASK            48U
#define TIM0TCTL3_EDG6x_BITNUM          4U
#define TIM0TCTL3_EDG7x_MASK            192U
#define TIM0TCTL3_EDG7x_BITNUM          6U


/*** TIM0TCTL4 - Timer Control Register 4; 0x000005CB ***/
typedef union {
  byte Byte;
  struct {
    byte EDG0A       :1;                                       /* Input Capture Edge Control 0A */
    byte EDG0B       :1;                                       /* Input Capture Edge Control 0B */
    byte EDG1A       :1;                                       /* Input Capture Edge Control 1A */
    byte EDG1B       :1;                                       /* Input Capture Edge Control 1B */
    byte EDG2A       :1;                                       /* Input Capture Edge Control 2A */
    byte EDG2B       :1;                                       /* Input Capture Edge Control 2B */
    byte EDG3A       :1;                                       /* Input Capture Edge Control 3A */
    byte EDG3B       :1;                                       /* Input Capture Edge Control 3B */
  } Bits;
  struct {
    byte grpEDG0x :2;
    byte grpEDG1x :2;
    byte grpEDG2x :2;
    byte grpEDG3x :2;
  } MergedBits;
} TIM0TCTL4STR;
extern volatile TIM0TCTL4STR _TIM0TCTL4 @0x000005CB;
#define TIM0TCTL4                       _TIM0TCTL4.Byte
#define TIM0TCTL4_EDG0A                 _TIM0TCTL4.Bits.EDG0A
#define TIM0TCTL4_EDG0B                 _TIM0TCTL4.Bits.EDG0B
#define TIM0TCTL4_EDG1A                 _TIM0TCTL4.Bits.EDG1A
#define TIM0TCTL4_EDG1B                 _TIM0TCTL4.Bits.EDG1B
#define TIM0TCTL4_EDG2A                 _TIM0TCTL4.Bits.EDG2A
#define TIM0TCTL4_EDG2B                 _TIM0TCTL4.Bits.EDG2B
#define TIM0TCTL4_EDG3A                 _TIM0TCTL4.Bits.EDG3A
#define TIM0TCTL4_EDG3B                 _TIM0TCTL4.Bits.EDG3B
#define TIM0TCTL4_EDG0x                 _TIM0TCTL4.MergedBits.grpEDG0x
#define TIM0TCTL4_EDG1x                 _TIM0TCTL4.MergedBits.grpEDG1x
#define TIM0TCTL4_EDG2x                 _TIM0TCTL4.MergedBits.grpEDG2x
#define TIM0TCTL4_EDG3x                 _TIM0TCTL4.MergedBits.grpEDG3x

#define TIM0TCTL4_EDG0A_MASK            1U
#define TIM0TCTL4_EDG0B_MASK            2U
#define TIM0TCTL4_EDG1A_MASK            4U
#define TIM0TCTL4_EDG1B_MASK            8U
#define TIM0TCTL4_EDG2A_MASK            16U
#define TIM0TCTL4_EDG2B_MASK            32U
#define TIM0TCTL4_EDG3A_MASK            64U
#define TIM0TCTL4_EDG3B_MASK            128U
#define TIM0TCTL4_EDG0x_MASK            3U
#define TIM0TCTL4_EDG0x_BITNUM          0U
#define TIM0TCTL4_EDG1x_MASK            12U
#define TIM0TCTL4_EDG1x_BITNUM          2U
#define TIM0TCTL4_EDG2x_MASK            48U
#define TIM0TCTL4_EDG2x_BITNUM          4U
#define TIM0TCTL4_EDG3x_MASK            192U
#define TIM0TCTL4_EDG3x_BITNUM          6U


/*** TIM0TIE - Timer Interrupt Enable Register; 0x000005CC ***/
typedef union {
  byte Byte;
  struct {
    byte C0I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 0 */
    byte C1I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 1 */
    byte C2I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 2 */
    byte C3I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 3 */
    byte C4I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 4 */
    byte C5I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 5 */
    byte C6I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 6 */
    byte C7I         :1;                                       /* Input Capture/Output Compare Interrupt Enable Bit 7 */
  } Bits;
} TIM0TIESTR;
extern volatile TIM0TIESTR _TIM0TIE @0x000005CC;
#define TIM0TIE                         _TIM0TIE.Byte
#define TIM0TIE_C0I                     _TIM0TIE.Bits.C0I
#define TIM0TIE_C1I                     _TIM0TIE.Bits.C1I
#define TIM0TIE_C2I                     _TIM0TIE.Bits.C2I
#define TIM0TIE_C3I                     _TIM0TIE.Bits.C3I
#define TIM0TIE_C4I                     _TIM0TIE.Bits.C4I
#define TIM0TIE_C5I                     _TIM0TIE.Bits.C5I
#define TIM0TIE_C6I                     _TIM0TIE.Bits.C6I
#define TIM0TIE_C7I                     _TIM0TIE.Bits.C7I

#define TIM0TIE_C0I_MASK                1U
#define TIM0TIE_C1I_MASK                2U
#define TIM0TIE_C2I_MASK                4U
#define TIM0TIE_C3I_MASK                8U
#define TIM0TIE_C4I_MASK                16U
#define TIM0TIE_C5I_MASK                32U
#define TIM0TIE_C6I_MASK                64U
#define TIM0TIE_C7I_MASK                128U


/*** TIM0TSCR2 - Timer System Control Register 2; 0x000005CD ***/
typedef union {
  byte Byte;
  struct {
    byte PR0         :1;                                       /* Timer Prescaler Select Bit 0 */
    byte PR1         :1;                                       /* Timer Prescaler Select Bit 1 */
    byte PR2         :1;                                       /* Timer Prescaler Select Bit 2 */
    byte TCRE        :1;                                       /* Timer Counter Reset Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte TOI         :1;                                       /* Timer Overflow Interrupt Enable */
  } Bits;
  struct {
    byte grpPR   :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM0TSCR2STR;
extern volatile TIM0TSCR2STR _TIM0TSCR2 @0x000005CD;
#define TIM0TSCR2                       _TIM0TSCR2.Byte
#define TIM0TSCR2_PR0                   _TIM0TSCR2.Bits.PR0
#define TIM0TSCR2_PR1                   _TIM0TSCR2.Bits.PR1
#define TIM0TSCR2_PR2                   _TIM0TSCR2.Bits.PR2
#define TIM0TSCR2_TCRE                  _TIM0TSCR2.Bits.TCRE
#define TIM0TSCR2_TOI                   _TIM0TSCR2.Bits.TOI
#define TIM0TSCR2_PR                    _TIM0TSCR2.MergedBits.grpPR

#define TIM0TSCR2_PR0_MASK              1U
#define TIM0TSCR2_PR1_MASK              2U
#define TIM0TSCR2_PR2_MASK              4U
#define TIM0TSCR2_TCRE_MASK             8U
#define TIM0TSCR2_TOI_MASK              128U
#define TIM0TSCR2_PR_MASK               7U
#define TIM0TSCR2_PR_BITNUM             0U


/*** TIM0TFLG1 - Main Timer Interrupt Flag 1; 0x000005CE ***/
typedef union {
  byte Byte;
  struct {
    byte C0F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 0 */
    byte C1F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 1 */
    byte C2F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 2 */
    byte C3F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 3 */
    byte C4F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 4 */
    byte C5F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 5 */
    byte C6F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 6 */
    byte C7F         :1;                                       /* Input Capture/Output Compare Channel interrupt flag 7 */
  } Bits;
} TIM0TFLG1STR;
extern volatile TIM0TFLG1STR _TIM0TFLG1 @0x000005CE;
#define TIM0TFLG1                       _TIM0TFLG1.Byte
#define TIM0TFLG1_C0F                   _TIM0TFLG1.Bits.C0F
#define TIM0TFLG1_C1F                   _TIM0TFLG1.Bits.C1F
#define TIM0TFLG1_C2F                   _TIM0TFLG1.Bits.C2F
#define TIM0TFLG1_C3F                   _TIM0TFLG1.Bits.C3F
#define TIM0TFLG1_C4F                   _TIM0TFLG1.Bits.C4F
#define TIM0TFLG1_C5F                   _TIM0TFLG1.Bits.C5F
#define TIM0TFLG1_C6F                   _TIM0TFLG1.Bits.C6F
#define TIM0TFLG1_C7F                   _TIM0TFLG1.Bits.C7F

#define TIM0TFLG1_C0F_MASK              1U
#define TIM0TFLG1_C1F_MASK              2U
#define TIM0TFLG1_C2F_MASK              4U
#define TIM0TFLG1_C3F_MASK              8U
#define TIM0TFLG1_C4F_MASK              16U
#define TIM0TFLG1_C5F_MASK              32U
#define TIM0TFLG1_C6F_MASK              64U
#define TIM0TFLG1_C7F_MASK              128U


/*** TIM0TFLG2 - Main Timer Interrupt Flag 2; 0x000005CF ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte TOF         :1;                                       /* Timer Overflow interrupt flag */
  } Bits;
} TIM0TFLG2STR;
extern volatile TIM0TFLG2STR _TIM0TFLG2 @0x000005CF;
#define TIM0TFLG2                       _TIM0TFLG2.Byte
#define TIM0TFLG2_TOF                   _TIM0TFLG2.Bits.TOF

#define TIM0TFLG2_TOF_MASK              128U


/*** TIM0TC0 - Timer Input Capture/Output Compare Register 0; 0x000005D0 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC0Hi - Timer Input Capture/Output Compare Register 0 High (OBSOLETE - defined for backward compatibility); 0x000005D0 ***/
    union {
      byte Byte;
      /*** TIM0TC0Hi - Timer Input Capture/Output Compare Register 0 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC0Hi                 _TIM0TC0.Overlap_STR.TIM0TC0HiSTR.Byte
      
      /*** TIM0TC0H - Timer Input Capture/Output Compare Register 0 High; Several registers at the same address ***/
      #define TIM0TC0H                  _TIM0TC0.Overlap_STR.TIM0TC0HiSTR.Byte
      
    } TIM0TC0HiSTR;
    

    /*** TIM0TC0Lo - Timer Input Capture/Output Compare Register 0 Low (OBSOLETE - defined for backward compatibility); 0x000005D1 ***/
    union {
      byte Byte;
      /*** TIM0TC0Lo - Timer Input Capture/Output Compare Register 0 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC0Lo                 _TIM0TC0.Overlap_STR.TIM0TC0LoSTR.Byte
      
      /*** TIM0TC0L - Timer Input Capture/Output Compare Register 0 Low; Several registers at the same address ***/
      #define TIM0TC0L                  _TIM0TC0.Overlap_STR.TIM0TC0LoSTR.Byte
      
    } TIM0TC0LoSTR;
    
  } Overlap_STR;

} TIM0TC0STR;
extern volatile TIM0TC0STR _TIM0TC0 @0x000005D0;
#define TIM0TC0                         _TIM0TC0.Word
/* TIM0TC_ARR: Access 8 TIM0TCx registers in an array */
#define TIM0TC_ARR                      ((volatile word *) &TIM0TC0)


/*** TIM0TC1 - Timer Input Capture/Output Compare Register 1; 0x000005D2 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC1Hi - Timer Input Capture/Output Compare Register 1 High (OBSOLETE - defined for backward compatibility); 0x000005D2 ***/
    union {
      byte Byte;
      /*** TIM0TC1Hi - Timer Input Capture/Output Compare Register 1 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC1Hi                 _TIM0TC1.Overlap_STR.TIM0TC1HiSTR.Byte
      
      /*** TIM0TC1H - Timer Input Capture/Output Compare Register 1 High; Several registers at the same address ***/
      #define TIM0TC1H                  _TIM0TC1.Overlap_STR.TIM0TC1HiSTR.Byte
      
    } TIM0TC1HiSTR;
    

    /*** TIM0TC1Lo - Timer Input Capture/Output Compare Register 1 Low (OBSOLETE - defined for backward compatibility); 0x000005D3 ***/
    union {
      byte Byte;
      /*** TIM0TC1Lo - Timer Input Capture/Output Compare Register 1 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC1Lo                 _TIM0TC1.Overlap_STR.TIM0TC1LoSTR.Byte
      
      /*** TIM0TC1L - Timer Input Capture/Output Compare Register 1 Low; Several registers at the same address ***/
      #define TIM0TC1L                  _TIM0TC1.Overlap_STR.TIM0TC1LoSTR.Byte
      
    } TIM0TC1LoSTR;
    
  } Overlap_STR;

} TIM0TC1STR;
extern volatile TIM0TC1STR _TIM0TC1 @0x000005D2;
#define TIM0TC1                         _TIM0TC1.Word


/*** TIM0TC2 - Timer Input Capture/Output Compare Register 2; 0x000005D4 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC2Hi - Timer Input Capture/Output Compare Register 2 High (OBSOLETE - defined for backward compatibility); 0x000005D4 ***/
    union {
      byte Byte;
      /*** TIM0TC2Hi - Timer Input Capture/Output Compare Register 2 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC2Hi                 _TIM0TC2.Overlap_STR.TIM0TC2HiSTR.Byte
      
      /*** TIM0TC2H - Timer Input Capture/Output Compare Register 2 High; Several registers at the same address ***/
      #define TIM0TC2H                  _TIM0TC2.Overlap_STR.TIM0TC2HiSTR.Byte
      
    } TIM0TC2HiSTR;
    

    /*** TIM0TC2Lo - Timer Input Capture/Output Compare Register 2 Low (OBSOLETE - defined for backward compatibility); 0x000005D5 ***/
    union {
      byte Byte;
      /*** TIM0TC2Lo - Timer Input Capture/Output Compare Register 2 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC2Lo                 _TIM0TC2.Overlap_STR.TIM0TC2LoSTR.Byte
      
      /*** TIM0TC2L - Timer Input Capture/Output Compare Register 2 Low; Several registers at the same address ***/
      #define TIM0TC2L                  _TIM0TC2.Overlap_STR.TIM0TC2LoSTR.Byte
      
    } TIM0TC2LoSTR;
    
  } Overlap_STR;

} TIM0TC2STR;
extern volatile TIM0TC2STR _TIM0TC2 @0x000005D4;
#define TIM0TC2                         _TIM0TC2.Word


/*** TIM0TC3 - Timer Input Capture/Output Compare Register 3; 0x000005D6 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC3Hi - Timer Input Capture/Output Compare Register 3 High (OBSOLETE - defined for backward compatibility); 0x000005D6 ***/
    union {
      byte Byte;
      /*** TIM0TC3Hi - Timer Input Capture/Output Compare Register 3 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC3Hi                 _TIM0TC3.Overlap_STR.TIM0TC3HiSTR.Byte
      
      /*** TIM0TC3H - Timer Input Capture/Output Compare Register 3 High; Several registers at the same address ***/
      #define TIM0TC3H                  _TIM0TC3.Overlap_STR.TIM0TC3HiSTR.Byte
      
    } TIM0TC3HiSTR;
    

    /*** TIM0TC3Lo - Timer Input Capture/Output Compare Register 3 Low (OBSOLETE - defined for backward compatibility); 0x000005D7 ***/
    union {
      byte Byte;
      /*** TIM0TC3Lo - Timer Input Capture/Output Compare Register 3 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC3Lo                 _TIM0TC3.Overlap_STR.TIM0TC3LoSTR.Byte
      
      /*** TIM0TC3L - Timer Input Capture/Output Compare Register 3 Low; Several registers at the same address ***/
      #define TIM0TC3L                  _TIM0TC3.Overlap_STR.TIM0TC3LoSTR.Byte
      
    } TIM0TC3LoSTR;
    
  } Overlap_STR;

} TIM0TC3STR;
extern volatile TIM0TC3STR _TIM0TC3 @0x000005D6;
#define TIM0TC3                         _TIM0TC3.Word


/*** TIM0TC4 - Timer Input Capture/Output Compare Register 4; 0x000005D8 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC4Hi - Timer Input Capture/Output Compare Register 4 High (OBSOLETE - defined for backward compatibility); 0x000005D8 ***/
    union {
      byte Byte;
      /*** TIM0TC4Hi - Timer Input Capture/Output Compare Register 4 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC4Hi                 _TIM0TC4.Overlap_STR.TIM0TC4HiSTR.Byte
      
      /*** TIM0TC4H - Timer Input Capture/Output Compare Register 4 High; Several registers at the same address ***/
      #define TIM0TC4H                  _TIM0TC4.Overlap_STR.TIM0TC4HiSTR.Byte
      
    } TIM0TC4HiSTR;
    

    /*** TIM0TC4Lo - Timer Input Capture/Output Compare Register 4 Low (OBSOLETE - defined for backward compatibility); 0x000005D9 ***/
    union {
      byte Byte;
      /*** TIM0TC4Lo - Timer Input Capture/Output Compare Register 4 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC4Lo                 _TIM0TC4.Overlap_STR.TIM0TC4LoSTR.Byte
      
      /*** TIM0TC4L - Timer Input Capture/Output Compare Register 4 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC4L                  _TIM0TC4.Overlap_STR.TIM0TC4LoSTR.Byte
      
    } TIM0TC4LoSTR;
    
  } Overlap_STR;

} TIM0TC4STR;
extern volatile TIM0TC4STR _TIM0TC4 @0x000005D8;
#define TIM0TC4                         _TIM0TC4.Word


/*** TIM0TC5 - Timer Input Capture/Output Compare Register 5; 0x000005DA ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC5Hi - Timer Input Capture/Output Compare Register 5 High (OBSOLETE - defined for backward compatibility); 0x000005DA ***/
    union {
      byte Byte;
      /*** TIM0TC5Hi - Timer Input Capture/Output Compare Register 5 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC5Hi                 _TIM0TC5.Overlap_STR.TIM0TC5HiSTR.Byte
      
      /*** TIM0TC5H - Timer Input Capture/Output Compare Register 5 High; Several registers at the same address ***/
      #define TIM0TC5H                  _TIM0TC5.Overlap_STR.TIM0TC5HiSTR.Byte
      
    } TIM0TC5HiSTR;
    

    /*** TIM0TC5Lo - Timer Input Capture/Output Compare Register 5 Low (OBSOLETE - defined for backward compatibility); 0x000005DB ***/
    union {
      byte Byte;
      /*** TIM0TC5Lo - Timer Input Capture/Output Compare Register 5 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC5Lo                 _TIM0TC5.Overlap_STR.TIM0TC5LoSTR.Byte
      
      /*** TIM0TC5L - Timer Input Capture/Output Compare Register 5 Low; Several registers at the same address ***/
      #define TIM0TC5L                  _TIM0TC5.Overlap_STR.TIM0TC5LoSTR.Byte
      
    } TIM0TC5LoSTR;
    
  } Overlap_STR;

} TIM0TC5STR;
extern volatile TIM0TC5STR _TIM0TC5 @0x000005DA;
#define TIM0TC5                         _TIM0TC5.Word


/*** TIM0TC6 - Timer Input Capture/Output Compare Register 6; 0x000005DC ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC6Hi - Timer Input Capture/Output Compare Register 6 High (OBSOLETE - defined for backward compatibility); 0x000005DC ***/
    union {
      byte Byte;
      /*** TIM0TC6Hi - Timer Input Capture/Output Compare Register 6 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC6Hi                 _TIM0TC6.Overlap_STR.TIM0TC6HiSTR.Byte
      
      /*** TIM0TC6H - Timer Input Capture/Output Compare Register 6 High; Several registers at the same address ***/
      #define TIM0TC6H                  _TIM0TC6.Overlap_STR.TIM0TC6HiSTR.Byte
      
    } TIM0TC6HiSTR;
    

    /*** TIM0TC6Lo - Timer Input Capture/Output Compare Register 6 Low (OBSOLETE - defined for backward compatibility); 0x000005DD ***/
    union {
      byte Byte;
      /*** TIM0TC6Lo - Timer Input Capture/Output Compare Register 6 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC6Lo                 _TIM0TC6.Overlap_STR.TIM0TC6LoSTR.Byte
      
      /*** TIM0TC6L - Timer Input Capture/Output Compare Register 6 Low; Several registers at the same address ***/
      #define TIM0TC6L                  _TIM0TC6.Overlap_STR.TIM0TC6LoSTR.Byte
      
    } TIM0TC6LoSTR;
    
  } Overlap_STR;

} TIM0TC6STR;
extern volatile TIM0TC6STR _TIM0TC6 @0x000005DC;
#define TIM0TC6                         _TIM0TC6.Word


/*** TIM0TC7 - Timer Input Capture/Output Compare Register 7; 0x000005DE ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0TC7Hi - Timer Input Capture/Output Compare Register 7 High (OBSOLETE - defined for backward compatibility); 0x000005DE ***/
    union {
      byte Byte;
      /*** TIM0TC7Hi - Timer Input Capture/Output Compare Register 7 High (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC7Hi                 _TIM0TC7.Overlap_STR.TIM0TC7HiSTR.Byte
      
      /*** TIM0TC7H - Timer Input Capture/Output Compare Register 7 High; Several registers at the same address ***/
      #define TIM0TC7H                  _TIM0TC7.Overlap_STR.TIM0TC7HiSTR.Byte
      
    } TIM0TC7HiSTR;
    

    /*** TIM0TC7Lo - Timer Input Capture/Output Compare Register 7 Low (OBSOLETE - defined for backward compatibility); 0x000005DF ***/
    union {
      byte Byte;
      /*** TIM0TC7Lo - Timer Input Capture/Output Compare Register 7 Low (OBSOLETE - defined for backward compatibility); Several registers at the same address ***/
      #define TIM0TC7Lo                 _TIM0TC7.Overlap_STR.TIM0TC7LoSTR.Byte
      
      /*** TIM0TC7L - Timer Input Capture/Output Compare Register 7 Low; Several registers at the same address ***/
      #define TIM0TC7L                  _TIM0TC7.Overlap_STR.TIM0TC7LoSTR.Byte
      
    } TIM0TC7LoSTR;
    
  } Overlap_STR;

} TIM0TC7STR;
extern volatile TIM0TC7STR _TIM0TC7 @0x000005DE;
#define TIM0TC7                         _TIM0TC7.Word


/*** TIM0PACTL - 16-Bit Pulse Accumulator A Control Register; 0x000005E0 ***/
typedef union {
  byte Byte;
  struct {
    byte PAI         :1;                                       /* Pulse Accumulator Input Interrupt enable */
    byte PAOVI       :1;                                       /* Pulse Accumulator A Overflow Interrupt enable */
    byte CLK0        :1;                                       /* Clock Select Bit 0 */
    byte CLK1        :1;                                       /* Clock Select Bit 1 */
    byte PEDGE       :1;                                       /* Pulse Accumulator Edge Control */
    byte PAMOD       :1;                                       /* Pulse Accumulator Mode */
    byte PAEN        :1;                                       /* Pulse Accumulator A System Enable */
    byte             :1; 
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte grpCLK  :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} TIM0PACTLSTR;
extern volatile TIM0PACTLSTR _TIM0PACTL @0x000005E0;
#define TIM0PACTL                       _TIM0PACTL.Byte
#define TIM0PACTL_PAI                   _TIM0PACTL.Bits.PAI
#define TIM0PACTL_PAOVI                 _TIM0PACTL.Bits.PAOVI
#define TIM0PACTL_CLK0                  _TIM0PACTL.Bits.CLK0
#define TIM0PACTL_CLK1                  _TIM0PACTL.Bits.CLK1
#define TIM0PACTL_PEDGE                 _TIM0PACTL.Bits.PEDGE
#define TIM0PACTL_PAMOD                 _TIM0PACTL.Bits.PAMOD
#define TIM0PACTL_PAEN                  _TIM0PACTL.Bits.PAEN
#define TIM0PACTL_CLK                   _TIM0PACTL.MergedBits.grpCLK

#define TIM0PACTL_PAI_MASK              1U
#define TIM0PACTL_PAOVI_MASK            2U
#define TIM0PACTL_CLK0_MASK             4U
#define TIM0PACTL_CLK1_MASK             8U
#define TIM0PACTL_PEDGE_MASK            16U
#define TIM0PACTL_PAMOD_MASK            32U
#define TIM0PACTL_PAEN_MASK             64U
#define TIM0PACTL_CLK_MASK              12U
#define TIM0PACTL_CLK_BITNUM            2U


/*** TIM0PAFLG - Pulse Accumulator A Flag Register; 0x000005E1 ***/
typedef union {
  byte Byte;
  struct {
    byte PAIF        :1;                                       /* Pulse Accumulator Input edge interrupt flag */
    byte PAOVF       :1;                                       /* Pulse Accumulator A Overflow interrupt flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} TIM0PAFLGSTR;
extern volatile TIM0PAFLGSTR _TIM0PAFLG @0x000005E1;
#define TIM0PAFLG                       _TIM0PAFLG.Byte
#define TIM0PAFLG_PAIF                  _TIM0PAFLG.Bits.PAIF
#define TIM0PAFLG_PAOVF                 _TIM0PAFLG.Bits.PAOVF

#define TIM0PAFLG_PAIF_MASK             1U
#define TIM0PAFLG_PAOVF_MASK            2U


/*** TIM0PACNT - Pulse Accumulators Count Register; 0x000005E2 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TIM0PACNTH - Pulse Accumulators Count Register High; 0x000005E2 ***/
    union {
      byte Byte;
    } TIM0PACNTHSTR;
    #define TIM0PACNTH                  _TIM0PACNT.Overlap_STR.TIM0PACNTHSTR.Byte
    

    /*** TIM0PACNTL - Pulse Accumulators Count Register Low; 0x000005E3 ***/
    union {
      byte Byte;
    } TIM0PACNTLSTR;
    #define TIM0PACNTL                  _TIM0PACNT.Overlap_STR.TIM0PACNTLSTR.Byte
    
  } Overlap_STR;

} TIM0PACNTSTR;
extern volatile TIM0PACNTSTR _TIM0PACNT @0x000005E2;
#define TIM0PACNT                       _TIM0PACNT.Word


/*** TIM0OCPD - Output Compare Pin Disconnect Register; 0x000005EC ***/
typedef union {
  byte Byte;
  struct {
    byte OCPD0       :1;                                       /* Output Compare Pin Disconnect Bit 0 */
    byte OCPD1       :1;                                       /* Output Compare Pin Disconnect Bit 1 */
    byte OCPD2       :1;                                       /* Output Compare Pin Disconnect Bit 2 */
    byte OCPD3       :1;                                       /* Output Compare Pin Disconnect Bit 3 */
    byte OCPD4       :1;                                       /* Output Compare Pin Disconnect Bit 4 */
    byte OCPD5       :1;                                       /* Output Compare Pin Disconnect Bit 5 */
    byte OCPD6       :1;                                       /* Output Compare Pin Disconnect Bit 6 */
    byte OCPD7       :1;                                       /* Output Compare Pin Disconnect Bit 7 */
  } Bits;
} TIM0OCPDSTR;
extern volatile TIM0OCPDSTR _TIM0OCPD @0x000005EC;
#define TIM0OCPD                        _TIM0OCPD.Byte
#define TIM0OCPD_OCPD0                  _TIM0OCPD.Bits.OCPD0
#define TIM0OCPD_OCPD1                  _TIM0OCPD.Bits.OCPD1
#define TIM0OCPD_OCPD2                  _TIM0OCPD.Bits.OCPD2
#define TIM0OCPD_OCPD3                  _TIM0OCPD.Bits.OCPD3
#define TIM0OCPD_OCPD4                  _TIM0OCPD.Bits.OCPD4
#define TIM0OCPD_OCPD5                  _TIM0OCPD.Bits.OCPD5
#define TIM0OCPD_OCPD6                  _TIM0OCPD.Bits.OCPD6
#define TIM0OCPD_OCPD7                  _TIM0OCPD.Bits.OCPD7

#define TIM0OCPD_OCPD0_MASK             1U
#define TIM0OCPD_OCPD1_MASK             2U
#define TIM0OCPD_OCPD2_MASK             4U
#define TIM0OCPD_OCPD3_MASK             8U
#define TIM0OCPD_OCPD4_MASK             16U
#define TIM0OCPD_OCPD5_MASK             32U
#define TIM0OCPD_OCPD6_MASK             64U
#define TIM0OCPD_OCPD7_MASK             128U


/*** TIM0PTPSR - Precision Timer Prescaler Select Register; 0x000005EE ***/
typedef union {
  byte Byte;
  struct {
    byte PTPS0       :1;                                       /* Precision Timer Prescaler Select Bit 0 */
    byte PTPS1       :1;                                       /* Precision Timer Prescaler Select Bit 1 */
    byte PTPS2       :1;                                       /* Precision Timer Prescaler Select Bit 2 */
    byte PTPS3       :1;                                       /* Precision Timer Prescaler Select Bit 3 */
    byte PTPS4       :1;                                       /* Precision Timer Prescaler Select Bit 4 */
    byte PTPS5       :1;                                       /* Precision Timer Prescaler Select Bit 5 */
    byte PTPS6       :1;                                       /* Precision Timer Prescaler Select Bit 6 */
    byte PTPS7       :1;                                       /* Precision Timer Prescaler Select Bit 7 */
  } Bits;
} TIM0PTPSRSTR;
extern volatile TIM0PTPSRSTR _TIM0PTPSR @0x000005EE;
#define TIM0PTPSR                       _TIM0PTPSR.Byte
#define TIM0PTPSR_PTPS0                 _TIM0PTPSR.Bits.PTPS0
#define TIM0PTPSR_PTPS1                 _TIM0PTPSR.Bits.PTPS1
#define TIM0PTPSR_PTPS2                 _TIM0PTPSR.Bits.PTPS2
#define TIM0PTPSR_PTPS3                 _TIM0PTPSR.Bits.PTPS3
#define TIM0PTPSR_PTPS4                 _TIM0PTPSR.Bits.PTPS4
#define TIM0PTPSR_PTPS5                 _TIM0PTPSR.Bits.PTPS5
#define TIM0PTPSR_PTPS6                 _TIM0PTPSR.Bits.PTPS6
#define TIM0PTPSR_PTPS7                 _TIM0PTPSR.Bits.PTPS7

#define TIM0PTPSR_PTPS0_MASK            1U
#define TIM0PTPSR_PTPS1_MASK            2U
#define TIM0PTPSR_PTPS2_MASK            4U
#define TIM0PTPSR_PTPS3_MASK            8U
#define TIM0PTPSR_PTPS4_MASK            16U
#define TIM0PTPSR_PTPS5_MASK            32U
#define TIM0PTPSR_PTPS6_MASK            64U
#define TIM0PTPSR_PTPS7_MASK            128U


/*** ADC0CTL - ADC0 Control Register; 0x00000600 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** ADC0CTL_0 - ADC0 Control Register 0; 0x00000600 ***/
    union {
      byte Byte;
      struct {
        byte MOD_CFG     :1;                                       /* Trigger Mode Configuration */
        byte STR_SEQA    :1;                                       /* Handling Restart Requests during End Of List Command Type Execution */
        byte ACC_CFG     :2;                                       /* ADCFLWCTL Register Access Configuration */
        byte SWAI        :1;                                       /* Wait Mode Configuration */
        byte FRZ_MOD     :1;                                       /* Freeze Mode Configuration */
        byte ADC_SR      :1;                                       /* ADC Soft Reset */
        byte ADC_EN      :1;                                       /* ADC Enable Bit */
      } Bits;
    } ADC0CTL_0STR;
    #define ADC0CTL_0                   _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Byte
    #define ADC0CTL_0_MOD_CFG           _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.MOD_CFG
    #define ADC0CTL_0_STR_SEQA          _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.STR_SEQA
    #define ADC0CTL_0_ACC_CFG           _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.ACC_CFG
    #define ADC0CTL_0_SWAI              _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.SWAI
    #define ADC0CTL_0_FRZ_MOD           _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.FRZ_MOD
    #define ADC0CTL_0_ADC_SR            _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.ADC_SR
    #define ADC0CTL_0_ADC_EN            _ADC0CTL.Overlap_STR.ADC0CTL_0STR.Bits.ADC_EN
    /* ADC0CTL__ARR: Access 2 ADC0CTL_x registers in an array */
    #define ADC0CTL__ARR                ((volatile byte *) &ADC0CTL_0)
    
    #define ADC0CTL_0_MOD_CFG_MASK      1U
    #define ADC0CTL_0_STR_SEQA_MASK     2U
    #define ADC0CTL_0_ACC_CFG_MASK      12U
    #define ADC0CTL_0_ACC_CFG_BITNUM    2U
    #define ADC0CTL_0_SWAI_MASK         16U
    #define ADC0CTL_0_FRZ_MOD_MASK      32U
    #define ADC0CTL_0_ADC_SR_MASK       64U
    #define ADC0CTL_0_ADC_EN_MASK       128U
    

    /*** ADC0CTL_1 - ADC0 Control Register 1; 0x00000601 ***/
    union {
      byte Byte;
      struct {
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte AUT_RSTA    :1;                                       /* Automatic Restart Event after exit from MCU Stop and Wait Mode */
        byte SMOD_ACC    :1;                                       /* Special Mode Access Control */
        byte RVL_BMOD    :1;                                       /* RVL Buffer Mode Select */
        byte CSL_BMOD    :1;                                       /* CSL Buffer Mode Select */
      } Bits;
    } ADC0CTL_1STR;
    #define ADC0CTL_1                   _ADC0CTL.Overlap_STR.ADC0CTL_1STR.Byte
    #define ADC0CTL_1_AUT_RSTA          _ADC0CTL.Overlap_STR.ADC0CTL_1STR.Bits.AUT_RSTA
    #define ADC0CTL_1_SMOD_ACC          _ADC0CTL.Overlap_STR.ADC0CTL_1STR.Bits.SMOD_ACC
    #define ADC0CTL_1_RVL_BMOD          _ADC0CTL.Overlap_STR.ADC0CTL_1STR.Bits.RVL_BMOD
    #define ADC0CTL_1_CSL_BMOD          _ADC0CTL.Overlap_STR.ADC0CTL_1STR.Bits.CSL_BMOD
    
    #define ADC0CTL_1_AUT_RSTA_MASK     16U
    #define ADC0CTL_1_SMOD_ACC_MASK     32U
    #define ADC0CTL_1_RVL_BMOD_MASK     64U
    #define ADC0CTL_1_CSL_BMOD_MASK     128U
    
  } Overlap_STR;

  struct {
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word AUT_RSTA    :1;                                       /* Automatic Restart Event after exit from MCU Stop and Wait Mode */
    word SMOD_ACC    :1;                                       /* Special Mode Access Control */
    word RVL_BMOD    :1;                                       /* RVL Buffer Mode Select */
    word CSL_BMOD    :1;                                       /* CSL Buffer Mode Select */
    word MOD_CFG     :1;                                       /* Trigger Mode Configuration */
    word STR_SEQA    :1;                                       /* Control Of Conversion Result Storage during Sequence abort (SEQA) or Restart request (RSTA) */
    word ACC_CFG     :2;                                       /* ADCFLWCTL Register Access Configuration */
    word SWAI        :1;                                       /* Wait Mode Configuration */
    word FRZ_MOD     :1;                                       /* Freeze Mode Configuration */
    word ADC_SR      :1;                                       /* ADC Soft Reset */
    word ADC_EN      :1;                                       /* ADC Enable Bit */
  } Bits;
} ADC0CTLSTR;
extern volatile ADC0CTLSTR _ADC0CTL @0x00000600;
#define ADC0CTL                         _ADC0CTL.Word
#define ADC0CTL_AUT_RSTA                _ADC0CTL.Bits.AUT_RSTA
#define ADC0CTL_SMOD_ACC                _ADC0CTL.Bits.SMOD_ACC
#define ADC0CTL_RVL_BMOD                _ADC0CTL.Bits.RVL_BMOD
#define ADC0CTL_CSL_BMOD                _ADC0CTL.Bits.CSL_BMOD
#define ADC0CTL_MOD_CFG                 _ADC0CTL.Bits.MOD_CFG
#define ADC0CTL_STR_SEQA                _ADC0CTL.Bits.STR_SEQA
#define ADC0CTL_ACC_CFG                 _ADC0CTL.Bits.ACC_CFG
#define ADC0CTL_SWAI                    _ADC0CTL.Bits.SWAI
#define ADC0CTL_FRZ_MOD                 _ADC0CTL.Bits.FRZ_MOD
#define ADC0CTL_ADC_SR                  _ADC0CTL.Bits.ADC_SR
#define ADC0CTL_ADC_EN                  _ADC0CTL.Bits.ADC_EN

#define ADC0CTL_AUT_RSTA_MASK           16U
#define ADC0CTL_SMOD_ACC_MASK           32U
#define ADC0CTL_RVL_BMOD_MASK           64U
#define ADC0CTL_CSL_BMOD_MASK           128U
#define ADC0CTL_MOD_CFG_MASK            256U
#define ADC0CTL_STR_SEQA_MASK           512U
#define ADC0CTL_ACC_CFG_MASK            3072U
#define ADC0CTL_ACC_CFG_BITNUM          10U
#define ADC0CTL_SWAI_MASK               4096U
#define ADC0CTL_FRZ_MOD_MASK            8192U
#define ADC0CTL_ADC_SR_MASK             16384U
#define ADC0CTL_ADC_EN_MASK             32768U


/*** ADC0STS - ADC0 Status Register; 0x00000602 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte READY       :1;                                       /* Flag indicates that ADC is in its idle state and ready for a Restart Event */
    byte             :1; 
    byte DBECC_ERR   :1;                                       /* Double Bit ECC Error Flag */
    byte RVL_SEL     :1;                                       /* Result Value List Select */
    byte CSL_SEL     :1;                                       /* Command Sequence List Select */
  } Bits;
} ADC0STSSTR;
extern volatile ADC0STSSTR _ADC0STS @0x00000602;
#define ADC0STS                         _ADC0STS.Byte
#define ADC0STS_READY                   _ADC0STS.Bits.READY
#define ADC0STS_DBECC_ERR               _ADC0STS.Bits.DBECC_ERR
#define ADC0STS_RVL_SEL                 _ADC0STS.Bits.RVL_SEL
#define ADC0STS_CSL_SEL                 _ADC0STS.Bits.CSL_SEL

#define ADC0STS_READY_MASK              8U
#define ADC0STS_DBECC_ERR_MASK          32U
#define ADC0STS_RVL_SEL_MASK            64U
#define ADC0STS_CSL_SEL_MASK            128U


/*** ADC0TIM - ADC0 Timing Register; 0x00000603 ***/
typedef union {
  byte Byte;
  struct {
    byte PRS         :7;                                       /* ADC Clock Prescaler */
    byte             :1; 
  } Bits;
} ADC0TIMSTR;
extern volatile ADC0TIMSTR _ADC0TIM @0x00000603;
#define ADC0TIM                         _ADC0TIM.Byte
#define ADC0TIM_PRS                     _ADC0TIM.Bits.PRS

#define ADC0TIM_PRS_MASK                127U
#define ADC0TIM_PRS_BITNUM              0U


/*** ADC0FMT - ADC0 Format Register; 0x00000604 ***/
typedef union {
  byte Byte;
  struct {
    byte SRES        :3;                                       /* ADC Resolution Select */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte DJM         :1;                                       /* Result Register Data Justification */
  } Bits;
} ADC0FMTSTR;
extern volatile ADC0FMTSTR _ADC0FMT @0x00000604;
#define ADC0FMT                         _ADC0FMT.Byte
#define ADC0FMT_SRES                    _ADC0FMT.Bits.SRES
#define ADC0FMT_DJM                     _ADC0FMT.Bits.DJM

#define ADC0FMT_SRES_MASK               7U
#define ADC0FMT_SRES_BITNUM             0U
#define ADC0FMT_DJM_MASK                128U


/*** ADC0FLWCTL - ADC0 Conversion Flow Control Register; 0x00000605 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte LDOK        :1;                                       /* Load OK for alternative Command Sequence List */
    byte RSTA        :1;                                       /* Restart Event (Restart from Top of Command Sequence List) */
    byte TRIG        :1;                                       /* Conversion Sequence Trigger */
    byte SEQA        :1;                                       /* Conversion Sequence Abort Event */
  } Bits;
} ADC0FLWCTLSTR;
extern volatile ADC0FLWCTLSTR _ADC0FLWCTL @0x00000605;
#define ADC0FLWCTL                      _ADC0FLWCTL.Byte
#define ADC0FLWCTL_LDOK                 _ADC0FLWCTL.Bits.LDOK
#define ADC0FLWCTL_RSTA                 _ADC0FLWCTL.Bits.RSTA
#define ADC0FLWCTL_TRIG                 _ADC0FLWCTL.Bits.TRIG
#define ADC0FLWCTL_SEQA                 _ADC0FLWCTL.Bits.SEQA

#define ADC0FLWCTL_LDOK_MASK            16U
#define ADC0FLWCTL_RSTA_MASK            32U
#define ADC0FLWCTL_TRIG_MASK            64U
#define ADC0FLWCTL_SEQA_MASK            128U


/*** ADC0EIE - ADC0 Error Interrupt Enable Register; 0x00000606 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte LDOK_EIE    :1;                                       /* Load OK Error Interrupt Enable */
    byte RSTAR_EIE   :1;                                       /* Restart Request Error Interrupt Enable */
    byte TRIG_EIE    :1;                                       /* Conversion Sequence Trigger Error Interrupt Enable */
    byte             :1; 
    byte EOL_EIE     :1;                                       /* End Of List Error Interrupt Enable */
    byte CMD_EIE     :1;                                       /* Command Value Error Interrupt Enable */
    byte IA_EIE      :1;                                       /* Illegal Access Error Interrupt Enable */
  } Bits;
} ADC0EIESTR;
extern volatile ADC0EIESTR _ADC0EIE @0x00000606;
#define ADC0EIE                         _ADC0EIE.Byte
#define ADC0EIE_LDOK_EIE                _ADC0EIE.Bits.LDOK_EIE
#define ADC0EIE_RSTAR_EIE               _ADC0EIE.Bits.RSTAR_EIE
#define ADC0EIE_TRIG_EIE                _ADC0EIE.Bits.TRIG_EIE
#define ADC0EIE_EOL_EIE                 _ADC0EIE.Bits.EOL_EIE
#define ADC0EIE_CMD_EIE                 _ADC0EIE.Bits.CMD_EIE
#define ADC0EIE_IA_EIE                  _ADC0EIE.Bits.IA_EIE

#define ADC0EIE_LDOK_EIE_MASK           2U
#define ADC0EIE_RSTAR_EIE_MASK          4U
#define ADC0EIE_TRIG_EIE_MASK           8U
#define ADC0EIE_EOL_EIE_MASK            32U
#define ADC0EIE_CMD_EIE_MASK            64U
#define ADC0EIE_IA_EIE_MASK             128U


/*** ADC0IE - ADC0 Interrupt Enable Register; 0x00000607 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte CONIF_OIE   :1;                                       /* ADCCONIF Register Flags Overrun Interrupt Enable */
    byte SEQAD_IE    :1;                                       /* Conversion Sequence Abort Done Interrupt Enable */
  } Bits;
} ADC0IESTR;
extern volatile ADC0IESTR _ADC0IE @0x00000607;
#define ADC0IE                          _ADC0IE.Byte
#define ADC0IE_CONIF_OIE                _ADC0IE.Bits.CONIF_OIE
#define ADC0IE_SEQAD_IE                 _ADC0IE.Bits.SEQAD_IE

#define ADC0IE_CONIF_OIE_MASK           64U
#define ADC0IE_SEQAD_IE_MASK            128U


/*** ADC0EIF - ADC0 Error Interrupt Flag Register; 0x00000608 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte LDOK_EIF    :1;                                       /* Load OK Error Interrupt Flag */
    byte RSTAR_EIF   :1;                                       /* Restart Request Error Interrupt Flag */
    byte TRIG_EIF    :1;                                       /* Trigger Error Interrupt Flag */
    byte             :1; 
    byte EOL_EIF     :1;                                       /* End Of List Error Interrupt Flag */
    byte CMD_EIF     :1;                                       /* Command Value Error Interrupt Flag */
    byte IA_EIF      :1;                                       /* Illegal Access Error Interrupt Flag */
  } Bits;
} ADC0EIFSTR;
extern volatile ADC0EIFSTR _ADC0EIF @0x00000608;
#define ADC0EIF                         _ADC0EIF.Byte
#define ADC0EIF_LDOK_EIF                _ADC0EIF.Bits.LDOK_EIF
#define ADC0EIF_RSTAR_EIF               _ADC0EIF.Bits.RSTAR_EIF
#define ADC0EIF_TRIG_EIF                _ADC0EIF.Bits.TRIG_EIF
#define ADC0EIF_EOL_EIF                 _ADC0EIF.Bits.EOL_EIF
#define ADC0EIF_CMD_EIF                 _ADC0EIF.Bits.CMD_EIF
#define ADC0EIF_IA_EIF                  _ADC0EIF.Bits.IA_EIF

#define ADC0EIF_LDOK_EIF_MASK           2U
#define ADC0EIF_RSTAR_EIF_MASK          4U
#define ADC0EIF_TRIG_EIF_MASK           8U
#define ADC0EIF_EOL_EIF_MASK            32U
#define ADC0EIF_CMD_EIF_MASK            64U
#define ADC0EIF_IA_EIF_MASK             128U


/*** ADC0IF - ADC0 Interrupt Flag Register; 0x00000609 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte CONIF_OIF   :1;                                       /* ADCxCONIF Register Flags Overrun Interrupt Flag */
    byte SEQAD_IF    :1;                                       /* Conversion Sequence Abort Done Interrupt Flag */
  } Bits;
} ADC0IFSTR;
extern volatile ADC0IFSTR _ADC0IF @0x00000609;
#define ADC0IF                          _ADC0IF.Byte
#define ADC0IF_CONIF_OIF                _ADC0IF.Bits.CONIF_OIF
#define ADC0IF_SEQAD_IF                 _ADC0IF.Bits.SEQAD_IF

#define ADC0IF_CONIF_OIF_MASK           64U
#define ADC0IF_SEQAD_IF_MASK            128U


/*** ADC0CONIE - ADC0 Conversion Interrupt Enable Register; 0x0000060A ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** ADC0CONIE_0 - ADC0 Conversion Interrupt Enable Register 0; 0x0000060A ***/
    union {
      byte Byte;
      struct {
        byte CON_IE8     :1;                                       /* Conversion Interrupt 8 Enable */
        byte CON_IE9     :1;                                       /* Conversion Interrupt 9 Enable */
        byte CON_IE10    :1;                                       /* Conversion Interrupt 10 Enable */
        byte CON_IE11    :1;                                       /* Conversion Interrupt 11 Enable */
        byte CON_IE12    :1;                                       /* Conversion Interrupt 12 Enable */
        byte CON_IE13    :1;                                       /* Conversion Interrupt 13 Enable */
        byte CON_IE14    :1;                                       /* Conversion Interrupt 14 Enable */
        byte CON_IE15    :1;                                       /* Conversion Interrupt 15 Enable */
      } Bits;
    } ADC0CONIE_0STR;
    #define ADC0CONIE_0                 _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Byte
    #define ADC0CONIE_0_CON_IE8         _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE8
    #define ADC0CONIE_0_CON_IE9         _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE9
    #define ADC0CONIE_0_CON_IE10        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE10
    #define ADC0CONIE_0_CON_IE11        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE11
    #define ADC0CONIE_0_CON_IE12        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE12
    #define ADC0CONIE_0_CON_IE13        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE13
    #define ADC0CONIE_0_CON_IE14        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE14
    #define ADC0CONIE_0_CON_IE15        _ADC0CONIE.Overlap_STR.ADC0CONIE_0STR.Bits.CON_IE15
    /* ADC0CONIE__ARR: Access 2 ADC0CONIE_x registers in an array */
    #define ADC0CONIE__ARR              ((volatile byte *) &ADC0CONIE_0)
    
    #define ADC0CONIE_0_CON_IE8_MASK    1U
    #define ADC0CONIE_0_CON_IE9_MASK    2U
    #define ADC0CONIE_0_CON_IE10_MASK   4U
    #define ADC0CONIE_0_CON_IE11_MASK   8U
    #define ADC0CONIE_0_CON_IE12_MASK   16U
    #define ADC0CONIE_0_CON_IE13_MASK   32U
    #define ADC0CONIE_0_CON_IE14_MASK   64U
    #define ADC0CONIE_0_CON_IE15_MASK   128U
    

    /*** ADC0CONIE_1 - ADC0 Conversion Interrupt Enable Register 1; 0x0000060B ***/
    union {
      byte Byte;
      struct {
        byte EOL_IE      :1;                                       /* End Of List Interrupt Enable */
        byte CON_IE1     :1;                                       /* Conversion Interrupt 1 Enable */
        byte CON_IE2     :1;                                       /* Conversion Interrupt 2 Enable */
        byte CON_IE3     :1;                                       /* Conversion Interrupt 3 Enable */
        byte CON_IE4     :1;                                       /* Conversion Interrupt 4 Enable */
        byte CON_IE5     :1;                                       /* Conversion Interrupt 5 Enable */
        byte CON_IE6     :1;                                       /* Conversion Interrupt 6 Enable */
        byte CON_IE7     :1;                                       /* Conversion Interrupt 7 Enable */
      } Bits;
      struct {
        byte     :1;
        byte grpCON_IE_1 :7;
      } MergedBits;
    } ADC0CONIE_1STR;
    #define ADC0CONIE_1                 _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Byte
    #define ADC0CONIE_1_EOL_IE          _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.EOL_IE
    #define ADC0CONIE_1_CON_IE1         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE1
    #define ADC0CONIE_1_CON_IE2         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE2
    #define ADC0CONIE_1_CON_IE3         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE3
    #define ADC0CONIE_1_CON_IE4         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE4
    #define ADC0CONIE_1_CON_IE5         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE5
    #define ADC0CONIE_1_CON_IE6         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE6
    #define ADC0CONIE_1_CON_IE7         _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.Bits.CON_IE7
    #define ADC0CONIE_1_CON_IE_1        _ADC0CONIE.Overlap_STR.ADC0CONIE_1STR.MergedBits.grpCON_IE_1
    #define ADC0CONIE_1_CON_IE          ADC0CONIE_1_CON_IE_1
    
    #define ADC0CONIE_1_EOL_IE_MASK     1U
    #define ADC0CONIE_1_CON_IE1_MASK    2U
    #define ADC0CONIE_1_CON_IE2_MASK    4U
    #define ADC0CONIE_1_CON_IE3_MASK    8U
    #define ADC0CONIE_1_CON_IE4_MASK    16U
    #define ADC0CONIE_1_CON_IE5_MASK    32U
    #define ADC0CONIE_1_CON_IE6_MASK    64U
    #define ADC0CONIE_1_CON_IE7_MASK    128U
    #define ADC0CONIE_1_CON_IE_1_MASK   254U
    #define ADC0CONIE_1_CON_IE_1_BITNUM 1U
    
  } Overlap_STR;

  struct {
    word EOL_IE      :1;                                       /* End Of List Interrupt Enable */
    word CON_IE1     :1;                                       /* Conversion Interrupt 1 Enable */
    word CON_IE2     :1;                                       /* Conversion Interrupt 2 Enable */
    word CON_IE3     :1;                                       /* Conversion Interrupt 3 Enable */
    word CON_IE4     :1;                                       /* Conversion Interrupt 4 Enable */
    word CON_IE5     :1;                                       /* Conversion Interrupt 5 Enable */
    word CON_IE6     :1;                                       /* Conversion Interrupt 6 Enable */
    word CON_IE7     :1;                                       /* Conversion Interrupt 7 Enable */
    word CON_IE8     :1;                                       /* Conversion Interrupt 8 Enable */
    word CON_IE9     :1;                                       /* Conversion Interrupt 9 Enable */
    word CON_IE10    :1;                                       /* Conversion Interrupt 10 Enable */
    word CON_IE11    :1;                                       /* Conversion Interrupt 11 Enable */
    word CON_IE12    :1;                                       /* Conversion Interrupt 12 Enable */
    word CON_IE13    :1;                                       /* Conversion Interrupt 13 Enable */
    word CON_IE14    :1;                                       /* Conversion Interrupt 14 Enable */
    word CON_IE15    :1;                                       /* Conversion Interrupt 15 Enable */
  } Bits;
  struct {
    word         :1;
    word grpCON_IE_1 :15;
  } MergedBits;
} ADC0CONIESTR;
extern volatile ADC0CONIESTR _ADC0CONIE @0x0000060A;
#define ADC0CONIE                       _ADC0CONIE.Word
#define ADC0CONIE_EOL_IE                _ADC0CONIE.Bits.EOL_IE
#define ADC0CONIE_CON_IE1               _ADC0CONIE.Bits.CON_IE1
#define ADC0CONIE_CON_IE2               _ADC0CONIE.Bits.CON_IE2
#define ADC0CONIE_CON_IE3               _ADC0CONIE.Bits.CON_IE3
#define ADC0CONIE_CON_IE4               _ADC0CONIE.Bits.CON_IE4
#define ADC0CONIE_CON_IE5               _ADC0CONIE.Bits.CON_IE5
#define ADC0CONIE_CON_IE6               _ADC0CONIE.Bits.CON_IE6
#define ADC0CONIE_CON_IE7               _ADC0CONIE.Bits.CON_IE7
#define ADC0CONIE_CON_IE8               _ADC0CONIE.Bits.CON_IE8
#define ADC0CONIE_CON_IE9               _ADC0CONIE.Bits.CON_IE9
#define ADC0CONIE_CON_IE10              _ADC0CONIE.Bits.CON_IE10
#define ADC0CONIE_CON_IE11              _ADC0CONIE.Bits.CON_IE11
#define ADC0CONIE_CON_IE12              _ADC0CONIE.Bits.CON_IE12
#define ADC0CONIE_CON_IE13              _ADC0CONIE.Bits.CON_IE13
#define ADC0CONIE_CON_IE14              _ADC0CONIE.Bits.CON_IE14
#define ADC0CONIE_CON_IE15              _ADC0CONIE.Bits.CON_IE15
#define ADC0CONIE_CON_IE_1              _ADC0CONIE.MergedBits.grpCON_IE_1
#define ADC0CONIE_CON_IE                ADC0CONIE_CON_IE_1

#define ADC0CONIE_EOL_IE_MASK           1U
#define ADC0CONIE_CON_IE1_MASK          2U
#define ADC0CONIE_CON_IE2_MASK          4U
#define ADC0CONIE_CON_IE3_MASK          8U
#define ADC0CONIE_CON_IE4_MASK          16U
#define ADC0CONIE_CON_IE5_MASK          32U
#define ADC0CONIE_CON_IE6_MASK          64U
#define ADC0CONIE_CON_IE7_MASK          128U
#define ADC0CONIE_CON_IE8_MASK          256U
#define ADC0CONIE_CON_IE9_MASK          512U
#define ADC0CONIE_CON_IE10_MASK         1024U
#define ADC0CONIE_CON_IE11_MASK         2048U
#define ADC0CONIE_CON_IE12_MASK         4096U
#define ADC0CONIE_CON_IE13_MASK         8192U
#define ADC0CONIE_CON_IE14_MASK         16384U
#define ADC0CONIE_CON_IE15_MASK         32768U
#define ADC0CONIE_CON_IE_1_MASK         65534U
#define ADC0CONIE_CON_IE_1_BITNUM       1U


/*** ADC0CONIF - ADC0 Conversion Interrupt Flag Register; 0x0000060C ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** ADC0CONIF_0 - ADC0 Conversion Interrupt Flag Register 0; 0x0000060C ***/
    union {
      byte Byte;
      struct {
        byte CON_IF8     :1;                                       /* Conversion Interrupt 8 Flag */
        byte CON_IF9     :1;                                       /* Conversion Interrupt 9 Flag */
        byte CON_IF10    :1;                                       /* Conversion Interrupt 10 Flag */
        byte CON_IF11    :1;                                       /* Conversion Interrupt 11 Flag */
        byte CON_IF12    :1;                                       /* Conversion Interrupt 12 Flag */
        byte CON_IF13    :1;                                       /* Conversion Interrupt 13 Flag */
        byte CON_IF14    :1;                                       /* Conversion Interrupt 14 Flag */
        byte CON_IF15    :1;                                       /* Conversion Interrupt 15 Flag */
      } Bits;
    } ADC0CONIF_0STR;
    #define ADC0CONIF_0                 _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Byte
    #define ADC0CONIF_0_CON_IF8         _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF8
    #define ADC0CONIF_0_CON_IF9         _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF9
    #define ADC0CONIF_0_CON_IF10        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF10
    #define ADC0CONIF_0_CON_IF11        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF11
    #define ADC0CONIF_0_CON_IF12        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF12
    #define ADC0CONIF_0_CON_IF13        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF13
    #define ADC0CONIF_0_CON_IF14        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF14
    #define ADC0CONIF_0_CON_IF15        _ADC0CONIF.Overlap_STR.ADC0CONIF_0STR.Bits.CON_IF15
    /* ADC0CONIF__ARR: Access 2 ADC0CONIF_x registers in an array */
    #define ADC0CONIF__ARR              ((volatile byte *) &ADC0CONIF_0)
    
    #define ADC0CONIF_0_CON_IF8_MASK    1U
    #define ADC0CONIF_0_CON_IF9_MASK    2U
    #define ADC0CONIF_0_CON_IF10_MASK   4U
    #define ADC0CONIF_0_CON_IF11_MASK   8U
    #define ADC0CONIF_0_CON_IF12_MASK   16U
    #define ADC0CONIF_0_CON_IF13_MASK   32U
    #define ADC0CONIF_0_CON_IF14_MASK   64U
    #define ADC0CONIF_0_CON_IF15_MASK   128U
    

    /*** ADC0CONIF_1 - ADC0 Conversion Interrupt Flag Register 1; 0x0000060D ***/
    union {
      byte Byte;
      struct {
        byte EOL_IF      :1;                                       /* End Of List Interrupt Flag */
        byte CON_IF1     :1;                                       /* Conversion Interrupt 1 Flag */
        byte CON_IF2     :1;                                       /* Conversion Interrupt 2 Flag */
        byte CON_IF3     :1;                                       /* Conversion Interrupt 3 Flag */
        byte CON_IF4     :1;                                       /* Conversion Interrupt 4 Flag */
        byte CON_IF5     :1;                                       /* Conversion Interrupt 5 Flag */
        byte CON_IF6     :1;                                       /* Conversion Interrupt 6 Flag */
        byte CON_IF7     :1;                                       /* Conversion Interrupt 7 Flag */
      } Bits;
      struct {
        byte     :1;
        byte grpCON_IF_1 :7;
      } MergedBits;
    } ADC0CONIF_1STR;
    #define ADC0CONIF_1                 _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Byte
    #define ADC0CONIF_1_EOL_IF          _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.EOL_IF
    #define ADC0CONIF_1_CON_IF1         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF1
    #define ADC0CONIF_1_CON_IF2         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF2
    #define ADC0CONIF_1_CON_IF3         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF3
    #define ADC0CONIF_1_CON_IF4         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF4
    #define ADC0CONIF_1_CON_IF5         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF5
    #define ADC0CONIF_1_CON_IF6         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF6
    #define ADC0CONIF_1_CON_IF7         _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.Bits.CON_IF7
    #define ADC0CONIF_1_CON_IF_1        _ADC0CONIF.Overlap_STR.ADC0CONIF_1STR.MergedBits.grpCON_IF_1
    #define ADC0CONIF_1_CON_IF          ADC0CONIF_1_CON_IF_1
    
    #define ADC0CONIF_1_EOL_IF_MASK     1U
    #define ADC0CONIF_1_CON_IF1_MASK    2U
    #define ADC0CONIF_1_CON_IF2_MASK    4U
    #define ADC0CONIF_1_CON_IF3_MASK    8U
    #define ADC0CONIF_1_CON_IF4_MASK    16U
    #define ADC0CONIF_1_CON_IF5_MASK    32U
    #define ADC0CONIF_1_CON_IF6_MASK    64U
    #define ADC0CONIF_1_CON_IF7_MASK    128U
    #define ADC0CONIF_1_CON_IF_1_MASK   254U
    #define ADC0CONIF_1_CON_IF_1_BITNUM 1U
    
  } Overlap_STR;

  struct {
    word EOL_IF      :1;                                       /* End Of List Interrupt Flag */
    word CON_IF1     :1;                                       /* Conversion Interrupt 1 Flag */
    word CON_IF2     :1;                                       /* Conversion Interrupt 2 Flag */
    word CON_IF3     :1;                                       /* Conversion Interrupt 3 Flag */
    word CON_IF4     :1;                                       /* Conversion Interrupt 4 Flag */
    word CON_IF5     :1;                                       /* Conversion Interrupt 5 Flag */
    word CON_IF6     :1;                                       /* Conversion Interrupt 6 Flag */
    word CON_IF7     :1;                                       /* Conversion Interrupt 7 Flag */
    word CON_IF8     :1;                                       /* Conversion Interrupt 8 Flag */
    word CON_IF9     :1;                                       /* Conversion Interrupt 9 Flag */
    word CON_IF10    :1;                                       /* Conversion Interrupt 10 Flag */
    word CON_IF11    :1;                                       /* Conversion Interrupt 11 Flag */
    word CON_IF12    :1;                                       /* Conversion Interrupt 12 Flag */
    word CON_IF13    :1;                                       /* Conversion Interrupt 13 Flag */
    word CON_IF14    :1;                                       /* Conversion Interrupt 14 Flag */
    word CON_IF15    :1;                                       /* Conversion Interrupt 15 Flag */
  } Bits;
  struct {
    word         :1;
    word grpCON_IF_1 :15;
  } MergedBits;
} ADC0CONIFSTR;
extern volatile ADC0CONIFSTR _ADC0CONIF @0x0000060C;
#define ADC0CONIF                       _ADC0CONIF.Word
#define ADC0CONIF_EOL_IF                _ADC0CONIF.Bits.EOL_IF
#define ADC0CONIF_CON_IF1               _ADC0CONIF.Bits.CON_IF1
#define ADC0CONIF_CON_IF2               _ADC0CONIF.Bits.CON_IF2
#define ADC0CONIF_CON_IF3               _ADC0CONIF.Bits.CON_IF3
#define ADC0CONIF_CON_IF4               _ADC0CONIF.Bits.CON_IF4
#define ADC0CONIF_CON_IF5               _ADC0CONIF.Bits.CON_IF5
#define ADC0CONIF_CON_IF6               _ADC0CONIF.Bits.CON_IF6
#define ADC0CONIF_CON_IF7               _ADC0CONIF.Bits.CON_IF7
#define ADC0CONIF_CON_IF8               _ADC0CONIF.Bits.CON_IF8
#define ADC0CONIF_CON_IF9               _ADC0CONIF.Bits.CON_IF9
#define ADC0CONIF_CON_IF10              _ADC0CONIF.Bits.CON_IF10
#define ADC0CONIF_CON_IF11              _ADC0CONIF.Bits.CON_IF11
#define ADC0CONIF_CON_IF12              _ADC0CONIF.Bits.CON_IF12
#define ADC0CONIF_CON_IF13              _ADC0CONIF.Bits.CON_IF13
#define ADC0CONIF_CON_IF14              _ADC0CONIF.Bits.CON_IF14
#define ADC0CONIF_CON_IF15              _ADC0CONIF.Bits.CON_IF15
#define ADC0CONIF_CON_IF_1              _ADC0CONIF.MergedBits.grpCON_IF_1
#define ADC0CONIF_CON_IF                ADC0CONIF_CON_IF_1

#define ADC0CONIF_EOL_IF_MASK           1U
#define ADC0CONIF_CON_IF1_MASK          2U
#define ADC0CONIF_CON_IF2_MASK          4U
#define ADC0CONIF_CON_IF3_MASK          8U
#define ADC0CONIF_CON_IF4_MASK          16U
#define ADC0CONIF_CON_IF5_MASK          32U
#define ADC0CONIF_CON_IF6_MASK          64U
#define ADC0CONIF_CON_IF7_MASK          128U
#define ADC0CONIF_CON_IF8_MASK          256U
#define ADC0CONIF_CON_IF9_MASK          512U
#define ADC0CONIF_CON_IF10_MASK         1024U
#define ADC0CONIF_CON_IF11_MASK         2048U
#define ADC0CONIF_CON_IF12_MASK         4096U
#define ADC0CONIF_CON_IF13_MASK         8192U
#define ADC0CONIF_CON_IF14_MASK         16384U
#define ADC0CONIF_CON_IF15_MASK         32768U
#define ADC0CONIF_CON_IF_1_MASK         65534U
#define ADC0CONIF_CON_IF_1_BITNUM       1U


/*** ADC0IMDRI - ADC0 Intermediate Result Information Register; 0x0000060E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** ADC0IMDRI_0 - ADC0 Intermediate Result Information Register 0; 0x0000060E ***/
    union {
      byte Byte;
      struct {
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte RVL_IMD     :1;                                       /* Active RVL At Intermediate Event */
        byte CSL_IMD     :1;                                       /* Active CSL At Intermediate Event */
      } Bits;
    } ADC0IMDRI_0STR;
    #define ADC0IMDRI_0                 _ADC0IMDRI.Overlap_STR.ADC0IMDRI_0STR.Byte
    #define ADC0IMDRI_0_RVL_IMD         _ADC0IMDRI.Overlap_STR.ADC0IMDRI_0STR.Bits.RVL_IMD
    #define ADC0IMDRI_0_CSL_IMD         _ADC0IMDRI.Overlap_STR.ADC0IMDRI_0STR.Bits.CSL_IMD
    /* ADC0IMDRI__ARR: Access 2 ADC0IMDRI_x registers in an array */
    #define ADC0IMDRI__ARR              ((volatile byte *) &ADC0IMDRI_0)
    
    #define ADC0IMDRI_0_RVL_IMD_MASK    64U
    #define ADC0IMDRI_0_CSL_IMD_MASK    128U
    

    /*** ADC0IMDRI_1 - ADC0 Intermediate Result Information Register 1; 0x0000060F ***/
    union {
      byte Byte;
      struct {
        byte RIDX_IMD    :6;                                       /* RES_IDX Value At Intermediate Event */
        byte             :1; 
        byte             :1; 
      } Bits;
    } ADC0IMDRI_1STR;
    #define ADC0IMDRI_1                 _ADC0IMDRI.Overlap_STR.ADC0IMDRI_1STR.Byte
    #define ADC0IMDRI_1_RIDX_IMD        _ADC0IMDRI.Overlap_STR.ADC0IMDRI_1STR.Bits.RIDX_IMD
    
    #define ADC0IMDRI_1_RIDX_IMD_MASK   63U
    #define ADC0IMDRI_1_RIDX_IMD_BITNUM 0U
    
  } Overlap_STR;

  struct {
    word RIDX_IMD    :6;                                       /* RES_IDX Value At Intermediate Event */
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word             :1; 
    word RVL_IMD     :1;                                       /* Active RVL At Intermediate Event */
    word CSL_IMD     :1;                                       /* Active CSL At Intermediate Event */
  } Bits;
} ADC0IMDRISTR;
extern volatile ADC0IMDRISTR _ADC0IMDRI @0x0000060E;
#define ADC0IMDRI                       _ADC0IMDRI.Word
#define ADC0IMDRI_RIDX_IMD              _ADC0IMDRI.Bits.RIDX_IMD
#define ADC0IMDRI_RVL_IMD               _ADC0IMDRI.Bits.RVL_IMD
#define ADC0IMDRI_CSL_IMD               _ADC0IMDRI.Bits.CSL_IMD

#define ADC0IMDRI_RIDX_IMD_MASK         63U
#define ADC0IMDRI_RIDX_IMD_BITNUM       0U
#define ADC0IMDRI_RVL_IMD_MASK          16384U
#define ADC0IMDRI_CSL_IMD_MASK          32768U


/*** ADC0EOLRI - ADC0 End Of List Result Information Register; 0x00000610 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte RVL_EOL     :1;                                       /* Active RVL When End Of List Command Type Was Executed */
    byte CSL_EOL     :1;                                       /* Active CSL When End Of List Command Type Was Executed */
  } Bits;
} ADC0EOLRISTR;
extern volatile ADC0EOLRISTR _ADC0EOLRI @0x00000610;
#define ADC0EOLRI                       _ADC0EOLRI.Byte
#define ADC0EOLRI_RVL_EOL               _ADC0EOLRI.Bits.RVL_EOL
#define ADC0EOLRI_CSL_EOL               _ADC0EOLRI.Bits.CSL_EOL

#define ADC0EOLRI_RVL_EOL_MASK          64U
#define ADC0EOLRI_CSL_EOL_MASK          128U


/*** ADC0CMD - ADC0 Command Register; 0x00000614 ***/
typedef union {
  dword Dword;
   /* Overlapped registers: */
  struct {
    /*** ADC0CMD_01 - ADC0 Command Register 01; 0x00000614 ***/
    union {
      word Word;
       /* Overlapped registers: */
      struct {
        /*** ADC0CMD_0 - ADC0 Command Register 0; 0x00000614 ***/
        union {
          byte Byte;
          struct {
            byte INTFLG_SEL  :4;                                       /* Conversion Interrupt Flag Select */
            byte             :1; 
            byte             :1; 
            byte CMD_SEL     :2;                                       /* Conversion Command Select */
          } Bits;
        } ADC0CMD_0STR;
        #define ADC0CMD_0               _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_0STR.Byte
        #define ADC0CMD_0_INTFLG_SEL    _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_0STR.Bits.INTFLG_SEL
        #define ADC0CMD_0_CMD_SEL       _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_0STR.Bits.CMD_SEL
        /* ADC0CMD__ARR: Access 4 ADC0CMD_x registers in an array */
        #define ADC0CMD__ARR            ((volatile byte *) &ADC0CMD_0)
        
        #define ADC0CMD_0_INTFLG_SEL_MASK 15U
        #define ADC0CMD_0_INTFLG_SEL_BITNUM 0U
        #define ADC0CMD_0_CMD_SEL_MASK  192U
        #define ADC0CMD_0_CMD_SEL_BITNUM 6U
        
    
        /*** ADC0CMD_1 - ADC0 Command Register 1; 0x00000615 ***/
        union {
          byte Byte;
          struct {
            byte CH_SEL      :6;                                       /* ADC Input Channel Select */
            byte VRL_SEL     :1;                                       /* Reference Low Voltage Select */
            byte VRH_SEL     :1;                                       /* Reference High Voltage Select */
          } Bits;
        } ADC0CMD_1STR;
        #define ADC0CMD_1               _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_1STR.Byte
        #define ADC0CMD_1_CH_SEL        _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_1STR.Bits.CH_SEL
        #define ADC0CMD_1_VRL_SEL       _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_1STR.Bits.VRL_SEL
        #define ADC0CMD_1_VRH_SEL       _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Overlap_STR.ADC0CMD_1STR.Bits.VRH_SEL
        
        #define ADC0CMD_1_CH_SEL_MASK   63U
        #define ADC0CMD_1_CH_SEL_BITNUM 0U
        #define ADC0CMD_1_VRL_SEL_MASK  64U
        #define ADC0CMD_1_VRH_SEL_MASK  128U
        
      } Overlap_STR;
    
      struct {
        word CH_SEL      :6;                                       /* ADC Input Channel Select */
        word VRL_SEL     :1;                                       /* Reference Low Voltage Select */
        word VRH_SEL     :1;                                       /* Reference High Voltage Select */
        word INTFLG_SEL  :4;                                       /* Conversion Interrupt Flag Select */
        word             :1; 
        word             :1; 
        word CMD_SEL     :2;                                       /* Conversion Command Select */
      } Bits;
    } ADC0CMD_01STR;
    #define ADC0CMD_01                  _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Word
    #define ADC0CMD_01_CH_SEL           _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Bits.CH_SEL
    #define ADC0CMD_01_VRL_SEL          _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Bits.VRL_SEL
    #define ADC0CMD_01_VRH_SEL          _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Bits.VRH_SEL
    #define ADC0CMD_01_INTFLG_SEL       _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Bits.INTFLG_SEL
    #define ADC0CMD_01_CMD_SEL          _ADC0CMD.Overlap_STR.ADC0CMD_01STR.Bits.CMD_SEL
    
    #define ADC0CMD_01_CH_SEL_MASK      63U
    #define ADC0CMD_01_CH_SEL_BITNUM    0U
    #define ADC0CMD_01_VRL_SEL_MASK     64U
    #define ADC0CMD_01_VRH_SEL_MASK     128U
    #define ADC0CMD_01_INTFLG_SEL_MASK  3840U
    #define ADC0CMD_01_INTFLG_SEL_BITNUM 8U
    #define ADC0CMD_01_CMD_SEL_MASK     49152U
    #define ADC0CMD_01_CMD_SEL_BITNUM   14U
    

    /*** ADC0CMD_23 - ADC0 Command Register 23; 0x00000616 ***/
    union {
      word Word;
       /* Overlapped registers: */
      struct {
        /*** ADC0CMD_2 - ADC0 Command Register 2; 0x00000616 ***/
        union {
          byte Byte;
          struct {
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte SMP         :5;                                       /* Sample Time Select */
          } Bits;
        } ADC0CMD_2STR;
        #define ADC0CMD_2               _ADC0CMD.Overlap_STR.ADC0CMD_23STR.Overlap_STR.ADC0CMD_2STR.Byte
        #define ADC0CMD_2_SMP           _ADC0CMD.Overlap_STR.ADC0CMD_23STR.Overlap_STR.ADC0CMD_2STR.Bits.SMP
        
        #define ADC0CMD_2_SMP_MASK      248U
        #define ADC0CMD_2_SMP_BITNUM    3U
        
    
        /*** ADC0CMD_3 - ADC0 Command Register 3; 0x00000617 ***/
        union {
          byte Byte;
          struct {
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
          } Bits;
        } ADC0CMD_3STR;
        #define ADC0CMD_3               _ADC0CMD.Overlap_STR.ADC0CMD_23STR.Overlap_STR.ADC0CMD_3STR.Byte
        
      } Overlap_STR;
    
      struct {
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word             :1; 
        word SMP         :5;                                       /* Sample Time Select */
      } Bits;
    } ADC0CMD_23STR;
    #define ADC0CMD_23                  _ADC0CMD.Overlap_STR.ADC0CMD_23STR.Word
    #define ADC0CMD_23_SMP              _ADC0CMD.Overlap_STR.ADC0CMD_23STR.Bits.SMP
    
    #define ADC0CMD_23_SMP_MASK         63488U
    #define ADC0CMD_23_SMP_BITNUM       11U
    
  } Overlap_STR;

} ADC0CMDSTR;
extern volatile ADC0CMDSTR _ADC0CMD @0x00000614;
#define ADC0CMD                         _ADC0CMD.Dword


/*** ADC0CIDX - ADC0 Command Index Register; 0x0000061C ***/
typedef union {
  byte Byte;
  struct {
    byte CMD_IDX     :6;                                       /* ADC Command Index */
    byte             :1; 
    byte             :1; 
  } Bits;
} ADC0CIDXSTR;
extern volatile ADC0CIDXSTR _ADC0CIDX @0x0000061C;
#define ADC0CIDX                        _ADC0CIDX.Byte
#define ADC0CIDX_CMD_IDX                _ADC0CIDX.Bits.CMD_IDX

#define ADC0CIDX_CMD_IDX_MASK           63U
#define ADC0CIDX_CMD_IDX_BITNUM         0U


/*** ADC0CBP_0 - ADC0 Command Base Pointer Register 0; 0x0000061D ***/
typedef union {
  byte Byte;
  struct {
    byte CMD_PTR     :8;                                       /* ADC Command Base Pointer Address */
  } Bits;
} ADC0CBP_0STR;
extern volatile ADC0CBP_0STR _ADC0CBP_0 @0x0000061D;
#define ADC0CBP_0                       _ADC0CBP_0.Byte
#define ADC0CBP_0_CMD_PTR               _ADC0CBP_0.Bits.CMD_PTR
/* ADC0CBP__ARR: Access 3 ADC0CBP_x registers in an array */
#define ADC0CBP__ARR                    ((volatile byte *) &ADC0CBP_0)

#define ADC0CBP_0_CMD_PTR_MASK          255U
#define ADC0CBP_0_CMD_PTR_BITNUM        0U


/*** ADC0CBP_1 - ADC0 Command Base Pointer Register 1; 0x0000061E ***/
typedef union {
  byte Byte;
  struct {
    byte CMD_PTR     :8;                                       /* ADC Command Base Pointer Address */
  } Bits;
} ADC0CBP_1STR;
extern volatile ADC0CBP_1STR _ADC0CBP_1 @0x0000061E;
#define ADC0CBP_1                       _ADC0CBP_1.Byte
#define ADC0CBP_1_CMD_PTR               _ADC0CBP_1.Bits.CMD_PTR

#define ADC0CBP_1_CMD_PTR_MASK          255U
#define ADC0CBP_1_CMD_PTR_BITNUM        0U


/*** ADC0CBP_2 - ADC0 Command Base Pointer Register 2; 0x0000061F ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte CMD_PTR     :6;                                       /* ADC Command Base Pointer Address */
  } Bits;
} ADC0CBP_2STR;
extern volatile ADC0CBP_2STR _ADC0CBP_2 @0x0000061F;
#define ADC0CBP_2                       _ADC0CBP_2.Byte
#define ADC0CBP_2_CMD_PTR               _ADC0CBP_2.Bits.CMD_PTR

#define ADC0CBP_2_CMD_PTR_MASK          252U
#define ADC0CBP_2_CMD_PTR_BITNUM        2U


/*** ADC0RIDX - ADC0 Result Index Register; 0x00000620 ***/
typedef union {
  byte Byte;
  struct {
    byte RES_IDX     :6;                                       /* ADC Result Index */
    byte             :1; 
    byte             :1; 
  } Bits;
} ADC0RIDXSTR;
extern volatile ADC0RIDXSTR _ADC0RIDX @0x00000620;
#define ADC0RIDX                        _ADC0RIDX.Byte
#define ADC0RIDX_RES_IDX                _ADC0RIDX.Bits.RES_IDX

#define ADC0RIDX_RES_IDX_MASK           63U
#define ADC0RIDX_RES_IDX_BITNUM         0U


/*** ADC0RBP_0 - ADC0 Result Base Pointer Register 0; 0x00000621 ***/
typedef union {
  byte Byte;
  struct {
    byte RES_PTR     :4;                                       /* ADC Result Base Pointer Address */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ADC0RBP_0STR;
extern volatile ADC0RBP_0STR _ADC0RBP_0 @0x00000621;
#define ADC0RBP_0                       _ADC0RBP_0.Byte
#define ADC0RBP_0_RES_PTR               _ADC0RBP_0.Bits.RES_PTR
/* ADC0RBP__ARR: Access 3 ADC0RBP_x registers in an array */
#define ADC0RBP__ARR                    ((volatile byte *) &ADC0RBP_0)

#define ADC0RBP_0_RES_PTR_MASK          15U
#define ADC0RBP_0_RES_PTR_BITNUM        0U


/*** ADC0RBP_1 - ADC0 Result Base Pointer Register 1; 0x00000622 ***/
typedef union {
  byte Byte;
  struct {
    byte RES_PTR     :8;                                       /* ADC Result Base Pointer Address */
  } Bits;
} ADC0RBP_1STR;
extern volatile ADC0RBP_1STR _ADC0RBP_1 @0x00000622;
#define ADC0RBP_1                       _ADC0RBP_1.Byte
#define ADC0RBP_1_RES_PTR               _ADC0RBP_1.Bits.RES_PTR

#define ADC0RBP_1_RES_PTR_MASK          255U
#define ADC0RBP_1_RES_PTR_BITNUM        0U


/*** ADC0RBP_2 - ADC0 Result Base Pointer Register 2; 0x00000623 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte RES_PTR     :6;                                       /* ADC Result Base Pointer Address */
  } Bits;
} ADC0RBP_2STR;
extern volatile ADC0RBP_2STR _ADC0RBP_2 @0x00000623;
#define ADC0RBP_2                       _ADC0RBP_2.Byte
#define ADC0RBP_2_RES_PTR               _ADC0RBP_2.Bits.RES_PTR

#define ADC0RBP_2_RES_PTR_MASK          252U
#define ADC0RBP_2_RES_PTR_BITNUM        2U


/*** ADC0CROFF0 - ADC0 Command and Result Offset Register 0; 0x00000624 ***/
typedef union {
  byte Byte;
  struct {
    byte CMDRES_OFF0 :7;                                       /* ADC Command and Result Offset Value refer to CSL_0 and RVL_0 */
    byte             :1; 
  } Bits;
} ADC0CROFF0STR;
extern volatile ADC0CROFF0STR _ADC0CROFF0 @0x00000624;
#define ADC0CROFF0                      _ADC0CROFF0.Byte
#define ADC0CROFF0_CMDRES_OFF0          _ADC0CROFF0.Bits.CMDRES_OFF0
/* ADC0CROFF_ARR: Access 2 ADC0CROFFx registers in an array */
#define ADC0CROFF_ARR                   ((volatile byte *) &ADC0CROFF0)

#define ADC0CROFF0_CMDRES_OFF0_MASK     127U
#define ADC0CROFF0_CMDRES_OFF0_BITNUM   0U


/*** ADC0CROFF1 - ADC0 Command and Result Offset Register 1; 0x00000625 ***/
typedef union {
  byte Byte;
  struct {
    byte CMDRES_OFF1 :7;                                       /* ADC Command and Result Offset Value refer to CSL_1 and RVL_1 */
    byte             :1; 
  } Bits;
} ADC0CROFF1STR;
extern volatile ADC0CROFF1STR _ADC0CROFF1 @0x00000625;
#define ADC0CROFF1                      _ADC0CROFF1.Byte
#define ADC0CROFF1_CMDRES_OFF1          _ADC0CROFF1.Bits.CMDRES_OFF1

#define ADC0CROFF1_CMDRES_OFF1_MASK     127U
#define ADC0CROFF1_CMDRES_OFF1_BITNUM   0U


/*** DACCTL - DAC control register; 0x00000680 ***/
typedef union {
  byte Byte;
  struct {
    byte DACM        :3;                                       /* Mode select */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte DRIVE       :1;                                       /* Drive select */
    byte FVR         :1;                                       /* Full voltage range */
  } Bits;
} DACCTLSTR;
extern volatile DACCTLSTR _DACCTL @0x00000680;
#define DACCTL                          _DACCTL.Byte
#define DACCTL_DACM                     _DACCTL.Bits.DACM
#define DACCTL_DRIVE                    _DACCTL.Bits.DRIVE
#define DACCTL_FVR                      _DACCTL.Bits.FVR

#define DACCTL_DACM_MASK                7U
#define DACCTL_DACM_BITNUM              0U
#define DACCTL_DRIVE_MASK               64U
#define DACCTL_FVR_MASK                 128U


/*** DACVOL - DAC analog output voltage level register; 0x00000682 ***/
typedef union {
  byte Byte;
  struct {
    byte VOLTAGE     :8;                                       /* Defines (together with the FVR bit) the analog output voltage */
  } Bits;
} DACVOLSTR;
extern volatile DACVOLSTR _DACVOL @0x00000682;
#define DACVOL                          _DACVOL.Byte
#define DACVOL_VOLTAGE                  _DACVOL.Bits.VOLTAGE

#define DACVOL_VOLTAGE_MASK             255U
#define DACVOL_VOLTAGE_BITNUM           0U


/*** ACMP0C0 - ACMP0 ACMP Control 0 Register; 0x00000690 ***/
typedef union {
  byte Byte;
  struct {
    byte ACMOD       :2;                                       /* ACMP Mode */
    byte ACHYS       :2;                                       /* ACMP Hysteresis */
    byte ACDLY       :1;                                       /* ACMP Input Filter Select for Inputs ACMP0 and ACMP1 */
    byte ACOPS       :1;                                       /* ACMP Output Polarity Select */
    byte ACOPE       :1;                                       /* ACMP Output Pin Enable */
    byte ACE         :1;                                       /* ACMP Enable */
  } Bits;
} ACMP0C0STR;
extern volatile ACMP0C0STR _ACMP0C0 @0x00000690;
#define ACMP0C0                         _ACMP0C0.Byte
#define ACMP0C0_ACMOD                   _ACMP0C0.Bits.ACMOD
#define ACMP0C0_ACHYS                   _ACMP0C0.Bits.ACHYS
#define ACMP0C0_ACDLY                   _ACMP0C0.Bits.ACDLY
#define ACMP0C0_ACOPS                   _ACMP0C0.Bits.ACOPS
#define ACMP0C0_ACOPE                   _ACMP0C0.Bits.ACOPE
#define ACMP0C0_ACE                     _ACMP0C0.Bits.ACE
/* ACMP0C_ARR: Access 3 ACMP0Cx registers in an array */
#define ACMP0C_ARR                      ((volatile byte *) &ACMP0C0)

#define ACMP0C0_ACMOD_MASK              3U
#define ACMP0C0_ACMOD_BITNUM            0U
#define ACMP0C0_ACHYS_MASK              12U
#define ACMP0C0_ACHYS_BITNUM            2U
#define ACMP0C0_ACDLY_MASK              16U
#define ACMP0C0_ACOPS_MASK              32U
#define ACMP0C0_ACOPE_MASK              64U
#define ACMP0C0_ACE_MASK                128U


/*** ACMP0C1 - ACMP0 Control 1 Register; 0x00000691 ***/
typedef union {
  byte Byte;
  struct {
    byte ACNSEL      :2;                                       /* ACMP Negative Input Select */
    byte             :1; 
    byte             :1; 
    byte ACPSEL      :2;                                       /* ACMP Positive Input Select */
    byte             :1; 
    byte             :1; 
  } Bits;
} ACMP0C1STR;
extern volatile ACMP0C1STR _ACMP0C1 @0x00000691;
#define ACMP0C1                         _ACMP0C1.Byte
#define ACMP0C1_ACNSEL                  _ACMP0C1.Bits.ACNSEL
#define ACMP0C1_ACPSEL                  _ACMP0C1.Bits.ACPSEL

#define ACMP0C1_ACNSEL_MASK             3U
#define ACMP0C1_ACNSEL_BITNUM           0U
#define ACMP0C1_ACPSEL_MASK             48U
#define ACMP0C1_ACPSEL_BITNUM           4U


/*** ACMP0C2 - ACMP0 Control 2 Register; 0x00000692 ***/
typedef union {
  byte Byte;
  struct {
    byte ACIE        :1;                                       /* ACMP Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ACMP0C2STR;
extern volatile ACMP0C2STR _ACMP0C2 @0x00000692;
#define ACMP0C2                         _ACMP0C2.Byte
#define ACMP0C2_ACIE                    _ACMP0C2.Bits.ACIE

#define ACMP0C2_ACIE_MASK               1U


/*** ACMP0S - ACMP0 Status Register; 0x00000693 ***/
typedef union {
  byte Byte;
  struct {
    byte ACIF        :1;                                       /* ACMP Interrupt Flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte ACO         :1;                                       /* ACMP Output */
  } Bits;
} ACMP0SSTR;
extern volatile ACMP0SSTR _ACMP0S @0x00000693;
#define ACMP0S                          _ACMP0S.Byte
#define ACMP0S_ACIF                     _ACMP0S.Bits.ACIF
#define ACMP0S_ACO                      _ACMP0S.Bits.ACO

#define ACMP0S_ACIF_MASK                1U
#define ACMP0S_ACO_MASK                 128U


/*** ACMP1C0 - ACMP1 ACMP Control 0 Register; 0x00000698 ***/
typedef union {
  byte Byte;
  struct {
    byte ACMOD       :2;                                       /* ACMP Mode */
    byte ACHYS       :2;                                       /* ACMP Hysteresis */
    byte ACDLY       :1;                                       /* ACMP Input Filter Select for Inputs ACMP0 and ACMP1 */
    byte ACOPS       :1;                                       /* ACMP Output Polarity Select */
    byte ACOPE       :1;                                       /* ACMP Output Pin Enable */
    byte ACE         :1;                                       /* ACMP Enable */
  } Bits;
} ACMP1C0STR;
extern volatile ACMP1C0STR _ACMP1C0 @0x00000698;
#define ACMP1C0                         _ACMP1C0.Byte
#define ACMP1C0_ACMOD                   _ACMP1C0.Bits.ACMOD
#define ACMP1C0_ACHYS                   _ACMP1C0.Bits.ACHYS
#define ACMP1C0_ACDLY                   _ACMP1C0.Bits.ACDLY
#define ACMP1C0_ACOPS                   _ACMP1C0.Bits.ACOPS
#define ACMP1C0_ACOPE                   _ACMP1C0.Bits.ACOPE
#define ACMP1C0_ACE                     _ACMP1C0.Bits.ACE
/* ACMP1C_ARR: Access 3 ACMP1Cx registers in an array */
#define ACMP1C_ARR                      ((volatile byte *) &ACMP1C0)

#define ACMP1C0_ACMOD_MASK              3U
#define ACMP1C0_ACMOD_BITNUM            0U
#define ACMP1C0_ACHYS_MASK              12U
#define ACMP1C0_ACHYS_BITNUM            2U
#define ACMP1C0_ACDLY_MASK              16U
#define ACMP1C0_ACOPS_MASK              32U
#define ACMP1C0_ACOPE_MASK              64U
#define ACMP1C0_ACE_MASK                128U


/*** ACMP1C1 - ACMP1 Control 1 Register; 0x00000699 ***/
typedef union {
  byte Byte;
  struct {
    byte ACNSEL      :2;                                       /* ACMP Negative Input Select */
    byte             :1; 
    byte             :1; 
    byte ACPSEL      :2;                                       /* ACMP Positive Input Select */
    byte             :1; 
    byte             :1; 
  } Bits;
} ACMP1C1STR;
extern volatile ACMP1C1STR _ACMP1C1 @0x00000699;
#define ACMP1C1                         _ACMP1C1.Byte
#define ACMP1C1_ACNSEL                  _ACMP1C1.Bits.ACNSEL
#define ACMP1C1_ACPSEL                  _ACMP1C1.Bits.ACPSEL

#define ACMP1C1_ACNSEL_MASK             3U
#define ACMP1C1_ACNSEL_BITNUM           0U
#define ACMP1C1_ACPSEL_MASK             48U
#define ACMP1C1_ACPSEL_BITNUM           4U


/*** ACMP1C2 - ACMP1 Control 2 Register; 0x0000069A ***/
typedef union {
  byte Byte;
  struct {
    byte ACIE        :1;                                       /* ACMP Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} ACMP1C2STR;
extern volatile ACMP1C2STR _ACMP1C2 @0x0000069A;
#define ACMP1C2                         _ACMP1C2.Byte
#define ACMP1C2_ACIE                    _ACMP1C2.Bits.ACIE

#define ACMP1C2_ACIE_MASK               1U


/*** ACMP1S - ACMP1 Status Register; 0x0000069B ***/
typedef union {
  byte Byte;
  struct {
    byte ACIF        :1;                                       /* ACMP Interrupt Flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte ACO         :1;                                       /* ACMP Output */
  } Bits;
} ACMP1SSTR;
extern volatile ACMP1SSTR _ACMP1S @0x0000069B;
#define ACMP1S                          _ACMP1S.Byte
#define ACMP1S_ACIF                     _ACMP1S.Bits.ACIF
#define ACMP1S_ACO                      _ACMP1S.Bits.ACO

#define ACMP1S_ACIF_MASK                1U
#define ACMP1S_ACO_MASK                 128U


/*** CPMURFLG - CPMU Reset Flags Register; 0x000006C3 ***/
typedef union {
  byte Byte;
  struct {
    byte PMRF        :1;                                       /* PLL Clock Monitor Reset Flag */
    byte OMRF        :1;                                       /* Oscillator Clock Monitor Reset Flag */
    byte             :1; 
    byte COPRF       :1;                                       /* COP Reset Flag */
    byte             :1; 
    byte LVRF        :1;                                       /* Low Voltage Reset Flag */
    byte PORF        :1;                                       /* Power on Reset Flag */
    byte             :1; 
  } Bits;
} CPMURFLGSTR;
extern volatile CPMURFLGSTR _CPMURFLG @0x000006C3;
#define CPMURFLG                        _CPMURFLG.Byte
#define CPMURFLG_PMRF                   _CPMURFLG.Bits.PMRF
#define CPMURFLG_OMRF                   _CPMURFLG.Bits.OMRF
#define CPMURFLG_COPRF                  _CPMURFLG.Bits.COPRF
#define CPMURFLG_LVRF                   _CPMURFLG.Bits.LVRF
#define CPMURFLG_PORF                   _CPMURFLG.Bits.PORF

#define CPMURFLG_PMRF_MASK              1U
#define CPMURFLG_OMRF_MASK              2U
#define CPMURFLG_COPRF_MASK             8U
#define CPMURFLG_LVRF_MASK              32U
#define CPMURFLG_PORF_MASK              64U


/*** CPMUSYNR - CPMU Synthesizer Register; 0x000006C4 ***/
typedef union {
  byte Byte;
  struct {
    byte SYNDIV0     :1;                                       /* Multiplication factor of the IPLL bit 0 */
    byte SYNDIV1     :1;                                       /* Multiplication factor of the IPLL bit 1 */
    byte SYNDIV2     :1;                                       /* Multiplication factor of the IPLL bit 2 */
    byte SYNDIV3     :1;                                       /* Multiplication factor of the IPLL bit 3 */
    byte SYNDIV4     :1;                                       /* Multiplication factor of the IPLL bit 4 */
    byte SYNDIV5     :1;                                       /* Multiplication factor of the IPLL bit 5 */
    byte VCOFRQ0     :1;                                       /* VCO frequency range bit 0 */
    byte VCOFRQ1     :1;                                       /* VCO frequency range bit 1 */
  } Bits;
  struct {
    byte grpSYNDIV :6;
    byte grpVCOFRQ :2;
  } MergedBits;
} CPMUSYNRSTR;
extern volatile CPMUSYNRSTR _CPMUSYNR @0x000006C4;
#define CPMUSYNR                        _CPMUSYNR.Byte
#define CPMUSYNR_SYNDIV0                _CPMUSYNR.Bits.SYNDIV0
#define CPMUSYNR_SYNDIV1                _CPMUSYNR.Bits.SYNDIV1
#define CPMUSYNR_SYNDIV2                _CPMUSYNR.Bits.SYNDIV2
#define CPMUSYNR_SYNDIV3                _CPMUSYNR.Bits.SYNDIV3
#define CPMUSYNR_SYNDIV4                _CPMUSYNR.Bits.SYNDIV4
#define CPMUSYNR_SYNDIV5                _CPMUSYNR.Bits.SYNDIV5
#define CPMUSYNR_VCOFRQ0                _CPMUSYNR.Bits.VCOFRQ0
#define CPMUSYNR_VCOFRQ1                _CPMUSYNR.Bits.VCOFRQ1
#define CPMUSYNR_SYNDIV                 _CPMUSYNR.MergedBits.grpSYNDIV
#define CPMUSYNR_VCOFRQ                 _CPMUSYNR.MergedBits.grpVCOFRQ

#define CPMUSYNR_SYNDIV0_MASK           1U
#define CPMUSYNR_SYNDIV1_MASK           2U
#define CPMUSYNR_SYNDIV2_MASK           4U
#define CPMUSYNR_SYNDIV3_MASK           8U
#define CPMUSYNR_SYNDIV4_MASK           16U
#define CPMUSYNR_SYNDIV5_MASK           32U
#define CPMUSYNR_VCOFRQ0_MASK           64U
#define CPMUSYNR_VCOFRQ1_MASK           128U
#define CPMUSYNR_SYNDIV_MASK            63U
#define CPMUSYNR_SYNDIV_BITNUM          0U
#define CPMUSYNR_VCOFRQ_MASK            192U
#define CPMUSYNR_VCOFRQ_BITNUM          6U


/*** CPMUREFDIV - CPMU Reference Divider Register; 0x000006C5 ***/
typedef union {
  byte Byte;
  struct {
    byte REFDIV0     :1;                                       /* Finer granularity for the IPLL multiplier steps bit 0 */
    byte REFDIV1     :1;                                       /* Finer granularity for the IPLL multiplier steps bit 1 */
    byte REFDIV2     :1;                                       /* Finer granularity for the IPLL multiplier steps bit 2 */
    byte REFDIV3     :1;                                       /* Finer granularity for the IPLL multiplier steps bit 3 */
    byte             :1; 
    byte             :1; 
    byte REFFRQ0     :1;                                       /* IPLL optimal stability and lock time configuration bit 0 */
    byte REFFRQ1     :1;                                       /* IPLL optimal stability and lock time configuration bit 1 */
  } Bits;
  struct {
    byte grpREFDIV :4;
    byte         :1;
    byte         :1;
    byte grpREFFRQ :2;
  } MergedBits;
} CPMUREFDIVSTR;
extern volatile CPMUREFDIVSTR _CPMUREFDIV @0x000006C5;
#define CPMUREFDIV                      _CPMUREFDIV.Byte
#define CPMUREFDIV_REFDIV0              _CPMUREFDIV.Bits.REFDIV0
#define CPMUREFDIV_REFDIV1              _CPMUREFDIV.Bits.REFDIV1
#define CPMUREFDIV_REFDIV2              _CPMUREFDIV.Bits.REFDIV2
#define CPMUREFDIV_REFDIV3              _CPMUREFDIV.Bits.REFDIV3
#define CPMUREFDIV_REFFRQ0              _CPMUREFDIV.Bits.REFFRQ0
#define CPMUREFDIV_REFFRQ1              _CPMUREFDIV.Bits.REFFRQ1
#define CPMUREFDIV_REFDIV               _CPMUREFDIV.MergedBits.grpREFDIV
#define CPMUREFDIV_REFFRQ               _CPMUREFDIV.MergedBits.grpREFFRQ

#define CPMUREFDIV_REFDIV0_MASK         1U
#define CPMUREFDIV_REFDIV1_MASK         2U
#define CPMUREFDIV_REFDIV2_MASK         4U
#define CPMUREFDIV_REFDIV3_MASK         8U
#define CPMUREFDIV_REFFRQ0_MASK         64U
#define CPMUREFDIV_REFFRQ1_MASK         128U
#define CPMUREFDIV_REFDIV_MASK          15U
#define CPMUREFDIV_REFDIV_BITNUM        0U
#define CPMUREFDIV_REFFRQ_MASK          192U
#define CPMUREFDIV_REFFRQ_BITNUM        6U


/*** CPMUPOSTDIV - CPMU Post Divider Register; 0x000006C6 ***/
typedef union {
  byte Byte;
  struct {
    byte POSTDIV0    :1;                                       /* Frequency ratio between the VCOCLK and PLLCLK control bit 0 */
    byte POSTDIV1    :1;                                       /* Frequency ratio between the VCOCLK and PLLCLK control bit 1 */
    byte POSTDIV2    :1;                                       /* Frequency ratio between the VCOCLK and PLLCLK control bit 2 */
    byte POSTDIV3    :1;                                       /* Frequency ratio between the VCOCLK and PLLCLK control bit 3 */
    byte POSTDIV4    :1;                                       /* Frequency ratio between the VCOCLK and PLLCLK control bit 4 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpPOSTDIV :5;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CPMUPOSTDIVSTR;
extern volatile CPMUPOSTDIVSTR _CPMUPOSTDIV @0x000006C6;
#define CPMUPOSTDIV                     _CPMUPOSTDIV.Byte
#define CPMUPOSTDIV_POSTDIV0            _CPMUPOSTDIV.Bits.POSTDIV0
#define CPMUPOSTDIV_POSTDIV1            _CPMUPOSTDIV.Bits.POSTDIV1
#define CPMUPOSTDIV_POSTDIV2            _CPMUPOSTDIV.Bits.POSTDIV2
#define CPMUPOSTDIV_POSTDIV3            _CPMUPOSTDIV.Bits.POSTDIV3
#define CPMUPOSTDIV_POSTDIV4            _CPMUPOSTDIV.Bits.POSTDIV4
#define CPMUPOSTDIV_POSTDIV             _CPMUPOSTDIV.MergedBits.grpPOSTDIV

#define CPMUPOSTDIV_POSTDIV0_MASK       1U
#define CPMUPOSTDIV_POSTDIV1_MASK       2U
#define CPMUPOSTDIV_POSTDIV2_MASK       4U
#define CPMUPOSTDIV_POSTDIV3_MASK       8U
#define CPMUPOSTDIV_POSTDIV4_MASK       16U
#define CPMUPOSTDIV_POSTDIV_MASK        31U
#define CPMUPOSTDIV_POSTDIV_BITNUM      0U


/*** CPMUIFLG - CPMU Interrupt Flags Register; 0x000006C7 ***/
typedef union {
  byte Byte;
  struct {
    byte UPOSC       :1;                                       /* Oscillator Status Bit */
    byte OSCIF       :1;                                       /* Oscillator Interrupt Flag */
    byte             :1; 
    byte LOCK        :1;                                       /* Lock Status Bit */
    byte LOCKIF      :1;                                       /* PLL Lock Interrupt Flag */
    byte             :1; 
    byte             :1; 
    byte RTIF        :1;                                       /* Real Time Interrupt Flag */
  } Bits;
} CPMUIFLGSTR;
extern volatile CPMUIFLGSTR _CPMUIFLG @0x000006C7;
#define CPMUIFLG                        _CPMUIFLG.Byte
#define CPMUIFLG_UPOSC                  _CPMUIFLG.Bits.UPOSC
#define CPMUIFLG_OSCIF                  _CPMUIFLG.Bits.OSCIF
#define CPMUIFLG_LOCK                   _CPMUIFLG.Bits.LOCK
#define CPMUIFLG_LOCKIF                 _CPMUIFLG.Bits.LOCKIF
#define CPMUIFLG_RTIF                   _CPMUIFLG.Bits.RTIF

#define CPMUIFLG_UPOSC_MASK             1U
#define CPMUIFLG_OSCIF_MASK             2U
#define CPMUIFLG_LOCK_MASK              8U
#define CPMUIFLG_LOCKIF_MASK            16U
#define CPMUIFLG_RTIF_MASK              128U


/*** CPMUINT - CPMU Interrupt Enable Register; 0x000006C8 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte OSCIE       :1;                                       /* Oscillator Corrupt Interrupt Enable Bit */
    byte             :1; 
    byte             :1; 
    byte LOCKIE      :1;                                       /* Lock Interrupt Enable Bit */
    byte             :1; 
    byte             :1; 
    byte RTIE        :1;                                       /* Real Time Interrupt Enable Bit */
  } Bits;
} CPMUINTSTR;
extern volatile CPMUINTSTR _CPMUINT @0x000006C8;
#define CPMUINT                         _CPMUINT.Byte
#define CPMUINT_OSCIE                   _CPMUINT.Bits.OSCIE
#define CPMUINT_LOCKIE                  _CPMUINT.Bits.LOCKIE
#define CPMUINT_RTIE                    _CPMUINT.Bits.RTIE

#define CPMUINT_OSCIE_MASK              2U
#define CPMUINT_LOCKIE_MASK             16U
#define CPMUINT_RTIE_MASK               128U


/*** CPMUCLKS - CPMU Clock Select Register; 0x000006C9 ***/
typedef union {
  byte Byte;
  struct {
    byte COPOSCSEL0  :1;                                       /* COP Clock Select 0 */
    byte RTIOSCSEL   :1;                                       /* RTI Clock Select */
    byte PCE         :1;                                       /* COP Enable During Pseudo Stop Bit */
    byte PRE         :1;                                       /* RTI Enable During Pseudo Stop Bit */
    byte COPOSCSEL1  :1;                                       /* COP Clock Select 1 */
    byte CSAD        :1;                                       /* COP in Stop Mode ACLK Disable */
    byte PSTP        :1;                                       /* Pseudo Stop Bit */
    byte PLLSEL      :1;                                       /* PLL Select Bit */
  } Bits;
} CPMUCLKSSTR;
extern volatile CPMUCLKSSTR _CPMUCLKS @0x000006C9;
#define CPMUCLKS                        _CPMUCLKS.Byte
#define CPMUCLKS_COPOSCSEL0             _CPMUCLKS.Bits.COPOSCSEL0
#define CPMUCLKS_RTIOSCSEL              _CPMUCLKS.Bits.RTIOSCSEL
#define CPMUCLKS_PCE                    _CPMUCLKS.Bits.PCE
#define CPMUCLKS_PRE                    _CPMUCLKS.Bits.PRE
#define CPMUCLKS_COPOSCSEL1             _CPMUCLKS.Bits.COPOSCSEL1
#define CPMUCLKS_CSAD                   _CPMUCLKS.Bits.CSAD
#define CPMUCLKS_PSTP                   _CPMUCLKS.Bits.PSTP
#define CPMUCLKS_PLLSEL                 _CPMUCLKS.Bits.PLLSEL

#define CPMUCLKS_COPOSCSEL0_MASK        1U
#define CPMUCLKS_RTIOSCSEL_MASK         2U
#define CPMUCLKS_PCE_MASK               4U
#define CPMUCLKS_PRE_MASK               8U
#define CPMUCLKS_COPOSCSEL1_MASK        16U
#define CPMUCLKS_CSAD_MASK              32U
#define CPMUCLKS_PSTP_MASK              64U
#define CPMUCLKS_PLLSEL_MASK            128U


/*** CPMUPLL - CPMU PLL Control Register; 0x000006CA ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte FM0         :1;                                       /* PLL Frequency Modulation Enable Bit 0 */
    byte FM1         :1;                                       /* PLL Frequency Modulation Enable Bit 1 */
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte grpFM   :2;
    byte         :1;
    byte         :1;
  } MergedBits;
} CPMUPLLSTR;
extern volatile CPMUPLLSTR _CPMUPLL @0x000006CA;
#define CPMUPLL                         _CPMUPLL.Byte
#define CPMUPLL_FM0                     _CPMUPLL.Bits.FM0
#define CPMUPLL_FM1                     _CPMUPLL.Bits.FM1
#define CPMUPLL_FM                      _CPMUPLL.MergedBits.grpFM

#define CPMUPLL_FM0_MASK                16U
#define CPMUPLL_FM1_MASK                32U
#define CPMUPLL_FM_MASK                 48U
#define CPMUPLL_FM_BITNUM               4U


/*** CPMURTI - CPMU RTI Control Register; 0x000006CB ***/
typedef union {
  byte Byte;
  struct {
    byte RTR0        :1;                                       /* Real Time Interrupt Modulus Counter Select Bit 0 */
    byte RTR1        :1;                                       /* Real Time Interrupt Modulus Counter Select Bit 1 */
    byte RTR2        :1;                                       /* Real Time Interrupt Modulus Counter Select Bit 2 */
    byte RTR3        :1;                                       /* Real Time Interrupt Modulus Counter Select Bit 3 */
    byte RTR4        :1;                                       /* Real Time Interrupt Prescale Rate Select Bit 4 */
    byte RTR5        :1;                                       /* Real Time Interrupt Prescale Rate Select Bit 5 */
    byte RTR6        :1;                                       /* Real Time Interrupt Prescale Rate Select Bit 6 */
    byte RTDEC       :1;                                       /* Decimal or Binary Divider Select Bit */
  } Bits;
  struct {
    byte grpRTR  :7;
    byte         :1;
  } MergedBits;
} CPMURTISTR;
extern volatile CPMURTISTR _CPMURTI @0x000006CB;
#define CPMURTI                         _CPMURTI.Byte
#define CPMURTI_RTR0                    _CPMURTI.Bits.RTR0
#define CPMURTI_RTR1                    _CPMURTI.Bits.RTR1
#define CPMURTI_RTR2                    _CPMURTI.Bits.RTR2
#define CPMURTI_RTR3                    _CPMURTI.Bits.RTR3
#define CPMURTI_RTR4                    _CPMURTI.Bits.RTR4
#define CPMURTI_RTR5                    _CPMURTI.Bits.RTR5
#define CPMURTI_RTR6                    _CPMURTI.Bits.RTR6
#define CPMURTI_RTDEC                   _CPMURTI.Bits.RTDEC
#define CPMURTI_RTR                     _CPMURTI.MergedBits.grpRTR

#define CPMURTI_RTR0_MASK               1U
#define CPMURTI_RTR1_MASK               2U
#define CPMURTI_RTR2_MASK               4U
#define CPMURTI_RTR3_MASK               8U
#define CPMURTI_RTR4_MASK               16U
#define CPMURTI_RTR5_MASK               32U
#define CPMURTI_RTR6_MASK               64U
#define CPMURTI_RTDEC_MASK              128U
#define CPMURTI_RTR_MASK                127U
#define CPMURTI_RTR_BITNUM              0U


/*** CPMUCOP - CPMU COP Control Register; 0x000006CC ***/
typedef union {
  byte Byte;
  struct {
    byte CR0         :1;                                       /* COP Watchdog Timer Rate select Bit 0 */
    byte CR1         :1;                                       /* COP Watchdog Timer Rate select Bit 1 */
    byte CR2         :1;                                       /* COP Watchdog Timer Rate select Bit 2 */
    byte             :1; 
    byte             :1; 
    byte WRTMASK     :1;                                       /* Write Mask for WCOP */
    byte RSBCK       :1;                                       /* COP and RTI stop in Active BDM mode Bit */
    byte WCOP        :1;                                       /* Window COP mode */
  } Bits;
  struct {
    byte grpCR   :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CPMUCOPSTR;
extern volatile CPMUCOPSTR _CPMUCOP @0x000006CC;
#define CPMUCOP                         _CPMUCOP.Byte
#define CPMUCOP_CR0                     _CPMUCOP.Bits.CR0
#define CPMUCOP_CR1                     _CPMUCOP.Bits.CR1
#define CPMUCOP_CR2                     _CPMUCOP.Bits.CR2
#define CPMUCOP_WRTMASK                 _CPMUCOP.Bits.WRTMASK
#define CPMUCOP_RSBCK                   _CPMUCOP.Bits.RSBCK
#define CPMUCOP_WCOP                    _CPMUCOP.Bits.WCOP
#define CPMUCOP_CR                      _CPMUCOP.MergedBits.grpCR

#define CPMUCOP_CR0_MASK                1U
#define CPMUCOP_CR1_MASK                2U
#define CPMUCOP_CR2_MASK                4U
#define CPMUCOP_WRTMASK_MASK            32U
#define CPMUCOP_RSBCK_MASK              64U
#define CPMUCOP_WCOP_MASK               128U
#define CPMUCOP_CR_MASK                 7U
#define CPMUCOP_CR_BITNUM               0U


/*** CPMUARMCOP - CPMU COP Timer Arm/Reset Register; 0x000006CF ***/
typedef union {
  byte Byte;
  struct {
    byte BIT0        :1;                                       /* CPMU COP Timer Arm/Reset Bit 0 */
    byte BIT1        :1;                                       /* CPMU COP Timer Arm/Reset Bit 1 */
    byte BIT2        :1;                                       /* CPMU COP Timer Arm/Reset Bit 2 */
    byte BIT3        :1;                                       /* CPMU COP Timer Arm/Reset Bit 3 */
    byte BIT4        :1;                                       /* CPMU COP Timer Arm/Reset Bit 4 */
    byte BIT5        :1;                                       /* CPMU COP Timer Arm/Reset Bit 5 */
    byte BIT6        :1;                                       /* CPMU COP Timer Arm/Reset Bit 6 */
    byte BIT7        :1;                                       /* CPMU COP Timer Arm/Reset Bit 7 */
  } Bits;
} CPMUARMCOPSTR;
extern volatile CPMUARMCOPSTR _CPMUARMCOP @0x000006CF;
#define CPMUARMCOP                      _CPMUARMCOP.Byte
#define CPMUARMCOP_BIT0                 _CPMUARMCOP.Bits.BIT0
#define CPMUARMCOP_BIT1                 _CPMUARMCOP.Bits.BIT1
#define CPMUARMCOP_BIT2                 _CPMUARMCOP.Bits.BIT2
#define CPMUARMCOP_BIT3                 _CPMUARMCOP.Bits.BIT3
#define CPMUARMCOP_BIT4                 _CPMUARMCOP.Bits.BIT4
#define CPMUARMCOP_BIT5                 _CPMUARMCOP.Bits.BIT5
#define CPMUARMCOP_BIT6                 _CPMUARMCOP.Bits.BIT6
#define CPMUARMCOP_BIT7                 _CPMUARMCOP.Bits.BIT7

#define CPMUARMCOP_BIT0_MASK            1U
#define CPMUARMCOP_BIT1_MASK            2U
#define CPMUARMCOP_BIT2_MASK            4U
#define CPMUARMCOP_BIT3_MASK            8U
#define CPMUARMCOP_BIT4_MASK            16U
#define CPMUARMCOP_BIT5_MASK            32U
#define CPMUARMCOP_BIT6_MASK            64U
#define CPMUARMCOP_BIT7_MASK            128U


/*** CPMUHTCTL - High Temperature Control Register; 0x000006D0 ***/
typedef union {
  byte Byte;
  struct {
    byte HTIF        :1;                                       /* High Temperature Interrupt Flag */
    byte HTIE        :1;                                       /* High Temperature Interrupt Enable Bit */
    byte HTDS        :1;                                       /* High Temperature Detect Status Bi */
    byte HTE         :1;                                       /* High Temperature Sensor/Bandgap Voltage Enable Bit */
    byte             :1; 
    byte VSEL        :1;                                       /* Voltage Access Select Bit */
    byte             :1; 
    byte             :1; 
  } Bits;
} CPMUHTCTLSTR;
extern volatile CPMUHTCTLSTR _CPMUHTCTL @0x000006D0;
#define CPMUHTCTL                       _CPMUHTCTL.Byte
#define CPMUHTCTL_HTIF                  _CPMUHTCTL.Bits.HTIF
#define CPMUHTCTL_HTIE                  _CPMUHTCTL.Bits.HTIE
#define CPMUHTCTL_HTDS                  _CPMUHTCTL.Bits.HTDS
#define CPMUHTCTL_HTE                   _CPMUHTCTL.Bits.HTE
#define CPMUHTCTL_VSEL                  _CPMUHTCTL.Bits.VSEL

#define CPMUHTCTL_HTIF_MASK             1U
#define CPMUHTCTL_HTIE_MASK             2U
#define CPMUHTCTL_HTDS_MASK             4U
#define CPMUHTCTL_HTE_MASK              8U
#define CPMUHTCTL_VSEL_MASK             32U


/*** CPMULVCTL - Low Voltage Control Register; 0x000006D1 ***/
typedef union {
  byte Byte;
  struct {
    byte LVIF        :1;                                       /* Low-Voltage Interrupt Flag */
    byte LVIE        :1;                                       /* Low-Voltage Interrupt Enable Bit */
    byte LVDS        :1;                                       /* Low-Voltage Detect Status Bit */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} CPMULVCTLSTR;
extern volatile CPMULVCTLSTR _CPMULVCTL @0x000006D1;
#define CPMULVCTL                       _CPMULVCTL.Byte
#define CPMULVCTL_LVIF                  _CPMULVCTL.Bits.LVIF
#define CPMULVCTL_LVIE                  _CPMULVCTL.Bits.LVIE
#define CPMULVCTL_LVDS                  _CPMULVCTL.Bits.LVDS

#define CPMULVCTL_LVIF_MASK             1U
#define CPMULVCTL_LVIE_MASK             2U
#define CPMULVCTL_LVDS_MASK             4U


/*** CPMUAPICTL - Autonomous Periodical Interrupt Control Register; 0x000006D2 ***/
typedef union {
  byte Byte;
  struct {
    byte APIF        :1;                                       /* Autonomous Periodical Interrupt Flag */
    byte APIE        :1;                                       /* Autonomous Periodical Interrupt Enable Bit */
    byte APIFE       :1;                                       /* Autonomous Periodical Interrupt Feature Enable Bit */
    byte APIEA       :1;                                       /* Autonomous Periodical Interrupt External Access Enable Bit */
    byte APIES       :1;                                       /* Autonomous Periodical Interrupt External Select Bit */
    byte             :1; 
    byte             :1; 
    byte APICLK      :1;                                       /* Autonomous Periodical Interrupt Clock Select Bit */
  } Bits;
} CPMUAPICTLSTR;
extern volatile CPMUAPICTLSTR _CPMUAPICTL @0x000006D2;
#define CPMUAPICTL                      _CPMUAPICTL.Byte
#define CPMUAPICTL_APIF                 _CPMUAPICTL.Bits.APIF
#define CPMUAPICTL_APIE                 _CPMUAPICTL.Bits.APIE
#define CPMUAPICTL_APIFE                _CPMUAPICTL.Bits.APIFE
#define CPMUAPICTL_APIEA                _CPMUAPICTL.Bits.APIEA
#define CPMUAPICTL_APIES                _CPMUAPICTL.Bits.APIES
#define CPMUAPICTL_APICLK               _CPMUAPICTL.Bits.APICLK

#define CPMUAPICTL_APIF_MASK            1U
#define CPMUAPICTL_APIE_MASK            2U
#define CPMUAPICTL_APIFE_MASK           4U
#define CPMUAPICTL_APIEA_MASK           8U
#define CPMUAPICTL_APIES_MASK           16U
#define CPMUAPICTL_APICLK_MASK          128U


/*** CPMUACLKTR - Autonomous Clock Trimming Register; 0x000006D3 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte ACLKTR0     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 0 */
    byte ACLKTR1     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 1 */
    byte ACLKTR2     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 2 */
    byte ACLKTR3     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 3 */
    byte ACLKTR4     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 4 */
    byte ACLKTR5     :1;                                       /* Autonomous Periodical Interrupt Period Trimming Bit 5 */
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte grpACLKTR :6;
  } MergedBits;
} CPMUACLKTRSTR;
extern volatile CPMUACLKTRSTR _CPMUACLKTR @0x000006D3;
#define CPMUACLKTR                      _CPMUACLKTR.Byte
#define CPMUACLKTR_ACLKTR0              _CPMUACLKTR.Bits.ACLKTR0
#define CPMUACLKTR_ACLKTR1              _CPMUACLKTR.Bits.ACLKTR1
#define CPMUACLKTR_ACLKTR2              _CPMUACLKTR.Bits.ACLKTR2
#define CPMUACLKTR_ACLKTR3              _CPMUACLKTR.Bits.ACLKTR3
#define CPMUACLKTR_ACLKTR4              _CPMUACLKTR.Bits.ACLKTR4
#define CPMUACLKTR_ACLKTR5              _CPMUACLKTR.Bits.ACLKTR5
#define CPMUACLKTR_ACLKTR               _CPMUACLKTR.MergedBits.grpACLKTR

#define CPMUACLKTR_ACLKTR0_MASK         4U
#define CPMUACLKTR_ACLKTR1_MASK         8U
#define CPMUACLKTR_ACLKTR2_MASK         16U
#define CPMUACLKTR_ACLKTR3_MASK         32U
#define CPMUACLKTR_ACLKTR4_MASK         64U
#define CPMUACLKTR_ACLKTR5_MASK         128U
#define CPMUACLKTR_ACLKTR_MASK          252U
#define CPMUACLKTR_ACLKTR_BITNUM        2U


/*** CPMUAPIR - Autonomous Periodical Interrupt Rate Register; 0x000006D4 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** CPMUAPIRH - Autonomous Periodical Interrupt Rate Register High; 0x000006D4 ***/
    union {
      byte Byte;
      struct {
        byte APIR8       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 8 */
        byte APIR9       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 9 */
        byte APIR10      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 10 */
        byte APIR11      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 11 */
        byte APIR12      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 12 */
        byte APIR13      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 13 */
        byte APIR14      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 14 */
        byte APIR15      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 15 */
      } Bits;
    } CPMUAPIRHSTR;
    #define CPMUAPIRH                   _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Byte
    #define CPMUAPIRH_APIR8             _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR8
    #define CPMUAPIRH_APIR9             _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR9
    #define CPMUAPIRH_APIR10            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR10
    #define CPMUAPIRH_APIR11            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR11
    #define CPMUAPIRH_APIR12            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR12
    #define CPMUAPIRH_APIR13            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR13
    #define CPMUAPIRH_APIR14            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR14
    #define CPMUAPIRH_APIR15            _CPMUAPIR.Overlap_STR.CPMUAPIRHSTR.Bits.APIR15
    
    #define CPMUAPIRH_APIR8_MASK        1U
    #define CPMUAPIRH_APIR9_MASK        2U
    #define CPMUAPIRH_APIR10_MASK       4U
    #define CPMUAPIRH_APIR11_MASK       8U
    #define CPMUAPIRH_APIR12_MASK       16U
    #define CPMUAPIRH_APIR13_MASK       32U
    #define CPMUAPIRH_APIR14_MASK       64U
    #define CPMUAPIRH_APIR15_MASK       128U
    

    /*** CPMUAPIRL - Autonomous Periodical Interrupt Rate Register Low; 0x000006D5 ***/
    union {
      byte Byte;
      struct {
        byte APIR0       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 0 */
        byte APIR1       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 1 */
        byte APIR2       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 2 */
        byte APIR3       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 3 */
        byte APIR4       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 4 */
        byte APIR5       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 5 */
        byte APIR6       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 6 */
        byte APIR7       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 7 */
      } Bits;
    } CPMUAPIRLSTR;
    #define CPMUAPIRL                   _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Byte
    #define CPMUAPIRL_APIR0             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR0
    #define CPMUAPIRL_APIR1             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR1
    #define CPMUAPIRL_APIR2             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR2
    #define CPMUAPIRL_APIR3             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR3
    #define CPMUAPIRL_APIR4             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR4
    #define CPMUAPIRL_APIR5             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR5
    #define CPMUAPIRL_APIR6             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR6
    #define CPMUAPIRL_APIR7             _CPMUAPIR.Overlap_STR.CPMUAPIRLSTR.Bits.APIR7
    
    #define CPMUAPIRL_APIR0_MASK        1U
    #define CPMUAPIRL_APIR1_MASK        2U
    #define CPMUAPIRL_APIR2_MASK        4U
    #define CPMUAPIRL_APIR3_MASK        8U
    #define CPMUAPIRL_APIR4_MASK        16U
    #define CPMUAPIRL_APIR5_MASK        32U
    #define CPMUAPIRL_APIR6_MASK        64U
    #define CPMUAPIRL_APIR7_MASK        128U
    
  } Overlap_STR;

  struct {
    word APIR0       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 0 */
    word APIR1       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 1 */
    word APIR2       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 2 */
    word APIR3       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 3 */
    word APIR4       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 4 */
    word APIR5       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 5 */
    word APIR6       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 6 */
    word APIR7       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 7 */
    word APIR8       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 8 */
    word APIR9       :1;                                       /* Autonomous Periodical Interrupt Rate Bit 9 */
    word APIR10      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 10 */
    word APIR11      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 11 */
    word APIR12      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 12 */
    word APIR13      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 13 */
    word APIR14      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 14 */
    word APIR15      :1;                                       /* Autonomous Periodical Interrupt Rate Bit 15 */
  } Bits;
} CPMUAPIRSTR;
extern volatile CPMUAPIRSTR _CPMUAPIR @0x000006D4;
#define CPMUAPIR                        _CPMUAPIR.Word
#define CPMUAPIR_APIR0                  _CPMUAPIR.Bits.APIR0
#define CPMUAPIR_APIR1                  _CPMUAPIR.Bits.APIR1
#define CPMUAPIR_APIR2                  _CPMUAPIR.Bits.APIR2
#define CPMUAPIR_APIR3                  _CPMUAPIR.Bits.APIR3
#define CPMUAPIR_APIR4                  _CPMUAPIR.Bits.APIR4
#define CPMUAPIR_APIR5                  _CPMUAPIR.Bits.APIR5
#define CPMUAPIR_APIR6                  _CPMUAPIR.Bits.APIR6
#define CPMUAPIR_APIR7                  _CPMUAPIR.Bits.APIR7
#define CPMUAPIR_APIR8                  _CPMUAPIR.Bits.APIR8
#define CPMUAPIR_APIR9                  _CPMUAPIR.Bits.APIR9
#define CPMUAPIR_APIR10                 _CPMUAPIR.Bits.APIR10
#define CPMUAPIR_APIR11                 _CPMUAPIR.Bits.APIR11
#define CPMUAPIR_APIR12                 _CPMUAPIR.Bits.APIR12
#define CPMUAPIR_APIR13                 _CPMUAPIR.Bits.APIR13
#define CPMUAPIR_APIR14                 _CPMUAPIR.Bits.APIR14
#define CPMUAPIR_APIR15                 _CPMUAPIR.Bits.APIR15

#define CPMUAPIR_APIR0_MASK             1U
#define CPMUAPIR_APIR1_MASK             2U
#define CPMUAPIR_APIR2_MASK             4U
#define CPMUAPIR_APIR3_MASK             8U
#define CPMUAPIR_APIR4_MASK             16U
#define CPMUAPIR_APIR5_MASK             32U
#define CPMUAPIR_APIR6_MASK             64U
#define CPMUAPIR_APIR7_MASK             128U
#define CPMUAPIR_APIR8_MASK             256U
#define CPMUAPIR_APIR9_MASK             512U
#define CPMUAPIR_APIR10_MASK            1024U
#define CPMUAPIR_APIR11_MASK            2048U
#define CPMUAPIR_APIR12_MASK            4096U
#define CPMUAPIR_APIR13_MASK            8192U
#define CPMUAPIR_APIR14_MASK            16384U
#define CPMUAPIR_APIR15_MASK            32768U


/*** CPMUHTTR - High Temperature Trimming Register; 0x000006D7 ***/
typedef union {
  byte Byte;
  struct {
    byte HTTR        :4;                                       /* High Temperature Trimming Bits */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte HTOE        :1;                                       /* High Temperature Offeset Enable Bit */
  } Bits;
} CPMUHTTRSTR;
extern volatile CPMUHTTRSTR _CPMUHTTR @0x000006D7;
#define CPMUHTTR                        _CPMUHTTR.Byte
#define CPMUHTTR_HTTR                   _CPMUHTTR.Bits.HTTR
#define CPMUHTTR_HTOE                   _CPMUHTTR.Bits.HTOE

#define CPMUHTTR_HTTR_MASK              15U
#define CPMUHTTR_HTTR_BITNUM            0U
#define CPMUHTTR_HTOE_MASK              128U


/*** CPMUIRCTRIM - CPMU IRC1M Trim Registers; 0x000006D8 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** CPMUIRCTRIMH - CPMU IRC1M Trim Registers High; 0x000006D8 ***/
    union {
      byte Byte;
      struct {
        byte IRCTRIM8    :1;                                       /* IRC1M Frequency Trim Bit 8 */
        byte IRCTRIM9    :1;                                       /* IRC1M Frequency Trim Bit 9 */
        byte             :1; 
        byte TCTRIM0     :1;                                       /* IRC1M temperature coeficient Trim Bit 0 */
        byte TCTRIM1     :1;                                       /* IRC1M temperature coeficient Trim Bit 1 */
        byte TCTRIM2     :1;                                       /* IRC1M temperature coeficient Trim Bit 2 */
        byte TCTRIM3     :1;                                       /* IRC1M temperature coeficient Trim Bit 3 */
        byte TCTRIM4     :1;                                       /* IRC1M temperature coeficient Trim Bit 4 */
      } Bits;
      struct {
        byte grpIRCTRIM_8 :2;
        byte     :1;
        byte grpTCTRIM :5;
      } MergedBits;
    } CPMUIRCTRIMHSTR;
    #define CPMUIRCTRIMH                _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Byte
    #define CPMUIRCTRIMH_IRCTRIM8       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.IRCTRIM8
    #define CPMUIRCTRIMH_IRCTRIM9       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.IRCTRIM9
    #define CPMUIRCTRIMH_TCTRIM0        _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.TCTRIM0
    #define CPMUIRCTRIMH_TCTRIM1        _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.TCTRIM1
    #define CPMUIRCTRIMH_TCTRIM2        _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.TCTRIM2
    #define CPMUIRCTRIMH_TCTRIM3        _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.TCTRIM3
    #define CPMUIRCTRIMH_TCTRIM4        _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.Bits.TCTRIM4
    #define CPMUIRCTRIMH_IRCTRIM_8      _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.MergedBits.grpIRCTRIM_8
    #define CPMUIRCTRIMH_TCTRIM         _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMHSTR.MergedBits.grpTCTRIM
    #define CPMUIRCTRIMH_IRCTRIM        CPMUIRCTRIMH_IRCTRIM_8
    
    #define CPMUIRCTRIMH_IRCTRIM8_MASK  1U
    #define CPMUIRCTRIMH_IRCTRIM9_MASK  2U
    #define CPMUIRCTRIMH_TCTRIM0_MASK   8U
    #define CPMUIRCTRIMH_TCTRIM1_MASK   16U
    #define CPMUIRCTRIMH_TCTRIM2_MASK   32U
    #define CPMUIRCTRIMH_TCTRIM3_MASK   64U
    #define CPMUIRCTRIMH_TCTRIM4_MASK   128U
    #define CPMUIRCTRIMH_IRCTRIM_8_MASK 3U
    #define CPMUIRCTRIMH_IRCTRIM_8_BITNUM 0U
    #define CPMUIRCTRIMH_TCTRIM_MASK    248U
    #define CPMUIRCTRIMH_TCTRIM_BITNUM  3U
    

    /*** CPMUIRCTRIML - CPMU IRC1M Trim Registers Low; 0x000006D9 ***/
    union {
      byte Byte;
      struct {
        byte IRCTRIM0    :1;                                       /* IRC1M Frequency Trim Bit 0 */
        byte IRCTRIM1    :1;                                       /* IRC1M Frequency Trim Bit 1 */
        byte IRCTRIM2    :1;                                       /* IRC1M Frequency Trim Bit 2 */
        byte IRCTRIM3    :1;                                       /* IRC1M Frequency Trim Bit 3 */
        byte IRCTRIM4    :1;                                       /* IRC1M Frequency Trim Bit 4 */
        byte IRCTRIM5    :1;                                       /* IRC1M Frequency Trim Bit 5 */
        byte IRCTRIM6    :1;                                       /* IRC1M Frequency Trim Bit 6 */
        byte IRCTRIM7    :1;                                       /* IRC1M Frequency Trim Bit 7 */
      } Bits;
    } CPMUIRCTRIMLSTR;
    #define CPMUIRCTRIML                _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Byte
    #define CPMUIRCTRIML_IRCTRIM0       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM0
    #define CPMUIRCTRIML_IRCTRIM1       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM1
    #define CPMUIRCTRIML_IRCTRIM2       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM2
    #define CPMUIRCTRIML_IRCTRIM3       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM3
    #define CPMUIRCTRIML_IRCTRIM4       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM4
    #define CPMUIRCTRIML_IRCTRIM5       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM5
    #define CPMUIRCTRIML_IRCTRIM6       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM6
    #define CPMUIRCTRIML_IRCTRIM7       _CPMUIRCTRIM.Overlap_STR.CPMUIRCTRIMLSTR.Bits.IRCTRIM7
    
    #define CPMUIRCTRIML_IRCTRIM0_MASK  1U
    #define CPMUIRCTRIML_IRCTRIM1_MASK  2U
    #define CPMUIRCTRIML_IRCTRIM2_MASK  4U
    #define CPMUIRCTRIML_IRCTRIM3_MASK  8U
    #define CPMUIRCTRIML_IRCTRIM4_MASK  16U
    #define CPMUIRCTRIML_IRCTRIM5_MASK  32U
    #define CPMUIRCTRIML_IRCTRIM6_MASK  64U
    #define CPMUIRCTRIML_IRCTRIM7_MASK  128U
    
  } Overlap_STR;

  struct {
    word IRCTRIM0    :1;                                       /* IRC1M Frequency Trim Bit 0 */
    word IRCTRIM1    :1;                                       /* IRC1M Frequency Trim Bit 1 */
    word IRCTRIM2    :1;                                       /* IRC1M Frequency Trim Bit 2 */
    word IRCTRIM3    :1;                                       /* IRC1M Frequency Trim Bit 3 */
    word IRCTRIM4    :1;                                       /* IRC1M Frequency Trim Bit 4 */
    word IRCTRIM5    :1;                                       /* IRC1M Frequency Trim Bit 5 */
    word IRCTRIM6    :1;                                       /* IRC1M Frequency Trim Bit 6 */
    word IRCTRIM7    :1;                                       /* IRC1M Frequency Trim Bit 7 */
    word IRCTRIM8    :1;                                       /* IRC1M Frequency Trim Bit 8 */
    word IRCTRIM9    :1;                                       /* IRC1M Frequency Trim Bit 9 */
    word             :1; 
    word TCTRIM0     :1;                                       /* IRC1M temperature coeficient Trim Bit 0 */
    word TCTRIM1     :1;                                       /* IRC1M temperature coeficient Trim Bit 1 */
    word TCTRIM2     :1;                                       /* IRC1M temperature coeficient Trim Bit 2 */
    word TCTRIM3     :1;                                       /* IRC1M temperature coeficient Trim Bit 3 */
    word TCTRIM4     :1;                                       /* IRC1M temperature coeficient Trim Bit 4 */
  } Bits;
  struct {
    word grpIRCTRIM :10;
    word         :1;
    word grpTCTRIM :5;
  } MergedBits;
} CPMUIRCTRIMSTR;
extern volatile CPMUIRCTRIMSTR _CPMUIRCTRIM @0x000006D8;
#define CPMUIRCTRIM                     _CPMUIRCTRIM.Word
#define CPMUIRCTRIM_IRCTRIM0            _CPMUIRCTRIM.Bits.IRCTRIM0
#define CPMUIRCTRIM_IRCTRIM1            _CPMUIRCTRIM.Bits.IRCTRIM1
#define CPMUIRCTRIM_IRCTRIM2            _CPMUIRCTRIM.Bits.IRCTRIM2
#define CPMUIRCTRIM_IRCTRIM3            _CPMUIRCTRIM.Bits.IRCTRIM3
#define CPMUIRCTRIM_IRCTRIM4            _CPMUIRCTRIM.Bits.IRCTRIM4
#define CPMUIRCTRIM_IRCTRIM5            _CPMUIRCTRIM.Bits.IRCTRIM5
#define CPMUIRCTRIM_IRCTRIM6            _CPMUIRCTRIM.Bits.IRCTRIM6
#define CPMUIRCTRIM_IRCTRIM7            _CPMUIRCTRIM.Bits.IRCTRIM7
#define CPMUIRCTRIM_IRCTRIM8            _CPMUIRCTRIM.Bits.IRCTRIM8
#define CPMUIRCTRIM_IRCTRIM9            _CPMUIRCTRIM.Bits.IRCTRIM9
#define CPMUIRCTRIM_TCTRIM0             _CPMUIRCTRIM.Bits.TCTRIM0
#define CPMUIRCTRIM_TCTRIM1             _CPMUIRCTRIM.Bits.TCTRIM1
#define CPMUIRCTRIM_TCTRIM2             _CPMUIRCTRIM.Bits.TCTRIM2
#define CPMUIRCTRIM_TCTRIM3             _CPMUIRCTRIM.Bits.TCTRIM3
#define CPMUIRCTRIM_TCTRIM4             _CPMUIRCTRIM.Bits.TCTRIM4
#define CPMUIRCTRIM_IRCTRIM             _CPMUIRCTRIM.MergedBits.grpIRCTRIM
#define CPMUIRCTRIM_TCTRIM              _CPMUIRCTRIM.MergedBits.grpTCTRIM

#define CPMUIRCTRIM_IRCTRIM0_MASK       1U
#define CPMUIRCTRIM_IRCTRIM1_MASK       2U
#define CPMUIRCTRIM_IRCTRIM2_MASK       4U
#define CPMUIRCTRIM_IRCTRIM3_MASK       8U
#define CPMUIRCTRIM_IRCTRIM4_MASK       16U
#define CPMUIRCTRIM_IRCTRIM5_MASK       32U
#define CPMUIRCTRIM_IRCTRIM6_MASK       64U
#define CPMUIRCTRIM_IRCTRIM7_MASK       128U
#define CPMUIRCTRIM_IRCTRIM8_MASK       256U
#define CPMUIRCTRIM_IRCTRIM9_MASK       512U
#define CPMUIRCTRIM_TCTRIM0_MASK        2048U
#define CPMUIRCTRIM_TCTRIM1_MASK        4096U
#define CPMUIRCTRIM_TCTRIM2_MASK        8192U
#define CPMUIRCTRIM_TCTRIM3_MASK        16384U
#define CPMUIRCTRIM_TCTRIM4_MASK        32768U
#define CPMUIRCTRIM_IRCTRIM_MASK        1023U
#define CPMUIRCTRIM_IRCTRIM_BITNUM      0U
#define CPMUIRCTRIM_TCTRIM_MASK         63488U
#define CPMUIRCTRIM_TCTRIM_BITNUM       11U


/*** CPMUOSC - CPMU Oscillator Register; 0x000006DA ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte OSCE        :1;                                       /* Oscillator Enable Bit */
  } Bits;
} CPMUOSCSTR;
extern volatile CPMUOSCSTR _CPMUOSC @0x000006DA;
#define CPMUOSC                         _CPMUOSC.Byte
#define CPMUOSC_OSCE                    _CPMUOSC.Bits.OSCE

#define CPMUOSC_OSCE_MASK               128U


/*** CPMUPROT - CPMUV1 Protection Register; 0x000006DB ***/
typedef union {
  byte Byte;
  struct {
    byte PROT        :1;                                       /* Clock Configuration Registers Protection Bit */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} CPMUPROTSTR;
extern volatile CPMUPROTSTR _CPMUPROT @0x000006DB;
#define CPMUPROT                        _CPMUPROT.Byte
#define CPMUPROT_PROT                   _CPMUPROT.Bits.PROT

#define CPMUPROT_PROT_MASK              1U


/*** CPMUVREGCTL - Voltage Regulator Control Register; 0x000006DD ***/
typedef union {
  byte Byte;
  struct {
    byte INTXON      :1;                                       /* Internal voltage regulator Enable for VDDX domain */
    byte EXTXON      :1;                                       /* External voltage regulator Enable for VDDX domain */
    byte EXTCON      :1;                                       /* External voltage regulator Enable for VDDC domain */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} CPMUVREGCTLSTR;
extern volatile CPMUVREGCTLSTR _CPMUVREGCTL @0x000006DD;
#define CPMUVREGCTL                     _CPMUVREGCTL.Byte
#define CPMUVREGCTL_INTXON              _CPMUVREGCTL.Bits.INTXON
#define CPMUVREGCTL_EXTXON              _CPMUVREGCTL.Bits.EXTXON
#define CPMUVREGCTL_EXTCON              _CPMUVREGCTL.Bits.EXTCON

#define CPMUVREGCTL_INTXON_MASK         1U
#define CPMUVREGCTL_EXTXON_MASK         2U
#define CPMUVREGCTL_EXTCON_MASK         4U


/*** CPMUOSC2 - CPMU Oscillator Register 2; 0x000006DE ***/
typedef union {
  byte Byte;
  struct {
    byte OSCMOD      :1;                                       /* This bit selects the mode of the external oscillator (XOSCLCP) */
    byte OMRE        :1;                                       /* This bit enables the oscillator clock monitor reset */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} CPMUOSC2STR;
extern volatile CPMUOSC2STR _CPMUOSC2 @0x000006DE;
#define CPMUOSC2                        _CPMUOSC2.Byte
#define CPMUOSC2_OSCMOD                 _CPMUOSC2.Bits.OSCMOD
#define CPMUOSC2_OMRE                   _CPMUOSC2.Bits.OMRE

#define CPMUOSC2_OSCMOD_MASK            1U
#define CPMUOSC2_OMRE_MASK              2U


/*** BATE - BATS Module Enable Register; 0x000006F0 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte BSUSE       :1;                                       /* BATS VSUP Level Sense Enable */
    byte BSUAE       :1;                                       /* BATS VSUP ADC Connection Enable */
    byte BVLS        :2;                                       /* BATS Voltage Low Select */
    byte BVHS        :1;                                       /* BATS Voltage High Select */
    byte             :1; 
  } Bits;
} BATESTR;
extern volatile BATESTR _BATE @0x000006F0;
#define BATE                            _BATE.Byte
#define BATE_BSUSE                      _BATE.Bits.BSUSE
#define BATE_BSUAE                      _BATE.Bits.BSUAE
#define BATE_BVLS                       _BATE.Bits.BVLS
#define BATE_BVHS                       _BATE.Bits.BVHS

#define BATE_BSUSE_MASK                 4U
#define BATE_BSUAE_MASK                 8U
#define BATE_BVLS_MASK                  48U
#define BATE_BVLS_BITNUM                4U
#define BATE_BVHS_MASK                  64U


/*** BATSR - BATS Module Status Register; 0x000006F1 ***/
typedef union {
  byte Byte;
  struct {
    byte BVLC        :1;                                       /* BATS Voltage Sense Low Condition Bit */
    byte BVHC        :1;                                       /* BATS Voltage Sense High Condition Bit */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} BATSRSTR;
extern volatile BATSRSTR _BATSR @0x000006F1;
#define BATSR                           _BATSR.Byte
#define BATSR_BVLC                      _BATSR.Bits.BVLC
#define BATSR_BVHC                      _BATSR.Bits.BVHC

#define BATSR_BVLC_MASK                 1U
#define BATSR_BVHC_MASK                 2U


/*** BATIE - BATS Interrupt Enable Register; 0x000006F2 ***/
typedef union {
  byte Byte;
  struct {
    byte BVLIE       :1;                                       /* BATS Interrupt Enable Low */
    byte BVHIE       :1;                                       /* BATS Interrupt Enable High */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} BATIESTR;
extern volatile BATIESTR _BATIE @0x000006F2;
#define BATIE                           _BATIE.Byte
#define BATIE_BVLIE                     _BATIE.Bits.BVLIE
#define BATIE_BVHIE                     _BATIE.Bits.BVHIE

#define BATIE_BVLIE_MASK                1U
#define BATIE_BVHIE_MASK                2U


/*** BATIF - BATS Interrupt Flag Register; 0x000006F3 ***/
typedef union {
  byte Byte;
  struct {
    byte BVLIF       :1;                                       /* BATS Interrupt Flag Low Detect */
    byte BVHIF       :1;                                       /* BATS Interrupt Flag High Detect */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} BATIFSTR;
extern volatile BATIFSTR _BATIF @0x000006F3;
#define BATIF                           _BATIF.Byte
#define BATIF_BVLIF                     _BATIF.Bits.BVLIF
#define BATIF_BVHIF                     _BATIF.Bits.BVHIF

#define BATIF_BVLIF_MASK                1U
#define BATIF_BVHIF_MASK                2U


/*** SCI0BD - SCI 0 Baud Rate Register; 0x00000700 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** SCI0ASR1 - SCI 0 Alternative Status Register 1; 0x00000700 ***/
    union {
      byte Byte;
      union { /* Several registers at the same address */
        /*** SCI0ASR1 - SCI 0 Alternative Status Register 1; Several registers at the same address ***/
        union {
          struct {
            byte BKDIF       :1;                                       /* Break Detect Interrupt Flag */
            byte BERRIF      :1;                                       /* Bit Error Interrupt Flag */
            byte BERRV       :1;                                       /* Bit Error Value */
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte RXEDGIF     :1;                                       /* Receive Input Active Edge Interrupt Flag */
          } Bits;
        } SCI0ASR1STR;
        #define SCI0ASR1                _SCI0BD.Overlap_STR.SCI0ASR1STR.Byte
        #define SCI0ASR1_BKDIF          _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0ASR1STR.Bits.BKDIF
        #define SCI0ASR1_BERRIF         _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0ASR1STR.Bits.BERRIF
        #define SCI0ASR1_BERRV          _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0ASR1STR.Bits.BERRV
        #define SCI0ASR1_RXEDGIF        _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0ASR1STR.Bits.RXEDGIF
        
        #define SCI0ASR1_BKDIF_MASK     1U
        #define SCI0ASR1_BERRIF_MASK    2U
        #define SCI0ASR1_BERRV_MASK     4U
        #define SCI0ASR1_RXEDGIF_MASK   128U
        
        /*** SCI0BDH - SCI 0 Baud Rate Register High; Several registers at the same address ***/
        union {
          struct {
            byte SBR8        :1;                                       /* SCI Baud Rate Bit 8 */
            byte SBR9        :1;                                       /* SCI Baud Rate Bit 9 */
            byte SBR10       :1;                                       /* SCI Baud Rate Bit 10 */
            byte SBR11       :1;                                       /* SCI Baud Rate Bit 11 */
            byte SBR12       :1;                                       /* SCI Baud Rate Bit 12 */
            byte SBR13       :1;                                       /* SCI Baud Rate Bit 13 */
            byte SBR14       :1;                                       /* SCI Baud Rate Bit 14 */
            byte SBR15       :1;                                       /* SCI Baud Rate Bit 15 */
          } Bits;
        } SCI0BDHSTR;
        #define SCI0BDH                 _SCI0BD.Overlap_STR.SCI0ASR1STR.Byte
        #define SCI0BDH_SBR8            _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR8
        #define SCI0BDH_SBR9            _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR9
        #define SCI0BDH_SBR10           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR10
        #define SCI0BDH_SBR11           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR11
        #define SCI0BDH_SBR12           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR12
        #define SCI0BDH_SBR13           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR13
        #define SCI0BDH_SBR14           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR14
        #define SCI0BDH_SBR15           _SCI0BD.Overlap_STR.SCI0ASR1STR.SameAddr_STR.SCI0BDHSTR.Bits.SBR15
        
        #define SCI0BDH_SBR8_MASK       1U
        #define SCI0BDH_SBR9_MASK       2U
        #define SCI0BDH_SBR10_MASK      4U
        #define SCI0BDH_SBR11_MASK      8U
        #define SCI0BDH_SBR12_MASK      16U
        #define SCI0BDH_SBR13_MASK      32U
        #define SCI0BDH_SBR14_MASK      64U
        #define SCI0BDH_SBR15_MASK      128U
        
      } SameAddr_STR; /*Several registers at the same address */
    
    } SCI0ASR1STR;
    

    /*** SCI0ACR1 - SCI 0 Alternative Control Register 1; 0x00000701 ***/
    union {
      byte Byte;
      union { /* Several registers at the same address */
        /*** SCI0ACR1 - SCI 0 Alternative Control Register 1; Several registers at the same address ***/
        union {
          struct {
            byte BKDIE       :1;                                       /* Break Detect Interrupt Enable */
            byte BERRIE      :1;                                       /* Bit Error Interrupt Enable */
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte RXEDGIE     :1;                                       /* Receive Input Active Edge Interrupt Enable */
          } Bits;
        } SCI0ACR1STR;
        #define SCI0ACR1                _SCI0BD.Overlap_STR.SCI0ACR1STR.Byte
        #define SCI0ACR1_BKDIE          _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0ACR1STR.Bits.BKDIE
        #define SCI0ACR1_BERRIE         _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0ACR1STR.Bits.BERRIE
        #define SCI0ACR1_RXEDGIE        _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0ACR1STR.Bits.RXEDGIE
        
        #define SCI0ACR1_BKDIE_MASK     1U
        #define SCI0ACR1_BERRIE_MASK    2U
        #define SCI0ACR1_RXEDGIE_MASK   128U
        
        /*** SCI0BDL - SCI 0 Baud Rate Register Low; Several registers at the same address ***/
        union {
          struct {
            byte SBR0        :1;                                       /* SCI Baud Rate Bit 0 */
            byte SBR1        :1;                                       /* SCI Baud Rate Bit 1 */
            byte SBR2        :1;                                       /* SCI Baud Rate Bit 2 */
            byte SBR3        :1;                                       /* SCI Baud Rate Bit 3 */
            byte SBR4        :1;                                       /* SCI Baud Rate Bit 4 */
            byte SBR5        :1;                                       /* SCI Baud Rate Bit 5 */
            byte SBR6        :1;                                       /* SCI Baud Rate Bit 6 */
            byte SBR7        :1;                                       /* SCI Baud Rate Bit 7 */
          } Bits;
        } SCI0BDLSTR;
        #define SCI0BDL                 _SCI0BD.Overlap_STR.SCI0ACR1STR.Byte
        #define SCI0BDL_SBR0            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR0
        #define SCI0BDL_SBR1            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR1
        #define SCI0BDL_SBR2            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR2
        #define SCI0BDL_SBR3            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR3
        #define SCI0BDL_SBR4            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR4
        #define SCI0BDL_SBR5            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR5
        #define SCI0BDL_SBR6            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR6
        #define SCI0BDL_SBR7            _SCI0BD.Overlap_STR.SCI0ACR1STR.SameAddr_STR.SCI0BDLSTR.Bits.SBR7
        
        #define SCI0BDL_SBR0_MASK       1U
        #define SCI0BDL_SBR1_MASK       2U
        #define SCI0BDL_SBR2_MASK       4U
        #define SCI0BDL_SBR3_MASK       8U
        #define SCI0BDL_SBR4_MASK       16U
        #define SCI0BDL_SBR5_MASK       32U
        #define SCI0BDL_SBR6_MASK       64U
        #define SCI0BDL_SBR7_MASK       128U
        
      } SameAddr_STR; /*Several registers at the same address */
    
    } SCI0ACR1STR;
    
  } Overlap_STR;

  struct {
    word SBR0        :1;                                       /* SCI Baud Rate Bit 0 */
    word SBR1        :1;                                       /* SCI Baud Rate Bit 1 */
    word SBR2        :1;                                       /* SCI Baud Rate Bit 2 */
    word SBR3        :1;                                       /* SCI Baud Rate Bit 3 */
    word SBR4        :1;                                       /* SCI Baud Rate Bit 4 */
    word SBR5        :1;                                       /* SCI Baud Rate Bit 5 */
    word SBR6        :1;                                       /* SCI Baud Rate Bit 6 */
    word SBR7        :1;                                       /* SCI Baud Rate Bit 7 */
    word SBR8        :1;                                       /* SCI Baud Rate Bit 8 */
    word SBR9        :1;                                       /* SCI Baud Rate Bit 9 */
    word SBR10       :1;                                       /* SCI Baud Rate Bit 10 */
    word SBR11       :1;                                       /* SCI Baud Rate Bit 11 */
    word SBR12       :1;                                       /* SCI Baud Rate Bit 12 */
    word SBR13       :1;                                       /* SCI Baud Rate Bit 13 */
    word SBR14       :1;                                       /* SCI Baud Rate Bit 14 */
    word SBR15       :1;                                       /* SCI Baud Rate Bit 15 */
  } Bits;
} SCI0BDSTR;
extern volatile SCI0BDSTR _SCI0BD @0x00000700;
#define SCI0BD                          _SCI0BD.Word
#define SCI0BD_SBR0                     _SCI0BD.Bits.SBR0
#define SCI0BD_SBR1                     _SCI0BD.Bits.SBR1
#define SCI0BD_SBR2                     _SCI0BD.Bits.SBR2
#define SCI0BD_SBR3                     _SCI0BD.Bits.SBR3
#define SCI0BD_SBR4                     _SCI0BD.Bits.SBR4
#define SCI0BD_SBR5                     _SCI0BD.Bits.SBR5
#define SCI0BD_SBR6                     _SCI0BD.Bits.SBR6
#define SCI0BD_SBR7                     _SCI0BD.Bits.SBR7
#define SCI0BD_SBR8                     _SCI0BD.Bits.SBR8
#define SCI0BD_SBR9                     _SCI0BD.Bits.SBR9
#define SCI0BD_SBR10                    _SCI0BD.Bits.SBR10
#define SCI0BD_SBR11                    _SCI0BD.Bits.SBR11
#define SCI0BD_SBR12                    _SCI0BD.Bits.SBR12
#define SCI0BD_SBR13                    _SCI0BD.Bits.SBR13
#define SCI0BD_SBR14                    _SCI0BD.Bits.SBR14
#define SCI0BD_SBR15                    _SCI0BD.Bits.SBR15

#define SCI0BD_SBR0_MASK                1U
#define SCI0BD_SBR1_MASK                2U
#define SCI0BD_SBR2_MASK                4U
#define SCI0BD_SBR3_MASK                8U
#define SCI0BD_SBR4_MASK                16U
#define SCI0BD_SBR5_MASK                32U
#define SCI0BD_SBR6_MASK                64U
#define SCI0BD_SBR7_MASK                128U
#define SCI0BD_SBR8_MASK                256U
#define SCI0BD_SBR9_MASK                512U
#define SCI0BD_SBR10_MASK               1024U
#define SCI0BD_SBR11_MASK               2048U
#define SCI0BD_SBR12_MASK               4096U
#define SCI0BD_SBR13_MASK               8192U
#define SCI0BD_SBR14_MASK               16384U
#define SCI0BD_SBR15_MASK               32768U


/*** SCI0ACR2 - SCI 0 Alternative Control Register 2; 0x00000702 ***/
typedef union {
  byte Byte;
  union { /* Several registers at the same address */
    /*** SCI0ACR2 - SCI 0 Alternative Control Register 2; Several registers at the same address ***/
    union {
      struct {
        byte BKDFE       :1;                                       /* Break Detect Feature Enable */
        byte BERRM0      :1;                                       /* Bit Error Mode 0 */
        byte BERRM1      :1;                                       /* Bit Error Mode 1 */
        byte             :1; 
        byte             :1; 
        byte TNP0        :1;                                       /* Transmitter Narrow Pulse Bit 0 */
        byte TNP1        :1;                                       /* Transmitter Narrow Pulse Bit 1 */
        byte IREN        :1;                                       /* Infrared Enable Bit */
      } Bits;
      struct {
        byte     :1;
        byte grpBERRM :2;
        byte     :1;
        byte     :1;
        byte grpTNP :2;
        byte     :1;
      } MergedBits;
    } SCI0ACR2STR;
    #define SCI0ACR2                    _SCI0ACR2.Byte
    #define SCI0ACR2_BKDFE              _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.BKDFE
    #define SCI0ACR2_BERRM0             _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.BERRM0
    #define SCI0ACR2_BERRM1             _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.BERRM1
    #define SCI0ACR2_TNP0               _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.TNP0
    #define SCI0ACR2_TNP1               _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.TNP1
    #define SCI0ACR2_IREN               _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.Bits.IREN
    #define SCI0ACR2_BERRM              _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.MergedBits.grpBERRM
    #define SCI0ACR2_TNP                _SCI0ACR2.SameAddr_STR.SCI0ACR2STR.MergedBits.grpTNP
    
    #define SCI0ACR2_BKDFE_MASK         1U
    #define SCI0ACR2_BERRM0_MASK        2U
    #define SCI0ACR2_BERRM1_MASK        4U
    #define SCI0ACR2_TNP0_MASK          32U
    #define SCI0ACR2_TNP1_MASK          64U
    #define SCI0ACR2_IREN_MASK          128U
    #define SCI0ACR2_BERRM_MASK         6U
    #define SCI0ACR2_BERRM_BITNUM       1U
    #define SCI0ACR2_TNP_MASK           96U
    #define SCI0ACR2_TNP_BITNUM         5U
    
    /*** SCI0CR1 - SCI 0 Control Register 1; Several registers at the same address ***/
    union {
      struct {
        byte PT          :1;                                       /* Parity Type Bit */
        byte PE          :1;                                       /* Parity Enable Bit */
        byte ILT         :1;                                       /* Idle Line Type Bit */
        byte WAKE        :1;                                       /* Wakeup Condition Bit */
        byte M           :1;                                       /* Data Format Mode Bit */
        byte RSRC        :1;                                       /* Receiver Source Bit */
        byte SCISWAI     :1;                                       /* SCI Stop in Wait Mode Bit */
        byte LOOPS       :1;                                       /* Loop Select Bit */
      } Bits;
    } SCI0CR1STR;
    #define SCI0CR1                     _SCI0ACR2.Byte
    #define SCI0CR1_PT                  _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.PT
    #define SCI0CR1_PE                  _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.PE
    #define SCI0CR1_ILT                 _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.ILT
    #define SCI0CR1_WAKE                _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.WAKE
    #define SCI0CR1_M                   _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.M
    #define SCI0CR1_RSRC                _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.RSRC
    #define SCI0CR1_SCISWAI             _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.SCISWAI
    #define SCI0CR1_LOOPS               _SCI0ACR2.SameAddr_STR.SCI0CR1STR.Bits.LOOPS
    
    #define SCI0CR1_PT_MASK             1U
    #define SCI0CR1_PE_MASK             2U
    #define SCI0CR1_ILT_MASK            4U
    #define SCI0CR1_WAKE_MASK           8U
    #define SCI0CR1_M_MASK              16U
    #define SCI0CR1_RSRC_MASK           32U
    #define SCI0CR1_SCISWAI_MASK        64U
    #define SCI0CR1_LOOPS_MASK          128U
    
  } SameAddr_STR; /*Several registers at the same address */

} SCI0ACR2STR;
extern volatile SCI0ACR2STR _SCI0ACR2 @0x00000702;


/*** SCI0CR2 - SCI 0 Control Register 2; 0x00000703 ***/
typedef union {
  byte Byte;
  struct {
    byte SBK         :1;                                       /* Send Break Bit */
    byte RWU         :1;                                       /* Receiver Wakeup Bit */
    byte RE          :1;                                       /* Receiver Enable Bit */
    byte TE          :1;                                       /* Transmitter Enable Bit */
    byte ILIE        :1;                                       /* Idle Line Interrupt Enable Bit */
    byte RIE         :1;                                       /* Receiver Full Interrupt Enable Bit */
    byte TCIE        :1;                                       /* Transmission Complete Interrupt Enable Bit */
    byte TIE         :1;                                       /* Transmitter Interrupt Enable Bit */
  } Bits;
} SCI0CR2STR;
extern volatile SCI0CR2STR _SCI0CR2 @0x00000703;
#define SCI0CR2                         _SCI0CR2.Byte
#define SCI0CR2_SBK                     _SCI0CR2.Bits.SBK
#define SCI0CR2_RWU                     _SCI0CR2.Bits.RWU
#define SCI0CR2_RE                      _SCI0CR2.Bits.RE
#define SCI0CR2_TE                      _SCI0CR2.Bits.TE
#define SCI0CR2_ILIE                    _SCI0CR2.Bits.ILIE
#define SCI0CR2_RIE                     _SCI0CR2.Bits.RIE
#define SCI0CR2_TCIE                    _SCI0CR2.Bits.TCIE
#define SCI0CR2_TIE                     _SCI0CR2.Bits.TIE

#define SCI0CR2_SBK_MASK                1U
#define SCI0CR2_RWU_MASK                2U
#define SCI0CR2_RE_MASK                 4U
#define SCI0CR2_TE_MASK                 8U
#define SCI0CR2_ILIE_MASK               16U
#define SCI0CR2_RIE_MASK                32U
#define SCI0CR2_TCIE_MASK               64U
#define SCI0CR2_TIE_MASK                128U


/*** SCI0SR1 - SCI 0 Status Register 1; 0x00000704 ***/
typedef union {
  byte Byte;
  struct {
    byte PF          :1;                                       /* Parity Error Flag */
    byte FE          :1;                                       /* Framing Error Flag */
    byte NF          :1;                                       /* Noise Flag */
    byte OR          :1;                                       /* Overrun Flag */
    byte IDLE        :1;                                       /* Idle Line Flag */
    byte RDRF        :1;                                       /* Receive Data Register Full Flag */
    byte TC          :1;                                       /* Transmit Complete Flag */
    byte TDRE        :1;                                       /* Transmit Data Register Empty Flag */
  } Bits;
} SCI0SR1STR;
extern volatile SCI0SR1STR _SCI0SR1 @0x00000704;
#define SCI0SR1                         _SCI0SR1.Byte
#define SCI0SR1_PF                      _SCI0SR1.Bits.PF
#define SCI0SR1_FE                      _SCI0SR1.Bits.FE
#define SCI0SR1_NF                      _SCI0SR1.Bits.NF
#define SCI0SR1_OR                      _SCI0SR1.Bits.OR
#define SCI0SR1_IDLE                    _SCI0SR1.Bits.IDLE
#define SCI0SR1_RDRF                    _SCI0SR1.Bits.RDRF
#define SCI0SR1_TC                      _SCI0SR1.Bits.TC
#define SCI0SR1_TDRE                    _SCI0SR1.Bits.TDRE

#define SCI0SR1_PF_MASK                 1U
#define SCI0SR1_FE_MASK                 2U
#define SCI0SR1_NF_MASK                 4U
#define SCI0SR1_OR_MASK                 8U
#define SCI0SR1_IDLE_MASK               16U
#define SCI0SR1_RDRF_MASK               32U
#define SCI0SR1_TC_MASK                 64U
#define SCI0SR1_TDRE_MASK               128U


/*** SCI0SR2 - SCI 0 Status Register 2; 0x00000705 ***/
typedef union {
  byte Byte;
  struct {
    byte RAF         :1;                                       /* Receiver Active Flag */
    byte TXDIR       :1;                                       /* Transmitter pin data direction in Single-Wire mode */
    byte BRK13       :1;                                       /* Break Transmit character length */
    byte RXPOL       :1;                                       /* Receive Polarity */
    byte TXPOL       :1;                                       /* Transmit Polarity */
    byte             :1; 
    byte             :1; 
    byte AMAP        :1;                                       /* Alternative Map */
  } Bits;
} SCI0SR2STR;
extern volatile SCI0SR2STR _SCI0SR2 @0x00000705;
#define SCI0SR2                         _SCI0SR2.Byte
#define SCI0SR2_RAF                     _SCI0SR2.Bits.RAF
#define SCI0SR2_TXDIR                   _SCI0SR2.Bits.TXDIR
#define SCI0SR2_BRK13                   _SCI0SR2.Bits.BRK13
#define SCI0SR2_RXPOL                   _SCI0SR2.Bits.RXPOL
#define SCI0SR2_TXPOL                   _SCI0SR2.Bits.TXPOL
#define SCI0SR2_AMAP                    _SCI0SR2.Bits.AMAP

#define SCI0SR2_RAF_MASK                1U
#define SCI0SR2_TXDIR_MASK              2U
#define SCI0SR2_BRK13_MASK              4U
#define SCI0SR2_RXPOL_MASK              8U
#define SCI0SR2_TXPOL_MASK              16U
#define SCI0SR2_AMAP_MASK               128U


/*** SCI0DRH - SCI 0 Data Register High; 0x00000706 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte T8          :1;                                       /* Transmit Bit 8 */
    byte R8          :1;                                       /* Received Bit 8 */
  } Bits;
} SCI0DRHSTR;
extern volatile SCI0DRHSTR _SCI0DRH @0x00000706;
#define SCI0DRH                         _SCI0DRH.Byte
#define SCI0DRH_T8                      _SCI0DRH.Bits.T8
#define SCI0DRH_R8                      _SCI0DRH.Bits.R8

#define SCI0DRH_T8_MASK                 64U
#define SCI0DRH_R8_MASK                 128U


/*** SCI0DRL - SCI 0 Data Register Low; 0x00000707 ***/
typedef union {
  byte Byte;
  struct {
    byte R0_T0       :1;                                       /* Received bit 0 or Transmit bit 0 */
    byte R1_T1       :1;                                       /* Received bit 1 or Transmit bit 1 */
    byte R2_T2       :1;                                       /* Received bit 2 or Transmit bit 2 */
    byte R3_T3       :1;                                       /* Received bit 3 or Transmit bit 3 */
    byte R4_T4       :1;                                       /* Received bit 4 or Transmit bit 4 */
    byte R5_T5       :1;                                       /* Received bit 5 or Transmit bit 5 */
    byte R6_T6       :1;                                       /* Received bit 6 or Transmit bit 6 */
    byte R7_T7       :1;                                       /* Received bit 7 or Transmit bit 7 */
  } Bits;
} SCI0DRLSTR;
extern volatile SCI0DRLSTR _SCI0DRL @0x00000707;
#define SCI0DRL                         _SCI0DRL.Byte
#define SCI0DRL_R0_T0                   _SCI0DRL.Bits.R0_T0
#define SCI0DRL_R1_T1                   _SCI0DRL.Bits.R1_T1
#define SCI0DRL_R2_T2                   _SCI0DRL.Bits.R2_T2
#define SCI0DRL_R3_T3                   _SCI0DRL.Bits.R3_T3
#define SCI0DRL_R4_T4                   _SCI0DRL.Bits.R4_T4
#define SCI0DRL_R5_T5                   _SCI0DRL.Bits.R5_T5
#define SCI0DRL_R6_T6                   _SCI0DRL.Bits.R6_T6
#define SCI0DRL_R7_T7                   _SCI0DRL.Bits.R7_T7

#define SCI0DRL_R0_T0_MASK              1U
#define SCI0DRL_R1_T1_MASK              2U
#define SCI0DRL_R2_T2_MASK              4U
#define SCI0DRL_R3_T3_MASK              8U
#define SCI0DRL_R4_T4_MASK              16U
#define SCI0DRL_R5_T5_MASK              32U
#define SCI0DRL_R6_T6_MASK              64U
#define SCI0DRL_R7_T7_MASK              128U


/*** SCI1BD - SCI 1 Baud Rate Register; 0x00000710 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** SCI1ASR1 - SCI 1 Alternative Status Register 1; 0x00000710 ***/
    union {
      byte Byte;
      union { /* Several registers at the same address */
        /*** SCI1ASR1 - SCI 1 Alternative Status Register 1; Several registers at the same address ***/
        union {
          struct {
            byte BKDIF       :1;                                       /* Break Detect Interrupt Flag */
            byte BERRIF      :1;                                       /* Bit Error Interrupt Flag */
            byte BERRV       :1;                                       /* Bit Error Value */
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte RXEDGIF     :1;                                       /* Receive Input Active Edge Interrupt Flag */
          } Bits;
        } SCI1ASR1STR;
        #define SCI1ASR1                _SCI1BD.Overlap_STR.SCI1ASR1STR.Byte
        #define SCI1ASR1_BKDIF          _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1ASR1STR.Bits.BKDIF
        #define SCI1ASR1_BERRIF         _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1ASR1STR.Bits.BERRIF
        #define SCI1ASR1_BERRV          _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1ASR1STR.Bits.BERRV
        #define SCI1ASR1_RXEDGIF        _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1ASR1STR.Bits.RXEDGIF
        
        #define SCI1ASR1_BKDIF_MASK     1U
        #define SCI1ASR1_BERRIF_MASK    2U
        #define SCI1ASR1_BERRV_MASK     4U
        #define SCI1ASR1_RXEDGIF_MASK   128U
        
        /*** SCI1BDH - SCI 1 Baud Rate Register High; Several registers at the same address ***/
        union {
          struct {
            byte SBR8        :1;                                       /* SCI Baud Rate Bit 8 */
            byte SBR9        :1;                                       /* SCI Baud Rate Bit 9 */
            byte SBR10       :1;                                       /* SCI Baud Rate Bit 10 */
            byte SBR11       :1;                                       /* SCI Baud Rate Bit 11 */
            byte SBR12       :1;                                       /* SCI Baud Rate Bit 12 */
            byte SBR13       :1;                                       /* SCI Baud Rate Bit 13 */
            byte SBR14       :1;                                       /* SCI Baud Rate Bit 14 */
            byte SBR15       :1;                                       /* SCI Baud Rate Bit 15 */
          } Bits;
        } SCI1BDHSTR;
        #define SCI1BDH                 _SCI1BD.Overlap_STR.SCI1ASR1STR.Byte
        #define SCI1BDH_SBR8            _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR8
        #define SCI1BDH_SBR9            _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR9
        #define SCI1BDH_SBR10           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR10
        #define SCI1BDH_SBR11           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR11
        #define SCI1BDH_SBR12           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR12
        #define SCI1BDH_SBR13           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR13
        #define SCI1BDH_SBR14           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR14
        #define SCI1BDH_SBR15           _SCI1BD.Overlap_STR.SCI1ASR1STR.SameAddr_STR.SCI1BDHSTR.Bits.SBR15
        
        #define SCI1BDH_SBR8_MASK       1U
        #define SCI1BDH_SBR9_MASK       2U
        #define SCI1BDH_SBR10_MASK      4U
        #define SCI1BDH_SBR11_MASK      8U
        #define SCI1BDH_SBR12_MASK      16U
        #define SCI1BDH_SBR13_MASK      32U
        #define SCI1BDH_SBR14_MASK      64U
        #define SCI1BDH_SBR15_MASK      128U
        
      } SameAddr_STR; /*Several registers at the same address */
    
    } SCI1ASR1STR;
    

    /*** SCI1ACR1 - SCI 1 Alternative Control Register 1; 0x00000711 ***/
    union {
      byte Byte;
      union { /* Several registers at the same address */
        /*** SCI1ACR1 - SCI 1 Alternative Control Register 1; Several registers at the same address ***/
        union {
          struct {
            byte BKDIE       :1;                                       /* Break Detect Interrupt Enable */
            byte BERRIE      :1;                                       /* Bit Error Interrupt Enable */
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte             :1; 
            byte RXEDGIE     :1;                                       /* Receive Input Active Edge Interrupt Enable */
          } Bits;
        } SCI1ACR1STR;
        #define SCI1ACR1                _SCI1BD.Overlap_STR.SCI1ACR1STR.Byte
        #define SCI1ACR1_BKDIE          _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1ACR1STR.Bits.BKDIE
        #define SCI1ACR1_BERRIE         _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1ACR1STR.Bits.BERRIE
        #define SCI1ACR1_RXEDGIE        _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1ACR1STR.Bits.RXEDGIE
        
        #define SCI1ACR1_BKDIE_MASK     1U
        #define SCI1ACR1_BERRIE_MASK    2U
        #define SCI1ACR1_RXEDGIE_MASK   128U
        
        /*** SCI1BDL - SCI 1 Baud Rate Register Low; Several registers at the same address ***/
        union {
          struct {
            byte SBR0        :1;                                       /* SCI Baud Rate Bit 0 */
            byte SBR1        :1;                                       /* SCI Baud Rate Bit 1 */
            byte SBR2        :1;                                       /* SCI Baud Rate Bit 2 */
            byte SBR3        :1;                                       /* SCI Baud Rate Bit 3 */
            byte SBR4        :1;                                       /* SCI Baud Rate Bit 4 */
            byte SBR5        :1;                                       /* SCI Baud Rate Bit 5 */
            byte SBR6        :1;                                       /* SCI Baud Rate Bit 6 */
            byte SBR7        :1;                                       /* SCI Baud Rate Bit 7 */
          } Bits;
        } SCI1BDLSTR;
        #define SCI1BDL                 _SCI1BD.Overlap_STR.SCI1ACR1STR.Byte
        #define SCI1BDL_SBR0            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR0
        #define SCI1BDL_SBR1            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR1
        #define SCI1BDL_SBR2            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR2
        #define SCI1BDL_SBR3            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR3
        #define SCI1BDL_SBR4            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR4
        #define SCI1BDL_SBR5            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR5
        #define SCI1BDL_SBR6            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR6
        #define SCI1BDL_SBR7            _SCI1BD.Overlap_STR.SCI1ACR1STR.SameAddr_STR.SCI1BDLSTR.Bits.SBR7
        
        #define SCI1BDL_SBR0_MASK       1U
        #define SCI1BDL_SBR1_MASK       2U
        #define SCI1BDL_SBR2_MASK       4U
        #define SCI1BDL_SBR3_MASK       8U
        #define SCI1BDL_SBR4_MASK       16U
        #define SCI1BDL_SBR5_MASK       32U
        #define SCI1BDL_SBR6_MASK       64U
        #define SCI1BDL_SBR7_MASK       128U
        
      } SameAddr_STR; /*Several registers at the same address */
    
    } SCI1ACR1STR;
    
  } Overlap_STR;

  struct {
    word SBR0        :1;                                       /* SCI Baud Rate Bit 0 */
    word SBR1        :1;                                       /* SCI Baud Rate Bit 1 */
    word SBR2        :1;                                       /* SCI Baud Rate Bit 2 */
    word SBR3        :1;                                       /* SCI Baud Rate Bit 3 */
    word SBR4        :1;                                       /* SCI Baud Rate Bit 4 */
    word SBR5        :1;                                       /* SCI Baud Rate Bit 5 */
    word SBR6        :1;                                       /* SCI Baud Rate Bit 6 */
    word SBR7        :1;                                       /* SCI Baud Rate Bit 7 */
    word SBR8        :1;                                       /* SCI Baud Rate Bit 8 */
    word SBR9        :1;                                       /* SCI Baud Rate Bit 9 */
    word SBR10       :1;                                       /* SCI Baud Rate Bit 10 */
    word SBR11       :1;                                       /* SCI Baud Rate Bit 11 */
    word SBR12       :1;                                       /* SCI Baud Rate Bit 12 */
    word SBR13       :1;                                       /* SCI Baud Rate Bit 13 */
    word SBR14       :1;                                       /* SCI Baud Rate Bit 14 */
    word SBR15       :1;                                       /* SCI Baud Rate Bit 15 */
  } Bits;
} SCI1BDSTR;
extern volatile SCI1BDSTR _SCI1BD @0x00000710;
#define SCI1BD                          _SCI1BD.Word
#define SCI1BD_SBR0                     _SCI1BD.Bits.SBR0
#define SCI1BD_SBR1                     _SCI1BD.Bits.SBR1
#define SCI1BD_SBR2                     _SCI1BD.Bits.SBR2
#define SCI1BD_SBR3                     _SCI1BD.Bits.SBR3
#define SCI1BD_SBR4                     _SCI1BD.Bits.SBR4
#define SCI1BD_SBR5                     _SCI1BD.Bits.SBR5
#define SCI1BD_SBR6                     _SCI1BD.Bits.SBR6
#define SCI1BD_SBR7                     _SCI1BD.Bits.SBR7
#define SCI1BD_SBR8                     _SCI1BD.Bits.SBR8
#define SCI1BD_SBR9                     _SCI1BD.Bits.SBR9
#define SCI1BD_SBR10                    _SCI1BD.Bits.SBR10
#define SCI1BD_SBR11                    _SCI1BD.Bits.SBR11
#define SCI1BD_SBR12                    _SCI1BD.Bits.SBR12
#define SCI1BD_SBR13                    _SCI1BD.Bits.SBR13
#define SCI1BD_SBR14                    _SCI1BD.Bits.SBR14
#define SCI1BD_SBR15                    _SCI1BD.Bits.SBR15

#define SCI1BD_SBR0_MASK                1U
#define SCI1BD_SBR1_MASK                2U
#define SCI1BD_SBR2_MASK                4U
#define SCI1BD_SBR3_MASK                8U
#define SCI1BD_SBR4_MASK                16U
#define SCI1BD_SBR5_MASK                32U
#define SCI1BD_SBR6_MASK                64U
#define SCI1BD_SBR7_MASK                128U
#define SCI1BD_SBR8_MASK                256U
#define SCI1BD_SBR9_MASK                512U
#define SCI1BD_SBR10_MASK               1024U
#define SCI1BD_SBR11_MASK               2048U
#define SCI1BD_SBR12_MASK               4096U
#define SCI1BD_SBR13_MASK               8192U
#define SCI1BD_SBR14_MASK               16384U
#define SCI1BD_SBR15_MASK               32768U


/*** SCI1ACR2 - SCI 1 Alternative Control Register 2; 0x00000712 ***/
typedef union {
  byte Byte;
  union { /* Several registers at the same address */
    /*** SCI1ACR2 - SCI 1 Alternative Control Register 2; Several registers at the same address ***/
    union {
      struct {
        byte BKDFE       :1;                                       /* Break Detect Feature Enable */
        byte BERRM0      :1;                                       /* Bit Error Mode 0 */
        byte BERRM1      :1;                                       /* Bit Error Mode 1 */
        byte             :1; 
        byte             :1; 
        byte TNP0        :1;                                       /* Transmitter Narrow Pulse Bit 0 */
        byte TNP1        :1;                                       /* Transmitter Narrow Pulse Bit 1 */
        byte IREN        :1;                                       /* Infrared Enable Bit */
      } Bits;
      struct {
        byte     :1;
        byte grpBERRM :2;
        byte     :1;
        byte     :1;
        byte grpTNP :2;
        byte     :1;
      } MergedBits;
    } SCI1ACR2STR;
    #define SCI1ACR2                    _SCI1ACR2.Byte
    #define SCI1ACR2_BKDFE              _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.BKDFE
    #define SCI1ACR2_BERRM0             _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.BERRM0
    #define SCI1ACR2_BERRM1             _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.BERRM1
    #define SCI1ACR2_TNP0               _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.TNP0
    #define SCI1ACR2_TNP1               _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.TNP1
    #define SCI1ACR2_IREN               _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.Bits.IREN
    #define SCI1ACR2_BERRM              _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.MergedBits.grpBERRM
    #define SCI1ACR2_TNP                _SCI1ACR2.SameAddr_STR.SCI1ACR2STR.MergedBits.grpTNP
    
    #define SCI1ACR2_BKDFE_MASK         1U
    #define SCI1ACR2_BERRM0_MASK        2U
    #define SCI1ACR2_BERRM1_MASK        4U
    #define SCI1ACR2_TNP0_MASK          32U
    #define SCI1ACR2_TNP1_MASK          64U
    #define SCI1ACR2_IREN_MASK          128U
    #define SCI1ACR2_BERRM_MASK         6U
    #define SCI1ACR2_BERRM_BITNUM       1U
    #define SCI1ACR2_TNP_MASK           96U
    #define SCI1ACR2_TNP_BITNUM         5U
    
    /*** SCI1CR1 - SCI 1 Control Register 1; Several registers at the same address ***/
    union {
      struct {
        byte PT          :1;                                       /* Parity Type Bit */
        byte PE          :1;                                       /* Parity Enable Bit */
        byte ILT         :1;                                       /* Idle Line Type Bit */
        byte WAKE        :1;                                       /* Wakeup Condition Bit */
        byte M           :1;                                       /* Data Format Mode Bit */
        byte RSRC        :1;                                       /* Receiver Source Bit */
        byte SCISWAI     :1;                                       /* SCI Stop in Wait Mode Bit */
        byte LOOPS       :1;                                       /* Loop Select Bit */
      } Bits;
    } SCI1CR1STR;
    #define SCI1CR1                     _SCI1ACR2.Byte
    #define SCI1CR1_PT                  _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.PT
    #define SCI1CR1_PE                  _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.PE
    #define SCI1CR1_ILT                 _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.ILT
    #define SCI1CR1_WAKE                _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.WAKE
    #define SCI1CR1_M                   _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.M
    #define SCI1CR1_RSRC                _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.RSRC
    #define SCI1CR1_SCISWAI             _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.SCISWAI
    #define SCI1CR1_LOOPS               _SCI1ACR2.SameAddr_STR.SCI1CR1STR.Bits.LOOPS
    
    #define SCI1CR1_PT_MASK             1U
    #define SCI1CR1_PE_MASK             2U
    #define SCI1CR1_ILT_MASK            4U
    #define SCI1CR1_WAKE_MASK           8U
    #define SCI1CR1_M_MASK              16U
    #define SCI1CR1_RSRC_MASK           32U
    #define SCI1CR1_SCISWAI_MASK        64U
    #define SCI1CR1_LOOPS_MASK          128U
    
  } SameAddr_STR; /*Several registers at the same address */

} SCI1ACR2STR;
extern volatile SCI1ACR2STR _SCI1ACR2 @0x00000712;


/*** SCI1CR2 - SCI 1 Control Register 2; 0x00000713 ***/
typedef union {
  byte Byte;
  struct {
    byte SBK         :1;                                       /* Send Break Bit */
    byte RWU         :1;                                       /* Receiver Wakeup Bit */
    byte RE          :1;                                       /* Receiver Enable Bit */
    byte TE          :1;                                       /* Transmitter Enable Bit */
    byte ILIE        :1;                                       /* Idle Line Interrupt Enable Bit */
    byte RIE         :1;                                       /* Receiver Full Interrupt Enable Bit */
    byte TCIE        :1;                                       /* Transmission Complete Interrupt Enable Bit */
    byte TIE         :1;                                       /* Transmitter Interrupt Enable Bit */
  } Bits;
} SCI1CR2STR;
extern volatile SCI1CR2STR _SCI1CR2 @0x00000713;
#define SCI1CR2                         _SCI1CR2.Byte
#define SCI1CR2_SBK                     _SCI1CR2.Bits.SBK
#define SCI1CR2_RWU                     _SCI1CR2.Bits.RWU
#define SCI1CR2_RE                      _SCI1CR2.Bits.RE
#define SCI1CR2_TE                      _SCI1CR2.Bits.TE
#define SCI1CR2_ILIE                    _SCI1CR2.Bits.ILIE
#define SCI1CR2_RIE                     _SCI1CR2.Bits.RIE
#define SCI1CR2_TCIE                    _SCI1CR2.Bits.TCIE
#define SCI1CR2_TIE                     _SCI1CR2.Bits.TIE

#define SCI1CR2_SBK_MASK                1U
#define SCI1CR2_RWU_MASK                2U
#define SCI1CR2_RE_MASK                 4U
#define SCI1CR2_TE_MASK                 8U
#define SCI1CR2_ILIE_MASK               16U
#define SCI1CR2_RIE_MASK                32U
#define SCI1CR2_TCIE_MASK               64U
#define SCI1CR2_TIE_MASK                128U


/*** SCI1SR1 - SCI 1 Status Register 1; 0x00000714 ***/
typedef union {
  byte Byte;
  struct {
    byte PF          :1;                                       /* Parity Error Flag */
    byte FE          :1;                                       /* Framing Error Flag */
    byte NF          :1;                                       /* Noise Flag */
    byte OR          :1;                                       /* Overrun Flag */
    byte IDLE        :1;                                       /* Idle Line Flag */
    byte RDRF        :1;                                       /* Receive Data Register Full Flag */
    byte TC          :1;                                       /* Transmit Complete Flag */
    byte TDRE        :1;                                       /* Transmit Data Register Empty Flag */
  } Bits;
} SCI1SR1STR;
extern volatile SCI1SR1STR _SCI1SR1 @0x00000714;
#define SCI1SR1                         _SCI1SR1.Byte
#define SCI1SR1_PF                      _SCI1SR1.Bits.PF
#define SCI1SR1_FE                      _SCI1SR1.Bits.FE
#define SCI1SR1_NF                      _SCI1SR1.Bits.NF
#define SCI1SR1_OR                      _SCI1SR1.Bits.OR
#define SCI1SR1_IDLE                    _SCI1SR1.Bits.IDLE
#define SCI1SR1_RDRF                    _SCI1SR1.Bits.RDRF
#define SCI1SR1_TC                      _SCI1SR1.Bits.TC
#define SCI1SR1_TDRE                    _SCI1SR1.Bits.TDRE

#define SCI1SR1_PF_MASK                 1U
#define SCI1SR1_FE_MASK                 2U
#define SCI1SR1_NF_MASK                 4U
#define SCI1SR1_OR_MASK                 8U
#define SCI1SR1_IDLE_MASK               16U
#define SCI1SR1_RDRF_MASK               32U
#define SCI1SR1_TC_MASK                 64U
#define SCI1SR1_TDRE_MASK               128U


/*** SCI1SR2 - SCI 1 Status Register 2; 0x00000715 ***/
typedef union {
  byte Byte;
  struct {
    byte RAF         :1;                                       /* Receiver Active Flag */
    byte TXDIR       :1;                                       /* Transmitter pin data direction in Single-Wire mode */
    byte BRK13       :1;                                       /* Break Transmit character length */
    byte RXPOL       :1;                                       /* Receive Polarity */
    byte TXPOL       :1;                                       /* Transmit Polarity */
    byte             :1; 
    byte             :1; 
    byte AMAP        :1;                                       /* Alternative Map */
  } Bits;
} SCI1SR2STR;
extern volatile SCI1SR2STR _SCI1SR2 @0x00000715;
#define SCI1SR2                         _SCI1SR2.Byte
#define SCI1SR2_RAF                     _SCI1SR2.Bits.RAF
#define SCI1SR2_TXDIR                   _SCI1SR2.Bits.TXDIR
#define SCI1SR2_BRK13                   _SCI1SR2.Bits.BRK13
#define SCI1SR2_RXPOL                   _SCI1SR2.Bits.RXPOL
#define SCI1SR2_TXPOL                   _SCI1SR2.Bits.TXPOL
#define SCI1SR2_AMAP                    _SCI1SR2.Bits.AMAP

#define SCI1SR2_RAF_MASK                1U
#define SCI1SR2_TXDIR_MASK              2U
#define SCI1SR2_BRK13_MASK              4U
#define SCI1SR2_RXPOL_MASK              8U
#define SCI1SR2_TXPOL_MASK              16U
#define SCI1SR2_AMAP_MASK               128U


/*** SCI1DRH - SCI 1 Data Register High; 0x00000716 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte T8          :1;                                       /* Transmit Bit 8 */
    byte R8          :1;                                       /* Received Bit 8 */
  } Bits;
} SCI1DRHSTR;
extern volatile SCI1DRHSTR _SCI1DRH @0x00000716;
#define SCI1DRH                         _SCI1DRH.Byte
#define SCI1DRH_T8                      _SCI1DRH.Bits.T8
#define SCI1DRH_R8                      _SCI1DRH.Bits.R8

#define SCI1DRH_T8_MASK                 64U
#define SCI1DRH_R8_MASK                 128U


/*** SCI1DRL - SCI 1 Data Register Low; 0x00000717 ***/
typedef union {
  byte Byte;
  struct {
    byte R0_T0       :1;                                       /* Received bit 0 or Transmit bit 0 */
    byte R1_T1       :1;                                       /* Received bit 1 or Transmit bit 1 */
    byte R2_T2       :1;                                       /* Received bit 2 or Transmit bit 2 */
    byte R3_T3       :1;                                       /* Received bit 3 or Transmit bit 3 */
    byte R4_T4       :1;                                       /* Received bit 4 or Transmit bit 4 */
    byte R5_T5       :1;                                       /* Received bit 5 or Transmit bit 5 */
    byte R6_T6       :1;                                       /* Received bit 6 or Transmit bit 6 */
    byte R7_T7       :1;                                       /* Received bit 7 or Transmit bit 7 */
  } Bits;
} SCI1DRLSTR;
extern volatile SCI1DRLSTR _SCI1DRL @0x00000717;
#define SCI1DRL                         _SCI1DRL.Byte
#define SCI1DRL_R0_T0                   _SCI1DRL.Bits.R0_T0
#define SCI1DRL_R1_T1                   _SCI1DRL.Bits.R1_T1
#define SCI1DRL_R2_T2                   _SCI1DRL.Bits.R2_T2
#define SCI1DRL_R3_T3                   _SCI1DRL.Bits.R3_T3
#define SCI1DRL_R4_T4                   _SCI1DRL.Bits.R4_T4
#define SCI1DRL_R5_T5                   _SCI1DRL.Bits.R5_T5
#define SCI1DRL_R6_T6                   _SCI1DRL.Bits.R6_T6
#define SCI1DRL_R7_T7                   _SCI1DRL.Bits.R7_T7

#define SCI1DRL_R0_T0_MASK              1U
#define SCI1DRL_R1_T1_MASK              2U
#define SCI1DRL_R2_T2_MASK              4U
#define SCI1DRL_R3_T3_MASK              8U
#define SCI1DRL_R4_T4_MASK              16U
#define SCI1DRL_R5_T5_MASK              32U
#define SCI1DRL_R6_T6_MASK              64U
#define SCI1DRL_R7_T7_MASK              128U


/*** SPI0CR1 - SPI 0 Control Register 1; 0x00000780 ***/
typedef union {
  byte Byte;
  struct {
    byte LSBFE       :1;                                       /* SPI LSB-First Enable */
    byte SSOE        :1;                                       /* Slave Select Output Enable */
    byte CPHA        :1;                                       /* SPI Clock Phase Bit */
    byte CPOL        :1;                                       /* SPI Clock Polarity Bit */
    byte MSTR        :1;                                       /* SPI Master/Slave Mode Select Bit */
    byte SPTIE       :1;                                       /* SPI Transmit Interrupt Enable */
    byte SPE         :1;                                       /* SPI System Enable Bit */
    byte SPIE        :1;                                       /* SPI Interrupt Enable Bit */
  } Bits;
} SPI0CR1STR;
extern volatile SPI0CR1STR _SPI0CR1 @0x00000780;
#define SPI0CR1                         _SPI0CR1.Byte
#define SPI0CR1_LSBFE                   _SPI0CR1.Bits.LSBFE
#define SPI0CR1_SSOE                    _SPI0CR1.Bits.SSOE
#define SPI0CR1_CPHA                    _SPI0CR1.Bits.CPHA
#define SPI0CR1_CPOL                    _SPI0CR1.Bits.CPOL
#define SPI0CR1_MSTR                    _SPI0CR1.Bits.MSTR
#define SPI0CR1_SPTIE                   _SPI0CR1.Bits.SPTIE
#define SPI0CR1_SPE                     _SPI0CR1.Bits.SPE
#define SPI0CR1_SPIE                    _SPI0CR1.Bits.SPIE

#define SPI0CR1_LSBFE_MASK              1U
#define SPI0CR1_SSOE_MASK               2U
#define SPI0CR1_CPHA_MASK               4U
#define SPI0CR1_CPOL_MASK               8U
#define SPI0CR1_MSTR_MASK               16U
#define SPI0CR1_SPTIE_MASK              32U
#define SPI0CR1_SPE_MASK                64U
#define SPI0CR1_SPIE_MASK               128U


/*** SPI0CR2 - SPI 0 Control Register 2; 0x00000781 ***/
typedef union {
  byte Byte;
  struct {
    byte SPC0        :1;                                       /* Serial Pin Control Bit 0 */
    byte SPISWAI     :1;                                       /* SPI Stop in Wait Mode Bit */
    byte             :1; 
    byte BIDIROE     :1;                                       /* Output enable in the Bidirectional mode of operation */
    byte MODFEN      :1;                                       /* Mode Fault Enable Bit */
    byte             :1; 
    byte XFRW        :1;                                       /* Transfer Width */
    byte             :1; 
  } Bits;
} SPI0CR2STR;
extern volatile SPI0CR2STR _SPI0CR2 @0x00000781;
#define SPI0CR2                         _SPI0CR2.Byte
#define SPI0CR2_SPC0                    _SPI0CR2.Bits.SPC0
#define SPI0CR2_SPISWAI                 _SPI0CR2.Bits.SPISWAI
#define SPI0CR2_BIDIROE                 _SPI0CR2.Bits.BIDIROE
#define SPI0CR2_MODFEN                  _SPI0CR2.Bits.MODFEN
#define SPI0CR2_XFRW                    _SPI0CR2.Bits.XFRW

#define SPI0CR2_SPC0_MASK               1U
#define SPI0CR2_SPISWAI_MASK            2U
#define SPI0CR2_BIDIROE_MASK            8U
#define SPI0CR2_MODFEN_MASK             16U
#define SPI0CR2_XFRW_MASK               64U


/*** SPI0BR - SPI 0 Baud Rate Register; 0x00000782 ***/
typedef union {
  byte Byte;
  struct {
    byte SPR0        :1;                                       /* SPI Baud Rate Selection Bit 0 */
    byte SPR1        :1;                                       /* SPI Baud Rate Selection Bit 1 */
    byte SPR2        :1;                                       /* SPI Baud Rate Selection Bit 2 */
    byte             :1; 
    byte SPPR0       :1;                                       /* SPI Baud Rate Preselection Bits 0 */
    byte SPPR1       :1;                                       /* SPI Baud Rate Preselection Bits 1 */
    byte SPPR2       :1;                                       /* SPI Baud Rate Preselection Bits 2 */
    byte             :1; 
  } Bits;
  struct {
    byte grpSPR  :3;
    byte         :1;
    byte grpSPPR :3;
    byte         :1;
  } MergedBits;
} SPI0BRSTR;
extern volatile SPI0BRSTR _SPI0BR @0x00000782;
#define SPI0BR                          _SPI0BR.Byte
#define SPI0BR_SPR0                     _SPI0BR.Bits.SPR0
#define SPI0BR_SPR1                     _SPI0BR.Bits.SPR1
#define SPI0BR_SPR2                     _SPI0BR.Bits.SPR2
#define SPI0BR_SPPR0                    _SPI0BR.Bits.SPPR0
#define SPI0BR_SPPR1                    _SPI0BR.Bits.SPPR1
#define SPI0BR_SPPR2                    _SPI0BR.Bits.SPPR2
#define SPI0BR_SPR                      _SPI0BR.MergedBits.grpSPR
#define SPI0BR_SPPR                     _SPI0BR.MergedBits.grpSPPR

#define SPI0BR_SPR0_MASK                1U
#define SPI0BR_SPR1_MASK                2U
#define SPI0BR_SPR2_MASK                4U
#define SPI0BR_SPPR0_MASK               16U
#define SPI0BR_SPPR1_MASK               32U
#define SPI0BR_SPPR2_MASK               64U
#define SPI0BR_SPR_MASK                 7U
#define SPI0BR_SPR_BITNUM               0U
#define SPI0BR_SPPR_MASK                112U
#define SPI0BR_SPPR_BITNUM              4U


/*** SPI0SR - SPI 0 Status Register; 0x00000783 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte MODF        :1;                                       /* Mode Fault Flag */
    byte SPTEF       :1;                                       /* SPI Transmit Empty Interrupt Flag */
    byte             :1; 
    byte SPIF        :1;                                       /* SPIF Receive Interrupt Flag */
  } Bits;
} SPI0SRSTR;
extern volatile SPI0SRSTR _SPI0SR @0x00000783;
#define SPI0SR                          _SPI0SR.Byte
#define SPI0SR_MODF                     _SPI0SR.Bits.MODF
#define SPI0SR_SPTEF                    _SPI0SR.Bits.SPTEF
#define SPI0SR_SPIF                     _SPI0SR.Bits.SPIF

#define SPI0SR_MODF_MASK                16U
#define SPI0SR_SPTEF_MASK               32U
#define SPI0SR_SPIF_MASK                128U


/*** SPI0DR - SPI 0 Data Register; 0x00000784 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** SPI0DRH - SPI 0 Data Register High; 0x00000784 ***/
    union {
      byte Byte;
      struct {
        byte R8_T8       :1;                                       /* SPI 0 Data Bit 8 */
        byte R9_T9       :1;                                       /* SPI 0 Data Bit 9 */
        byte R10_T10     :1;                                       /* SPI 0 Data Bit 10 */
        byte R11_T11     :1;                                       /* SPI 0 Data Bit 11 */
        byte R12_T12     :1;                                       /* SPI 0 Data Bit 12 */
        byte R13_T13     :1;                                       /* SPI 0 Data Bit 13 */
        byte R14_T14     :1;                                       /* SPI 0 Data Bit 14 */
        byte R15_T15     :1;                                       /* SPI 0 Data Bit 15 */
      } Bits;
    } SPI0DRHSTR;
    #define SPI0DRH                     _SPI0DR.Overlap_STR.SPI0DRHSTR.Byte
    #define SPI0DRH_R8_T8               _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R8_T8
    #define SPI0DRH_R9_T9               _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R9_T9
    #define SPI0DRH_R10_T10             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R10_T10
    #define SPI0DRH_R11_T11             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R11_T11
    #define SPI0DRH_R12_T12             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R12_T12
    #define SPI0DRH_R13_T13             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R13_T13
    #define SPI0DRH_R14_T14             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R14_T14
    #define SPI0DRH_R15_T15             _SPI0DR.Overlap_STR.SPI0DRHSTR.Bits.R15_T15
    
    #define SPI0DRH_R8_T8_MASK          1U
    #define SPI0DRH_R9_T9_MASK          2U
    #define SPI0DRH_R10_T10_MASK        4U
    #define SPI0DRH_R11_T11_MASK        8U
    #define SPI0DRH_R12_T12_MASK        16U
    #define SPI0DRH_R13_T13_MASK        32U
    #define SPI0DRH_R14_T14_MASK        64U
    #define SPI0DRH_R15_T15_MASK        128U
    

    /*** SPI0DRL - SPI 0 Data Register Low; 0x00000785 ***/
    union {
      byte Byte;
      struct {
        byte R0_T0       :1;                                       /* SPI 0 Data Bit 0 */
        byte R1_T1       :1;                                       /* SPI 0 Data Bit 1 */
        byte R2_T2       :1;                                       /* SPI 0 Data Bit 2 */
        byte R3_T3       :1;                                       /* SPI 0 Data Bit 3 */
        byte R4_T4       :1;                                       /* SPI 0 Data Bit 4 */
        byte R5_T5       :1;                                       /* SPI 0 Data Bit 5 */
        byte R6_T6       :1;                                       /* SPI 0 Data Bit 6 */
        byte R7_T7       :1;                                       /* SPI 0 Data Bit 7 */
      } Bits;
    } SPI0DRLSTR;
    #define SPI0DRL                     _SPI0DR.Overlap_STR.SPI0DRLSTR.Byte
    #define SPI0DRL_R0_T0               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R0_T0
    #define SPI0DRL_R1_T1               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R1_T1
    #define SPI0DRL_R2_T2               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R2_T2
    #define SPI0DRL_R3_T3               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R3_T3
    #define SPI0DRL_R4_T4               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R4_T4
    #define SPI0DRL_R5_T5               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R5_T5
    #define SPI0DRL_R6_T6               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R6_T6
    #define SPI0DRL_R7_T7               _SPI0DR.Overlap_STR.SPI0DRLSTR.Bits.R7_T7
    
    #define SPI0DRL_R0_T0_MASK          1U
    #define SPI0DRL_R1_T1_MASK          2U
    #define SPI0DRL_R2_T2_MASK          4U
    #define SPI0DRL_R3_T3_MASK          8U
    #define SPI0DRL_R4_T4_MASK          16U
    #define SPI0DRL_R5_T5_MASK          32U
    #define SPI0DRL_R6_T6_MASK          64U
    #define SPI0DRL_R7_T7_MASK          128U
    
  } Overlap_STR;

  struct {
    word R0_T0       :1;                                       /* SPI 0 Data Bit 0 */
    word R1_T1       :1;                                       /* SPI 0 Data Bit 1 */
    word R2_T2       :1;                                       /* SPI 0 Data Bit 2 */
    word R3_T3       :1;                                       /* SPI 0 Data Bit 3 */
    word R4_T4       :1;                                       /* SPI 0 Data Bit 4 */
    word R5_T5       :1;                                       /* SPI 0 Data Bit 5 */
    word R6_T6       :1;                                       /* SPI 0 Data Bit 6 */
    word R7_T7       :1;                                       /* SPI 0 Data Bit 7 */
    word R8_T8       :1;                                       /* SPI 0 Data Bit 8 */
    word R9_T9       :1;                                       /* SPI 0 Data Bit 9 */
    word R10_T10     :1;                                       /* SPI 0 Data Bit 10 */
    word R11_T11     :1;                                       /* SPI 0 Data Bit 11 */
    word R12_T12     :1;                                       /* SPI 0 Data Bit 12 */
    word R13_T13     :1;                                       /* SPI 0 Data Bit 13 */
    word R14_T14     :1;                                       /* SPI 0 Data Bit 14 */
    word R15_T15     :1;                                       /* SPI 0 Data Bit 15 */
  } Bits;
} SPI0DRSTR;
extern volatile SPI0DRSTR _SPI0DR @0x00000784;
#define SPI0DR                          _SPI0DR.Word
#define SPI0DR_R0_T0                    _SPI0DR.Bits.R0_T0
#define SPI0DR_R1_T1                    _SPI0DR.Bits.R1_T1
#define SPI0DR_R2_T2                    _SPI0DR.Bits.R2_T2
#define SPI0DR_R3_T3                    _SPI0DR.Bits.R3_T3
#define SPI0DR_R4_T4                    _SPI0DR.Bits.R4_T4
#define SPI0DR_R5_T5                    _SPI0DR.Bits.R5_T5
#define SPI0DR_R6_T6                    _SPI0DR.Bits.R6_T6
#define SPI0DR_R7_T7                    _SPI0DR.Bits.R7_T7
#define SPI0DR_R8_T8                    _SPI0DR.Bits.R8_T8
#define SPI0DR_R9_T9                    _SPI0DR.Bits.R9_T9
#define SPI0DR_R10_T10                  _SPI0DR.Bits.R10_T10
#define SPI0DR_R11_T11                  _SPI0DR.Bits.R11_T11
#define SPI0DR_R12_T12                  _SPI0DR.Bits.R12_T12
#define SPI0DR_R13_T13                  _SPI0DR.Bits.R13_T13
#define SPI0DR_R14_T14                  _SPI0DR.Bits.R14_T14
#define SPI0DR_R15_T15                  _SPI0DR.Bits.R15_T15

#define SPI0DR_R0_T0_MASK               1U
#define SPI0DR_R1_T1_MASK               2U
#define SPI0DR_R2_T2_MASK               4U
#define SPI0DR_R3_T3_MASK               8U
#define SPI0DR_R4_T4_MASK               16U
#define SPI0DR_R5_T5_MASK               32U
#define SPI0DR_R6_T6_MASK               64U
#define SPI0DR_R7_T7_MASK               128U
#define SPI0DR_R8_T8_MASK               256U
#define SPI0DR_R9_T9_MASK               512U
#define SPI0DR_R10_T10_MASK             1024U
#define SPI0DR_R11_T11_MASK             2048U
#define SPI0DR_R12_T12_MASK             4096U
#define SPI0DR_R13_T13_MASK             8192U
#define SPI0DR_R14_T14_MASK             16384U
#define SPI0DR_R15_T15_MASK             32768U


/*** SPI1CR1 - SPI 1 Control Register 1; 0x00000790 ***/
typedef union {
  byte Byte;
  struct {
    byte LSBFE       :1;                                       /* SPI LSB-First Enable */
    byte SSOE        :1;                                       /* Slave Select Output Enable */
    byte CPHA        :1;                                       /* SPI Clock Phase Bit */
    byte CPOL        :1;                                       /* SPI Clock Polarity Bit */
    byte MSTR        :1;                                       /* SPI Master/Slave Mode Select Bit */
    byte SPTIE       :1;                                       /* SPI Transmit Interrupt Enable */
    byte SPE         :1;                                       /* SPI System Enable Bit */
    byte SPIE        :1;                                       /* SPI Interrupt Enable Bit */
  } Bits;
} SPI1CR1STR;
extern volatile SPI1CR1STR _SPI1CR1 @0x00000790;
#define SPI1CR1                         _SPI1CR1.Byte
#define SPI1CR1_LSBFE                   _SPI1CR1.Bits.LSBFE
#define SPI1CR1_SSOE                    _SPI1CR1.Bits.SSOE
#define SPI1CR1_CPHA                    _SPI1CR1.Bits.CPHA
#define SPI1CR1_CPOL                    _SPI1CR1.Bits.CPOL
#define SPI1CR1_MSTR                    _SPI1CR1.Bits.MSTR
#define SPI1CR1_SPTIE                   _SPI1CR1.Bits.SPTIE
#define SPI1CR1_SPE                     _SPI1CR1.Bits.SPE
#define SPI1CR1_SPIE                    _SPI1CR1.Bits.SPIE

#define SPI1CR1_LSBFE_MASK              1U
#define SPI1CR1_SSOE_MASK               2U
#define SPI1CR1_CPHA_MASK               4U
#define SPI1CR1_CPOL_MASK               8U
#define SPI1CR1_MSTR_MASK               16U
#define SPI1CR1_SPTIE_MASK              32U
#define SPI1CR1_SPE_MASK                64U
#define SPI1CR1_SPIE_MASK               128U


/*** SPI1CR2 - SPI 1 Control Register 2; 0x00000791 ***/
typedef union {
  byte Byte;
  struct {
    byte SPC0        :1;                                       /* Serial Pin Control Bit 0 */
    byte SPISWAI     :1;                                       /* SPI Stop in Wait Mode Bit */
    byte             :1; 
    byte BIDIROE     :1;                                       /* Output enable in the Bidirectional mode of operation */
    byte MODFEN      :1;                                       /* Mode Fault Enable Bit */
    byte             :1; 
    byte XFRW        :1;                                       /* Transfer Width */
    byte             :1; 
  } Bits;
} SPI1CR2STR;
extern volatile SPI1CR2STR _SPI1CR2 @0x00000791;
#define SPI1CR2                         _SPI1CR2.Byte
#define SPI1CR2_SPC0                    _SPI1CR2.Bits.SPC0
#define SPI1CR2_SPISWAI                 _SPI1CR2.Bits.SPISWAI
#define SPI1CR2_BIDIROE                 _SPI1CR2.Bits.BIDIROE
#define SPI1CR2_MODFEN                  _SPI1CR2.Bits.MODFEN
#define SPI1CR2_XFRW                    _SPI1CR2.Bits.XFRW

#define SPI1CR2_SPC0_MASK               1U
#define SPI1CR2_SPISWAI_MASK            2U
#define SPI1CR2_BIDIROE_MASK            8U
#define SPI1CR2_MODFEN_MASK             16U
#define SPI1CR2_XFRW_MASK               64U


/*** SPI1BR - SPI 1 Baud Rate Register; 0x00000792 ***/
typedef union {
  byte Byte;
  struct {
    byte SPR0        :1;                                       /* SPI Baud Rate Selection Bit 0 */
    byte SPR1        :1;                                       /* SPI Baud Rate Selection Bit 1 */
    byte SPR2        :1;                                       /* SPI Baud Rate Selection Bit 2 */
    byte             :1; 
    byte SPPR0       :1;                                       /* SPI Baud Rate Preselection Bits 0 */
    byte SPPR1       :1;                                       /* SPI Baud Rate Preselection Bits 1 */
    byte SPPR2       :1;                                       /* SPI Baud Rate Preselection Bits 2 */
    byte             :1; 
  } Bits;
  struct {
    byte grpSPR  :3;
    byte         :1;
    byte grpSPPR :3;
    byte         :1;
  } MergedBits;
} SPI1BRSTR;
extern volatile SPI1BRSTR _SPI1BR @0x00000792;
#define SPI1BR                          _SPI1BR.Byte
#define SPI1BR_SPR0                     _SPI1BR.Bits.SPR0
#define SPI1BR_SPR1                     _SPI1BR.Bits.SPR1
#define SPI1BR_SPR2                     _SPI1BR.Bits.SPR2
#define SPI1BR_SPPR0                    _SPI1BR.Bits.SPPR0
#define SPI1BR_SPPR1                    _SPI1BR.Bits.SPPR1
#define SPI1BR_SPPR2                    _SPI1BR.Bits.SPPR2
#define SPI1BR_SPR                      _SPI1BR.MergedBits.grpSPR
#define SPI1BR_SPPR                     _SPI1BR.MergedBits.grpSPPR

#define SPI1BR_SPR0_MASK                1U
#define SPI1BR_SPR1_MASK                2U
#define SPI1BR_SPR2_MASK                4U
#define SPI1BR_SPPR0_MASK               16U
#define SPI1BR_SPPR1_MASK               32U
#define SPI1BR_SPPR2_MASK               64U
#define SPI1BR_SPR_MASK                 7U
#define SPI1BR_SPR_BITNUM               0U
#define SPI1BR_SPPR_MASK                112U
#define SPI1BR_SPPR_BITNUM              4U


/*** SPI1SR - SPI 1 Status Register; 0x00000793 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte MODF        :1;                                       /* Mode Fault Flag */
    byte SPTEF       :1;                                       /* SPI Transmit Empty Interrupt Flag */
    byte             :1; 
    byte SPIF        :1;                                       /* SPIF Receive Interrupt Flag */
  } Bits;
} SPI1SRSTR;
extern volatile SPI1SRSTR _SPI1SR @0x00000793;
#define SPI1SR                          _SPI1SR.Byte
#define SPI1SR_MODF                     _SPI1SR.Bits.MODF
#define SPI1SR_SPTEF                    _SPI1SR.Bits.SPTEF
#define SPI1SR_SPIF                     _SPI1SR.Bits.SPIF

#define SPI1SR_MODF_MASK                16U
#define SPI1SR_SPTEF_MASK               32U
#define SPI1SR_SPIF_MASK                128U


/*** SPI1DR - SPI 1 Data Register; 0x00000794 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** SPI1DRH - SPI 1 Data Register High; 0x00000794 ***/
    union {
      byte Byte;
      struct {
        byte R8_T8       :1;                                       /* SPI 1 Data Bit 8 */
        byte R9_T9       :1;                                       /* SPI 1 Data Bit 9 */
        byte R10_T10     :1;                                       /* SPI 1 Data Bit 10 */
        byte R11_T11     :1;                                       /* SPI 1 Data Bit 11 */
        byte R12_T12     :1;                                       /* SPI 1 Data Bit 12 */
        byte R13_T13     :1;                                       /* SPI 1 Data Bit 13 */
        byte R14_T14     :1;                                       /* SPI 1 Data Bit 14 */
        byte R15_T15     :1;                                       /* SPI 1 Data Bit 15 */
      } Bits;
    } SPI1DRHSTR;
    #define SPI1DRH                     _SPI1DR.Overlap_STR.SPI1DRHSTR.Byte
    #define SPI1DRH_R8_T8               _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R8_T8
    #define SPI1DRH_R9_T9               _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R9_T9
    #define SPI1DRH_R10_T10             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R10_T10
    #define SPI1DRH_R11_T11             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R11_T11
    #define SPI1DRH_R12_T12             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R12_T12
    #define SPI1DRH_R13_T13             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R13_T13
    #define SPI1DRH_R14_T14             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R14_T14
    #define SPI1DRH_R15_T15             _SPI1DR.Overlap_STR.SPI1DRHSTR.Bits.R15_T15
    
    #define SPI1DRH_R8_T8_MASK          1U
    #define SPI1DRH_R9_T9_MASK          2U
    #define SPI1DRH_R10_T10_MASK        4U
    #define SPI1DRH_R11_T11_MASK        8U
    #define SPI1DRH_R12_T12_MASK        16U
    #define SPI1DRH_R13_T13_MASK        32U
    #define SPI1DRH_R14_T14_MASK        64U
    #define SPI1DRH_R15_T15_MASK        128U
    

    /*** SPI1DRL - SPI 1 Data Register Low; 0x00000795 ***/
    union {
      byte Byte;
      struct {
        byte R0_T0       :1;                                       /* SPI 1 Data Bit 0 */
        byte R1_T1       :1;                                       /* SPI 1 Data Bit 1 */
        byte R2_T2       :1;                                       /* SPI 1 Data Bit 2 */
        byte R3_T3       :1;                                       /* SPI 1 Data Bit 3 */
        byte R4_T4       :1;                                       /* SPI 1 Data Bit 4 */
        byte R5_T5       :1;                                       /* SPI 1 Data Bit 5 */
        byte R6_T6       :1;                                       /* SPI 1 Data Bit 6 */
        byte R7_T7       :1;                                       /* SPI 1 Data Bit 7 */
      } Bits;
    } SPI1DRLSTR;
    #define SPI1DRL                     _SPI1DR.Overlap_STR.SPI1DRLSTR.Byte
    #define SPI1DRL_R0_T0               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R0_T0
    #define SPI1DRL_R1_T1               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R1_T1
    #define SPI1DRL_R2_T2               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R2_T2
    #define SPI1DRL_R3_T3               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R3_T3
    #define SPI1DRL_R4_T4               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R4_T4
    #define SPI1DRL_R5_T5               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R5_T5
    #define SPI1DRL_R6_T6               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R6_T6
    #define SPI1DRL_R7_T7               _SPI1DR.Overlap_STR.SPI1DRLSTR.Bits.R7_T7
    
    #define SPI1DRL_R0_T0_MASK          1U
    #define SPI1DRL_R1_T1_MASK          2U
    #define SPI1DRL_R2_T2_MASK          4U
    #define SPI1DRL_R3_T3_MASK          8U
    #define SPI1DRL_R4_T4_MASK          16U
    #define SPI1DRL_R5_T5_MASK          32U
    #define SPI1DRL_R6_T6_MASK          64U
    #define SPI1DRL_R7_T7_MASK          128U
    
  } Overlap_STR;

  struct {
    word R0_T0       :1;                                       /* SPI 1 Data Bit 0 */
    word R1_T1       :1;                                       /* SPI 1 Data Bit 1 */
    word R2_T2       :1;                                       /* SPI 1 Data Bit 2 */
    word R3_T3       :1;                                       /* SPI 1 Data Bit 3 */
    word R4_T4       :1;                                       /* SPI 1 Data Bit 4 */
    word R5_T5       :1;                                       /* SPI 1 Data Bit 5 */
    word R6_T6       :1;                                       /* SPI 1 Data Bit 6 */
    word R7_T7       :1;                                       /* SPI 1 Data Bit 7 */
    word R8_T8       :1;                                       /* SPI 1 Data Bit 8 */
    word R9_T9       :1;                                       /* SPI 1 Data Bit 9 */
    word R10_T10     :1;                                       /* SPI 1 Data Bit 10 */
    word R11_T11     :1;                                       /* SPI 1 Data Bit 11 */
    word R12_T12     :1;                                       /* SPI 1 Data Bit 12 */
    word R13_T13     :1;                                       /* SPI 1 Data Bit 13 */
    word R14_T14     :1;                                       /* SPI 1 Data Bit 14 */
    word R15_T15     :1;                                       /* SPI 1 Data Bit 15 */
  } Bits;
} SPI1DRSTR;
extern volatile SPI1DRSTR _SPI1DR @0x00000794;
#define SPI1DR                          _SPI1DR.Word
#define SPI1DR_R0_T0                    _SPI1DR.Bits.R0_T0
#define SPI1DR_R1_T1                    _SPI1DR.Bits.R1_T1
#define SPI1DR_R2_T2                    _SPI1DR.Bits.R2_T2
#define SPI1DR_R3_T3                    _SPI1DR.Bits.R3_T3
#define SPI1DR_R4_T4                    _SPI1DR.Bits.R4_T4
#define SPI1DR_R5_T5                    _SPI1DR.Bits.R5_T5
#define SPI1DR_R6_T6                    _SPI1DR.Bits.R6_T6
#define SPI1DR_R7_T7                    _SPI1DR.Bits.R7_T7
#define SPI1DR_R8_T8                    _SPI1DR.Bits.R8_T8
#define SPI1DR_R9_T9                    _SPI1DR.Bits.R9_T9
#define SPI1DR_R10_T10                  _SPI1DR.Bits.R10_T10
#define SPI1DR_R11_T11                  _SPI1DR.Bits.R11_T11
#define SPI1DR_R12_T12                  _SPI1DR.Bits.R12_T12
#define SPI1DR_R13_T13                  _SPI1DR.Bits.R13_T13
#define SPI1DR_R14_T14                  _SPI1DR.Bits.R14_T14
#define SPI1DR_R15_T15                  _SPI1DR.Bits.R15_T15

#define SPI1DR_R0_T0_MASK               1U
#define SPI1DR_R1_T1_MASK               2U
#define SPI1DR_R2_T2_MASK               4U
#define SPI1DR_R3_T3_MASK               8U
#define SPI1DR_R4_T4_MASK               16U
#define SPI1DR_R5_T5_MASK               32U
#define SPI1DR_R6_T6_MASK               64U
#define SPI1DR_R7_T7_MASK               128U
#define SPI1DR_R8_T8_MASK               256U
#define SPI1DR_R9_T9_MASK               512U
#define SPI1DR_R10_T10_MASK             1024U
#define SPI1DR_R11_T11_MASK             2048U
#define SPI1DR_R12_T12_MASK             4096U
#define SPI1DR_R13_T13_MASK             8192U
#define SPI1DR_R14_T14_MASK             16384U
#define SPI1DR_R15_T15_MASK             32768U


/*** IIC0IBAD - IIC Address Register; 0x000007C0 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte ADR1        :1;                                       /* Slave Address Bit 1 */
    byte ADR2        :1;                                       /* Slave Address Bit 2 */
    byte ADR3        :1;                                       /* Slave Address Bit 3 */
    byte ADR4        :1;                                       /* Slave Address Bit 4 */
    byte ADR5        :1;                                       /* Slave Address Bit 5 */
    byte ADR6        :1;                                       /* Slave Address Bit 6 */
    byte ADR7        :1;                                       /* Slave Address Bit 7 */
  } Bits;
  struct {
    byte         :1;
    byte grpADR_1 :7;
  } MergedBits;
} IIC0IBADSTR;
extern volatile IIC0IBADSTR _IIC0IBAD @0x000007C0;
#define IIC0IBAD                        _IIC0IBAD.Byte
#define IIC0IBAD_ADR1                   _IIC0IBAD.Bits.ADR1
#define IIC0IBAD_ADR2                   _IIC0IBAD.Bits.ADR2
#define IIC0IBAD_ADR3                   _IIC0IBAD.Bits.ADR3
#define IIC0IBAD_ADR4                   _IIC0IBAD.Bits.ADR4
#define IIC0IBAD_ADR5                   _IIC0IBAD.Bits.ADR5
#define IIC0IBAD_ADR6                   _IIC0IBAD.Bits.ADR6
#define IIC0IBAD_ADR7                   _IIC0IBAD.Bits.ADR7
#define IIC0IBAD_ADR_1                  _IIC0IBAD.MergedBits.grpADR_1
#define IIC0IBAD_ADR                    IIC0IBAD_ADR_1

#define IIC0IBAD_ADR1_MASK              2U
#define IIC0IBAD_ADR2_MASK              4U
#define IIC0IBAD_ADR3_MASK              8U
#define IIC0IBAD_ADR4_MASK              16U
#define IIC0IBAD_ADR5_MASK              32U
#define IIC0IBAD_ADR6_MASK              64U
#define IIC0IBAD_ADR7_MASK              128U
#define IIC0IBAD_ADR_1_MASK             254U
#define IIC0IBAD_ADR_1_BITNUM           1U


/*** IIC0IBFD - IIC Frequency Divider Register; 0x000007C1 ***/
typedef union {
  byte Byte;
  struct {
    byte IBC0        :1;                                       /* I-Bus Clock Rate 0 */
    byte IBC1        :1;                                       /* I-Bus Clock Rate 1 */
    byte IBC2        :1;                                       /* I-Bus Clock Rate 2 */
    byte IBC3        :1;                                       /* I-Bus Clock Rate 3 */
    byte IBC4        :1;                                       /* I-Bus Clock Rate 4 */
    byte IBC5        :1;                                       /* I-Bus Clock Rate 5 */
    byte IBC6        :1;                                       /* I-Bus Clock Rate 6 */
    byte IBC7        :1;                                       /* I-Bus Clock Rate 7 */
  } Bits;
} IIC0IBFDSTR;
extern volatile IIC0IBFDSTR _IIC0IBFD @0x000007C1;
#define IIC0IBFD                        _IIC0IBFD.Byte
#define IIC0IBFD_IBC0                   _IIC0IBFD.Bits.IBC0
#define IIC0IBFD_IBC1                   _IIC0IBFD.Bits.IBC1
#define IIC0IBFD_IBC2                   _IIC0IBFD.Bits.IBC2
#define IIC0IBFD_IBC3                   _IIC0IBFD.Bits.IBC3
#define IIC0IBFD_IBC4                   _IIC0IBFD.Bits.IBC4
#define IIC0IBFD_IBC5                   _IIC0IBFD.Bits.IBC5
#define IIC0IBFD_IBC6                   _IIC0IBFD.Bits.IBC6
#define IIC0IBFD_IBC7                   _IIC0IBFD.Bits.IBC7

#define IIC0IBFD_IBC0_MASK              1U
#define IIC0IBFD_IBC1_MASK              2U
#define IIC0IBFD_IBC2_MASK              4U
#define IIC0IBFD_IBC3_MASK              8U
#define IIC0IBFD_IBC4_MASK              16U
#define IIC0IBFD_IBC5_MASK              32U
#define IIC0IBFD_IBC6_MASK              64U
#define IIC0IBFD_IBC7_MASK              128U


/*** IIC0IBCR - IIC Control Register; 0x000007C2 ***/
typedef union {
  byte Byte;
  struct {
    byte IBSWAI      :1;                                       /* I-Bus Interface Stop in WAIT mode */
    byte             :1; 
    byte RSTA        :1;                                       /* Repeat Start */
    byte TXAK        :1;                                       /* Transmit Acknowledge enable */
    byte TX_RX       :1;                                       /* Transmit/Receive mode select bit */
    byte MS_SL       :1;                                       /* Master/Slave mode select bit */
    byte IBIE        :1;                                       /* I-Bus Interrupt Enable */
    byte IBEN        :1;                                       /* I-Bus Enable */
  } Bits;
} IIC0IBCRSTR;
extern volatile IIC0IBCRSTR _IIC0IBCR @0x000007C2;
#define IIC0IBCR                        _IIC0IBCR.Byte
#define IIC0IBCR_IBSWAI                 _IIC0IBCR.Bits.IBSWAI
#define IIC0IBCR_RSTA                   _IIC0IBCR.Bits.RSTA
#define IIC0IBCR_TXAK                   _IIC0IBCR.Bits.TXAK
#define IIC0IBCR_TX_RX                  _IIC0IBCR.Bits.TX_RX
#define IIC0IBCR_MS_SL                  _IIC0IBCR.Bits.MS_SL
#define IIC0IBCR_IBIE                   _IIC0IBCR.Bits.IBIE
#define IIC0IBCR_IBEN                   _IIC0IBCR.Bits.IBEN

#define IIC0IBCR_IBSWAI_MASK            1U
#define IIC0IBCR_RSTA_MASK              4U
#define IIC0IBCR_TXAK_MASK              8U
#define IIC0IBCR_TX_RX_MASK             16U
#define IIC0IBCR_MS_SL_MASK             32U
#define IIC0IBCR_IBIE_MASK              64U
#define IIC0IBCR_IBEN_MASK              128U


/*** IIC0IBSR - IIC Status Register; 0x000007C3 ***/
typedef union {
  byte Byte;
  struct {
    byte RXAK        :1;                                       /* Received Acknowledge */
    byte IBIF        :1;                                       /* I-Bus Interrupt */
    byte SRW         :1;                                       /* Slave Read/Write */
    byte             :1; 
    byte IBAL        :1;                                       /* Arbitration Lost */
    byte IBB         :1;                                       /* Bus busy bit */
    byte IAAS        :1;                                       /* Addressed as a slave bit */
    byte TCF         :1;                                       /* Data transferring bit */
  } Bits;
} IIC0IBSRSTR;
extern volatile IIC0IBSRSTR _IIC0IBSR @0x000007C3;
#define IIC0IBSR                        _IIC0IBSR.Byte
#define IIC0IBSR_RXAK                   _IIC0IBSR.Bits.RXAK
#define IIC0IBSR_IBIF                   _IIC0IBSR.Bits.IBIF
#define IIC0IBSR_SRW                    _IIC0IBSR.Bits.SRW
#define IIC0IBSR_IBAL                   _IIC0IBSR.Bits.IBAL
#define IIC0IBSR_IBB                    _IIC0IBSR.Bits.IBB
#define IIC0IBSR_IAAS                   _IIC0IBSR.Bits.IAAS
#define IIC0IBSR_TCF                    _IIC0IBSR.Bits.TCF

#define IIC0IBSR_RXAK_MASK              1U
#define IIC0IBSR_IBIF_MASK              2U
#define IIC0IBSR_SRW_MASK               4U
#define IIC0IBSR_IBAL_MASK              16U
#define IIC0IBSR_IBB_MASK               32U
#define IIC0IBSR_IAAS_MASK              64U
#define IIC0IBSR_TCF_MASK               128U


/*** IIC0IBDR - IIC Data I/O Register; 0x000007C4 ***/
typedef union {
  byte Byte;
  struct {
    byte D0          :1;                                       /* IIC Data Bit 0 */
    byte D1          :1;                                       /* IIC Data Bit 1 */
    byte D2          :1;                                       /* IIC Data Bit 2 */
    byte D3          :1;                                       /* IIC Data Bit 3 */
    byte D4          :1;                                       /* IIC Data Bit 4 */
    byte D5          :1;                                       /* IIC Data Bit 5 */
    byte D6          :1;                                       /* IIC Data Bit 6 */
    byte D7          :1;                                       /* IIC Data Bit 7 */
  } Bits;
} IIC0IBDRSTR;
extern volatile IIC0IBDRSTR _IIC0IBDR @0x000007C4;
#define IIC0IBDR                        _IIC0IBDR.Byte
#define IIC0IBDR_D0                     _IIC0IBDR.Bits.D0
#define IIC0IBDR_D1                     _IIC0IBDR.Bits.D1
#define IIC0IBDR_D2                     _IIC0IBDR.Bits.D2
#define IIC0IBDR_D3                     _IIC0IBDR.Bits.D3
#define IIC0IBDR_D4                     _IIC0IBDR.Bits.D4
#define IIC0IBDR_D5                     _IIC0IBDR.Bits.D5
#define IIC0IBDR_D6                     _IIC0IBDR.Bits.D6
#define IIC0IBDR_D7                     _IIC0IBDR.Bits.D7

#define IIC0IBDR_D0_MASK                1U
#define IIC0IBDR_D1_MASK                2U
#define IIC0IBDR_D2_MASK                4U
#define IIC0IBDR_D3_MASK                8U
#define IIC0IBDR_D4_MASK                16U
#define IIC0IBDR_D5_MASK                32U
#define IIC0IBDR_D6_MASK                64U
#define IIC0IBDR_D7_MASK                128U


/*** IIC0IBCR2 - IIC Control Register 2; 0x000007C5 ***/
typedef union {
  byte Byte;
  struct {
    byte ADR8        :1;                                       /* Slave Address Bit 8 */
    byte ADR9        :1;                                       /* Slave Address Bit 9 */
    byte ADR10       :1;                                       /* Slave Address Bit 10 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte ADTYPE      :1;                                       /* Address Type */
    byte GCEN        :1;                                       /* General Call Enable */
  } Bits;
  struct {
    byte grpADR_8 :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} IIC0IBCR2STR;
extern volatile IIC0IBCR2STR _IIC0IBCR2 @0x000007C5;
#define IIC0IBCR2                       _IIC0IBCR2.Byte
#define IIC0IBCR2_ADR8                  _IIC0IBCR2.Bits.ADR8
#define IIC0IBCR2_ADR9                  _IIC0IBCR2.Bits.ADR9
#define IIC0IBCR2_ADR10                 _IIC0IBCR2.Bits.ADR10
#define IIC0IBCR2_ADTYPE                _IIC0IBCR2.Bits.ADTYPE
#define IIC0IBCR2_GCEN                  _IIC0IBCR2.Bits.GCEN
#define IIC0IBCR2_ADR_8                 _IIC0IBCR2.MergedBits.grpADR_8
#define IIC0IBCR2_ADR                   IIC0IBCR2_ADR_8

#define IIC0IBCR2_ADR8_MASK             1U
#define IIC0IBCR2_ADR9_MASK             2U
#define IIC0IBCR2_ADR10_MASK            4U
#define IIC0IBCR2_ADTYPE_MASK           64U
#define IIC0IBCR2_GCEN_MASK             128U
#define IIC0IBCR2_ADR_8_MASK            7U
#define IIC0IBCR2_ADR_8_BITNUM          0U


/*** CAN0CTL0 - MSCAN0 Control 0 Register; 0x00000800 ***/
typedef union {
  byte Byte;
  struct {
    byte INITRQ      :1;                                       /* Initialization Mode Request */
    byte SLPRQ       :1;                                       /* Sleep Mode Request */
    byte WUPE        :1;                                       /* Wake-Up Enable */
    byte TIME        :1;                                       /* Timer Enable */
    byte SYNCH       :1;                                       /* Synchronized Status */
    byte CSWAI       :1;                                       /* CAN Stops in Wait Mode */
    byte RXACT       :1;                                       /* Receiver Active Status */
    byte RXFRM       :1;                                       /* Received Frame Flag */
  } Bits;
} CAN0CTL0STR;
extern volatile CAN0CTL0STR _CAN0CTL0 @0x00000800;
#define CAN0CTL0                        _CAN0CTL0.Byte
#define CAN0CTL0_INITRQ                 _CAN0CTL0.Bits.INITRQ
#define CAN0CTL0_SLPRQ                  _CAN0CTL0.Bits.SLPRQ
#define CAN0CTL0_WUPE                   _CAN0CTL0.Bits.WUPE
#define CAN0CTL0_TIME                   _CAN0CTL0.Bits.TIME
#define CAN0CTL0_SYNCH                  _CAN0CTL0.Bits.SYNCH
#define CAN0CTL0_CSWAI                  _CAN0CTL0.Bits.CSWAI
#define CAN0CTL0_RXACT                  _CAN0CTL0.Bits.RXACT
#define CAN0CTL0_RXFRM                  _CAN0CTL0.Bits.RXFRM
/* CAN0CTL_ARR: Access 2 CAN0CTLx registers in an array */
#define CAN0CTL_ARR                     ((volatile byte *) &CAN0CTL0)

#define CAN0CTL0_INITRQ_MASK            1U
#define CAN0CTL0_SLPRQ_MASK             2U
#define CAN0CTL0_WUPE_MASK              4U
#define CAN0CTL0_TIME_MASK              8U
#define CAN0CTL0_SYNCH_MASK             16U
#define CAN0CTL0_CSWAI_MASK             32U
#define CAN0CTL0_RXACT_MASK             64U
#define CAN0CTL0_RXFRM_MASK             128U


/*** CAN0CTL1 - MSCAN0 Control 1 Register; 0x00000801 ***/
typedef union {
  byte Byte;
  struct {
    byte INITAK      :1;                                       /* Initialization Mode Acknowledge */
    byte SLPAK       :1;                                       /* Sleep Mode Acknowledge */
    byte WUPM        :1;                                       /* Wake-Up Mode */
    byte             :1; 
    byte LISTEN      :1;                                       /* Listen Only Mode */
    byte LOOPB       :1;                                       /* Loop Back Self Test Mode */
    byte CLKSRC      :1;                                       /* MSCAN Clock Source */
    byte CANE        :1;                                       /* MSCAN Enable */
  } Bits;
} CAN0CTL1STR;
extern volatile CAN0CTL1STR _CAN0CTL1 @0x00000801;
#define CAN0CTL1                        _CAN0CTL1.Byte
#define CAN0CTL1_INITAK                 _CAN0CTL1.Bits.INITAK
#define CAN0CTL1_SLPAK                  _CAN0CTL1.Bits.SLPAK
#define CAN0CTL1_WUPM                   _CAN0CTL1.Bits.WUPM
#define CAN0CTL1_LISTEN                 _CAN0CTL1.Bits.LISTEN
#define CAN0CTL1_LOOPB                  _CAN0CTL1.Bits.LOOPB
#define CAN0CTL1_CLKSRC                 _CAN0CTL1.Bits.CLKSRC
#define CAN0CTL1_CANE                   _CAN0CTL1.Bits.CANE

#define CAN0CTL1_INITAK_MASK            1U
#define CAN0CTL1_SLPAK_MASK             2U
#define CAN0CTL1_WUPM_MASK              4U
#define CAN0CTL1_LISTEN_MASK            16U
#define CAN0CTL1_LOOPB_MASK             32U
#define CAN0CTL1_CLKSRC_MASK            64U
#define CAN0CTL1_CANE_MASK              128U


/*** CAN0BTR0 - MSCAN0 Bus Timing Register 0; 0x00000802 ***/
typedef union {
  byte Byte;
  struct {
    byte BRP0        :1;                                       /* Baud Rate Prescaler 0 */
    byte BRP1        :1;                                       /* Baud Rate Prescaler 1 */
    byte BRP2        :1;                                       /* Baud Rate Prescaler 2 */
    byte BRP3        :1;                                       /* Baud Rate Prescaler 3 */
    byte BRP4        :1;                                       /* Baud Rate Prescaler 4 */
    byte BRP5        :1;                                       /* Baud Rate Prescaler 5 */
    byte SJW0        :1;                                       /* Synchronization Jump Width 0 */
    byte SJW1        :1;                                       /* Synchronization Jump Width 1 */
  } Bits;
  struct {
    byte grpBRP  :6;
    byte grpSJW  :2;
  } MergedBits;
} CAN0BTR0STR;
extern volatile CAN0BTR0STR _CAN0BTR0 @0x00000802;
#define CAN0BTR0                        _CAN0BTR0.Byte
#define CAN0BTR0_BRP0                   _CAN0BTR0.Bits.BRP0
#define CAN0BTR0_BRP1                   _CAN0BTR0.Bits.BRP1
#define CAN0BTR0_BRP2                   _CAN0BTR0.Bits.BRP2
#define CAN0BTR0_BRP3                   _CAN0BTR0.Bits.BRP3
#define CAN0BTR0_BRP4                   _CAN0BTR0.Bits.BRP4
#define CAN0BTR0_BRP5                   _CAN0BTR0.Bits.BRP5
#define CAN0BTR0_SJW0                   _CAN0BTR0.Bits.SJW0
#define CAN0BTR0_SJW1                   _CAN0BTR0.Bits.SJW1
/* CAN0BTR_ARR: Access 2 CAN0BTRx registers in an array */
#define CAN0BTR_ARR                     ((volatile byte *) &CAN0BTR0)
#define CAN0BTR0_BRP                    _CAN0BTR0.MergedBits.grpBRP
#define CAN0BTR0_SJW                    _CAN0BTR0.MergedBits.grpSJW

#define CAN0BTR0_BRP0_MASK              1U
#define CAN0BTR0_BRP1_MASK              2U
#define CAN0BTR0_BRP2_MASK              4U
#define CAN0BTR0_BRP3_MASK              8U
#define CAN0BTR0_BRP4_MASK              16U
#define CAN0BTR0_BRP5_MASK              32U
#define CAN0BTR0_SJW0_MASK              64U
#define CAN0BTR0_SJW1_MASK              128U
#define CAN0BTR0_BRP_MASK               63U
#define CAN0BTR0_BRP_BITNUM             0U
#define CAN0BTR0_SJW_MASK               192U
#define CAN0BTR0_SJW_BITNUM             6U


/*** CAN0BTR1 - MSCAN0 Bus Timing Register 1; 0x00000803 ***/
typedef union {
  byte Byte;
  struct {
    byte TSEG10      :1;                                       /* Time Segment 10 */
    byte TSEG11      :1;                                       /* Time Segment 11 */
    byte TSEG12      :1;                                       /* Time Segment 12 */
    byte TSEG13      :1;                                       /* Time Segment 13 */
    byte TSEG20      :1;                                       /* Time Segment 20 */
    byte TSEG21      :1;                                       /* Time Segment 21 */
    byte TSEG22      :1;                                       /* Time Segment 22 */
    byte SAMP        :1;                                       /* Sampling */
  } Bits;
  struct {
    byte grpTSEG_10 :4;
    byte grpTSEG_20 :3;
    byte         :1;
  } MergedBits;
} CAN0BTR1STR;
extern volatile CAN0BTR1STR _CAN0BTR1 @0x00000803;
#define CAN0BTR1                        _CAN0BTR1.Byte
#define CAN0BTR1_TSEG10                 _CAN0BTR1.Bits.TSEG10
#define CAN0BTR1_TSEG11                 _CAN0BTR1.Bits.TSEG11
#define CAN0BTR1_TSEG12                 _CAN0BTR1.Bits.TSEG12
#define CAN0BTR1_TSEG13                 _CAN0BTR1.Bits.TSEG13
#define CAN0BTR1_TSEG20                 _CAN0BTR1.Bits.TSEG20
#define CAN0BTR1_TSEG21                 _CAN0BTR1.Bits.TSEG21
#define CAN0BTR1_TSEG22                 _CAN0BTR1.Bits.TSEG22
#define CAN0BTR1_SAMP                   _CAN0BTR1.Bits.SAMP
#define CAN0BTR1_TSEG_10                _CAN0BTR1.MergedBits.grpTSEG_10
#define CAN0BTR1_TSEG_20                _CAN0BTR1.MergedBits.grpTSEG_20
#define CAN0BTR1_TSEG                   CAN0BTR1_TSEG_10

#define CAN0BTR1_TSEG10_MASK            1U
#define CAN0BTR1_TSEG11_MASK            2U
#define CAN0BTR1_TSEG12_MASK            4U
#define CAN0BTR1_TSEG13_MASK            8U
#define CAN0BTR1_TSEG20_MASK            16U
#define CAN0BTR1_TSEG21_MASK            32U
#define CAN0BTR1_TSEG22_MASK            64U
#define CAN0BTR1_SAMP_MASK              128U
#define CAN0BTR1_TSEG_10_MASK           15U
#define CAN0BTR1_TSEG_10_BITNUM         0U
#define CAN0BTR1_TSEG_20_MASK           112U
#define CAN0BTR1_TSEG_20_BITNUM         4U


/*** CAN0RFLG - MSCAN0 Receiver Flag Register; 0x00000804 ***/
typedef union {
  byte Byte;
  struct {
    byte RXF         :1;                                       /* Receive Buffer Full */
    byte OVRIF       :1;                                       /* Overrun Interrupt Flag */
    byte TSTAT0      :1;                                       /* Transmitter Status Bit 0 */
    byte TSTAT1      :1;                                       /* Transmitter Status Bit 1 */
    byte RSTAT0      :1;                                       /* Receiver Status Bit 0 */
    byte RSTAT1      :1;                                       /* Receiver Status Bit 1 */
    byte CSCIF       :1;                                       /* CAN Status Change Interrupt Flag */
    byte WUPIF       :1;                                       /* Wake-up Interrupt Flag */
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte grpTSTAT :2;
    byte grpRSTAT :2;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0RFLGSTR;
extern volatile CAN0RFLGSTR _CAN0RFLG @0x00000804;
#define CAN0RFLG                        _CAN0RFLG.Byte
#define CAN0RFLG_RXF                    _CAN0RFLG.Bits.RXF
#define CAN0RFLG_OVRIF                  _CAN0RFLG.Bits.OVRIF
#define CAN0RFLG_TSTAT0                 _CAN0RFLG.Bits.TSTAT0
#define CAN0RFLG_TSTAT1                 _CAN0RFLG.Bits.TSTAT1
#define CAN0RFLG_RSTAT0                 _CAN0RFLG.Bits.RSTAT0
#define CAN0RFLG_RSTAT1                 _CAN0RFLG.Bits.RSTAT1
#define CAN0RFLG_CSCIF                  _CAN0RFLG.Bits.CSCIF
#define CAN0RFLG_WUPIF                  _CAN0RFLG.Bits.WUPIF
#define CAN0RFLG_TSTAT                  _CAN0RFLG.MergedBits.grpTSTAT
#define CAN0RFLG_RSTAT                  _CAN0RFLG.MergedBits.grpRSTAT

#define CAN0RFLG_RXF_MASK               1U
#define CAN0RFLG_OVRIF_MASK             2U
#define CAN0RFLG_TSTAT0_MASK            4U
#define CAN0RFLG_TSTAT1_MASK            8U
#define CAN0RFLG_RSTAT0_MASK            16U
#define CAN0RFLG_RSTAT1_MASK            32U
#define CAN0RFLG_CSCIF_MASK             64U
#define CAN0RFLG_WUPIF_MASK             128U
#define CAN0RFLG_TSTAT_MASK             12U
#define CAN0RFLG_TSTAT_BITNUM           2U
#define CAN0RFLG_RSTAT_MASK             48U
#define CAN0RFLG_RSTAT_BITNUM           4U


/*** CAN0RIER - MSCAN0 Receiver Interrupt Enable Register; 0x00000805 ***/
typedef union {
  byte Byte;
  struct {
    byte RXFIE       :1;                                       /* Receiver Full Interrupt Enable */
    byte OVRIE       :1;                                       /* Overrun Interrupt Enable */
    byte TSTATE0     :1;                                       /* Transmitter Status Change Enable 0 */
    byte TSTATE1     :1;                                       /* Transmitter Status Change Enable 1 */
    byte RSTATE0     :1;                                       /* Receiver Status Change Enable 0 */
    byte RSTATE1     :1;                                       /* Receiver Status Change Enable 1 */
    byte CSCIE       :1;                                       /* CAN Status Change Interrupt Enable */
    byte WUPIE       :1;                                       /* Wake-up Interrupt Enable */
  } Bits;
  struct {
    byte         :1;
    byte         :1;
    byte grpTSTATE :2;
    byte grpRSTATE :2;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0RIERSTR;
extern volatile CAN0RIERSTR _CAN0RIER @0x00000805;
#define CAN0RIER                        _CAN0RIER.Byte
#define CAN0RIER_RXFIE                  _CAN0RIER.Bits.RXFIE
#define CAN0RIER_OVRIE                  _CAN0RIER.Bits.OVRIE
#define CAN0RIER_TSTATE0                _CAN0RIER.Bits.TSTATE0
#define CAN0RIER_TSTATE1                _CAN0RIER.Bits.TSTATE1
#define CAN0RIER_RSTATE0                _CAN0RIER.Bits.RSTATE0
#define CAN0RIER_RSTATE1                _CAN0RIER.Bits.RSTATE1
#define CAN0RIER_CSCIE                  _CAN0RIER.Bits.CSCIE
#define CAN0RIER_WUPIE                  _CAN0RIER.Bits.WUPIE
#define CAN0RIER_TSTATE                 _CAN0RIER.MergedBits.grpTSTATE
#define CAN0RIER_RSTATE                 _CAN0RIER.MergedBits.grpRSTATE

#define CAN0RIER_RXFIE_MASK             1U
#define CAN0RIER_OVRIE_MASK             2U
#define CAN0RIER_TSTATE0_MASK           4U
#define CAN0RIER_TSTATE1_MASK           8U
#define CAN0RIER_RSTATE0_MASK           16U
#define CAN0RIER_RSTATE1_MASK           32U
#define CAN0RIER_CSCIE_MASK             64U
#define CAN0RIER_WUPIE_MASK             128U
#define CAN0RIER_TSTATE_MASK            12U
#define CAN0RIER_TSTATE_BITNUM          2U
#define CAN0RIER_RSTATE_MASK            48U
#define CAN0RIER_RSTATE_BITNUM          4U


/*** CAN0TFLG - MSCAN0 Transmitter Flag Register; 0x00000806 ***/
typedef union {
  byte Byte;
  struct {
    byte TXE0        :1;                                       /* Transmitter Buffer Empty 0 */
    byte TXE1        :1;                                       /* Transmitter Buffer Empty 1 */
    byte TXE2        :1;                                       /* Transmitter Buffer Empty 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpTXE  :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TFLGSTR;
extern volatile CAN0TFLGSTR _CAN0TFLG @0x00000806;
#define CAN0TFLG                        _CAN0TFLG.Byte
#define CAN0TFLG_TXE0                   _CAN0TFLG.Bits.TXE0
#define CAN0TFLG_TXE1                   _CAN0TFLG.Bits.TXE1
#define CAN0TFLG_TXE2                   _CAN0TFLG.Bits.TXE2
#define CAN0TFLG_TXE                    _CAN0TFLG.MergedBits.grpTXE

#define CAN0TFLG_TXE0_MASK              1U
#define CAN0TFLG_TXE1_MASK              2U
#define CAN0TFLG_TXE2_MASK              4U
#define CAN0TFLG_TXE_MASK               7U
#define CAN0TFLG_TXE_BITNUM             0U


/*** CAN0TIER - MSCAN0 Transmitter Interrupt Enable Register; 0x00000807 ***/
typedef union {
  byte Byte;
  struct {
    byte TXEIE0      :1;                                       /* Transmitter Empty Interrupt Enable 0 */
    byte TXEIE1      :1;                                       /* Transmitter Empty Interrupt Enable 1 */
    byte TXEIE2      :1;                                       /* Transmitter Empty Interrupt Enable 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpTXEIE :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TIERSTR;
extern volatile CAN0TIERSTR _CAN0TIER @0x00000807;
#define CAN0TIER                        _CAN0TIER.Byte
#define CAN0TIER_TXEIE0                 _CAN0TIER.Bits.TXEIE0
#define CAN0TIER_TXEIE1                 _CAN0TIER.Bits.TXEIE1
#define CAN0TIER_TXEIE2                 _CAN0TIER.Bits.TXEIE2
#define CAN0TIER_TXEIE                  _CAN0TIER.MergedBits.grpTXEIE

#define CAN0TIER_TXEIE0_MASK            1U
#define CAN0TIER_TXEIE1_MASK            2U
#define CAN0TIER_TXEIE2_MASK            4U
#define CAN0TIER_TXEIE_MASK             7U
#define CAN0TIER_TXEIE_BITNUM           0U


/*** CAN0TARQ - MSCAN0 Transmitter Message Abort Request; 0x00000808 ***/
typedef union {
  byte Byte;
  struct {
    byte ABTRQ0      :1;                                       /* Abort Request 0 */
    byte ABTRQ1      :1;                                       /* Abort Request 1 */
    byte ABTRQ2      :1;                                       /* Abort Request 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpABTRQ :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TARQSTR;
extern volatile CAN0TARQSTR _CAN0TARQ @0x00000808;
#define CAN0TARQ                        _CAN0TARQ.Byte
#define CAN0TARQ_ABTRQ0                 _CAN0TARQ.Bits.ABTRQ0
#define CAN0TARQ_ABTRQ1                 _CAN0TARQ.Bits.ABTRQ1
#define CAN0TARQ_ABTRQ2                 _CAN0TARQ.Bits.ABTRQ2
#define CAN0TARQ_ABTRQ                  _CAN0TARQ.MergedBits.grpABTRQ

#define CAN0TARQ_ABTRQ0_MASK            1U
#define CAN0TARQ_ABTRQ1_MASK            2U
#define CAN0TARQ_ABTRQ2_MASK            4U
#define CAN0TARQ_ABTRQ_MASK             7U
#define CAN0TARQ_ABTRQ_BITNUM           0U


/*** CAN0TAAK - MSCAN0 Transmitter Message Abort Acknowledge; 0x00000809 ***/
typedef union {
  byte Byte;
  struct {
    byte ABTAK0      :1;                                       /* Abort Acknowledge 0 */
    byte ABTAK1      :1;                                       /* Abort Acknowledge 1 */
    byte ABTAK2      :1;                                       /* Abort Acknowledge 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpABTAK :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TAAKSTR;
extern volatile CAN0TAAKSTR _CAN0TAAK @0x00000809;
#define CAN0TAAK                        _CAN0TAAK.Byte
#define CAN0TAAK_ABTAK0                 _CAN0TAAK.Bits.ABTAK0
#define CAN0TAAK_ABTAK1                 _CAN0TAAK.Bits.ABTAK1
#define CAN0TAAK_ABTAK2                 _CAN0TAAK.Bits.ABTAK2
#define CAN0TAAK_ABTAK                  _CAN0TAAK.MergedBits.grpABTAK

#define CAN0TAAK_ABTAK0_MASK            1U
#define CAN0TAAK_ABTAK1_MASK            2U
#define CAN0TAAK_ABTAK2_MASK            4U
#define CAN0TAAK_ABTAK_MASK             7U
#define CAN0TAAK_ABTAK_BITNUM           0U


/*** CAN0TBSEL - MSCAN0 Transmit Buffer Selection; 0x0000080A ***/
typedef union {
  byte Byte;
  struct {
    byte TX0         :1;                                       /* Transmit Buffer Select 0 */
    byte TX1         :1;                                       /* Transmit Buffer Select 1 */
    byte TX2         :1;                                       /* Transmit Buffer Select 2 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpTX   :3;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TBSELSTR;
extern volatile CAN0TBSELSTR _CAN0TBSEL @0x0000080A;
#define CAN0TBSEL                       _CAN0TBSEL.Byte
#define CAN0TBSEL_TX0                   _CAN0TBSEL.Bits.TX0
#define CAN0TBSEL_TX1                   _CAN0TBSEL.Bits.TX1
#define CAN0TBSEL_TX2                   _CAN0TBSEL.Bits.TX2
#define CAN0TBSEL_TX                    _CAN0TBSEL.MergedBits.grpTX

#define CAN0TBSEL_TX0_MASK              1U
#define CAN0TBSEL_TX1_MASK              2U
#define CAN0TBSEL_TX2_MASK              4U
#define CAN0TBSEL_TX_MASK               7U
#define CAN0TBSEL_TX_BITNUM             0U


/*** CAN0IDAC - MSCAN0 Identifier Acceptance Control Register; 0x0000080B ***/
typedef union {
  byte Byte;
  struct {
    byte IDHIT0      :1;                                       /* Identifier Acceptance Hit Indicator 0 */
    byte IDHIT1      :1;                                       /* Identifier Acceptance Hit Indicator 1 */
    byte IDHIT2      :1;                                       /* Identifier Acceptance Hit Indicator 2 */
    byte             :1; 
    byte IDAM0       :1;                                       /* Identifier Acceptance Mode 0 */
    byte IDAM1       :1;                                       /* Identifier Acceptance Mode 1 */
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpIDHIT :3;
    byte         :1;
    byte grpIDAM :2;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0IDACSTR;
extern volatile CAN0IDACSTR _CAN0IDAC @0x0000080B;
#define CAN0IDAC                        _CAN0IDAC.Byte
#define CAN0IDAC_IDHIT0                 _CAN0IDAC.Bits.IDHIT0
#define CAN0IDAC_IDHIT1                 _CAN0IDAC.Bits.IDHIT1
#define CAN0IDAC_IDHIT2                 _CAN0IDAC.Bits.IDHIT2
#define CAN0IDAC_IDAM0                  _CAN0IDAC.Bits.IDAM0
#define CAN0IDAC_IDAM1                  _CAN0IDAC.Bits.IDAM1
#define CAN0IDAC_IDHIT                  _CAN0IDAC.MergedBits.grpIDHIT
#define CAN0IDAC_IDAM                   _CAN0IDAC.MergedBits.grpIDAM

#define CAN0IDAC_IDHIT0_MASK            1U
#define CAN0IDAC_IDHIT1_MASK            2U
#define CAN0IDAC_IDHIT2_MASK            4U
#define CAN0IDAC_IDAM0_MASK             16U
#define CAN0IDAC_IDAM1_MASK             32U
#define CAN0IDAC_IDHIT_MASK             7U
#define CAN0IDAC_IDHIT_BITNUM           0U
#define CAN0IDAC_IDAM_MASK              48U
#define CAN0IDAC_IDAM_BITNUM            4U


/*** CAN0RXERR - MSCAN0 Receive Error Counter Register; 0x0000080E ***/
typedef union {
  byte Byte;
  struct {
    byte RXERR0      :1;                                       /* Bit 0 */
    byte RXERR1      :1;                                       /* Bit 1 */
    byte RXERR2      :1;                                       /* Bit 2 */
    byte RXERR3      :1;                                       /* Bit 3 */
    byte RXERR4      :1;                                       /* Bit 4 */
    byte RXERR5      :1;                                       /* Bit 5 */
    byte RXERR6      :1;                                       /* Bit 6 */
    byte RXERR7      :1;                                       /* Bit 7 */
  } Bits;
} CAN0RXERRSTR;
extern volatile CAN0RXERRSTR _CAN0RXERR @0x0000080E;
#define CAN0RXERR                       _CAN0RXERR.Byte
#define CAN0RXERR_RXERR0                _CAN0RXERR.Bits.RXERR0
#define CAN0RXERR_RXERR1                _CAN0RXERR.Bits.RXERR1
#define CAN0RXERR_RXERR2                _CAN0RXERR.Bits.RXERR2
#define CAN0RXERR_RXERR3                _CAN0RXERR.Bits.RXERR3
#define CAN0RXERR_RXERR4                _CAN0RXERR.Bits.RXERR4
#define CAN0RXERR_RXERR5                _CAN0RXERR.Bits.RXERR5
#define CAN0RXERR_RXERR6                _CAN0RXERR.Bits.RXERR6
#define CAN0RXERR_RXERR7                _CAN0RXERR.Bits.RXERR7

#define CAN0RXERR_RXERR0_MASK           1U
#define CAN0RXERR_RXERR1_MASK           2U
#define CAN0RXERR_RXERR2_MASK           4U
#define CAN0RXERR_RXERR3_MASK           8U
#define CAN0RXERR_RXERR4_MASK           16U
#define CAN0RXERR_RXERR5_MASK           32U
#define CAN0RXERR_RXERR6_MASK           64U
#define CAN0RXERR_RXERR7_MASK           128U


/*** CAN0TXERR - MSCAN0 Transmit Error Counter Register; 0x0000080F ***/
typedef union {
  byte Byte;
  struct {
    byte TXERR0      :1;                                       /* Bit 0 */
    byte TXERR1      :1;                                       /* Bit 1 */
    byte TXERR2      :1;                                       /* Bit 2 */
    byte TXERR3      :1;                                       /* Bit 3 */
    byte TXERR4      :1;                                       /* Bit 4 */
    byte TXERR5      :1;                                       /* Bit 5 */
    byte TXERR6      :1;                                       /* Bit 6 */
    byte TXERR7      :1;                                       /* Bit 7 */
  } Bits;
} CAN0TXERRSTR;
extern volatile CAN0TXERRSTR _CAN0TXERR @0x0000080F;
#define CAN0TXERR                       _CAN0TXERR.Byte
#define CAN0TXERR_TXERR0                _CAN0TXERR.Bits.TXERR0
#define CAN0TXERR_TXERR1                _CAN0TXERR.Bits.TXERR1
#define CAN0TXERR_TXERR2                _CAN0TXERR.Bits.TXERR2
#define CAN0TXERR_TXERR3                _CAN0TXERR.Bits.TXERR3
#define CAN0TXERR_TXERR4                _CAN0TXERR.Bits.TXERR4
#define CAN0TXERR_TXERR5                _CAN0TXERR.Bits.TXERR5
#define CAN0TXERR_TXERR6                _CAN0TXERR.Bits.TXERR6
#define CAN0TXERR_TXERR7                _CAN0TXERR.Bits.TXERR7

#define CAN0TXERR_TXERR0_MASK           1U
#define CAN0TXERR_TXERR1_MASK           2U
#define CAN0TXERR_TXERR2_MASK           4U
#define CAN0TXERR_TXERR3_MASK           8U
#define CAN0TXERR_TXERR4_MASK           16U
#define CAN0TXERR_TXERR5_MASK           32U
#define CAN0TXERR_TXERR6_MASK           64U
#define CAN0TXERR_TXERR7_MASK           128U


/*** CAN0IDAR0 - MSCAN0 Identifier Acceptance Register 0; 0x00000810 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR0STR;
extern volatile CAN0IDAR0STR _CAN0IDAR0 @0x00000810;
#define CAN0IDAR0                       _CAN0IDAR0.Byte
#define CAN0IDAR0_AC0                   _CAN0IDAR0.Bits.AC0
#define CAN0IDAR0_AC1                   _CAN0IDAR0.Bits.AC1
#define CAN0IDAR0_AC2                   _CAN0IDAR0.Bits.AC2
#define CAN0IDAR0_AC3                   _CAN0IDAR0.Bits.AC3
#define CAN0IDAR0_AC4                   _CAN0IDAR0.Bits.AC4
#define CAN0IDAR0_AC5                   _CAN0IDAR0.Bits.AC5
#define CAN0IDAR0_AC6                   _CAN0IDAR0.Bits.AC6
#define CAN0IDAR0_AC7                   _CAN0IDAR0.Bits.AC7
/* CAN0IDAR_ARR: Access 4 CAN0IDARx registers in an array */
#define CAN0IDAR_ARR                    ((volatile byte *) &CAN0IDAR0)

#define CAN0IDAR0_AC0_MASK              1U
#define CAN0IDAR0_AC1_MASK              2U
#define CAN0IDAR0_AC2_MASK              4U
#define CAN0IDAR0_AC3_MASK              8U
#define CAN0IDAR0_AC4_MASK              16U
#define CAN0IDAR0_AC5_MASK              32U
#define CAN0IDAR0_AC6_MASK              64U
#define CAN0IDAR0_AC7_MASK              128U


/*** CAN0IDAR1 - MSCAN0 Identifier Acceptance Register 1; 0x00000811 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR1STR;
extern volatile CAN0IDAR1STR _CAN0IDAR1 @0x00000811;
#define CAN0IDAR1                       _CAN0IDAR1.Byte
#define CAN0IDAR1_AC0                   _CAN0IDAR1.Bits.AC0
#define CAN0IDAR1_AC1                   _CAN0IDAR1.Bits.AC1
#define CAN0IDAR1_AC2                   _CAN0IDAR1.Bits.AC2
#define CAN0IDAR1_AC3                   _CAN0IDAR1.Bits.AC3
#define CAN0IDAR1_AC4                   _CAN0IDAR1.Bits.AC4
#define CAN0IDAR1_AC5                   _CAN0IDAR1.Bits.AC5
#define CAN0IDAR1_AC6                   _CAN0IDAR1.Bits.AC6
#define CAN0IDAR1_AC7                   _CAN0IDAR1.Bits.AC7

#define CAN0IDAR1_AC0_MASK              1U
#define CAN0IDAR1_AC1_MASK              2U
#define CAN0IDAR1_AC2_MASK              4U
#define CAN0IDAR1_AC3_MASK              8U
#define CAN0IDAR1_AC4_MASK              16U
#define CAN0IDAR1_AC5_MASK              32U
#define CAN0IDAR1_AC6_MASK              64U
#define CAN0IDAR1_AC7_MASK              128U


/*** CAN0IDAR2 - MSCAN0 Identifier Acceptance Register 2; 0x00000812 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR2STR;
extern volatile CAN0IDAR2STR _CAN0IDAR2 @0x00000812;
#define CAN0IDAR2                       _CAN0IDAR2.Byte
#define CAN0IDAR2_AC0                   _CAN0IDAR2.Bits.AC0
#define CAN0IDAR2_AC1                   _CAN0IDAR2.Bits.AC1
#define CAN0IDAR2_AC2                   _CAN0IDAR2.Bits.AC2
#define CAN0IDAR2_AC3                   _CAN0IDAR2.Bits.AC3
#define CAN0IDAR2_AC4                   _CAN0IDAR2.Bits.AC4
#define CAN0IDAR2_AC5                   _CAN0IDAR2.Bits.AC5
#define CAN0IDAR2_AC6                   _CAN0IDAR2.Bits.AC6
#define CAN0IDAR2_AC7                   _CAN0IDAR2.Bits.AC7

#define CAN0IDAR2_AC0_MASK              1U
#define CAN0IDAR2_AC1_MASK              2U
#define CAN0IDAR2_AC2_MASK              4U
#define CAN0IDAR2_AC3_MASK              8U
#define CAN0IDAR2_AC4_MASK              16U
#define CAN0IDAR2_AC5_MASK              32U
#define CAN0IDAR2_AC6_MASK              64U
#define CAN0IDAR2_AC7_MASK              128U


/*** CAN0IDAR3 - MSCAN0 Identifier Acceptance Register 3; 0x00000813 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR3STR;
extern volatile CAN0IDAR3STR _CAN0IDAR3 @0x00000813;
#define CAN0IDAR3                       _CAN0IDAR3.Byte
#define CAN0IDAR3_AC0                   _CAN0IDAR3.Bits.AC0
#define CAN0IDAR3_AC1                   _CAN0IDAR3.Bits.AC1
#define CAN0IDAR3_AC2                   _CAN0IDAR3.Bits.AC2
#define CAN0IDAR3_AC3                   _CAN0IDAR3.Bits.AC3
#define CAN0IDAR3_AC4                   _CAN0IDAR3.Bits.AC4
#define CAN0IDAR3_AC5                   _CAN0IDAR3.Bits.AC5
#define CAN0IDAR3_AC6                   _CAN0IDAR3.Bits.AC6
#define CAN0IDAR3_AC7                   _CAN0IDAR3.Bits.AC7

#define CAN0IDAR3_AC0_MASK              1U
#define CAN0IDAR3_AC1_MASK              2U
#define CAN0IDAR3_AC2_MASK              4U
#define CAN0IDAR3_AC3_MASK              8U
#define CAN0IDAR3_AC4_MASK              16U
#define CAN0IDAR3_AC5_MASK              32U
#define CAN0IDAR3_AC6_MASK              64U
#define CAN0IDAR3_AC7_MASK              128U


/*** CAN0IDMR0 - MSCAN0 Identifier Mask Register 0; 0x00000814 ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR0STR;
extern volatile CAN0IDMR0STR _CAN0IDMR0 @0x00000814;
#define CAN0IDMR0                       _CAN0IDMR0.Byte
#define CAN0IDMR0_AM0                   _CAN0IDMR0.Bits.AM0
#define CAN0IDMR0_AM1                   _CAN0IDMR0.Bits.AM1
#define CAN0IDMR0_AM2                   _CAN0IDMR0.Bits.AM2
#define CAN0IDMR0_AM3                   _CAN0IDMR0.Bits.AM3
#define CAN0IDMR0_AM4                   _CAN0IDMR0.Bits.AM4
#define CAN0IDMR0_AM5                   _CAN0IDMR0.Bits.AM5
#define CAN0IDMR0_AM6                   _CAN0IDMR0.Bits.AM6
#define CAN0IDMR0_AM7                   _CAN0IDMR0.Bits.AM7
/* CAN0IDMR_ARR: Access 4 CAN0IDMRx registers in an array */
#define CAN0IDMR_ARR                    ((volatile byte *) &CAN0IDMR0)

#define CAN0IDMR0_AM0_MASK              1U
#define CAN0IDMR0_AM1_MASK              2U
#define CAN0IDMR0_AM2_MASK              4U
#define CAN0IDMR0_AM3_MASK              8U
#define CAN0IDMR0_AM4_MASK              16U
#define CAN0IDMR0_AM5_MASK              32U
#define CAN0IDMR0_AM6_MASK              64U
#define CAN0IDMR0_AM7_MASK              128U


/*** CAN0IDMR1 - MSCAN0 Identifier Mask Register 1; 0x00000815 ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR1STR;
extern volatile CAN0IDMR1STR _CAN0IDMR1 @0x00000815;
#define CAN0IDMR1                       _CAN0IDMR1.Byte
#define CAN0IDMR1_AM0                   _CAN0IDMR1.Bits.AM0
#define CAN0IDMR1_AM1                   _CAN0IDMR1.Bits.AM1
#define CAN0IDMR1_AM2                   _CAN0IDMR1.Bits.AM2
#define CAN0IDMR1_AM3                   _CAN0IDMR1.Bits.AM3
#define CAN0IDMR1_AM4                   _CAN0IDMR1.Bits.AM4
#define CAN0IDMR1_AM5                   _CAN0IDMR1.Bits.AM5
#define CAN0IDMR1_AM6                   _CAN0IDMR1.Bits.AM6
#define CAN0IDMR1_AM7                   _CAN0IDMR1.Bits.AM7

#define CAN0IDMR1_AM0_MASK              1U
#define CAN0IDMR1_AM1_MASK              2U
#define CAN0IDMR1_AM2_MASK              4U
#define CAN0IDMR1_AM3_MASK              8U
#define CAN0IDMR1_AM4_MASK              16U
#define CAN0IDMR1_AM5_MASK              32U
#define CAN0IDMR1_AM6_MASK              64U
#define CAN0IDMR1_AM7_MASK              128U


/*** CAN0IDMR2 - MSCAN0 Identifier Mask Register 2; 0x00000816 ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR2STR;
extern volatile CAN0IDMR2STR _CAN0IDMR2 @0x00000816;
#define CAN0IDMR2                       _CAN0IDMR2.Byte
#define CAN0IDMR2_AM0                   _CAN0IDMR2.Bits.AM0
#define CAN0IDMR2_AM1                   _CAN0IDMR2.Bits.AM1
#define CAN0IDMR2_AM2                   _CAN0IDMR2.Bits.AM2
#define CAN0IDMR2_AM3                   _CAN0IDMR2.Bits.AM3
#define CAN0IDMR2_AM4                   _CAN0IDMR2.Bits.AM4
#define CAN0IDMR2_AM5                   _CAN0IDMR2.Bits.AM5
#define CAN0IDMR2_AM6                   _CAN0IDMR2.Bits.AM6
#define CAN0IDMR2_AM7                   _CAN0IDMR2.Bits.AM7

#define CAN0IDMR2_AM0_MASK              1U
#define CAN0IDMR2_AM1_MASK              2U
#define CAN0IDMR2_AM2_MASK              4U
#define CAN0IDMR2_AM3_MASK              8U
#define CAN0IDMR2_AM4_MASK              16U
#define CAN0IDMR2_AM5_MASK              32U
#define CAN0IDMR2_AM6_MASK              64U
#define CAN0IDMR2_AM7_MASK              128U


/*** CAN0IDMR3 - MSCAN0 Identifier Mask Register 3; 0x00000817 ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR3STR;
extern volatile CAN0IDMR3STR _CAN0IDMR3 @0x00000817;
#define CAN0IDMR3                       _CAN0IDMR3.Byte
#define CAN0IDMR3_AM0                   _CAN0IDMR3.Bits.AM0
#define CAN0IDMR3_AM1                   _CAN0IDMR3.Bits.AM1
#define CAN0IDMR3_AM2                   _CAN0IDMR3.Bits.AM2
#define CAN0IDMR3_AM3                   _CAN0IDMR3.Bits.AM3
#define CAN0IDMR3_AM4                   _CAN0IDMR3.Bits.AM4
#define CAN0IDMR3_AM5                   _CAN0IDMR3.Bits.AM5
#define CAN0IDMR3_AM6                   _CAN0IDMR3.Bits.AM6
#define CAN0IDMR3_AM7                   _CAN0IDMR3.Bits.AM7

#define CAN0IDMR3_AM0_MASK              1U
#define CAN0IDMR3_AM1_MASK              2U
#define CAN0IDMR3_AM2_MASK              4U
#define CAN0IDMR3_AM3_MASK              8U
#define CAN0IDMR3_AM4_MASK              16U
#define CAN0IDMR3_AM5_MASK              32U
#define CAN0IDMR3_AM6_MASK              64U
#define CAN0IDMR3_AM7_MASK              128U


/*** CAN0IDAR4 - MSCAN0 Identifier Acceptance Register 4; 0x00000818 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR4STR;
extern volatile CAN0IDAR4STR _CAN0IDAR4 @0x00000818;
#define CAN0IDAR4                       _CAN0IDAR4.Byte
#define CAN0IDAR4_AC0                   _CAN0IDAR4.Bits.AC0
#define CAN0IDAR4_AC1                   _CAN0IDAR4.Bits.AC1
#define CAN0IDAR4_AC2                   _CAN0IDAR4.Bits.AC2
#define CAN0IDAR4_AC3                   _CAN0IDAR4.Bits.AC3
#define CAN0IDAR4_AC4                   _CAN0IDAR4.Bits.AC4
#define CAN0IDAR4_AC5                   _CAN0IDAR4.Bits.AC5
#define CAN0IDAR4_AC6                   _CAN0IDAR4.Bits.AC6
#define CAN0IDAR4_AC7                   _CAN0IDAR4.Bits.AC7

#define CAN0IDAR4_AC0_MASK              1U
#define CAN0IDAR4_AC1_MASK              2U
#define CAN0IDAR4_AC2_MASK              4U
#define CAN0IDAR4_AC3_MASK              8U
#define CAN0IDAR4_AC4_MASK              16U
#define CAN0IDAR4_AC5_MASK              32U
#define CAN0IDAR4_AC6_MASK              64U
#define CAN0IDAR4_AC7_MASK              128U


/*** CAN0IDAR5 - MSCAN0 Identifier Acceptance Register 5; 0x00000819 ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR5STR;
extern volatile CAN0IDAR5STR _CAN0IDAR5 @0x00000819;
#define CAN0IDAR5                       _CAN0IDAR5.Byte
#define CAN0IDAR5_AC0                   _CAN0IDAR5.Bits.AC0
#define CAN0IDAR5_AC1                   _CAN0IDAR5.Bits.AC1
#define CAN0IDAR5_AC2                   _CAN0IDAR5.Bits.AC2
#define CAN0IDAR5_AC3                   _CAN0IDAR5.Bits.AC3
#define CAN0IDAR5_AC4                   _CAN0IDAR5.Bits.AC4
#define CAN0IDAR5_AC5                   _CAN0IDAR5.Bits.AC5
#define CAN0IDAR5_AC6                   _CAN0IDAR5.Bits.AC6
#define CAN0IDAR5_AC7                   _CAN0IDAR5.Bits.AC7

#define CAN0IDAR5_AC0_MASK              1U
#define CAN0IDAR5_AC1_MASK              2U
#define CAN0IDAR5_AC2_MASK              4U
#define CAN0IDAR5_AC3_MASK              8U
#define CAN0IDAR5_AC4_MASK              16U
#define CAN0IDAR5_AC5_MASK              32U
#define CAN0IDAR5_AC6_MASK              64U
#define CAN0IDAR5_AC7_MASK              128U


/*** CAN0IDAR6 - MSCAN0 Identifier Acceptance Register 6; 0x0000081A ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR6STR;
extern volatile CAN0IDAR6STR _CAN0IDAR6 @0x0000081A;
#define CAN0IDAR6                       _CAN0IDAR6.Byte
#define CAN0IDAR6_AC0                   _CAN0IDAR6.Bits.AC0
#define CAN0IDAR6_AC1                   _CAN0IDAR6.Bits.AC1
#define CAN0IDAR6_AC2                   _CAN0IDAR6.Bits.AC2
#define CAN0IDAR6_AC3                   _CAN0IDAR6.Bits.AC3
#define CAN0IDAR6_AC4                   _CAN0IDAR6.Bits.AC4
#define CAN0IDAR6_AC5                   _CAN0IDAR6.Bits.AC5
#define CAN0IDAR6_AC6                   _CAN0IDAR6.Bits.AC6
#define CAN0IDAR6_AC7                   _CAN0IDAR6.Bits.AC7

#define CAN0IDAR6_AC0_MASK              1U
#define CAN0IDAR6_AC1_MASK              2U
#define CAN0IDAR6_AC2_MASK              4U
#define CAN0IDAR6_AC3_MASK              8U
#define CAN0IDAR6_AC4_MASK              16U
#define CAN0IDAR6_AC5_MASK              32U
#define CAN0IDAR6_AC6_MASK              64U
#define CAN0IDAR6_AC7_MASK              128U


/*** CAN0IDAR7 - MSCAN0 Identifier Acceptance Register 7; 0x0000081B ***/
typedef union {
  byte Byte;
  struct {
    byte AC0         :1;                                       /* Acceptance Code Bit 0 */
    byte AC1         :1;                                       /* Acceptance Code Bit 1 */
    byte AC2         :1;                                       /* Acceptance Code Bit 2 */
    byte AC3         :1;                                       /* Acceptance Code Bit 3 */
    byte AC4         :1;                                       /* Acceptance Code Bit 4 */
    byte AC5         :1;                                       /* Acceptance Code Bit 5 */
    byte AC6         :1;                                       /* Acceptance Code Bit 6 */
    byte AC7         :1;                                       /* Acceptance Code Bit 7 */
  } Bits;
} CAN0IDAR7STR;
extern volatile CAN0IDAR7STR _CAN0IDAR7 @0x0000081B;
#define CAN0IDAR7                       _CAN0IDAR7.Byte
#define CAN0IDAR7_AC0                   _CAN0IDAR7.Bits.AC0
#define CAN0IDAR7_AC1                   _CAN0IDAR7.Bits.AC1
#define CAN0IDAR7_AC2                   _CAN0IDAR7.Bits.AC2
#define CAN0IDAR7_AC3                   _CAN0IDAR7.Bits.AC3
#define CAN0IDAR7_AC4                   _CAN0IDAR7.Bits.AC4
#define CAN0IDAR7_AC5                   _CAN0IDAR7.Bits.AC5
#define CAN0IDAR7_AC6                   _CAN0IDAR7.Bits.AC6
#define CAN0IDAR7_AC7                   _CAN0IDAR7.Bits.AC7

#define CAN0IDAR7_AC0_MASK              1U
#define CAN0IDAR7_AC1_MASK              2U
#define CAN0IDAR7_AC2_MASK              4U
#define CAN0IDAR7_AC3_MASK              8U
#define CAN0IDAR7_AC4_MASK              16U
#define CAN0IDAR7_AC5_MASK              32U
#define CAN0IDAR7_AC6_MASK              64U
#define CAN0IDAR7_AC7_MASK              128U


/*** CAN0IDMR4 - MSCAN0 Identifier Mask Register 4; 0x0000081C ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR4STR;
extern volatile CAN0IDMR4STR _CAN0IDMR4 @0x0000081C;
#define CAN0IDMR4                       _CAN0IDMR4.Byte
#define CAN0IDMR4_AM0                   _CAN0IDMR4.Bits.AM0
#define CAN0IDMR4_AM1                   _CAN0IDMR4.Bits.AM1
#define CAN0IDMR4_AM2                   _CAN0IDMR4.Bits.AM2
#define CAN0IDMR4_AM3                   _CAN0IDMR4.Bits.AM3
#define CAN0IDMR4_AM4                   _CAN0IDMR4.Bits.AM4
#define CAN0IDMR4_AM5                   _CAN0IDMR4.Bits.AM5
#define CAN0IDMR4_AM6                   _CAN0IDMR4.Bits.AM6
#define CAN0IDMR4_AM7                   _CAN0IDMR4.Bits.AM7

#define CAN0IDMR4_AM0_MASK              1U
#define CAN0IDMR4_AM1_MASK              2U
#define CAN0IDMR4_AM2_MASK              4U
#define CAN0IDMR4_AM3_MASK              8U
#define CAN0IDMR4_AM4_MASK              16U
#define CAN0IDMR4_AM5_MASK              32U
#define CAN0IDMR4_AM6_MASK              64U
#define CAN0IDMR4_AM7_MASK              128U


/*** CAN0IDMR5 - MSCAN0 Identifier Mask Register 5; 0x0000081D ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR5STR;
extern volatile CAN0IDMR5STR _CAN0IDMR5 @0x0000081D;
#define CAN0IDMR5                       _CAN0IDMR5.Byte
#define CAN0IDMR5_AM0                   _CAN0IDMR5.Bits.AM0
#define CAN0IDMR5_AM1                   _CAN0IDMR5.Bits.AM1
#define CAN0IDMR5_AM2                   _CAN0IDMR5.Bits.AM2
#define CAN0IDMR5_AM3                   _CAN0IDMR5.Bits.AM3
#define CAN0IDMR5_AM4                   _CAN0IDMR5.Bits.AM4
#define CAN0IDMR5_AM5                   _CAN0IDMR5.Bits.AM5
#define CAN0IDMR5_AM6                   _CAN0IDMR5.Bits.AM6
#define CAN0IDMR5_AM7                   _CAN0IDMR5.Bits.AM7

#define CAN0IDMR5_AM0_MASK              1U
#define CAN0IDMR5_AM1_MASK              2U
#define CAN0IDMR5_AM2_MASK              4U
#define CAN0IDMR5_AM3_MASK              8U
#define CAN0IDMR5_AM4_MASK              16U
#define CAN0IDMR5_AM5_MASK              32U
#define CAN0IDMR5_AM6_MASK              64U
#define CAN0IDMR5_AM7_MASK              128U


/*** CAN0IDMR6 - MSCAN0 Identifier Mask Register 6; 0x0000081E ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR6STR;
extern volatile CAN0IDMR6STR _CAN0IDMR6 @0x0000081E;
#define CAN0IDMR6                       _CAN0IDMR6.Byte
#define CAN0IDMR6_AM0                   _CAN0IDMR6.Bits.AM0
#define CAN0IDMR6_AM1                   _CAN0IDMR6.Bits.AM1
#define CAN0IDMR6_AM2                   _CAN0IDMR6.Bits.AM2
#define CAN0IDMR6_AM3                   _CAN0IDMR6.Bits.AM3
#define CAN0IDMR6_AM4                   _CAN0IDMR6.Bits.AM4
#define CAN0IDMR6_AM5                   _CAN0IDMR6.Bits.AM5
#define CAN0IDMR6_AM6                   _CAN0IDMR6.Bits.AM6
#define CAN0IDMR6_AM7                   _CAN0IDMR6.Bits.AM7

#define CAN0IDMR6_AM0_MASK              1U
#define CAN0IDMR6_AM1_MASK              2U
#define CAN0IDMR6_AM2_MASK              4U
#define CAN0IDMR6_AM3_MASK              8U
#define CAN0IDMR6_AM4_MASK              16U
#define CAN0IDMR6_AM5_MASK              32U
#define CAN0IDMR6_AM6_MASK              64U
#define CAN0IDMR6_AM7_MASK              128U


/*** CAN0IDMR7 - MSCAN0 Identifier Mask Register 7; 0x0000081F ***/
typedef union {
  byte Byte;
  struct {
    byte AM0         :1;                                       /* Acceptance Mask Bit 0 */
    byte AM1         :1;                                       /* Acceptance Mask Bit 1 */
    byte AM2         :1;                                       /* Acceptance Mask Bit 2 */
    byte AM3         :1;                                       /* Acceptance Mask Bit 3 */
    byte AM4         :1;                                       /* Acceptance Mask Bit 4 */
    byte AM5         :1;                                       /* Acceptance Mask Bit 5 */
    byte AM6         :1;                                       /* Acceptance Mask Bit 6 */
    byte AM7         :1;                                       /* Acceptance Mask Bit 7 */
  } Bits;
} CAN0IDMR7STR;
extern volatile CAN0IDMR7STR _CAN0IDMR7 @0x0000081F;
#define CAN0IDMR7                       _CAN0IDMR7.Byte
#define CAN0IDMR7_AM0                   _CAN0IDMR7.Bits.AM0
#define CAN0IDMR7_AM1                   _CAN0IDMR7.Bits.AM1
#define CAN0IDMR7_AM2                   _CAN0IDMR7.Bits.AM2
#define CAN0IDMR7_AM3                   _CAN0IDMR7.Bits.AM3
#define CAN0IDMR7_AM4                   _CAN0IDMR7.Bits.AM4
#define CAN0IDMR7_AM5                   _CAN0IDMR7.Bits.AM5
#define CAN0IDMR7_AM6                   _CAN0IDMR7.Bits.AM6
#define CAN0IDMR7_AM7                   _CAN0IDMR7.Bits.AM7

#define CAN0IDMR7_AM0_MASK              1U
#define CAN0IDMR7_AM1_MASK              2U
#define CAN0IDMR7_AM2_MASK              4U
#define CAN0IDMR7_AM3_MASK              8U
#define CAN0IDMR7_AM4_MASK              16U
#define CAN0IDMR7_AM5_MASK              32U
#define CAN0IDMR7_AM6_MASK              64U
#define CAN0IDMR7_AM7_MASK              128U


/*** CAN0RXIDR0 - MSCAN0 Receive Identifier Register 0; 0x00000820 ***/
typedef union {
  byte Byte;
  struct {
    byte ID21        :1;                                       /* Extended format identifier Bit 21 */
    byte ID22        :1;                                       /* Extended format identifier Bit 22 */
    byte ID23        :1;                                       /* Extended format identifier Bit 23 */
    byte ID24        :1;                                       /* Extended format identifier Bit 24 */
    byte ID25        :1;                                       /* Extended format identifier Bit 25 */
    byte ID26        :1;                                       /* Extended format identifier Bit 26 */
    byte ID27        :1;                                       /* Extended format identifier Bit 27 */
    byte ID28        :1;                                       /* Extended format identifier Bit 28 */
  } Bits;
} CAN0RXIDR0STR;
extern volatile CAN0RXIDR0STR _CAN0RXIDR0 @0x00000820;
#define CAN0RXIDR0                      _CAN0RXIDR0.Byte
#define CAN0RXIDR0_ID21                 _CAN0RXIDR0.Bits.ID21
#define CAN0RXIDR0_ID22                 _CAN0RXIDR0.Bits.ID22
#define CAN0RXIDR0_ID23                 _CAN0RXIDR0.Bits.ID23
#define CAN0RXIDR0_ID24                 _CAN0RXIDR0.Bits.ID24
#define CAN0RXIDR0_ID25                 _CAN0RXIDR0.Bits.ID25
#define CAN0RXIDR0_ID26                 _CAN0RXIDR0.Bits.ID26
#define CAN0RXIDR0_ID27                 _CAN0RXIDR0.Bits.ID27
#define CAN0RXIDR0_ID28                 _CAN0RXIDR0.Bits.ID28
/* CAN0RXIDR_ARR: Access 4 CAN0RXIDRx registers in an array */
#define CAN0RXIDR_ARR                   ((volatile byte *) &CAN0RXIDR0)

#define CAN0RXIDR0_ID21_MASK            1U
#define CAN0RXIDR0_ID22_MASK            2U
#define CAN0RXIDR0_ID23_MASK            4U
#define CAN0RXIDR0_ID24_MASK            8U
#define CAN0RXIDR0_ID25_MASK            16U
#define CAN0RXIDR0_ID26_MASK            32U
#define CAN0RXIDR0_ID27_MASK            64U
#define CAN0RXIDR0_ID28_MASK            128U


/*** CAN0RXIDR1 - MSCAN0 Receive Identifier Register 1; 0x00000821 ***/
typedef union {
  byte Byte;
  struct {
    byte ID15        :1;                                       /* Extended format identifier Bit 15 */
    byte ID16        :1;                                       /* Extended format identifier Bit 16 */
    byte ID17        :1;                                       /* Extended format identifier Bit 17 */
    byte IDE         :1;                                       /* ID Extended */
    byte SRR         :1;                                       /* Substitute Remote Request */
    byte ID18        :1;                                       /* Extended format identifier Bit 18 */
    byte ID19        :1;                                       /* Extended format identifier Bit 19 */
    byte ID20        :1;                                       /* Extended format identifier Bit 20 */
  } Bits;
  struct {
    byte grpID_15 :3;
    byte         :1;
    byte         :1;
    byte grpID_18 :3;
  } MergedBits;
} CAN0RXIDR1STR;
extern volatile CAN0RXIDR1STR _CAN0RXIDR1 @0x00000821;
#define CAN0RXIDR1                      _CAN0RXIDR1.Byte
#define CAN0RXIDR1_ID15                 _CAN0RXIDR1.Bits.ID15
#define CAN0RXIDR1_ID16                 _CAN0RXIDR1.Bits.ID16
#define CAN0RXIDR1_ID17                 _CAN0RXIDR1.Bits.ID17
#define CAN0RXIDR1_IDE                  _CAN0RXIDR1.Bits.IDE
#define CAN0RXIDR1_SRR                  _CAN0RXIDR1.Bits.SRR
#define CAN0RXIDR1_ID18                 _CAN0RXIDR1.Bits.ID18
#define CAN0RXIDR1_ID19                 _CAN0RXIDR1.Bits.ID19
#define CAN0RXIDR1_ID20                 _CAN0RXIDR1.Bits.ID20
#define CAN0RXIDR1_ID_15                _CAN0RXIDR1.MergedBits.grpID_15
#define CAN0RXIDR1_ID_18                _CAN0RXIDR1.MergedBits.grpID_18
#define CAN0RXIDR1_ID                   CAN0RXIDR1_ID_15

#define CAN0RXIDR1_ID15_MASK            1U
#define CAN0RXIDR1_ID16_MASK            2U
#define CAN0RXIDR1_ID17_MASK            4U
#define CAN0RXIDR1_IDE_MASK             8U
#define CAN0RXIDR1_SRR_MASK             16U
#define CAN0RXIDR1_ID18_MASK            32U
#define CAN0RXIDR1_ID19_MASK            64U
#define CAN0RXIDR1_ID20_MASK            128U
#define CAN0RXIDR1_ID_15_MASK           7U
#define CAN0RXIDR1_ID_15_BITNUM         0U
#define CAN0RXIDR1_ID_18_MASK           224U
#define CAN0RXIDR1_ID_18_BITNUM         5U


/*** CAN0RXIDR2 - MSCAN0 Receive Identifier Register 2; 0x00000822 ***/
typedef union {
  byte Byte;
  struct {
    byte ID7         :1;                                       /* Extended format identifier Bit 7 */
    byte ID8         :1;                                       /* Extended format identifier Bit 8 */
    byte ID9         :1;                                       /* Extended format identifier Bit 9 */
    byte ID10        :1;                                       /* Extended format identifier Bit 10 */
    byte ID11        :1;                                       /* Extended format identifier Bit 11 */
    byte ID12        :1;                                       /* Extended format identifier Bit 12 */
    byte ID13        :1;                                       /* Extended format identifier Bit 13 */
    byte ID14        :1;                                       /* Extended format identifier Bit 14 */
  } Bits;
} CAN0RXIDR2STR;
extern volatile CAN0RXIDR2STR _CAN0RXIDR2 @0x00000822;
#define CAN0RXIDR2                      _CAN0RXIDR2.Byte
#define CAN0RXIDR2_ID7                  _CAN0RXIDR2.Bits.ID7
#define CAN0RXIDR2_ID8                  _CAN0RXIDR2.Bits.ID8
#define CAN0RXIDR2_ID9                  _CAN0RXIDR2.Bits.ID9
#define CAN0RXIDR2_ID10                 _CAN0RXIDR2.Bits.ID10
#define CAN0RXIDR2_ID11                 _CAN0RXIDR2.Bits.ID11
#define CAN0RXIDR2_ID12                 _CAN0RXIDR2.Bits.ID12
#define CAN0RXIDR2_ID13                 _CAN0RXIDR2.Bits.ID13
#define CAN0RXIDR2_ID14                 _CAN0RXIDR2.Bits.ID14

#define CAN0RXIDR2_ID7_MASK             1U
#define CAN0RXIDR2_ID8_MASK             2U
#define CAN0RXIDR2_ID9_MASK             4U
#define CAN0RXIDR2_ID10_MASK            8U
#define CAN0RXIDR2_ID11_MASK            16U
#define CAN0RXIDR2_ID12_MASK            32U
#define CAN0RXIDR2_ID13_MASK            64U
#define CAN0RXIDR2_ID14_MASK            128U


/*** CAN0RXIDR3 - MSCAN0 Receive Identifier Register 3; 0x00000823 ***/
typedef union {
  byte Byte;
  struct {
    byte RTR         :1;                                       /* Remote Transmission Request */
    byte ID0         :1;                                       /* Extended format identifier Bit 0 */
    byte ID1         :1;                                       /* Extended format identifier Bit 1 */
    byte ID2         :1;                                       /* Extended format identifier Bit 2 */
    byte ID3         :1;                                       /* Extended format identifier Bit 3 */
    byte ID4         :1;                                       /* Extended format identifier Bit 4 */
    byte ID5         :1;                                       /* Extended format identifier Bit 5 */
    byte ID6         :1;                                       /* Extended format identifier Bit 6 */
  } Bits;
  struct {
    byte         :1;
    byte grpID   :7;
  } MergedBits;
} CAN0RXIDR3STR;
extern volatile CAN0RXIDR3STR _CAN0RXIDR3 @0x00000823;
#define CAN0RXIDR3                      _CAN0RXIDR3.Byte
#define CAN0RXIDR3_RTR                  _CAN0RXIDR3.Bits.RTR
#define CAN0RXIDR3_ID0                  _CAN0RXIDR3.Bits.ID0
#define CAN0RXIDR3_ID1                  _CAN0RXIDR3.Bits.ID1
#define CAN0RXIDR3_ID2                  _CAN0RXIDR3.Bits.ID2
#define CAN0RXIDR3_ID3                  _CAN0RXIDR3.Bits.ID3
#define CAN0RXIDR3_ID4                  _CAN0RXIDR3.Bits.ID4
#define CAN0RXIDR3_ID5                  _CAN0RXIDR3.Bits.ID5
#define CAN0RXIDR3_ID6                  _CAN0RXIDR3.Bits.ID6
#define CAN0RXIDR3_ID                   _CAN0RXIDR3.MergedBits.grpID

#define CAN0RXIDR3_RTR_MASK             1U
#define CAN0RXIDR3_ID0_MASK             2U
#define CAN0RXIDR3_ID1_MASK             4U
#define CAN0RXIDR3_ID2_MASK             8U
#define CAN0RXIDR3_ID3_MASK             16U
#define CAN0RXIDR3_ID4_MASK             32U
#define CAN0RXIDR3_ID5_MASK             64U
#define CAN0RXIDR3_ID6_MASK             128U
#define CAN0RXIDR3_ID_MASK              254U
#define CAN0RXIDR3_ID_BITNUM            1U


/*** CAN0RXDSR0 - MSCAN0 Receive Data Segment Register 0; 0x00000824 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR0STR;
extern volatile CAN0RXDSR0STR _CAN0RXDSR0 @0x00000824;
#define CAN0RXDSR0                      _CAN0RXDSR0.Byte
#define CAN0RXDSR0_DB0                  _CAN0RXDSR0.Bits.DB0
#define CAN0RXDSR0_DB1                  _CAN0RXDSR0.Bits.DB1
#define CAN0RXDSR0_DB2                  _CAN0RXDSR0.Bits.DB2
#define CAN0RXDSR0_DB3                  _CAN0RXDSR0.Bits.DB3
#define CAN0RXDSR0_DB4                  _CAN0RXDSR0.Bits.DB4
#define CAN0RXDSR0_DB5                  _CAN0RXDSR0.Bits.DB5
#define CAN0RXDSR0_DB6                  _CAN0RXDSR0.Bits.DB6
#define CAN0RXDSR0_DB7                  _CAN0RXDSR0.Bits.DB7
/* CAN0RXDSR_ARR: Access 8 CAN0RXDSRx registers in an array */
#define CAN0RXDSR_ARR                   ((volatile byte *) &CAN0RXDSR0)

#define CAN0RXDSR0_DB0_MASK             1U
#define CAN0RXDSR0_DB1_MASK             2U
#define CAN0RXDSR0_DB2_MASK             4U
#define CAN0RXDSR0_DB3_MASK             8U
#define CAN0RXDSR0_DB4_MASK             16U
#define CAN0RXDSR0_DB5_MASK             32U
#define CAN0RXDSR0_DB6_MASK             64U
#define CAN0RXDSR0_DB7_MASK             128U


/*** CAN0RXDSR1 - MSCAN0 Receive Data Segment Register 1; 0x00000825 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR1STR;
extern volatile CAN0RXDSR1STR _CAN0RXDSR1 @0x00000825;
#define CAN0RXDSR1                      _CAN0RXDSR1.Byte
#define CAN0RXDSR1_DB0                  _CAN0RXDSR1.Bits.DB0
#define CAN0RXDSR1_DB1                  _CAN0RXDSR1.Bits.DB1
#define CAN0RXDSR1_DB2                  _CAN0RXDSR1.Bits.DB2
#define CAN0RXDSR1_DB3                  _CAN0RXDSR1.Bits.DB3
#define CAN0RXDSR1_DB4                  _CAN0RXDSR1.Bits.DB4
#define CAN0RXDSR1_DB5                  _CAN0RXDSR1.Bits.DB5
#define CAN0RXDSR1_DB6                  _CAN0RXDSR1.Bits.DB6
#define CAN0RXDSR1_DB7                  _CAN0RXDSR1.Bits.DB7

#define CAN0RXDSR1_DB0_MASK             1U
#define CAN0RXDSR1_DB1_MASK             2U
#define CAN0RXDSR1_DB2_MASK             4U
#define CAN0RXDSR1_DB3_MASK             8U
#define CAN0RXDSR1_DB4_MASK             16U
#define CAN0RXDSR1_DB5_MASK             32U
#define CAN0RXDSR1_DB6_MASK             64U
#define CAN0RXDSR1_DB7_MASK             128U


/*** CAN0RXDSR2 - MSCAN0 Receive Data Segment Register 2; 0x00000826 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR2STR;
extern volatile CAN0RXDSR2STR _CAN0RXDSR2 @0x00000826;
#define CAN0RXDSR2                      _CAN0RXDSR2.Byte
#define CAN0RXDSR2_DB0                  _CAN0RXDSR2.Bits.DB0
#define CAN0RXDSR2_DB1                  _CAN0RXDSR2.Bits.DB1
#define CAN0RXDSR2_DB2                  _CAN0RXDSR2.Bits.DB2
#define CAN0RXDSR2_DB3                  _CAN0RXDSR2.Bits.DB3
#define CAN0RXDSR2_DB4                  _CAN0RXDSR2.Bits.DB4
#define CAN0RXDSR2_DB5                  _CAN0RXDSR2.Bits.DB5
#define CAN0RXDSR2_DB6                  _CAN0RXDSR2.Bits.DB6
#define CAN0RXDSR2_DB7                  _CAN0RXDSR2.Bits.DB7

#define CAN0RXDSR2_DB0_MASK             1U
#define CAN0RXDSR2_DB1_MASK             2U
#define CAN0RXDSR2_DB2_MASK             4U
#define CAN0RXDSR2_DB3_MASK             8U
#define CAN0RXDSR2_DB4_MASK             16U
#define CAN0RXDSR2_DB5_MASK             32U
#define CAN0RXDSR2_DB6_MASK             64U
#define CAN0RXDSR2_DB7_MASK             128U


/*** CAN0RXDSR3 - MSCAN0 Receive Data Segment Register 3; 0x00000827 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR3STR;
extern volatile CAN0RXDSR3STR _CAN0RXDSR3 @0x00000827;
#define CAN0RXDSR3                      _CAN0RXDSR3.Byte
#define CAN0RXDSR3_DB0                  _CAN0RXDSR3.Bits.DB0
#define CAN0RXDSR3_DB1                  _CAN0RXDSR3.Bits.DB1
#define CAN0RXDSR3_DB2                  _CAN0RXDSR3.Bits.DB2
#define CAN0RXDSR3_DB3                  _CAN0RXDSR3.Bits.DB3
#define CAN0RXDSR3_DB4                  _CAN0RXDSR3.Bits.DB4
#define CAN0RXDSR3_DB5                  _CAN0RXDSR3.Bits.DB5
#define CAN0RXDSR3_DB6                  _CAN0RXDSR3.Bits.DB6
#define CAN0RXDSR3_DB7                  _CAN0RXDSR3.Bits.DB7

#define CAN0RXDSR3_DB0_MASK             1U
#define CAN0RXDSR3_DB1_MASK             2U
#define CAN0RXDSR3_DB2_MASK             4U
#define CAN0RXDSR3_DB3_MASK             8U
#define CAN0RXDSR3_DB4_MASK             16U
#define CAN0RXDSR3_DB5_MASK             32U
#define CAN0RXDSR3_DB6_MASK             64U
#define CAN0RXDSR3_DB7_MASK             128U


/*** CAN0RXDSR4 - MSCAN0 Receive Data Segment Register 4; 0x00000828 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR4STR;
extern volatile CAN0RXDSR4STR _CAN0RXDSR4 @0x00000828;
#define CAN0RXDSR4                      _CAN0RXDSR4.Byte
#define CAN0RXDSR4_DB0                  _CAN0RXDSR4.Bits.DB0
#define CAN0RXDSR4_DB1                  _CAN0RXDSR4.Bits.DB1
#define CAN0RXDSR4_DB2                  _CAN0RXDSR4.Bits.DB2
#define CAN0RXDSR4_DB3                  _CAN0RXDSR4.Bits.DB3
#define CAN0RXDSR4_DB4                  _CAN0RXDSR4.Bits.DB4
#define CAN0RXDSR4_DB5                  _CAN0RXDSR4.Bits.DB5
#define CAN0RXDSR4_DB6                  _CAN0RXDSR4.Bits.DB6
#define CAN0RXDSR4_DB7                  _CAN0RXDSR4.Bits.DB7

#define CAN0RXDSR4_DB0_MASK             1U
#define CAN0RXDSR4_DB1_MASK             2U
#define CAN0RXDSR4_DB2_MASK             4U
#define CAN0RXDSR4_DB3_MASK             8U
#define CAN0RXDSR4_DB4_MASK             16U
#define CAN0RXDSR4_DB5_MASK             32U
#define CAN0RXDSR4_DB6_MASK             64U
#define CAN0RXDSR4_DB7_MASK             128U


/*** CAN0RXDSR5 - MSCAN0 Receive Data Segment Register 5; 0x00000829 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR5STR;
extern volatile CAN0RXDSR5STR _CAN0RXDSR5 @0x00000829;
#define CAN0RXDSR5                      _CAN0RXDSR5.Byte
#define CAN0RXDSR5_DB0                  _CAN0RXDSR5.Bits.DB0
#define CAN0RXDSR5_DB1                  _CAN0RXDSR5.Bits.DB1
#define CAN0RXDSR5_DB2                  _CAN0RXDSR5.Bits.DB2
#define CAN0RXDSR5_DB3                  _CAN0RXDSR5.Bits.DB3
#define CAN0RXDSR5_DB4                  _CAN0RXDSR5.Bits.DB4
#define CAN0RXDSR5_DB5                  _CAN0RXDSR5.Bits.DB5
#define CAN0RXDSR5_DB6                  _CAN0RXDSR5.Bits.DB6
#define CAN0RXDSR5_DB7                  _CAN0RXDSR5.Bits.DB7

#define CAN0RXDSR5_DB0_MASK             1U
#define CAN0RXDSR5_DB1_MASK             2U
#define CAN0RXDSR5_DB2_MASK             4U
#define CAN0RXDSR5_DB3_MASK             8U
#define CAN0RXDSR5_DB4_MASK             16U
#define CAN0RXDSR5_DB5_MASK             32U
#define CAN0RXDSR5_DB6_MASK             64U
#define CAN0RXDSR5_DB7_MASK             128U


/*** CAN0RXDSR6 - MSCAN0 Receive Data Segment Register 6; 0x0000082A ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR6STR;
extern volatile CAN0RXDSR6STR _CAN0RXDSR6 @0x0000082A;
#define CAN0RXDSR6                      _CAN0RXDSR6.Byte
#define CAN0RXDSR6_DB0                  _CAN0RXDSR6.Bits.DB0
#define CAN0RXDSR6_DB1                  _CAN0RXDSR6.Bits.DB1
#define CAN0RXDSR6_DB2                  _CAN0RXDSR6.Bits.DB2
#define CAN0RXDSR6_DB3                  _CAN0RXDSR6.Bits.DB3
#define CAN0RXDSR6_DB4                  _CAN0RXDSR6.Bits.DB4
#define CAN0RXDSR6_DB5                  _CAN0RXDSR6.Bits.DB5
#define CAN0RXDSR6_DB6                  _CAN0RXDSR6.Bits.DB6
#define CAN0RXDSR6_DB7                  _CAN0RXDSR6.Bits.DB7

#define CAN0RXDSR6_DB0_MASK             1U
#define CAN0RXDSR6_DB1_MASK             2U
#define CAN0RXDSR6_DB2_MASK             4U
#define CAN0RXDSR6_DB3_MASK             8U
#define CAN0RXDSR6_DB4_MASK             16U
#define CAN0RXDSR6_DB5_MASK             32U
#define CAN0RXDSR6_DB6_MASK             64U
#define CAN0RXDSR6_DB7_MASK             128U


/*** CAN0RXDSR7 - MSCAN0 Receive Data Segment Register 7; 0x0000082B ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0RXDSR7STR;
extern volatile CAN0RXDSR7STR _CAN0RXDSR7 @0x0000082B;
#define CAN0RXDSR7                      _CAN0RXDSR7.Byte
#define CAN0RXDSR7_DB0                  _CAN0RXDSR7.Bits.DB0
#define CAN0RXDSR7_DB1                  _CAN0RXDSR7.Bits.DB1
#define CAN0RXDSR7_DB2                  _CAN0RXDSR7.Bits.DB2
#define CAN0RXDSR7_DB3                  _CAN0RXDSR7.Bits.DB3
#define CAN0RXDSR7_DB4                  _CAN0RXDSR7.Bits.DB4
#define CAN0RXDSR7_DB5                  _CAN0RXDSR7.Bits.DB5
#define CAN0RXDSR7_DB6                  _CAN0RXDSR7.Bits.DB6
#define CAN0RXDSR7_DB7                  _CAN0RXDSR7.Bits.DB7

#define CAN0RXDSR7_DB0_MASK             1U
#define CAN0RXDSR7_DB1_MASK             2U
#define CAN0RXDSR7_DB2_MASK             4U
#define CAN0RXDSR7_DB3_MASK             8U
#define CAN0RXDSR7_DB4_MASK             16U
#define CAN0RXDSR7_DB5_MASK             32U
#define CAN0RXDSR7_DB6_MASK             64U
#define CAN0RXDSR7_DB7_MASK             128U


/*** CAN0RXDLR - MSCAN0 Receive Data Length Register; 0x0000082C ***/
typedef union {
  byte Byte;
  struct {
    byte DLC0        :1;                                       /* Data Length Code Bit 0 */
    byte DLC1        :1;                                       /* Data Length Code Bit 1 */
    byte DLC2        :1;                                       /* Data Length Code Bit 2 */
    byte DLC3        :1;                                       /* Data Length Code Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpDLC  :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0RXDLRSTR;
extern volatile CAN0RXDLRSTR _CAN0RXDLR @0x0000082C;
#define CAN0RXDLR                       _CAN0RXDLR.Byte
#define CAN0RXDLR_DLC0                  _CAN0RXDLR.Bits.DLC0
#define CAN0RXDLR_DLC1                  _CAN0RXDLR.Bits.DLC1
#define CAN0RXDLR_DLC2                  _CAN0RXDLR.Bits.DLC2
#define CAN0RXDLR_DLC3                  _CAN0RXDLR.Bits.DLC3
#define CAN0RXDLR_DLC                   _CAN0RXDLR.MergedBits.grpDLC

#define CAN0RXDLR_DLC0_MASK             1U
#define CAN0RXDLR_DLC1_MASK             2U
#define CAN0RXDLR_DLC2_MASK             4U
#define CAN0RXDLR_DLC3_MASK             8U
#define CAN0RXDLR_DLC_MASK              15U
#define CAN0RXDLR_DLC_BITNUM            0U


/*** CAN0RXTSR - MSCAN0 Receive Time Stamp Register; 0x0000082E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** CAN0RXTSRH - MSCAN0 Receive Time Stamp Register High; 0x0000082E ***/
    union {
      byte Byte;
      struct {
        byte TSR8        :1;                                       /* Time Stamp Bit 8 */
        byte TSR9        :1;                                       /* Time Stamp Bit 9 */
        byte TSR10       :1;                                       /* Time Stamp Bit 10 */
        byte TSR11       :1;                                       /* Time Stamp Bit 11 */
        byte TSR12       :1;                                       /* Time Stamp Bit 12 */
        byte TSR13       :1;                                       /* Time Stamp Bit 13 */
        byte TSR14       :1;                                       /* Time Stamp Bit 14 */
        byte TSR15       :1;                                       /* Time Stamp Bit 15 */
      } Bits;
    } CAN0RXTSRHSTR;
    #define CAN0RXTSRH                  _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Byte
    #define CAN0RXTSRH_TSR8             _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR8
    #define CAN0RXTSRH_TSR9             _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR9
    #define CAN0RXTSRH_TSR10            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR10
    #define CAN0RXTSRH_TSR11            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR11
    #define CAN0RXTSRH_TSR12            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR12
    #define CAN0RXTSRH_TSR13            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR13
    #define CAN0RXTSRH_TSR14            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR14
    #define CAN0RXTSRH_TSR15            _CAN0RXTSR.Overlap_STR.CAN0RXTSRHSTR.Bits.TSR15
    
    #define CAN0RXTSRH_TSR8_MASK        1U
    #define CAN0RXTSRH_TSR9_MASK        2U
    #define CAN0RXTSRH_TSR10_MASK       4U
    #define CAN0RXTSRH_TSR11_MASK       8U
    #define CAN0RXTSRH_TSR12_MASK       16U
    #define CAN0RXTSRH_TSR13_MASK       32U
    #define CAN0RXTSRH_TSR14_MASK       64U
    #define CAN0RXTSRH_TSR15_MASK       128U
    

    /*** CAN0RXTSRL - MSCAN0 Receive Time Stamp Register Low; 0x0000082F ***/
    union {
      byte Byte;
      struct {
        byte TSR0        :1;                                       /* Time Stamp Bit 0 */
        byte TSR1        :1;                                       /* Time Stamp Bit 1 */
        byte TSR2        :1;                                       /* Time Stamp Bit 2 */
        byte TSR3        :1;                                       /* Time Stamp Bit 3 */
        byte TSR4        :1;                                       /* Time Stamp Bit 4 */
        byte TSR5        :1;                                       /* Time Stamp Bit 5 */
        byte TSR6        :1;                                       /* Time Stamp Bit 6 */
        byte TSR7        :1;                                       /* Time Stamp Bit 7 */
      } Bits;
    } CAN0RXTSRLSTR;
    #define CAN0RXTSRL                  _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Byte
    #define CAN0RXTSRL_TSR0             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR0
    #define CAN0RXTSRL_TSR1             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR1
    #define CAN0RXTSRL_TSR2             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR2
    #define CAN0RXTSRL_TSR3             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR3
    #define CAN0RXTSRL_TSR4             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR4
    #define CAN0RXTSRL_TSR5             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR5
    #define CAN0RXTSRL_TSR6             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR6
    #define CAN0RXTSRL_TSR7             _CAN0RXTSR.Overlap_STR.CAN0RXTSRLSTR.Bits.TSR7
    
    #define CAN0RXTSRL_TSR0_MASK        1U
    #define CAN0RXTSRL_TSR1_MASK        2U
    #define CAN0RXTSRL_TSR2_MASK        4U
    #define CAN0RXTSRL_TSR3_MASK        8U
    #define CAN0RXTSRL_TSR4_MASK        16U
    #define CAN0RXTSRL_TSR5_MASK        32U
    #define CAN0RXTSRL_TSR6_MASK        64U
    #define CAN0RXTSRL_TSR7_MASK        128U
    
  } Overlap_STR;

  struct {
    word TSR0        :1;                                       /* Time Stamp Bit 0 */
    word TSR1        :1;                                       /* Time Stamp Bit 1 */
    word TSR2        :1;                                       /* Time Stamp Bit 2 */
    word TSR3        :1;                                       /* Time Stamp Bit 3 */
    word TSR4        :1;                                       /* Time Stamp Bit 4 */
    word TSR5        :1;                                       /* Time Stamp Bit 5 */
    word TSR6        :1;                                       /* Time Stamp Bit 6 */
    word TSR7        :1;                                       /* Time Stamp Bit 7 */
    word TSR8        :1;                                       /* Time Stamp Bit 8 */
    word TSR9        :1;                                       /* Time Stamp Bit 9 */
    word TSR10       :1;                                       /* Time Stamp Bit 10 */
    word TSR11       :1;                                       /* Time Stamp Bit 11 */
    word TSR12       :1;                                       /* Time Stamp Bit 12 */
    word TSR13       :1;                                       /* Time Stamp Bit 13 */
    word TSR14       :1;                                       /* Time Stamp Bit 14 */
    word TSR15       :1;                                       /* Time Stamp Bit 15 */
  } Bits;
} CAN0RXTSRSTR;
extern volatile CAN0RXTSRSTR _CAN0RXTSR @0x0000082E;
#define CAN0RXTSR                       _CAN0RXTSR.Word
#define CAN0RXTSR_TSR0                  _CAN0RXTSR.Bits.TSR0
#define CAN0RXTSR_TSR1                  _CAN0RXTSR.Bits.TSR1
#define CAN0RXTSR_TSR2                  _CAN0RXTSR.Bits.TSR2
#define CAN0RXTSR_TSR3                  _CAN0RXTSR.Bits.TSR3
#define CAN0RXTSR_TSR4                  _CAN0RXTSR.Bits.TSR4
#define CAN0RXTSR_TSR5                  _CAN0RXTSR.Bits.TSR5
#define CAN0RXTSR_TSR6                  _CAN0RXTSR.Bits.TSR6
#define CAN0RXTSR_TSR7                  _CAN0RXTSR.Bits.TSR7
#define CAN0RXTSR_TSR8                  _CAN0RXTSR.Bits.TSR8
#define CAN0RXTSR_TSR9                  _CAN0RXTSR.Bits.TSR9
#define CAN0RXTSR_TSR10                 _CAN0RXTSR.Bits.TSR10
#define CAN0RXTSR_TSR11                 _CAN0RXTSR.Bits.TSR11
#define CAN0RXTSR_TSR12                 _CAN0RXTSR.Bits.TSR12
#define CAN0RXTSR_TSR13                 _CAN0RXTSR.Bits.TSR13
#define CAN0RXTSR_TSR14                 _CAN0RXTSR.Bits.TSR14
#define CAN0RXTSR_TSR15                 _CAN0RXTSR.Bits.TSR15

#define CAN0RXTSR_TSR0_MASK             1U
#define CAN0RXTSR_TSR1_MASK             2U
#define CAN0RXTSR_TSR2_MASK             4U
#define CAN0RXTSR_TSR3_MASK             8U
#define CAN0RXTSR_TSR4_MASK             16U
#define CAN0RXTSR_TSR5_MASK             32U
#define CAN0RXTSR_TSR6_MASK             64U
#define CAN0RXTSR_TSR7_MASK             128U
#define CAN0RXTSR_TSR8_MASK             256U
#define CAN0RXTSR_TSR9_MASK             512U
#define CAN0RXTSR_TSR10_MASK            1024U
#define CAN0RXTSR_TSR11_MASK            2048U
#define CAN0RXTSR_TSR12_MASK            4096U
#define CAN0RXTSR_TSR13_MASK            8192U
#define CAN0RXTSR_TSR14_MASK            16384U
#define CAN0RXTSR_TSR15_MASK            32768U


/*** CAN0TXIDR0 - MSCAN0 Transmit Identifier Register 0; 0x00000830 ***/
typedef union {
  byte Byte;
  struct {
    byte ID21        :1;                                       /* Extended format identifier Bit 21 */
    byte ID22        :1;                                       /* Extended format identifier Bit 22 */
    byte ID23        :1;                                       /* Extended format identifier Bit 23 */
    byte ID24        :1;                                       /* Extended format identifier Bit 24 */
    byte ID25        :1;                                       /* Extended format identifier Bit 25 */
    byte ID26        :1;                                       /* Extended format identifier Bit 26 */
    byte ID27        :1;                                       /* Extended format identifier Bit 27 */
    byte ID28        :1;                                       /* Extended format identifier Bit 28 */
  } Bits;
} CAN0TXIDR0STR;
extern volatile CAN0TXIDR0STR _CAN0TXIDR0 @0x00000830;
#define CAN0TXIDR0                      _CAN0TXIDR0.Byte
#define CAN0TXIDR0_ID21                 _CAN0TXIDR0.Bits.ID21
#define CAN0TXIDR0_ID22                 _CAN0TXIDR0.Bits.ID22
#define CAN0TXIDR0_ID23                 _CAN0TXIDR0.Bits.ID23
#define CAN0TXIDR0_ID24                 _CAN0TXIDR0.Bits.ID24
#define CAN0TXIDR0_ID25                 _CAN0TXIDR0.Bits.ID25
#define CAN0TXIDR0_ID26                 _CAN0TXIDR0.Bits.ID26
#define CAN0TXIDR0_ID27                 _CAN0TXIDR0.Bits.ID27
#define CAN0TXIDR0_ID28                 _CAN0TXIDR0.Bits.ID28
/* CAN0TXIDR_ARR: Access 4 CAN0TXIDRx registers in an array */
#define CAN0TXIDR_ARR                   ((volatile byte *) &CAN0TXIDR0)

#define CAN0TXIDR0_ID21_MASK            1U
#define CAN0TXIDR0_ID22_MASK            2U
#define CAN0TXIDR0_ID23_MASK            4U
#define CAN0TXIDR0_ID24_MASK            8U
#define CAN0TXIDR0_ID25_MASK            16U
#define CAN0TXIDR0_ID26_MASK            32U
#define CAN0TXIDR0_ID27_MASK            64U
#define CAN0TXIDR0_ID28_MASK            128U


/*** CAN0TXIDR1 - MSCAN0 Transmit Identifier Register 1; 0x00000831 ***/
typedef union {
  byte Byte;
  struct {
    byte ID15        :1;                                       /* Extended format identifier Bit 15 */
    byte ID16        :1;                                       /* Extended format identifier Bit 16 */
    byte ID17        :1;                                       /* Extended format identifier Bit 17 */
    byte IDE         :1;                                       /* ID Extended */
    byte SRR         :1;                                       /* Substitute Remote Request */
    byte ID18        :1;                                       /* Extended format identifier Bit 18 */
    byte ID19        :1;                                       /* Extended format identifier Bit 19 */
    byte ID20        :1;                                       /* Extended format identifier Bit 20 */
  } Bits;
  struct {
    byte grpID_15 :3;
    byte         :1;
    byte         :1;
    byte grpID_18 :3;
  } MergedBits;
} CAN0TXIDR1STR;
extern volatile CAN0TXIDR1STR _CAN0TXIDR1 @0x00000831;
#define CAN0TXIDR1                      _CAN0TXIDR1.Byte
#define CAN0TXIDR1_ID15                 _CAN0TXIDR1.Bits.ID15
#define CAN0TXIDR1_ID16                 _CAN0TXIDR1.Bits.ID16
#define CAN0TXIDR1_ID17                 _CAN0TXIDR1.Bits.ID17
#define CAN0TXIDR1_IDE                  _CAN0TXIDR1.Bits.IDE
#define CAN0TXIDR1_SRR                  _CAN0TXIDR1.Bits.SRR
#define CAN0TXIDR1_ID18                 _CAN0TXIDR1.Bits.ID18
#define CAN0TXIDR1_ID19                 _CAN0TXIDR1.Bits.ID19
#define CAN0TXIDR1_ID20                 _CAN0TXIDR1.Bits.ID20
#define CAN0TXIDR1_ID_15                _CAN0TXIDR1.MergedBits.grpID_15
#define CAN0TXIDR1_ID_18                _CAN0TXIDR1.MergedBits.grpID_18
#define CAN0TXIDR1_ID                   CAN0TXIDR1_ID_15

#define CAN0TXIDR1_ID15_MASK            1U
#define CAN0TXIDR1_ID16_MASK            2U
#define CAN0TXIDR1_ID17_MASK            4U
#define CAN0TXIDR1_IDE_MASK             8U
#define CAN0TXIDR1_SRR_MASK             16U
#define CAN0TXIDR1_ID18_MASK            32U
#define CAN0TXIDR1_ID19_MASK            64U
#define CAN0TXIDR1_ID20_MASK            128U
#define CAN0TXIDR1_ID_15_MASK           7U
#define CAN0TXIDR1_ID_15_BITNUM         0U
#define CAN0TXIDR1_ID_18_MASK           224U
#define CAN0TXIDR1_ID_18_BITNUM         5U


/*** CAN0TXIDR2 - MSCAN0 Transmit Identifier Register 2; 0x00000832 ***/
typedef union {
  byte Byte;
  struct {
    byte ID7         :1;                                       /* Extended format identifier Bit 7 */
    byte ID8         :1;                                       /* Extended format identifier Bit 8 */
    byte ID9         :1;                                       /* Extended format identifier Bit 9 */
    byte ID10        :1;                                       /* Extended format identifier Bit 10 */
    byte ID11        :1;                                       /* Extended format identifier Bit 11 */
    byte ID12        :1;                                       /* Extended format identifier Bit 12 */
    byte ID13        :1;                                       /* Extended format identifier Bit 13 */
    byte ID14        :1;                                       /* Extended format identifier Bit 14 */
  } Bits;
} CAN0TXIDR2STR;
extern volatile CAN0TXIDR2STR _CAN0TXIDR2 @0x00000832;
#define CAN0TXIDR2                      _CAN0TXIDR2.Byte
#define CAN0TXIDR2_ID7                  _CAN0TXIDR2.Bits.ID7
#define CAN0TXIDR2_ID8                  _CAN0TXIDR2.Bits.ID8
#define CAN0TXIDR2_ID9                  _CAN0TXIDR2.Bits.ID9
#define CAN0TXIDR2_ID10                 _CAN0TXIDR2.Bits.ID10
#define CAN0TXIDR2_ID11                 _CAN0TXIDR2.Bits.ID11
#define CAN0TXIDR2_ID12                 _CAN0TXIDR2.Bits.ID12
#define CAN0TXIDR2_ID13                 _CAN0TXIDR2.Bits.ID13
#define CAN0TXIDR2_ID14                 _CAN0TXIDR2.Bits.ID14

#define CAN0TXIDR2_ID7_MASK             1U
#define CAN0TXIDR2_ID8_MASK             2U
#define CAN0TXIDR2_ID9_MASK             4U
#define CAN0TXIDR2_ID10_MASK            8U
#define CAN0TXIDR2_ID11_MASK            16U
#define CAN0TXIDR2_ID12_MASK            32U
#define CAN0TXIDR2_ID13_MASK            64U
#define CAN0TXIDR2_ID14_MASK            128U


/*** CAN0TXIDR3 - MSCAN0 Transmit Identifier Register 3; 0x00000833 ***/
typedef union {
  byte Byte;
  struct {
    byte RTR         :1;                                       /* Remote Transmission Request */
    byte ID0         :1;                                       /* Extended format identifier Bit 0 */
    byte ID1         :1;                                       /* Extended format identifier Bit 1 */
    byte ID2         :1;                                       /* Extended format identifier Bit 2 */
    byte ID3         :1;                                       /* Extended format identifier Bit 3 */
    byte ID4         :1;                                       /* Extended format identifier Bit 4 */
    byte ID5         :1;                                       /* Extended format identifier Bit 5 */
    byte ID6         :1;                                       /* Extended format identifier Bit 6 */
  } Bits;
  struct {
    byte         :1;
    byte grpID   :7;
  } MergedBits;
} CAN0TXIDR3STR;
extern volatile CAN0TXIDR3STR _CAN0TXIDR3 @0x00000833;
#define CAN0TXIDR3                      _CAN0TXIDR3.Byte
#define CAN0TXIDR3_RTR                  _CAN0TXIDR3.Bits.RTR
#define CAN0TXIDR3_ID0                  _CAN0TXIDR3.Bits.ID0
#define CAN0TXIDR3_ID1                  _CAN0TXIDR3.Bits.ID1
#define CAN0TXIDR3_ID2                  _CAN0TXIDR3.Bits.ID2
#define CAN0TXIDR3_ID3                  _CAN0TXIDR3.Bits.ID3
#define CAN0TXIDR3_ID4                  _CAN0TXIDR3.Bits.ID4
#define CAN0TXIDR3_ID5                  _CAN0TXIDR3.Bits.ID5
#define CAN0TXIDR3_ID6                  _CAN0TXIDR3.Bits.ID6
#define CAN0TXIDR3_ID                   _CAN0TXIDR3.MergedBits.grpID

#define CAN0TXIDR3_RTR_MASK             1U
#define CAN0TXIDR3_ID0_MASK             2U
#define CAN0TXIDR3_ID1_MASK             4U
#define CAN0TXIDR3_ID2_MASK             8U
#define CAN0TXIDR3_ID3_MASK             16U
#define CAN0TXIDR3_ID4_MASK             32U
#define CAN0TXIDR3_ID5_MASK             64U
#define CAN0TXIDR3_ID6_MASK             128U
#define CAN0TXIDR3_ID_MASK              254U
#define CAN0TXIDR3_ID_BITNUM            1U


/*** CAN0TXDSR0 - MSCAN0 Transmit Data Segment Register 0; 0x00000834 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR0STR;
extern volatile CAN0TXDSR0STR _CAN0TXDSR0 @0x00000834;
#define CAN0TXDSR0                      _CAN0TXDSR0.Byte
#define CAN0TXDSR0_DB0                  _CAN0TXDSR0.Bits.DB0
#define CAN0TXDSR0_DB1                  _CAN0TXDSR0.Bits.DB1
#define CAN0TXDSR0_DB2                  _CAN0TXDSR0.Bits.DB2
#define CAN0TXDSR0_DB3                  _CAN0TXDSR0.Bits.DB3
#define CAN0TXDSR0_DB4                  _CAN0TXDSR0.Bits.DB4
#define CAN0TXDSR0_DB5                  _CAN0TXDSR0.Bits.DB5
#define CAN0TXDSR0_DB6                  _CAN0TXDSR0.Bits.DB6
#define CAN0TXDSR0_DB7                  _CAN0TXDSR0.Bits.DB7
/* CAN0TXDSR_ARR: Access 8 CAN0TXDSRx registers in an array */
#define CAN0TXDSR_ARR                   ((volatile byte *) &CAN0TXDSR0)

#define CAN0TXDSR0_DB0_MASK             1U
#define CAN0TXDSR0_DB1_MASK             2U
#define CAN0TXDSR0_DB2_MASK             4U
#define CAN0TXDSR0_DB3_MASK             8U
#define CAN0TXDSR0_DB4_MASK             16U
#define CAN0TXDSR0_DB5_MASK             32U
#define CAN0TXDSR0_DB6_MASK             64U
#define CAN0TXDSR0_DB7_MASK             128U


/*** CAN0TXDSR1 - MSCAN0 Transmit Data Segment Register 1; 0x00000835 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR1STR;
extern volatile CAN0TXDSR1STR _CAN0TXDSR1 @0x00000835;
#define CAN0TXDSR1                      _CAN0TXDSR1.Byte
#define CAN0TXDSR1_DB0                  _CAN0TXDSR1.Bits.DB0
#define CAN0TXDSR1_DB1                  _CAN0TXDSR1.Bits.DB1
#define CAN0TXDSR1_DB2                  _CAN0TXDSR1.Bits.DB2
#define CAN0TXDSR1_DB3                  _CAN0TXDSR1.Bits.DB3
#define CAN0TXDSR1_DB4                  _CAN0TXDSR1.Bits.DB4
#define CAN0TXDSR1_DB5                  _CAN0TXDSR1.Bits.DB5
#define CAN0TXDSR1_DB6                  _CAN0TXDSR1.Bits.DB6
#define CAN0TXDSR1_DB7                  _CAN0TXDSR1.Bits.DB7

#define CAN0TXDSR1_DB0_MASK             1U
#define CAN0TXDSR1_DB1_MASK             2U
#define CAN0TXDSR1_DB2_MASK             4U
#define CAN0TXDSR1_DB3_MASK             8U
#define CAN0TXDSR1_DB4_MASK             16U
#define CAN0TXDSR1_DB5_MASK             32U
#define CAN0TXDSR1_DB6_MASK             64U
#define CAN0TXDSR1_DB7_MASK             128U


/*** CAN0TXDSR2 - MSCAN0 Transmit Data Segment Register 2; 0x00000836 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR2STR;
extern volatile CAN0TXDSR2STR _CAN0TXDSR2 @0x00000836;
#define CAN0TXDSR2                      _CAN0TXDSR2.Byte
#define CAN0TXDSR2_DB0                  _CAN0TXDSR2.Bits.DB0
#define CAN0TXDSR2_DB1                  _CAN0TXDSR2.Bits.DB1
#define CAN0TXDSR2_DB2                  _CAN0TXDSR2.Bits.DB2
#define CAN0TXDSR2_DB3                  _CAN0TXDSR2.Bits.DB3
#define CAN0TXDSR2_DB4                  _CAN0TXDSR2.Bits.DB4
#define CAN0TXDSR2_DB5                  _CAN0TXDSR2.Bits.DB5
#define CAN0TXDSR2_DB6                  _CAN0TXDSR2.Bits.DB6
#define CAN0TXDSR2_DB7                  _CAN0TXDSR2.Bits.DB7

#define CAN0TXDSR2_DB0_MASK             1U
#define CAN0TXDSR2_DB1_MASK             2U
#define CAN0TXDSR2_DB2_MASK             4U
#define CAN0TXDSR2_DB3_MASK             8U
#define CAN0TXDSR2_DB4_MASK             16U
#define CAN0TXDSR2_DB5_MASK             32U
#define CAN0TXDSR2_DB6_MASK             64U
#define CAN0TXDSR2_DB7_MASK             128U


/*** CAN0TXDSR3 - MSCAN0 Transmit Data Segment Register 3; 0x00000837 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR3STR;
extern volatile CAN0TXDSR3STR _CAN0TXDSR3 @0x00000837;
#define CAN0TXDSR3                      _CAN0TXDSR3.Byte
#define CAN0TXDSR3_DB0                  _CAN0TXDSR3.Bits.DB0
#define CAN0TXDSR3_DB1                  _CAN0TXDSR3.Bits.DB1
#define CAN0TXDSR3_DB2                  _CAN0TXDSR3.Bits.DB2
#define CAN0TXDSR3_DB3                  _CAN0TXDSR3.Bits.DB3
#define CAN0TXDSR3_DB4                  _CAN0TXDSR3.Bits.DB4
#define CAN0TXDSR3_DB5                  _CAN0TXDSR3.Bits.DB5
#define CAN0TXDSR3_DB6                  _CAN0TXDSR3.Bits.DB6
#define CAN0TXDSR3_DB7                  _CAN0TXDSR3.Bits.DB7

#define CAN0TXDSR3_DB0_MASK             1U
#define CAN0TXDSR3_DB1_MASK             2U
#define CAN0TXDSR3_DB2_MASK             4U
#define CAN0TXDSR3_DB3_MASK             8U
#define CAN0TXDSR3_DB4_MASK             16U
#define CAN0TXDSR3_DB5_MASK             32U
#define CAN0TXDSR3_DB6_MASK             64U
#define CAN0TXDSR3_DB7_MASK             128U


/*** CAN0TXDSR4 - MSCAN0 Transmit Data Segment Register 4; 0x00000838 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR4STR;
extern volatile CAN0TXDSR4STR _CAN0TXDSR4 @0x00000838;
#define CAN0TXDSR4                      _CAN0TXDSR4.Byte
#define CAN0TXDSR4_DB0                  _CAN0TXDSR4.Bits.DB0
#define CAN0TXDSR4_DB1                  _CAN0TXDSR4.Bits.DB1
#define CAN0TXDSR4_DB2                  _CAN0TXDSR4.Bits.DB2
#define CAN0TXDSR4_DB3                  _CAN0TXDSR4.Bits.DB3
#define CAN0TXDSR4_DB4                  _CAN0TXDSR4.Bits.DB4
#define CAN0TXDSR4_DB5                  _CAN0TXDSR4.Bits.DB5
#define CAN0TXDSR4_DB6                  _CAN0TXDSR4.Bits.DB6
#define CAN0TXDSR4_DB7                  _CAN0TXDSR4.Bits.DB7

#define CAN0TXDSR4_DB0_MASK             1U
#define CAN0TXDSR4_DB1_MASK             2U
#define CAN0TXDSR4_DB2_MASK             4U
#define CAN0TXDSR4_DB3_MASK             8U
#define CAN0TXDSR4_DB4_MASK             16U
#define CAN0TXDSR4_DB5_MASK             32U
#define CAN0TXDSR4_DB6_MASK             64U
#define CAN0TXDSR4_DB7_MASK             128U


/*** CAN0TXDSR5 - MSCAN0 Transmit Data Segment Register 5; 0x00000839 ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR5STR;
extern volatile CAN0TXDSR5STR _CAN0TXDSR5 @0x00000839;
#define CAN0TXDSR5                      _CAN0TXDSR5.Byte
#define CAN0TXDSR5_DB0                  _CAN0TXDSR5.Bits.DB0
#define CAN0TXDSR5_DB1                  _CAN0TXDSR5.Bits.DB1
#define CAN0TXDSR5_DB2                  _CAN0TXDSR5.Bits.DB2
#define CAN0TXDSR5_DB3                  _CAN0TXDSR5.Bits.DB3
#define CAN0TXDSR5_DB4                  _CAN0TXDSR5.Bits.DB4
#define CAN0TXDSR5_DB5                  _CAN0TXDSR5.Bits.DB5
#define CAN0TXDSR5_DB6                  _CAN0TXDSR5.Bits.DB6
#define CAN0TXDSR5_DB7                  _CAN0TXDSR5.Bits.DB7

#define CAN0TXDSR5_DB0_MASK             1U
#define CAN0TXDSR5_DB1_MASK             2U
#define CAN0TXDSR5_DB2_MASK             4U
#define CAN0TXDSR5_DB3_MASK             8U
#define CAN0TXDSR5_DB4_MASK             16U
#define CAN0TXDSR5_DB5_MASK             32U
#define CAN0TXDSR5_DB6_MASK             64U
#define CAN0TXDSR5_DB7_MASK             128U


/*** CAN0TXDSR6 - MSCAN0 Transmit Data Segment Register 6; 0x0000083A ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR6STR;
extern volatile CAN0TXDSR6STR _CAN0TXDSR6 @0x0000083A;
#define CAN0TXDSR6                      _CAN0TXDSR6.Byte
#define CAN0TXDSR6_DB0                  _CAN0TXDSR6.Bits.DB0
#define CAN0TXDSR6_DB1                  _CAN0TXDSR6.Bits.DB1
#define CAN0TXDSR6_DB2                  _CAN0TXDSR6.Bits.DB2
#define CAN0TXDSR6_DB3                  _CAN0TXDSR6.Bits.DB3
#define CAN0TXDSR6_DB4                  _CAN0TXDSR6.Bits.DB4
#define CAN0TXDSR6_DB5                  _CAN0TXDSR6.Bits.DB5
#define CAN0TXDSR6_DB6                  _CAN0TXDSR6.Bits.DB6
#define CAN0TXDSR6_DB7                  _CAN0TXDSR6.Bits.DB7

#define CAN0TXDSR6_DB0_MASK             1U
#define CAN0TXDSR6_DB1_MASK             2U
#define CAN0TXDSR6_DB2_MASK             4U
#define CAN0TXDSR6_DB3_MASK             8U
#define CAN0TXDSR6_DB4_MASK             16U
#define CAN0TXDSR6_DB5_MASK             32U
#define CAN0TXDSR6_DB6_MASK             64U
#define CAN0TXDSR6_DB7_MASK             128U


/*** CAN0TXDSR7 - MSCAN0 Transmit Data Segment Register 7; 0x0000083B ***/
typedef union {
  byte Byte;
  struct {
    byte DB0         :1;                                       /* Data Bit 0 */
    byte DB1         :1;                                       /* Data Bit 1 */
    byte DB2         :1;                                       /* Data Bit 2 */
    byte DB3         :1;                                       /* Data Bit 3 */
    byte DB4         :1;                                       /* Data Bit 4 */
    byte DB5         :1;                                       /* Data Bit 5 */
    byte DB6         :1;                                       /* Data Bit 6 */
    byte DB7         :1;                                       /* Data Bit 7 */
  } Bits;
} CAN0TXDSR7STR;
extern volatile CAN0TXDSR7STR _CAN0TXDSR7 @0x0000083B;
#define CAN0TXDSR7                      _CAN0TXDSR7.Byte
#define CAN0TXDSR7_DB0                  _CAN0TXDSR7.Bits.DB0
#define CAN0TXDSR7_DB1                  _CAN0TXDSR7.Bits.DB1
#define CAN0TXDSR7_DB2                  _CAN0TXDSR7.Bits.DB2
#define CAN0TXDSR7_DB3                  _CAN0TXDSR7.Bits.DB3
#define CAN0TXDSR7_DB4                  _CAN0TXDSR7.Bits.DB4
#define CAN0TXDSR7_DB5                  _CAN0TXDSR7.Bits.DB5
#define CAN0TXDSR7_DB6                  _CAN0TXDSR7.Bits.DB6
#define CAN0TXDSR7_DB7                  _CAN0TXDSR7.Bits.DB7

#define CAN0TXDSR7_DB0_MASK             1U
#define CAN0TXDSR7_DB1_MASK             2U
#define CAN0TXDSR7_DB2_MASK             4U
#define CAN0TXDSR7_DB3_MASK             8U
#define CAN0TXDSR7_DB4_MASK             16U
#define CAN0TXDSR7_DB5_MASK             32U
#define CAN0TXDSR7_DB6_MASK             64U
#define CAN0TXDSR7_DB7_MASK             128U


/*** CAN0TXDLR - MSCAN0 Transmit Data Length Register; 0x0000083C ***/
typedef union {
  byte Byte;
  struct {
    byte DLC0        :1;                                       /* Data Length Code Bit 0 */
    byte DLC1        :1;                                       /* Data Length Code Bit 1 */
    byte DLC2        :1;                                       /* Data Length Code Bit 2 */
    byte DLC3        :1;                                       /* Data Length Code Bit 3 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
  struct {
    byte grpDLC  :4;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
  } MergedBits;
} CAN0TXDLRSTR;
extern volatile CAN0TXDLRSTR _CAN0TXDLR @0x0000083C;
#define CAN0TXDLR                       _CAN0TXDLR.Byte
#define CAN0TXDLR_DLC0                  _CAN0TXDLR.Bits.DLC0
#define CAN0TXDLR_DLC1                  _CAN0TXDLR.Bits.DLC1
#define CAN0TXDLR_DLC2                  _CAN0TXDLR.Bits.DLC2
#define CAN0TXDLR_DLC3                  _CAN0TXDLR.Bits.DLC3
#define CAN0TXDLR_DLC                   _CAN0TXDLR.MergedBits.grpDLC

#define CAN0TXDLR_DLC0_MASK             1U
#define CAN0TXDLR_DLC1_MASK             2U
#define CAN0TXDLR_DLC2_MASK             4U
#define CAN0TXDLR_DLC3_MASK             8U
#define CAN0TXDLR_DLC_MASK              15U
#define CAN0TXDLR_DLC_BITNUM            0U


/*** CAN0TXTBPR - MSCAN0 Transmit Buffer Priority; 0x0000083D ***/
typedef union {
  byte Byte;
  struct {
    byte PRIO0       :1;                                       /* Transmit Buffer Priority Bit 0 */
    byte PRIO1       :1;                                       /* Transmit Buffer Priority Bit 1 */
    byte PRIO2       :1;                                       /* Transmit Buffer Priority Bit 2 */
    byte PRIO3       :1;                                       /* Transmit Buffer Priority Bit 3 */
    byte PRIO4       :1;                                       /* Transmit Buffer Priority Bit 4 */
    byte PRIO5       :1;                                       /* Transmit Buffer Priority Bit 5 */
    byte PRIO6       :1;                                       /* Transmit Buffer Priority Bit 6 */
    byte PRIO7       :1;                                       /* Transmit Buffer Priority Bit 7 */
  } Bits;
} CAN0TXTBPRSTR;
extern volatile CAN0TXTBPRSTR _CAN0TXTBPR @0x0000083D;
#define CAN0TXTBPR                      _CAN0TXTBPR.Byte
#define CAN0TXTBPR_PRIO0                _CAN0TXTBPR.Bits.PRIO0
#define CAN0TXTBPR_PRIO1                _CAN0TXTBPR.Bits.PRIO1
#define CAN0TXTBPR_PRIO2                _CAN0TXTBPR.Bits.PRIO2
#define CAN0TXTBPR_PRIO3                _CAN0TXTBPR.Bits.PRIO3
#define CAN0TXTBPR_PRIO4                _CAN0TXTBPR.Bits.PRIO4
#define CAN0TXTBPR_PRIO5                _CAN0TXTBPR.Bits.PRIO5
#define CAN0TXTBPR_PRIO6                _CAN0TXTBPR.Bits.PRIO6
#define CAN0TXTBPR_PRIO7                _CAN0TXTBPR.Bits.PRIO7

#define CAN0TXTBPR_PRIO0_MASK           1U
#define CAN0TXTBPR_PRIO1_MASK           2U
#define CAN0TXTBPR_PRIO2_MASK           4U
#define CAN0TXTBPR_PRIO3_MASK           8U
#define CAN0TXTBPR_PRIO4_MASK           16U
#define CAN0TXTBPR_PRIO5_MASK           32U
#define CAN0TXTBPR_PRIO6_MASK           64U
#define CAN0TXTBPR_PRIO7_MASK           128U


/*** CAN0TXTSR - MSCAN0 Transmit Time Stamp Register; 0x0000083E ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** CAN0TXTSRH - MSCAN0 Transmit Time Stamp Register High; 0x0000083E ***/
    union {
      byte Byte;
      struct {
        byte TSR8        :1;                                       /* Time Stamp Bit 8 */
        byte TSR9        :1;                                       /* Time Stamp Bit 9 */
        byte TSR10       :1;                                       /* Time Stamp Bit 10 */
        byte TSR11       :1;                                       /* Time Stamp Bit 11 */
        byte TSR12       :1;                                       /* Time Stamp Bit 12 */
        byte TSR13       :1;                                       /* Time Stamp Bit 13 */
        byte TSR14       :1;                                       /* Time Stamp Bit 14 */
        byte TSR15       :1;                                       /* Time Stamp Bit 15 */
      } Bits;
    } CAN0TXTSRHSTR;
    #define CAN0TXTSRH                  _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Byte
    #define CAN0TXTSRH_TSR8             _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR8
    #define CAN0TXTSRH_TSR9             _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR9
    #define CAN0TXTSRH_TSR10            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR10
    #define CAN0TXTSRH_TSR11            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR11
    #define CAN0TXTSRH_TSR12            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR12
    #define CAN0TXTSRH_TSR13            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR13
    #define CAN0TXTSRH_TSR14            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR14
    #define CAN0TXTSRH_TSR15            _CAN0TXTSR.Overlap_STR.CAN0TXTSRHSTR.Bits.TSR15
    
    #define CAN0TXTSRH_TSR8_MASK        1U
    #define CAN0TXTSRH_TSR9_MASK        2U
    #define CAN0TXTSRH_TSR10_MASK       4U
    #define CAN0TXTSRH_TSR11_MASK       8U
    #define CAN0TXTSRH_TSR12_MASK       16U
    #define CAN0TXTSRH_TSR13_MASK       32U
    #define CAN0TXTSRH_TSR14_MASK       64U
    #define CAN0TXTSRH_TSR15_MASK       128U
    

    /*** CAN0TXTSRL - MSCAN0 Transmit Time Stamp Register Low; 0x0000083F ***/
    union {
      byte Byte;
      struct {
        byte TSR0        :1;                                       /* Time Stamp Bit 0 */
        byte TSR1        :1;                                       /* Time Stamp Bit 1 */
        byte TSR2        :1;                                       /* Time Stamp Bit 2 */
        byte TSR3        :1;                                       /* Time Stamp Bit 3 */
        byte TSR4        :1;                                       /* Time Stamp Bit 4 */
        byte TSR5        :1;                                       /* Time Stamp Bit 5 */
        byte TSR6        :1;                                       /* Time Stamp Bit 6 */
        byte TSR7        :1;                                       /* Time Stamp Bit 7 */
      } Bits;
    } CAN0TXTSRLSTR;
    #define CAN0TXTSRL                  _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Byte
    #define CAN0TXTSRL_TSR0             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR0
    #define CAN0TXTSRL_TSR1             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR1
    #define CAN0TXTSRL_TSR2             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR2
    #define CAN0TXTSRL_TSR3             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR3
    #define CAN0TXTSRL_TSR4             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR4
    #define CAN0TXTSRL_TSR5             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR5
    #define CAN0TXTSRL_TSR6             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR6
    #define CAN0TXTSRL_TSR7             _CAN0TXTSR.Overlap_STR.CAN0TXTSRLSTR.Bits.TSR7
    
    #define CAN0TXTSRL_TSR0_MASK        1U
    #define CAN0TXTSRL_TSR1_MASK        2U
    #define CAN0TXTSRL_TSR2_MASK        4U
    #define CAN0TXTSRL_TSR3_MASK        8U
    #define CAN0TXTSRL_TSR4_MASK        16U
    #define CAN0TXTSRL_TSR5_MASK        32U
    #define CAN0TXTSRL_TSR6_MASK        64U
    #define CAN0TXTSRL_TSR7_MASK        128U
    
  } Overlap_STR;

  struct {
    word TSR0        :1;                                       /* Time Stamp Bit 0 */
    word TSR1        :1;                                       /* Time Stamp Bit 1 */
    word TSR2        :1;                                       /* Time Stamp Bit 2 */
    word TSR3        :1;                                       /* Time Stamp Bit 3 */
    word TSR4        :1;                                       /* Time Stamp Bit 4 */
    word TSR5        :1;                                       /* Time Stamp Bit 5 */
    word TSR6        :1;                                       /* Time Stamp Bit 6 */
    word TSR7        :1;                                       /* Time Stamp Bit 7 */
    word TSR8        :1;                                       /* Time Stamp Bit 8 */
    word TSR9        :1;                                       /* Time Stamp Bit 9 */
    word TSR10       :1;                                       /* Time Stamp Bit 10 */
    word TSR11       :1;                                       /* Time Stamp Bit 11 */
    word TSR12       :1;                                       /* Time Stamp Bit 12 */
    word TSR13       :1;                                       /* Time Stamp Bit 13 */
    word TSR14       :1;                                       /* Time Stamp Bit 14 */
    word TSR15       :1;                                       /* Time Stamp Bit 15 */
  } Bits;
} CAN0TXTSRSTR;
extern volatile CAN0TXTSRSTR _CAN0TXTSR @0x0000083E;
#define CAN0TXTSR                       _CAN0TXTSR.Word
#define CAN0TXTSR_TSR0                  _CAN0TXTSR.Bits.TSR0
#define CAN0TXTSR_TSR1                  _CAN0TXTSR.Bits.TSR1
#define CAN0TXTSR_TSR2                  _CAN0TXTSR.Bits.TSR2
#define CAN0TXTSR_TSR3                  _CAN0TXTSR.Bits.TSR3
#define CAN0TXTSR_TSR4                  _CAN0TXTSR.Bits.TSR4
#define CAN0TXTSR_TSR5                  _CAN0TXTSR.Bits.TSR5
#define CAN0TXTSR_TSR6                  _CAN0TXTSR.Bits.TSR6
#define CAN0TXTSR_TSR7                  _CAN0TXTSR.Bits.TSR7
#define CAN0TXTSR_TSR8                  _CAN0TXTSR.Bits.TSR8
#define CAN0TXTSR_TSR9                  _CAN0TXTSR.Bits.TSR9
#define CAN0TXTSR_TSR10                 _CAN0TXTSR.Bits.TSR10
#define CAN0TXTSR_TSR11                 _CAN0TXTSR.Bits.TSR11
#define CAN0TXTSR_TSR12                 _CAN0TXTSR.Bits.TSR12
#define CAN0TXTSR_TSR13                 _CAN0TXTSR.Bits.TSR13
#define CAN0TXTSR_TSR14                 _CAN0TXTSR.Bits.TSR14
#define CAN0TXTSR_TSR15                 _CAN0TXTSR.Bits.TSR15

#define CAN0TXTSR_TSR0_MASK             1U
#define CAN0TXTSR_TSR1_MASK             2U
#define CAN0TXTSR_TSR2_MASK             4U
#define CAN0TXTSR_TSR3_MASK             8U
#define CAN0TXTSR_TSR4_MASK             16U
#define CAN0TXTSR_TSR5_MASK             32U
#define CAN0TXTSR_TSR6_MASK             64U
#define CAN0TXTSR_TSR7_MASK             128U
#define CAN0TXTSR_TSR8_MASK             256U
#define CAN0TXTSR_TSR9_MASK             512U
#define CAN0TXTSR_TSR10_MASK            1024U
#define CAN0TXTSR_TSR11_MASK            2048U
#define CAN0TXTSR_TSR12_MASK            4096U
#define CAN0TXTSR_TSR13_MASK            8192U
#define CAN0TXTSR_TSR14_MASK            16384U
#define CAN0TXTSR_TSR15_MASK            32768U


/*** CP0DR - Port CP Data Register; 0x00000990 ***/
typedef union {
  byte Byte;
  struct {
    byte CPDR0       :1;                                       /* Port CP Data Bit 0 */
    byte CPDR1       :1;                                       /* Port CP Data Bit 1 */
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte CPDR7       :1;                                       /* Port CP Data Bit 7 */
  } Bits;
  struct {
    byte grpCPDR :2;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte         :1;
    byte grpCPDR_7 :1;
  } MergedBits;
} CP0DRSTR;
extern volatile CP0DRSTR _CP0DR @0x00000990;
#define CP0DR                           _CP0DR.Byte
#define CP0DR_CPDR0                     _CP0DR.Bits.CPDR0
#define CP0DR_CPDR1                     _CP0DR.Bits.CPDR1
#define CP0DR_CPDR7                     _CP0DR.Bits.CPDR7
#define CP0DR_CPDR                      _CP0DR.MergedBits.grpCPDR

#define CP0DR_CPDR0_MASK                1U
#define CP0DR_CPDR1_MASK                2U
#define CP0DR_CPDR7_MASK                128U
#define CP0DR_CPDR_MASK                 3U
#define CP0DR_CPDR_BITNUM               0U


/*** CP0CR - CAN Physical Layer Control Register; 0x00000991 ***/
typedef union {
  byte Byte;
  struct {
    byte SLR         :3;                                       /* Slew Rate */
    byte             :1; 
    byte WUPE        :2;                                       /* Wake-Up Receiver Enable and Filter Select */
    byte SPE         :1;                                       /* Split Enable */
    byte CPE         :1;                                       /* CAN Physical Layer Enable */
  } Bits;
} CP0CRSTR;
extern volatile CP0CRSTR _CP0CR @0x00000991;
#define CP0CR                           _CP0CR.Byte
#define CP0CR_SLR                       _CP0CR.Bits.SLR
#define CP0CR_WUPE                      _CP0CR.Bits.WUPE
#define CP0CR_SPE                       _CP0CR.Bits.SPE
#define CP0CR_CPE                       _CP0CR.Bits.CPE

#define CP0CR_SLR_MASK                  7U
#define CP0CR_SLR_BITNUM                0U
#define CP0CR_WUPE_MASK                 48U
#define CP0CR_WUPE_BITNUM               4U
#define CP0CR_SPE_MASK                  64U
#define CP0CR_CPE_MASK                  128U


/*** CP0SR - CAN Physical Layer Status Register; 0x00000993 ***/
typedef union {
  byte Byte;
  struct {
    byte             :1; 
    byte             :1; 
    byte             :1; 
    byte CPDT        :1;                                       /* CPTXD-Dominant Timeout Status Bit */
    byte CPCLVL      :1;                                       /* CANL Voltage Failure Low Status Bit */
    byte CPCLVH      :1;                                       /* CANL Voltage Failure High Status Bit */
    byte CPCHVL      :1;                                       /* CANH Voltage Failure Low Status Bit */
    byte CPCHVH      :1;                                       /* CANH Voltage Failure High Status Bit */
  } Bits;
} CP0SRSTR;
extern volatile CP0SRSTR _CP0SR @0x00000993;
#define CP0SR                           _CP0SR.Byte
#define CP0SR_CPDT                      _CP0SR.Bits.CPDT
#define CP0SR_CPCLVL                    _CP0SR.Bits.CPCLVL
#define CP0SR_CPCLVH                    _CP0SR.Bits.CPCLVH
#define CP0SR_CPCHVL                    _CP0SR.Bits.CPCHVL
#define CP0SR_CPCHVH                    _CP0SR.Bits.CPCHVH

#define CP0SR_CPDT_MASK                 8U
#define CP0SR_CPCLVL_MASK               16U
#define CP0SR_CPCLVH_MASK               32U
#define CP0SR_CPCHVL_MASK               64U
#define CP0SR_CPCHVH_MASK               128U


/*** CP0IE - CAN Physical Layer Interrupt Enable Register; 0x00000996 ***/
typedef union {
  byte Byte;
  struct {
    byte CPOCIE      :1;                                       /* CAN Physical Layer Error Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte CPDTIE      :1;                                       /* CPTXD-Dominant Timeout Interrupt Enable */
    byte CPVFIE      :1;                                       /* CANL Voltage Failure Low Status Bit */
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} CP0IESTR;
extern volatile CP0IESTR _CP0IE @0x00000996;
#define CP0IE                           _CP0IE.Byte
#define CP0IE_CPOCIE                    _CP0IE.Bits.CPOCIE
#define CP0IE_CPDTIE                    _CP0IE.Bits.CPDTIE
#define CP0IE_CPVFIE                    _CP0IE.Bits.CPVFIE

#define CP0IE_CPOCIE_MASK               1U
#define CP0IE_CPDTIE_MASK               8U
#define CP0IE_CPVFIE_MASK               16U


/*** CP0IF - CAN Physical Layer Interrupt Flag Register; 0x00000997 ***/
typedef union {
  byte Byte;
  struct {
    byte CLOCIF      :1;                                       /* CANL Over-Current Interrupt Flag */
    byte CHOCIF      :1;                                       /* CANH Over-Current Interrupt Flag */
    byte             :1; 
    byte CPDTIF      :1;                                       /* CAN CPTXD-Dominant Timeout Interrupt Flag */
    byte CLVLIF      :1;                                       /* CANL Voltage Failure Low Interrupt Flag */
    byte CLVHIF      :1;                                       /* CANL Voltage Failure High Interrupt Flag */
    byte CHVLIF      :1;                                       /* CANH Voltage Failure Low Interrupt Flag */
    byte CHVHIF      :1;                                       /* CANH Voltage Failure High Interrupt Flag */
  } Bits;
} CP0IFSTR;
extern volatile CP0IFSTR _CP0IF @0x00000997;
#define CP0IF                           _CP0IF.Byte
#define CP0IF_CLOCIF                    _CP0IF.Bits.CLOCIF
#define CP0IF_CHOCIF                    _CP0IF.Bits.CHOCIF
#define CP0IF_CPDTIF                    _CP0IF.Bits.CPDTIF
#define CP0IF_CLVLIF                    _CP0IF.Bits.CLVLIF
#define CP0IF_CLVHIF                    _CP0IF.Bits.CLVHIF
#define CP0IF_CHVLIF                    _CP0IF.Bits.CHVLIF
#define CP0IF_CHVHIF                    _CP0IF.Bits.CHVHIF

#define CP0IF_CLOCIF_MASK               1U
#define CP0IF_CHOCIF_MASK               2U
#define CP0IF_CPDTIF_MASK               8U
#define CP0IF_CLVLIF_MASK               16U
#define CP0IF_CLVHIF_MASK               32U
#define CP0IF_CHVLIF_MASK               64U
#define CP0IF_CHVHIF_MASK               128U


/*** TICKRATE - SENT Transmitter Tick Rate Register; 0x000009A0 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** TICKRATE_1 - SENT Transmitter Tick Rate Register 1; 0x000009A0 ***/
    union {
      byte Byte;
      struct {
        byte PRE         :6;                                       /* SENTTX Tick Rate Bits [13:8] */
        byte             :1; 
        byte             :1; 
      } Bits;
    } TICKRATE_1STR;
    #define TICKRATE_1                  _TICKRATE.Overlap_STR.TICKRATE_1STR.Byte
    #define TICKRATE_1_PRE              _TICKRATE.Overlap_STR.TICKRATE_1STR.Bits.PRE
    
    #define TICKRATE_1_PRE_MASK         63U
    #define TICKRATE_1_PRE_BITNUM       0U
    

    /*** TICKRATE_0 - SENT Transmitter Tick Rate Register 0; 0x000009A1 ***/
    union {
      byte Byte;
      struct {
        byte PRE         :8;                                       /* SENTTX Tick Rate Bits [7:0] */
      } Bits;
    } TICKRATE_0STR;
    #define TICKRATE_0                  _TICKRATE.Overlap_STR.TICKRATE_0STR.Byte
    #define TICKRATE_0_PRE              _TICKRATE.Overlap_STR.TICKRATE_0STR.Bits.PRE
    
    #define TICKRATE_0_PRE_MASK         255U
    #define TICKRATE_0_PRE_BITNUM       0U
    
  } Overlap_STR;

  struct {
    word PRE         :14;                                      /* SENTTX Tick Rate Bits */
    word             :1; 
    word             :1; 
  } Bits;
} TICKRATESTR;
extern volatile TICKRATESTR _TICKRATE @0x000009A0;
#define TICKRATE                        _TICKRATE.Word
#define TICKRATE_PRE                    _TICKRATE.Bits.PRE

#define TICKRATE_PRE_MASK               16383U
#define TICKRATE_PRE_BITNUM             0U


/*** PPULSE - SENT Transmitter Pause-Pulse Register; 0x000009A2 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** PPULSE_1 - SENT Transmitter Pause-Pulse Register 1; 0x000009A2 ***/
    union {
      byte Byte;
      struct {
        byte PPCOUNT     :3;                                       /* SENTTX Pause Pulse Count Ticks */
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte PPFIXED     :1;                                       /* SENTTX Fixed Length Pause Pulse */
        byte PPEN        :1;                                       /* SENTTX Pause Pulse Enable */
      } Bits;
    } PPULSE_1STR;
    #define PPULSE_1                    _PPULSE.Overlap_STR.PPULSE_1STR.Byte
    #define PPULSE_1_PPCOUNT            _PPULSE.Overlap_STR.PPULSE_1STR.Bits.PPCOUNT
    #define PPULSE_1_PPFIXED            _PPULSE.Overlap_STR.PPULSE_1STR.Bits.PPFIXED
    #define PPULSE_1_PPEN               _PPULSE.Overlap_STR.PPULSE_1STR.Bits.PPEN
    
    #define PPULSE_1_PPCOUNT_MASK       7U
    #define PPULSE_1_PPCOUNT_BITNUM     0U
    #define PPULSE_1_PPFIXED_MASK       64U
    #define PPULSE_1_PPEN_MASK          128U
    

    /*** PPULSE_0 - SENT Transmitter Pause-Pulse Register 0; 0x000009A3 ***/
    union {
      byte Byte;
      struct {
        byte PPCOUNT     :8;                                       /* SENTTX Pause Pulse Count Ticks */
      } Bits;
    } PPULSE_0STR;
    #define PPULSE_0                    _PPULSE.Overlap_STR.PPULSE_0STR.Byte
    #define PPULSE_0_PPCOUNT            _PPULSE.Overlap_STR.PPULSE_0STR.Bits.PPCOUNT
    
    #define PPULSE_0_PPCOUNT_MASK       255U
    #define PPULSE_0_PPCOUNT_BITNUM     0U
    
  } Overlap_STR;

  struct {
    word PPCOUNT     :11;                                      /* SENTTX Pause Pulse Count Ticks */
    word             :1; 
    word             :1; 
    word             :1; 
    word PPFIXED     :1;                                       /* SENTTX Fixed Length Pause Pulse */
    word PPEN        :1;                                       /* SENTTX Pause Pulse Enable */
  } Bits;
} PPULSESTR;
extern volatile PPULSESTR _PPULSE @0x000009A2;
#define PPULSE                          _PPULSE.Word
#define PPULSE_PPCOUNT                  _PPULSE.Bits.PPCOUNT
#define PPULSE_PPFIXED                  _PPULSE.Bits.PPFIXED
#define PPULSE_PPEN                     _PPULSE.Bits.PPEN

#define PPULSE_PPCOUNT_MASK             2047U
#define PPULSE_PPCOUNT_BITNUM           0U
#define PPULSE_PPFIXED_MASK             16384U
#define PPULSE_PPEN_MASK                32768U


/*** CONFIG - SENT Transmitter Configuration Register; 0x000009A4 ***/
typedef union {
  word Word;
   /* Overlapped registers: */
  struct {
    /*** CONFIG_1 - SENT Transmitter Configuration Register 1; 0x000009A4 ***/
    union {
      byte Byte;
      struct {
        byte DNIBBLECOUNT :3;                                      /* SENTTX Data Nibble Count */
        byte             :1; 
        byte             :1; 
        byte             :1; 
        byte TXEN        :1;                                       /* SENTTX Pin Enable */
        byte TXINIT      :1;                                       /* SENTTX Initialization Enable */
      } Bits;
    } CONFIG_1STR;
    #define CONFIG_1                    _CONFIG.Overlap_STR.CONFIG_1STR.Byte
    #define CONFIG_1_DNIBBLECOUNT       _CONFIG.Overlap_STR.CONFIG_1STR.Bits.DNIBBLECOUNT
    #define CONFIG_1_TXEN               _CONFIG.Overlap_STR.CONFIG_1STR.Bits.TXEN
    #define CONFIG_1_TXINIT             _CONFIG.Overlap_STR.CONFIG_1STR.Bits.TXINIT
    
    #define CONFIG_1_DNIBBLECOUNT_MASK  7U
    #define CONFIG_1_DNIBBLECOUNT_BITNUM 0U
    #define CONFIG_1_TXEN_MASK          64U
    #define CONFIG_1_TXINIT_MASK        128U
    

    /*** CONFIG_0 - SENT Transmitter Configuration Register 0; 0x000009A5 ***/
    union {
      byte Byte;
      struct {
        byte CRCBYP      :1;                                       /* SENTTX Automatic CRC generation bypass */
        byte CRCLEG      :1;                                       /* SENTTX CRC Legacy Algorithm Enable */
        byte CRCSCN      :1;                                       /* SENTTX CRC includes Status- and Communication Nibble */
        byte SINGLE      :1;                                       /* SENTTX Single Shot Operation */
        byte OPTEDGE     :1;                                       /* SENTTX Optimized Rising Edge Position */
        byte             :1; 
        byte             :1; 
        byte             :1; 
      } Bits;
    } CONFIG_0STR;
    #define CONFIG_0                    _CONFIG.Overlap_STR.CONFIG_0STR.Byte
    #define CONFIG_0_CRCBYP             _CONFIG.Overlap_STR.CONFIG_0STR.Bits.CRCBYP
    #define CONFIG_0_CRCLEG             _CONFIG.Overlap_STR.CONFIG_0STR.Bits.CRCLEG
    #define CONFIG_0_CRCSCN             _CONFIG.Overlap_STR.CONFIG_0STR.Bits.CRCSCN
    #define CONFIG_0_SINGLE             _CONFIG.Overlap_STR.CONFIG_0STR.Bits.SINGLE
    #define CONFIG_0_OPTEDGE            _CONFIG.Overlap_STR.CONFIG_0STR.Bits.OPTEDGE
    
    #define CONFIG_0_CRCBYP_MASK        1U
    #define CONFIG_0_CRCLEG_MASK        2U
    #define CONFIG_0_CRCSCN_MASK        4U
    #define CONFIG_0_SINGLE_MASK        8U
    #define CONFIG_0_OPTEDGE_MASK       16U
    
  } Overlap_STR;

  struct {
    word CRCBYP      :1;                                       /* SENTTX Automatic CRC generation bypass */
    word CRCLEG      :1;                                       /* SENTTX CRC Legacy Algorithm Enable */
    word CRCSCN      :1;                                       /* SENTTX CRC includes Status- and Communication Nibble */
    word SINGLE      :1;                                       /* SENTTX Single Shot Operation */
    word OPTEDGE     :1;                                       /* SENTTX Optimized Rising Edge Position */
    word             :1; 
    word             :1; 
    word             :1; 
    word DNIBBLECOUNT :3;                                      /* SENTTX Data Nibble Count */
    word             :1; 
    word             :1; 
    word             :1; 
    word TXEN        :1;                                       /* SENTTX Pin Enable */
    word TXINIT      :1;                                       /* SENTTX Initialization Enable */
  } Bits;
} CONFIGSTR;
extern volatile CONFIGSTR _CONFIG @0x000009A4;
#define CONFIG                          _CONFIG.Word
#define CONFIG_CRCBYP                   _CONFIG.Bits.CRCBYP
#define CONFIG_CRCLEG                   _CONFIG.Bits.CRCLEG
#define CONFIG_CRCSCN                   _CONFIG.Bits.CRCSCN
#define CONFIG_SINGLE                   _CONFIG.Bits.SINGLE
#define CONFIG_OPTEDGE                  _CONFIG.Bits.OPTEDGE
#define CONFIG_DNIBBLECOUNT             _CONFIG.Bits.DNIBBLECOUNT
#define CONFIG_TXEN                     _CONFIG.Bits.TXEN
#define CONFIG_TXINIT                   _CONFIG.Bits.TXINIT

#define CONFIG_CRCBYP_MASK              1U
#define CONFIG_CRCLEG_MASK              2U
#define CONFIG_CRCSCN_MASK              4U
#define CONFIG_SINGLE_MASK              8U
#define CONFIG_OPTEDGE_MASK             16U
#define CONFIG_DNIBBLECOUNT_MASK        1792U
#define CONFIG_DNIBBLECOUNT_BITNUM      8U
#define CONFIG_TXEN_MASK                16384U
#define CONFIG_TXINIT_MASK              32768U


/*** INTEN - SENT Transmitter Interrupt Enable Register; 0x000009A6 ***/
typedef union {
  byte Byte;
  struct {
    byte TBEIE       :1;                                       /* SENTTX Transmit-Buffer Empty Interrupt Enable */
    byte TCIE        :1;                                       /* SENTTX Transmission Complete Interrupt Enable */
    byte CSIE        :1;                                       /* SENTTX Calibration Start Interrupt Enable */
    byte TUIE        :1;                                       /* SENTTX Transmitter Underrun Interrupt Enable */
    byte PPREIE      :1;                                       /* SENTTX Pause-Pulse Rising-Edge Interrupt Enable */
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INTENSTR;
extern volatile INTENSTR _INTEN @0x000009A6;
#define INTEN                           _INTEN.Byte
#define INTEN_TBEIE                     _INTEN.Bits.TBEIE
#define INTEN_TCIE                      _INTEN.Bits.TCIE
#define INTEN_CSIE                      _INTEN.Bits.CSIE
#define INTEN_TUIE                      _INTEN.Bits.TUIE
#define INTEN_PPREIE                    _INTEN.Bits.PPREIE

#define INTEN_TBEIE_MASK                1U
#define INTEN_TCIE_MASK                 2U
#define INTEN_CSIE_MASK                 4U
#define INTEN_TUIE_MASK                 8U
#define INTEN_PPREIE_MASK               16U


/*** INTFLG - SENT Transmitter Interrupt Flag Register; 0x000009A7 ***/
typedef union {
  byte Byte;
  struct {
    byte TBE         :1;                                       /* SENTTX Transmit-Buffer Empty Flag */
    byte TC          :1;                                       /* SENTTX Transmission Complete Flag */
    byte CS          :1;                                       /* SENTTX Calibration Pulse Start Flag */
    byte TU          :1;                                       /* SENTTX Transmitter Under-run Flag */
    byte PPRE        :1;                                       /* SENTTX Pause Pulse Rising-Edge Flag */
    byte             :1; 
    byte             :1; 
    byte             :1; 
  } Bits;
} INTFLGSTR;
extern volatile INTFLGSTR _INTFLG @0x000009A7;
#define INTFLG                          _INTFLG.Byte
#define INTFLG_TBE                      _INTFLG.Bits.TBE
#define INTFLG_TC                       _INTFLG.Bits.TC
#define INTFLG_CS                       _INTFLG.Bits.CS
#define INTFLG_TU                       _INTFLG.Bits.TU
#define INTFLG_PPRE                     _INTFLG.Bits.PPRE

#define INTFLG_TBE_MASK                 1U
#define INTFLG_TC_MASK                  2U
#define INTFLG_CS_MASK                  4U
#define INTFLG_TU_MASK                  8U
#define INTFLG_PPRE_MASK                16U


/*** TXBUF - SENT Transmit Buffer Register; 0x000009A8 ***/
typedef union {
  dword Dword;
   /* Overlapped registers: */
  struct {
    /*** DATA_23 - SENT Transmit Buffer Register 23; 0x000009A8 ***/
    union {
      word Word;
       /* Overlapped registers: */
      struct {
        /*** DATA_3 - SENT Transmit Buffer Register 3; 0x000009A8 ***/
        union {
          byte Byte;
          struct {
            byte CRC         :4;                                       /* SENTTX CRC Nibble */
            byte STATCONF    :4;                                       /* SENTTX Status and Configuration Nibble */
          } Bits;
        } DATA_3STR;
        #define DATA_3                  _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_3STR.Byte
        #define DATA_3_CRC              _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_3STR.Bits.CRC
        #define DATA_3_STATCONF         _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_3STR.Bits.STATCONF
        
        #define DATA_3_CRC_MASK         15U
        #define DATA_3_CRC_BITNUM       0U
        #define DATA_3_STATCONF_MASK    240U
        #define DATA_3_STATCONF_BITNUM  4U
        
    
        /*** DATA_2 - SENT Transmit Buffer Register 2; 0x000009A9 ***/
        union {
          byte Byte;
          struct {
            byte DATA1       :4;                                       /* SENTTX Data Nibble 1 */
            byte DATA0       :4;                                       /* SENTTX Data Nibble 0 */
          } Bits;
        } DATA_2STR;
        #define DATA_2                  _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_2STR.Byte
        #define DATA_2_DATA1            _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_2STR.Bits.DATA1
        #define DATA_2_DATA0            _TXBUF.Overlap_STR.DATA_23STR.Overlap_STR.DATA_2STR.Bits.DATA0
        
        #define DATA_2_DATA1_MASK       15U
        #define DATA_2_DATA1_BITNUM     0U
        #define DATA_2_DATA0_MASK       240U
        #define DATA_2_DATA0_BITNUM     4U
        
      } Overlap_STR;
    
      struct {
        word CRC         :4;                                       /* SENTTX CRC Nibble */
        word STATCONF    :4;                                       /* SENTTX Status and Configuration Nibble */
        word DATA1       :4;                                       /* SENTTX Data Nibble 1 */
        word DATA0       :4;                                       /* SENTTX Data Nibble 0 */
      } Bits;
    } DATA_23STR;
    #define DATA_23                     _TXBUF.Overlap_STR.DATA_23STR.Word
    #define DATA_23_CRC                 _TXBUF.Overlap_STR.DATA_23STR.Bits.CRC
    #define DATA_23_STATCONF            _TXBUF.Overlap_STR.DATA_23STR.Bits.STATCONF
    #define DATA_23_DATA1               _TXBUF.Overlap_STR.DATA_23STR.Bits.DATA1
    #define DATA_23_DATA0               _TXBUF.Overlap_STR.DATA_23STR.Bits.DATA0
    
    #define DATA_23_CRC_MASK            15U
    #define DATA_23_CRC_BITNUM          0U
    #define DATA_23_STATCONF_MASK       240U
    #define DATA_23_STATCONF_BITNUM     4U
    #define DATA_23_DATA1_MASK          3840U
    #define DATA_23_DATA1_BITNUM        8U
    #define DATA_23_DATA0_MASK          61440U
    #define DATA_23_DATA0_BITNUM        12U
    

    /*** DATA_01 - SENT Transmit Buffer Register 01; 0x000009AA ***/
    union {
      word Word;
       /* Overlapped registers: */
      struct {
        /*** DATA_1 - SENT Transmit Buffer Register 1; 0x000009AA ***/
        union {
          byte Byte;
          struct {
            byte DATA3       :4;                                       /* SENTTX Data Nibble 3 */
            byte DATA2       :4;                                       /* SENTTX Data Nibble 2 */
          } Bits;
        } DATA_1STR;
        #define DATA_1                  _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_1STR.Byte
        #define DATA_1_DATA3            _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_1STR.Bits.DATA3
        #define DATA_1_DATA2            _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_1STR.Bits.DATA2
        
        #define DATA_1_DATA3_MASK       15U
        #define DATA_1_DATA3_BITNUM     0U
        #define DATA_1_DATA2_MASK       240U
        #define DATA_1_DATA2_BITNUM     4U
        
    
        /*** DATA_0 - SENT Transmit Buffer Register 0; 0x000009AB ***/
        union {
          byte Byte;
          struct {
            byte DATA5       :4;                                       /* SENTTX Data Nibble 5 */
            byte DATA4       :4;                                       /* SENTTX Data Nibble 4 */
          } Bits;
        } DATA_0STR;
        #define DATA_0                  _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_0STR.Byte
        #define DATA_0_DATA5            _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_0STR.Bits.DATA5
        #define DATA_0_DATA4            _TXBUF.Overlap_STR.DATA_01STR.Overlap_STR.DATA_0STR.Bits.DATA4
        
        #define DATA_0_DATA5_MASK       15U
        #define DATA_0_DATA5_BITNUM     0U
        #define DATA_0_DATA4_MASK       240U
        #define DATA_0_DATA4_BITNUM     4U
        
      } Overlap_STR;
    
      struct {
        word DATA3       :4;                                       /* SENTTX Data Nibble 3 */
        word DATA2       :4;                                       /* SENTTX Data Nibble 2 */
        word DATA5       :4;                                       /* SENTTX Data Nibble 5 */
        word DATA4       :4;                                       /* SENTTX Data Nibble 4 */
      } Bits;
    } DATA_01STR;
    #define DATA_01                     _TXBUF.Overlap_STR.DATA_01STR.Word
    #define DATA_01_DATA3               _TXBUF.Overlap_STR.DATA_01STR.Bits.DATA3
    #define DATA_01_DATA2               _TXBUF.Overlap_STR.DATA_01STR.Bits.DATA2
    #define DATA_01_DATA5               _TXBUF.Overlap_STR.DATA_01STR.Bits.DATA5
    #define DATA_01_DATA4               _TXBUF.Overlap_STR.DATA_01STR.Bits.DATA4
    
    #define DATA_01_DATA3_MASK          15U
    #define DATA_01_DATA3_BITNUM        0U
    #define DATA_01_DATA2_MASK          240U
    #define DATA_01_DATA2_BITNUM        4U
    #define DATA_01_DATA5_MASK          3840U
    #define DATA_01_DATA5_BITNUM        8U
    #define DATA_01_DATA4_MASK          61440U
    #define DATA_01_DATA4_BITNUM        12U
    
  } Overlap_STR;

} TXBUFSTR;
extern volatile TXBUFSTR _TXBUF @0x000009A8;
#define TXBUF                           _TXBUF.Dword


/*** BAKEY0 - Backdoor Comparison Key 0; 0x00FFFE00 ***/
typedef union {
  word Word;
  struct {
    word KEY         :16;                                      /* Backdoor Comparison Key Bits */
  } Bits;
} BAKEY0STR;
/* Tip for register initialization in the user code:  const word BAKEY0_INIT @0x00FFFE00 = <BAKEY0_INITVAL>; */
#define _BAKEY0 (*(const BAKEY0STR *)0x00FFFE00)
#define BAKEY0                          _BAKEY0.Word
#define BAKEY0_KEY                      _BAKEY0.Bits.KEY
/* BAKEY_ARR: Access 4 BAKEYx registers in an array */
#define BAKEY_ARR                       ((volatile word *) &BAKEY0)

#define BAKEY0_KEY_MASK                 65535U
#define BAKEY0_KEY_BITNUM               0U


/*** BAKEY1 - Backdoor Comparison Key 1; 0x00FFFE02 ***/
typedef union {
  word Word;
  struct {
    word KEY         :16;                                      /* Backdoor Comparison Key Bits */
  } Bits;
} BAKEY1STR;
/* Tip for register initialization in the user code:  const word BAKEY1_INIT @0x00FFFE02 = <BAKEY1_INITVAL>; */
#define _BAKEY1 (*(const BAKEY1STR *)0x00FFFE02)
#define BAKEY1                          _BAKEY1.Word
#define BAKEY1_KEY                      _BAKEY1.Bits.KEY

#define BAKEY1_KEY_MASK                 65535U
#define BAKEY1_KEY_BITNUM               0U


/*** BAKEY2 - Backdoor Comparison Key 2; 0x00FFFE04 ***/
typedef union {
  word Word;
  struct {
    word KEY         :16;                                      /* Backdoor Comparison Key Bits */
  } Bits;
} BAKEY2STR;
/* Tip for register initialization in the user code:  const word BAKEY2_INIT @0x00FFFE04 = <BAKEY2_INITVAL>; */
#define _BAKEY2 (*(const BAKEY2STR *)0x00FFFE04)
#define BAKEY2                          _BAKEY2.Word
#define BAKEY2_KEY                      _BAKEY2.Bits.KEY

#define BAKEY2_KEY_MASK                 65535U
#define BAKEY2_KEY_BITNUM               0U


/*** BAKEY3 - Backdoor Comparison Key 3; 0x00FFFE06 ***/
typedef union {
  word Word;
  struct {
    word KEY         :16;                                      /* Backdoor Comparison Key Bits */
  } Bits;
} BAKEY3STR;
/* Tip for register initialization in the user code:  const word BAKEY3_INIT @0x00FFFE06 = <BAKEY3_INITVAL>; */
#define _BAKEY3 (*(const BAKEY3STR *)0x00FFFE06)
#define BAKEY3                          _BAKEY3.Word
#define BAKEY3_KEY                      _BAKEY3.Bits.KEY

#define BAKEY3_KEY_MASK                 65535U
#define BAKEY3_KEY_BITNUM               0U


/*** PROTKEY - Non Volatile Protection Override Comparison Key; 0x00FFFE08 ***/
typedef union {
  word Word;
  struct {
    word KEY         :16;                                      /* Protection Override Comparison Key Bits */
  } Bits;
} PROTKEYSTR;
/* Tip for register initialization in the user code:  const word PROTKEY_INIT @0x00FFFE08 = <PROTKEY_INITVAL>; */
#define _PROTKEY (*(const PROTKEYSTR *)0x00FFFE08)
#define PROTKEY                         _PROTKEY.Word
#define PROTKEY_KEY                     _PROTKEY.Bits.KEY

#define PROTKEY_KEY_MASK                65535U
#define PROTKEY_KEY_BITNUM              0U


/*** NVFPROT - Non Volatile P-Flash Protection Register; 0x00FFFE0C ***/
typedef union {
  byte Byte;
  struct {
    byte FPLS0       :1;                                       /* Flash Protection Lower Address Size Bit 0 */
    byte FPLS1       :1;                                       /* Flash Protection Lower Address Size Bit 1 */
    byte FPLDIS      :1;                                       /* Flash Protection Lower Address Range Disable */
    byte FPHS0       :1;                                       /* Flash Protection Higher Address Size Bit 0 */
    byte FPHS1       :1;                                       /* Flash Protection Higher Address Size Bit 1 */
    byte FPHDIS      :1;                                       /* Flash Protection Higher Address Range Disable */
    byte RNV6        :1;                                       /* Reserved Nonvolatile Bit */
    byte FPOPEN      :1;                                       /* Flash Protection Operation Enable */
  } Bits;
  struct {
    byte grpFPLS :2;
    byte         :1;
    byte grpFPHS :2;
    byte         :1;
    byte grpRNV_6 :1;
    byte         :1;
  } MergedBits;
} NVFPROTSTR;
/* Tip for register initialization in the user code:  const byte NVFPROT_INIT @0x00FFFE0C = <NVFPROT_INITVAL>; */
#define _NVFPROT (*(const NVFPROTSTR *)0x00FFFE0C)
#define NVFPROT                         _NVFPROT.Byte
#define NVFPROT_FPLS0                   _NVFPROT.Bits.FPLS0
#define NVFPROT_FPLS1                   _NVFPROT.Bits.FPLS1
#define NVFPROT_FPLDIS                  _NVFPROT.Bits.FPLDIS
#define NVFPROT_FPHS0                   _NVFPROT.Bits.FPHS0
#define NVFPROT_FPHS1                   _NVFPROT.Bits.FPHS1
#define NVFPROT_FPHDIS                  _NVFPROT.Bits.FPHDIS
#define NVFPROT_RNV6                    _NVFPROT.Bits.RNV6
#define NVFPROT_FPOPEN                  _NVFPROT.Bits.FPOPEN
#define NVFPROT_FPLS                    _NVFPROT.MergedBits.grpFPLS
#define NVFPROT_FPHS                    _NVFPROT.MergedBits.grpFPHS

#define NVFPROT_FPLS0_MASK              1U
#define NVFPROT_FPLS1_MASK              2U
#define NVFPROT_FPLDIS_MASK             4U
#define NVFPROT_FPHS0_MASK              8U
#define NVFPROT_FPHS1_MASK              16U
#define NVFPROT_FPHDIS_MASK             32U
#define NVFPROT_RNV6_MASK               64U
#define NVFPROT_FPOPEN_MASK             128U
#define NVFPROT_FPLS_MASK               3U
#define NVFPROT_FPLS_BITNUM             0U
#define NVFPROT_FPHS_MASK               24U
#define NVFPROT_FPHS_BITNUM             3U


/*** NVDFPROT - Non Volatile D-Flash Protection Register; 0x00FFFE0D ***/
typedef union {
  byte Byte;
  struct {
    byte DPS0        :1;                                       /* D-Flash Protection Size Bit 0 */
    byte DPS1        :1;                                       /* D-Flash Protection Size Bit 1 */
    byte DPS2        :1;                                       /* D-Flash Protection Size Bit 2 */
    byte DPS3        :1;                                       /* D-Flash Protection Size Bit 3 */
    byte DPS4        :1;                                       /* D-Flash Protection Size Bit 4 */
    byte DPS5        :1;                                       /* D-Flash Protection Size Bit 5 */
    byte             :1; 
    byte DPOPEN      :1;                                       /* D-Flash Protection Control */
  } Bits;
  struct {
    byte grpDPS  :6;
    byte         :1;
    byte         :1;
  } MergedBits;
} NVDFPROTSTR;
/* Tip for register initialization in the user code:  const byte NVDFPROT_INIT @0x00FFFE0D = <NVDFPROT_INITVAL>; */
#define _NVDFPROT (*(const NVDFPROTSTR *)0x00FFFE0D)
#define NVDFPROT                        _NVDFPROT.Byte
#define NVDFPROT_DPS0                   _NVDFPROT.Bits.DPS0
#define NVDFPROT_DPS1                   _NVDFPROT.Bits.DPS1
#define NVDFPROT_DPS2                   _NVDFPROT.Bits.DPS2
#define NVDFPROT_DPS3                   _NVDFPROT.Bits.DPS3
#define NVDFPROT_DPS4                   _NVDFPROT.Bits.DPS4
#define NVDFPROT_DPS5                   _NVDFPROT.Bits.DPS5
#define NVDFPROT_DPOPEN                 _NVDFPROT.Bits.DPOPEN
#define NVDFPROT_DPS                    _NVDFPROT.MergedBits.grpDPS

#define NVDFPROT_DPS0_MASK              1U
#define NVDFPROT_DPS1_MASK              2U
#define NVDFPROT_DPS2_MASK              4U
#define NVDFPROT_DPS3_MASK              8U
#define NVDFPROT_DPS4_MASK              16U
#define NVDFPROT_DPS5_MASK              32U
#define NVDFPROT_DPOPEN_MASK            128U
#define NVDFPROT_DPS_MASK               63U
#define NVDFPROT_DPS_BITNUM             0U


/*** NVFOPT - Non Volatile Flash Option Register; 0x00FFFE0E ***/
typedef union {
  byte Byte;
  struct {
    byte NV0         :1;                                       /* Nonvolatile Bit 0 */
    byte NV1         :1;                                       /* Nonvolatile Bit 1 */
    byte NV2         :1;                                       /* Nonvolatile Bit 2 */
    byte NV3         :1;                                       /* Nonvolatile Bit 3 */
    byte NV4         :1;                                       /* Nonvolatile Bit 4 */
    byte NV5         :1;                                       /* Nonvolatile Bit 5 */
    byte NV6         :1;                                       /* Nonvolatile Bit 6 */
    byte NV7         :1;                                       /* Nonvolatile Bit 7 */
  } Bits;
} NVFOPTSTR;
/* Tip for register initialization in the user code:  const byte NVFOPT_INIT @0x00FFFE0E = <NVFOPT_INITVAL>; */
#define _NVFOPT (*(const NVFOPTSTR *)0x00FFFE0E)
#define NVFOPT                          _NVFOPT.Byte
#define NVFOPT_NV0                      _NVFOPT.Bits.NV0
#define NVFOPT_NV1                      _NVFOPT.Bits.NV1
#define NVFOPT_NV2                      _NVFOPT.Bits.NV2
#define NVFOPT_NV3                      _NVFOPT.Bits.NV3
#define NVFOPT_NV4                      _NVFOPT.Bits.NV4
#define NVFOPT_NV5                      _NVFOPT.Bits.NV5
#define NVFOPT_NV6                      _NVFOPT.Bits.NV6
#define NVFOPT_NV7                      _NVFOPT.Bits.NV7

#define NVFOPT_NV0_MASK                 1U
#define NVFOPT_NV1_MASK                 2U
#define NVFOPT_NV2_MASK                 4U
#define NVFOPT_NV3_MASK                 8U
#define NVFOPT_NV4_MASK                 16U
#define NVFOPT_NV5_MASK                 32U
#define NVFOPT_NV6_MASK                 64U
#define NVFOPT_NV7_MASK                 128U


/*** NVFSEC - Non Volatile Flash Security Register; 0x00FFFE0F ***/
typedef union {
  byte Byte;
  struct {
    byte SEC0        :1;                                       /* Flash Security Bit 0 */
    byte SEC1        :1;                                       /* Flash Security Bit 1 */
    byte RNV2        :1;                                       /* Reserved Nonvolatile Bit 2 */
    byte RNV3        :1;                                       /* Reserved Nonvolatile Bit 3 */
    byte RNV4        :1;                                       /* Reserved Nonvolatile Bit 4 */
    byte RNV5        :1;                                       /* Reserved Nonvolatile Bit 5 */
    byte KEYEN0      :1;                                       /* Backdoor Key Security Enable Bit 0 */
    byte KEYEN1      :1;                                       /* Backdoor Key Security Enable Bit 1 */
  } Bits;
  struct {
    byte grpSEC  :2;
    byte grpRNV_2 :4;
    byte grpKEYEN :2;
  } MergedBits;
} NVFSECSTR;
/* Tip for register initialization in the user code:  const byte NVFSEC_INIT @0x00FFFE0F = <NVFSEC_INITVAL>; */
#define _NVFSEC (*(const NVFSECSTR *)0x00FFFE0F)
#define NVFSEC                          _NVFSEC.Byte
#define NVFSEC_SEC0                     _NVFSEC.Bits.SEC0
#define NVFSEC_SEC1                     _NVFSEC.Bits.SEC1
#define NVFSEC_RNV2                     _NVFSEC.Bits.RNV2
#define NVFSEC_RNV3                     _NVFSEC.Bits.RNV3
#define NVFSEC_RNV4                     _NVFSEC.Bits.RNV4
#define NVFSEC_RNV5                     _NVFSEC.Bits.RNV5
#define NVFSEC_KEYEN0                   _NVFSEC.Bits.KEYEN0
#define NVFSEC_KEYEN1                   _NVFSEC.Bits.KEYEN1
#define NVFSEC_SEC                      _NVFSEC.MergedBits.grpSEC
#define NVFSEC_RNV_2                    _NVFSEC.MergedBits.grpRNV_2
#define NVFSEC_KEYEN                    _NVFSEC.MergedBits.grpKEYEN
#define NVFSEC_RNV                      NVFSEC_RNV_2

#define NVFSEC_SEC0_MASK                1U
#define NVFSEC_SEC1_MASK                2U
#define NVFSEC_RNV2_MASK                4U
#define NVFSEC_RNV3_MASK                8U
#define NVFSEC_RNV4_MASK                16U
#define NVFSEC_RNV5_MASK                32U
#define NVFSEC_KEYEN0_MASK              64U
#define NVFSEC_KEYEN1_MASK              128U
#define NVFSEC_SEC_MASK                 3U
#define NVFSEC_SEC_BITNUM               0U
#define NVFSEC_RNV_2_MASK               60U
#define NVFSEC_RNV_2_BITNUM             2U
#define NVFSEC_KEYEN_MASK               192U
#define NVFSEC_KEYEN_BITNUM             6U


/* * * * *  24-BIT ADDRESS REGISTERS  * * * * * * * * * * * * * * * * * * * * * * */
extern volatile void* volatile MMCPC @0x00000085;          /* Captured S12ZCPU Program Counter Low; 0x00000087 */
extern volatile void* volatile DBGAA @0x00000115;          /* Debug Comparator A Address Register Low; 0x00000117 */
extern volatile void* volatile DBGBA @0x00000125;          /* Debug Comparator B Address Register Low; 0x00000127 */
extern volatile void* volatile DBGDA @0x00000145;          /* Debug Comparator D Address Register Low; 0x00000147 */
extern volatile void* volatile ECCDPTR @0x000003C7;        /* ECC Debug Point Register Low; 0x000003C9 */
extern volatile void* volatile ADC0CBP @0x0000061D;        /* ADC0 Command Base Pointer Register 0; 0x000003C9 */
extern volatile void* volatile ADC0RBP @0x00000621;        /* ADC0 Result Base Pointer Register 0; 0x000003C9 */


  /* Watchdog reset macro */
#ifndef __RESET_WATCHDOG
#ifdef _lint
  #define __RESET_WATCHDOG()  /* empty */
#else
  #define __RESET_WATCHDOG() (CPMUARMCOP = 0x55U, CPMUARMCOP = 0xAAU)
#endif
#endif /* __RESET_WATCHDOG */


/***********************************************/
/**   D E P R E C I A T E D   S Y M B O L S   **/
/***********************************************/
/*lint -restore  +esym(960,18.4) +esym(961,19.7) Enable MISRA rule (1.1,18.4,6.4,19.7) checking. */
#endif
