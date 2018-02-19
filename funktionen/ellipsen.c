#include <stdarg.h>

int add(int zahlen, ...) {
   va_list zeiger;
   int zahl;

   va_start(zeiger,zahlen);

   zahl = va_arg(zeiger,int);

   va_end(zeiger);

   
}
