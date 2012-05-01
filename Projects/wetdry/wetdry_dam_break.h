/*
** svn $Id: shoreface.h 139 2008-01-10 00:17:29Z arango $
*******************************************************************************
** Copyright (c) 2002-2008 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Dam break test case.
**
** Application flag:   WETDRY_DAM_BREAK
*/
#define ROMS_MODEL

#define WET_DRY
#define MASKING
#define UV_ADV
#define TS_FIXED
#define DJ_GRADPS
#undef  SOLVE3D
#define SPLINES

#define WESTERN_WALL
#define EAST_FSGRADIENT
#define EAST_M2GRADIENT
#define EAST_M3GRADIENT
#define NORTH_FSGRADIENT
#define NORTH_M2GRADIENT
#define NORTH_M3GRADIENT
#define SOUTH_FSGRADIENT
#define SOUTH_M2GRADIENT
#define SOUTH_M3GRADIENT

#define ANA_SMFLUX
#define UV_QDRAG
#define UV_VIS2
#define MIX_S_UV

#ifdef SOLVE3D
# define ANA_STFLUX
# define ANA_SSFLUX
# define ANA_BPFLUX
# define ANA_BTFLUX
# define ANA_BSFLUX
# define ANA_SPFLUX
# define ANA_SRFLUX
# define GLS_MIXING
# if defined GLS_MIXING
#  define KANTHA_CLAYSON
#  define N2S2_HORAVG
# endif
#endif
