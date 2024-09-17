#include <graphics.h>
#include <conio.h> // For getch()

void drawFilledHeart(int x, int y) {
    // Set color for heart outline
    setcolor(RED);

    // Left half of the heart
    arc(x - 50, y, 0, 180, 50);  // Left arc of the heart
    line(x - 100, y, x, y + 100);  // Left diagonal line (bottom)

    // Right half of the heart
    arc(x + 50, y, 0, 180, 50);  // Right arc of the heart
    line(x, y + 100, x + 100, y);  // Right diagonal line (bottom)

    // Fill the heart with red color
    setfillstyle(SOLID_FILL, RED);  // Set fill style and color to red
    floodfill(x, y + 50, RED);      // Fill the inside of the heart with red
}

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Set background color (optional)
    setbkcolor(WHITE);  // White background
    cleardevice();

    // Draw and fill the heart at the center of the screen
    drawFilledHeart(300, 200);

    // Hold the screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
