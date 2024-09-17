

  

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");

    rectangle(150, 100, 450, 300);

    getch();
    closegraph();
     return 0;
}