#include <iostream>
#include <cmath>

inline void gotoxy(int x, int y)
{
    printf("%c[%d;%df",0x1B,y,x);
}
inline void clrscr(void)
{
    system("clear");
}