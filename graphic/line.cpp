  

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    line(100, 80, 180, 200);

    getch();
    closegraph();
     return 0;
}