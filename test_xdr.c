/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "test.h"

bool_t
xdr_operands (XDR *xdrs, operands *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->x))
		 return FALSE;
	return TRUE;
}
