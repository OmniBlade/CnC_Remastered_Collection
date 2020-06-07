#ifndef COMMON_MISCASM_H
#define COMMON_MISCASM_H

extern "C" int __cdecl calcx(signed short param1, short distance);
extern "C" int __cdecl calcy(signed short param1, short distance);
extern "C" unsigned int __cdecl Cardinal_To_Fixed(unsigned base, unsigned cardinal);
extern "C" unsigned int __cdecl Fixed_To_Cardinal(unsigned base, unsigned fixed);

#endif