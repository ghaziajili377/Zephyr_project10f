/*********************************************************************
*                   (c) SEGGER Microcontroller GmbH                  *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------
*/

#ifndef __SEGGER_RTL_WCHAR_H
#define __SEGGER_RTL_WCHAR_H

/*********************************************************************
*
*       #include Section
*
**********************************************************************
*/

#include "__SEGGER_RTL.h"

#ifdef __cplusplus
extern "C" {
#endif

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/

#ifndef NULL
#define NULL 0
#endif

#ifndef WEOF
#define WEOF ((wint_t)~0u)
#endif

#ifndef   __SEGGER_RTL_VA_LIST_DEFINED
  #define __SEGGER_RTL_VA_LIST_DEFINED
  #define __va_list  __SEGGER_RTL_VA_LIST
#endif


/*********************************************************************
*
*       Types
*
**********************************************************************
*/

#ifndef __SEGGER_RTL_SIZE_T_DEFINED
#define __SEGGER_RTL_SIZE_T_DEFINED
typedef __SEGGER_RTL_SIZE_T size_t;
#endif

#ifndef __SEGGER_RTL_FILE_DEFINED
#define __SEGGER_RTL_FILE_DEFINED
typedef struct __SEGGER_RTL_FILE_IMPL FILE;
#endif

#ifndef __SEGGER_RTL_LOCALE_T_DEFINED
#define __SEGGER_RTL_LOCALE_T_DEFINED
typedef struct __SEGGER_RTL_POSIX_locale_s *locale_t;
#endif

// Deal with different sizes of wchar_t.
#if defined(__WCHAR_MAX__)
  #define WCHAR_MAX __WCHAR_MAX__
  #if defined(__WCHAR_MIN__)
    #define WCHAR_MIN __WCHAR_MIN__
  #elif __WCHAR_MAX__ == 65535U || __WCHAR_MAX__ == 4294967295U
    #define WCHAR_MIN 0U
  #else
    #define WCHAR_MIN (-__WCHAR_MAX__-1)
  #endif
#elif __SEGGER_RTL_SIZEOF_WCHAR_T == 2
  #define WCHAR_MIN  0u
  #define WCHAR_MAX  65535u
#else
  #define WCHAR_MIN  (-2147483647L-1)
  #define WCHAR_MAX  2147483647L
#endif

#if !defined(__SEGGER_RTL_WCHAR_T_DEFINED)
#define __SEGGER_RTL_WCHAR_T_DEFINED
typedef __SEGGER_RTL_WCHAR_T wchar_t;
#endif

#ifndef __SEGGER_RTL_WINT_T_DEFINED
#define __SEGGER_RTL_WINT_T_DEFINED
typedef __SEGGER_RTL_WINT_T wint_t;
#endif

typedef struct __mbstate_s {
  int __state;
  long __wchar;
} mbstate_t;

struct tm;

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

wchar_t * wmemcpy     (wchar_t *__s1, const wchar_t *__s2, size_t __n);
wchar_t * wmemccpy    (wchar_t *__s1, const wchar_t *__s2, wchar_t __c, size_t __n);
wchar_t * wmempcpy    (wchar_t *__s1, const wchar_t *__s2, size_t __n);
wchar_t * wmemmove    (wchar_t *__s1, const wchar_t *__s2, size_t __n);
int       wmemcmp     (const wchar_t *__s1, const wchar_t *__s2, size_t __n);
wchar_t * wmemchr     (const wchar_t *__s, wchar_t __c, size_t __n);
wchar_t * wmemset     (wchar_t *__s, wchar_t __c, size_t __n);
wchar_t * wcscpy      (wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcsncpy     (wchar_t *__s1, const wchar_t *__s2, size_t __n);
size_t    wcslcpy     (wchar_t *__s1, const wchar_t *__s2, size_t __n);
wchar_t * wcscat      (wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcsncat     (wchar_t *__s1, const wchar_t *__s2, size_t __n);
int       wcscmp      (const wchar_t *__s1, const wchar_t *__s2);
int       wcsncmp     (const wchar_t *__s1, const wchar_t *__s2, size_t __n);
wchar_t * wcschr      (const wchar_t *__s, wchar_t __c);
wchar_t * wcsnchr     (const wchar_t *__str, size_t __n, wchar_t __ch);
size_t    wcscspn     (const wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcspbrk     (const wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcsrchr     (const wchar_t *__s, wchar_t __c);
size_t    wcsspn      (const wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcsstr      (const wchar_t *__s1, const wchar_t *__s2);
wchar_t * wcsnstr     (const wchar_t *__s1, const wchar_t *__s2, size_t __n);
size_t    wcslen      (const wchar_t *__s);
size_t    wcsnlen     (const wchar_t *__s, size_t __n);
wchar_t * wcstok      (wchar_t *__s1, const wchar_t *__s2, wchar_t **__ptr);
wchar_t * wstrsep     (wchar_t **__stringp, const wchar_t *__delim);
wchar_t * wcstok_r    (wchar_t *__s1, const wchar_t *__s2, wchar_t **__s3);
wchar_t * wcsdup      (const wchar_t *__s);
wchar_t * wcsndup     (const wchar_t *__s, size_t __n);
int       mbsinit     (const mbstate_t *__ps);
int       wctob       (wint_t __c);
int       wctob_l     (wint_t __c, locale_t __loc);
size_t    mbrlen      (const char *__s, size_t __n, mbstate_t *__ps);
size_t    mbrlen_l    (const char *__s, size_t __n, mbstate_t *__ps, locale_t __loc);
size_t    mbsrtowcs   (wchar_t *__dst, const char **__src, size_t __len, mbstate_t *__ps);
size_t    mbsrtowcs_l (wchar_t *__dst, const char **__src, size_t __len, mbstate_t *__ps, locale_t __loc);
wint_t    btowc       (int __c);
wint_t    btowc_l     (int __c, locale_t __loc);
size_t    mbrtowc     (wchar_t *__pwc, const char *__s, size_t __n, mbstate_t *__ps);
size_t    mbrtowc_l   (wchar_t *__pwc, const char *__s, size_t __n, mbstate_t *__ps, locale_t __loc);
size_t    wcrtomb     (char *__s, wchar_t __wc, mbstate_t *__ps);
size_t    wcrtomb_l   (char *__s, wchar_t __wc, mbstate_t *__ps, locale_t __loc);
size_t    mbsrtowcs   (wchar_t *__dst, const char **__src, size_t __len, mbstate_t *__ps);
size_t    mbsrtowcs_l (wchar_t *__dst, const char **__src, size_t __len, mbstate_t *__ps, locale_t __loc);
size_t    wcsrtombs   (char *__dst, const wchar_t **__src, size_t __len, mbstate_t *__ps);
size_t    wcsrtombs_l (char *__dst, const wchar_t **__src, size_t __len, mbstate_t *__ps, locale_t __loc);
int       swprintf    (wchar_t *__ws, size_t __len, const wchar_t *__format, ...);
int       swscanf     (const wchar_t *__ws, const wchar_t *__format, ...);
int       vswprintf   (wchar_t *__ws, size_t __len, const wchar_t *format, __SEGGER_RTL_VA_LIST __arg);
int       vswscanf    (const wchar_t *__ws, const wchar_t *__format, __SEGGER_RTL_VA_LIST __arg);

wint_t    fgetwc(FILE *stream);
wchar_t * fgetws(wchar_t *ws, int num, FILE *stream);
wint_t    fputwc(wchar_t wc, FILE *stream);
int       fputws(const wchar_t *ws, FILE *stream);
int       fwide(FILE *stream, int mode);
int       fwprintf(FILE *stream, const wchar_t *format, ...);
int       fwscanf(FILE *stream, const wchar_t *format, ...);
wint_t    getwc(FILE *stream);
wint_t    getwchar(void);
wint_t    putwc(wchar_t wc, FILE *stream);
wint_t    putwchar(wchar_t wc);
wint_t    ungetwc(wint_t wc, FILE *stream);
int       wcscoll(const wchar_t *wcs1, const wchar_t *wcs2);
int       vcwscanf(const wchar_t *ws, const wchar_t *format, __va_list arg);
int       vfwprintf(FILE *stream, const wchar_t *format, __va_list arg);
int       vfwscanf(FILE *stream, const wchar_t *format, __va_list arg);
int       vwprintf(const wchar_t *format, __va_list arg);
int       vwscanf(const wchar_t *format, __va_list arg);
size_t    wcsftime(wchar_t *ptr, size_t maxsize, const wchar_t *format, const struct tm *timeptr);
size_t    wcsxfrm(wchar_t *destination, const wchar_t *source, size_t num);
double    wcstod(const wchar_t *str, wchar_t **endptr);
long int  wcstol(const wchar_t *str, wchar_t **endptr, int base);
int       wprintf(const wchar_t *format, ...);
int       wscanf(const wchar_t *format, ...);
float     wcstof( const wchar_t *str, wchar_t **str_end );
long double wcstold( const wchar_t * str, wchar_t ** str_end );
long      wcstol( const wchar_t * str, wchar_t ** str_end, int base );
long      wcstol( const wchar_t * str, wchar_t **str_end, int base );
long long wcstoll( const wchar_t * str, wchar_t **str_end, int base );
unsigned long wcstoul( const wchar_t *str, wchar_t **str_end, int base );
unsigned long long wcstoull( const wchar_t *str, wchar_t **str_end, int base );
size_t wcsnrtombs(char *dest, const wchar_t **src, size_t nwc, size_t len, mbstate_t *ps);
size_t mbsnrtowcs(wchar_t *dest, const char **src, size_t nms, size_t len, mbstate_t *ps);

#ifdef __cplusplus
}
#endif

#endif

/*************************** End of file ****************************/
