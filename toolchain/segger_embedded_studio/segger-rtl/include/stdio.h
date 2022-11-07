/*********************************************************************
*                   (c) SEGGER Microcontroller GmbH                  *
*                        The Embedded Experts                        *
*                           www.segger.com                           *
**********************************************************************

-------------------------- END-OF-HEADER -----------------------------
*/

#ifndef __SEGGER_RTL_STDIO_H
#define __SEGGER_RTL_STDIO_H

/*********************************************************************
*
*       #include section
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

#ifndef   NULL
  #define NULL      0
#endif

#ifndef   EOF
  #define EOF       (-1)
#endif

#define SEEK_SET    0
#define SEEK_CUR    1
#define SEEK_END    2

#define	_IOFBF 0 // setvbuf fully buffered
#define	_IOLBF 1 // setvbuf line buffered
#define	_IONBF 2 // setvbuf unbuffered

#ifndef   __SEGGER_RTL_VA_LIST_DEFINED
  #define __SEGGER_RTL_VA_LIST_DEFINED
  #define __va_list  __SEGGER_RTL_VA_LIST
#endif

/*********************************************************************
*
*       Defines, fixed
*
**********************************************************************
*/

#define L_tmpnam    256

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

#ifndef __SEGGER_RTL_FPOS_T_DEFINED
#define __SEGGER_RTL_FPOS_T_DEFINED
typedef long fpos_t;
#endif

#ifndef __SEGGER_RTL_FILE_DEFINED
#define __SEGGER_RTL_FILE_DEFINED
typedef struct __SEGGER_RTL_FILE_IMPL FILE;
#endif

/*********************************************************************
*
*       Public data
*
**********************************************************************
*/

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

/*********************************************************************
*
*       Prototypes
*
**********************************************************************
*/

int    putchar   (int __c);
int    getchar   (void);
int    puts      (const char *__s);
char * gets      (char *__s);
int    sprintf   (char *__s, const char *__format, ...);
int    snprintf  (char *__s, size_t __n, const char *__format, ...);
int    vsnprintf (char *__s, size_t __n, const char *__format, __va_list __arg);
int    printf    (const char *__format, ...);
int    vprintf   (const char *__format, __va_list __arg);
int    vsprintf  (char *__s, const char *__format, __va_list __arg);
int    scanf     (const char *__format, ...);
int    sscanf    (const char *__s, const char *__format, ...);
int    vscanf    (const char *__format, __va_list __arg);
int    vsscanf   (const char *__s, const char *__format, __va_list __arg);

void   clearerr  (FILE *);
int    fclose    (FILE *);
int    feof      (FILE *);
int    ferror    (FILE *);
int    fflush    (FILE *);
int    fgetc     (FILE *);
int    fgetpos   (FILE *, fpos_t *);
char * fgets     (char *, int, FILE *);
int    fileno    (FILE *);
FILE * fopen     (const char *, const char *);
int    fprintf   (FILE *, const char *, ...);
int    fputc     (int, FILE *);
int    fputs     (const char *, FILE *);
size_t fread     (void *, size_t, size_t, FILE *);
FILE * freopen   (const char *, const char *, FILE *);
int    fscanf    (FILE *, const char *, ...);
int    fseek     (FILE *, long, int);
int    fsetpos   (FILE *, const fpos_t *); 
long   ftell     (FILE *);
size_t fwrite    (const void *, size_t, size_t, FILE *);
int    getc      (FILE *);
void   perror    (const char *);
int    putc      (int, FILE *);
int    remove    (const char *);
int    rename    (const char *, const char *);
void   rewind    (FILE *);
void   setbuf    (FILE *, char *);
int    setvbuf   (FILE *, char *, int, size_t);
FILE * tmpfile   (void);
char * tmpnam    (char *);
int    ungetc    (int, FILE *);
int    vfprintf  (FILE *, const char *, __va_list);
int    vfscanf   (FILE *, const char *, __va_list);

int    asprintf  (char **, const char *, ...);
int    vasprintf (char **, const char *, __va_list);
int    dprintf   (int, const char *, ...);
int    vdprintf  (int, const char *, __va_list);
FILE * fdopen    (int, const char *);

#ifdef __cplusplus
}
#endif

#endif

/*************************** End of file ****************************/
