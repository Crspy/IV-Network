//================ IV:Multiplayer - https://github.com/XForce/ivmultiplayer ================
//
// File: CZlib.h
// Project: Client.Core
// Author: FRi<FRi.developing@gmail.com>
// License: See LICENSE in root directory
//
//==========================================================================================

#ifndef CZlib_h
#define CZlib_h

#include "CString.h"
#include <stdio.h>

class CZlib {
public:

	static	int			Inflate( FILE * pSource, FILE * pDestination );
	static	int			Decompress( String strFileName, String strOutput );

};

#endif // CZlib_h