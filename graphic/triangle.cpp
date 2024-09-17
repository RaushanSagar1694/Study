  

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    
    int x1 = 500, y1 = 100;
    int x2 = 250, y2 = 300;
    int x3 = 50,  y3 = 300;

    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);


    getch();
    closegraph();
     return 0;
}