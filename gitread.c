#ifndef _WIN32
/* Because fuck the Windows CRT. */
#include <stdio.h>
#else
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

void print_raw(char *msg)
{
  DWORD bytes;
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  WriteFile(hStdOut, msg, strlen(msg), &bytes, NULL);
}
#endif

int main()
{
#ifndef _WIN32
/* to make this compile on posix systems. :meme: */
#define print_raw printf
#endif
  print_raw("How much commits would git read if git could read commits. :meme:\n");
  return 0;
}

#if defined(_WIN32) && !defined(_DEBUG)
int mainCRTStartup()
{
  return main();
}
#endif
