/*-------------------------------------------------------------------------
 *
 * iqual.h
 *	  Index scan key qualification definitions.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id: iqual.h,v 1.12 1999/07/15 23:03:34 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef IQUAL_H
#define IQUAL_H

#include "access/skey.h"
#include "access/itup.h"


/* ----------------
 *		index tuple qualification support
 * ----------------
 */

extern int	NIndexTupleProcessed;

extern bool index_keytest(IndexTuple tuple, TupleDesc tupdesc,
			  int scanKeySize, ScanKey key);

#endif	 /* IQUAL_H */
