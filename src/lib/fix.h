#ifndef __LIB_FIX_H
#define __LIB_FIX_H

typedef int fix_t;

#define SHIFT_BIT 16

/* Parameter: int; Return type: fix; Conver int to fix */
#define F_CONST(A) ((fix_t)(A << SHIFT_BIT))

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
#define F_MULT(A, B) ((fix_t)((((int64_t) A) * (int64_t) B) >> SHIFT_BIT))

/* Parameter: int; Return type: fix; Conver int to fix */
#define F_DIV(A, B) ((fix_t)((((int64_t) A) << SHIFT_BIT) / B))

/* Parameter: int; Return type: fix; Conver int to fix */
#define F_INT(A) (A >> SHIFT_BIT)

#endif /* lib/fix.h */
