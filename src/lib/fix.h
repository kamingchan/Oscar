#ifndef __LIB_FIX_H
#define __LIB_FIX_H

typedef int fix;

#define SHIFT_BIT 16

/* Parameter: int; Return type: fix; Conver int to fix */
#define F_CONST(A) ((fix)(A << SHIFT_BIT))

/* Parameter: fix, fix; Return type: fix; */
#define F_ADD(A, B) (A + B)

/* Parameter: fix, int; Return type: fix; */
#define F_ADD_INT(A, B) (A + F_CONST(B))

/* Parameter: fix, fix; Return type: fix; */
#define F_SUB(A, B) (A - B)

/* Parameter: fix, int; Return type: fix; */
#define F_SUB_INT(A, B) (A - F_CONST(B))

/* Parameter: fix, int; Return type: fix; */
#define F_MULT_INT(A, B) (A * B)

/* Parameter: fix, int; Return type: fix; */
#define F_DIV_INT(A, B) (A / B)

/* Parameter: fix, fix; Return type: fix; */
#define F_MULT(A, B) ((fix)((((int64_t) A) * (int64_t) B) >> SHIFT_BIT))

/* Parameter: fix, fix; Return type: fix; */
#define F_DIV(A, B) ((fix)((((int64_t) A) << SHIFT_BIT) / B))

/* Parameter: fix; Return type: int; Rounding toward zero; */
#define F_INT_Z(A) (A >> SHIFT_BIT)

/* Parameter: fix; Return type: int; rounding to nearest; */
#define F_INT_N(A) (A > 0 ? F_INT_Z(A + (1 << (SHIFT_BIT - 1))) \
                          : F_INT_Z(A - (1 << (SHIFT_BIT - 1)))

/* More information: http://www.ccs.neu.edu/home/amislove/teaching/cs5600/fall10/pintos/pintos_7.html */

#endif /* lib/fix.h */
