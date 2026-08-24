/*
 * FIX-031b (clang): el compilador emite llamadas a las rutinas AEABI de
 * memoria (__aeabi_memcpy*, __aeabi_memset*, __aeabi_memclr*) que el
 * kernel 3.10 no implementa (fueron añadidas en kernels más nuevos).
 * Forwarders a las implementaciones estándar de lib/string.c.
 */
#include <linux/string.h>

void *__aeabi_memcpy(void *dest, const void *src, unsigned long n)
{
	return memcpy(dest, src, n);
}
void *__aeabi_memcpy4(void *dest, const void *src, unsigned long n)
{
	return memcpy(dest, src, n);
}
void *__aeabi_memcpy8(void *dest, const void *src, unsigned long n)
{
	return memcpy(dest, src, n);
}

void *__aeabi_memmove(void *dest, const void *src, unsigned long n)
{
	return memmove(dest, src, n);
}
void *__aeabi_memmove4(void *dest, const void *src, unsigned long n)
{
	return memmove(dest, src, n);
}
void *__aeabi_memmove8(void *dest, const void *src, unsigned long n)
{
	return memmove(dest, src, n);
}

void *__aeabi_memset(void *s, unsigned long n, int c)
{
	return memset(s, c, n);
}
void *__aeabi_memset4(void *s, unsigned long n, int c)
{
	return memset(s, c, n);
}
void *__aeabi_memset8(void *s, unsigned long n, int c)
{
	return memset(s, c, n);
}

void *__aeabi_memclr(void *s, unsigned long n)
{
	return memset(s, 0, n);
}
void *__aeabi_memclr4(void *s, unsigned long n)
{
	return memset(s, 0, n);
}
void *__aeabi_memclr8(void *s, unsigned long n)
{
	return memset(s, 0, n);
}
