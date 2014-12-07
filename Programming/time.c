#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t now;
  struct tm *ltm;

  time( &now );
  ltm = gmtime( &now );

  printf( "%5d : [年]\n", ltm->tm_year + 1900 );
  printf( "%5d : [月]\n", ltm->tm_mon + 1 );
  printf( "%5d : [日]\n", ltm->tm_mday );
  printf( "%5d : [時]\n", ltm->tm_hour );
  printf( "%5d : [分]\n", ltm->tm_min );
  printf( "%5d : [秒]\n", ltm->tm_sec );
  printf( "%5d : [曜日]\n", ltm->tm_wday );
  printf( "%5d : [経過日数]\n", ltm->tm_yday );
  printf( "%5d : [夏時間の有無]\n", ltm->tm_isdst );

  return 0;
}
