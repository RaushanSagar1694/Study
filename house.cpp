


  

#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    
    // Drawing the base of the house (large rectangle)
    rectangle(100, 200, 500, 450);  // Base of the house (wider)

    // Drawing the roof (a large triangle)
    line(100, 200, 300, 50);   // Left side of the roof
    line(300, 50, 500, 200);   // Right side of the roof
    line(100, 200, 500, 200);  // Bottom of the roof

    // Drawing the door (larger rectangle)
    rectangle(275, 320, 325, 450); // Door in the center

    // Drawing windows (two larger squares)
    // Left window
    rectangle(140, 250, 190, 300); // First window (left)
    // Right window
    rectangle(410, 250, 460, 300); // Second window (right)

    // Drawing window dividers (to add details to the windows)
    line(165, 250, 165, 300); // Left window vertical divider
    line(140, 275, 190, 275); // Left window horizontal divider

    line(435, 250, 435, 300); // Right window vertical divider
    line(410, 275, 460, 275); // Right window horizontal divider

    // Drawing a door knob
    circle(320, 385, 5); // Door knob on the door


    getch();
    closegraph();
     return 0;
}


