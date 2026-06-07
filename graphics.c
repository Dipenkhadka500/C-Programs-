#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    circle(200, 200, 50);

    getch();
    closegraph();
    return 0;
}
