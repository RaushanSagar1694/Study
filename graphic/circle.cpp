  

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    circle(100, 100, 80);

    getch();
    closegraph();
     return 0;
}