/* -*- Mode: C; tab-width: 2; indent-tabs-mode: t; c-basic-offset: 2 -*- */
/* t_monitor.c
 *
 * Updated for 1.x
 * 
 * Copyright (c) 2015-2016, polarysekt
 */

#include "tst.h"

int main( int argc, char** argv ) {
  ghRUNNABLE *pdr;
  unsigned int md;
  
  ut_showheader( "t_monitor", 0 );
  
  ut_showsection( "INIT libgh" );
  pdr = ghInit( &argc, &argv );
  
  ut_showsection( "GET MonitorDefault" );

  /* TODO: ghWindowGetMonitor() */
  md = ghRunnableGetMonitorDefault( pdr );
  gh_printf( "Default : %d\n", md);

  ut_showsection( " GET Monitor W/H/D" );
  
  gh_printf( "Width   : %d\n", ghMonitorGetWidth( md ) );
  gh_printf( "Height  : %d\n", ghMonitorGetHeight( md ) );
  // gh_printf( "Depth   : %d\n", ghMonitorGetDepth( md ) );
  
  ut_showheader( "t_monitor", 1 );
  
  return 0;
}