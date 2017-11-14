#include <stdio.h> // nicht "stdio.h"

//#define print printf --> I don't think so...
//#define Char char  --> Schlüsselwörter verwenden ist pfui!
#define JA 'j';

int main(void)
{
  char taste; // ; zuviel
  char tmp; // lower case!

  taste == 'j'; // Das ist ein Vergleichsoperator, hier müsste eine Zuweisung hin. Im Grunde syntaktisch richtig, aber das generiert Warnungen beim kompilieren, weil man das nicht so macht!

  switch(taste)
  {
      case 'v':
  }
  return 0; // ; fehlte
}
