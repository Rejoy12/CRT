#include <graphics.h>
#include <conio.h>

void crt(){
    rectangle(100, 150, 90, 300);
    line(100, 150, 400, 150);
    line(100, 300, 400, 300);
    line(400, 150, 500, 100);
    line(400, 300, 500, 350);
    arc(400, 225, 310, 50, 160);
    line(50, 175, 90, 175);
    line(50, 200, 90, 200);
    line(50, 225, 90, 225);
    line(50, 250, 90, 250);
    line(50, 275, 90, 275);
    rectangle(100, 215, 130, 240);
    rectangle(100, 210, 140, 245);
    setcolor(RED);
    line(130, 228, 560, 228);
    setcolor(WHITE);
    line(160, 225, 160, 200);
    line(160, 200, 200, 200);
    line(200, 200, 200, 225);
    line(160, 230, 160, 255);
    line(160, 255, 200, 255);
    line(200, 255, 200, 230);
    
    line(160 + 60, 225, 160 + 60, 200);
    line(160 + 60, 200, 200 + 60, 200);
    line(200 + 60, 200, 200 + 60, 225);
    line(160 + 60, 230, 160 + 60, 255);
    line(160 + 60, 255, 200 + 60, 255);
    line(200 + 60, 255, 200 + 60, 230);
    
    line(160 + 120, 225, 160 + 120, 200);
    line(160 + 120, 200, 200 + 120, 200);
    line(200 + 120, 200, 200 + 120, 225);
    line(160 + 120, 230, 160 + 120, 255);
    line(160 + 120, 255, 200 + 120, 255);
    line(200 + 120, 255, 200 + 120, 230);
    
    line(330, 210, 350, 200);
    line(330, 210, 350, 210);
    line(350, 200, 370, 200);
    line(350, 210, 370, 200);
    
    line(330, 210 + 40, 350, 200 + 40);
    line(330, 210 + 40, 350, 210 + 40);
    line(350, 200 + 40, 370, 200 + 40);
    line(350, 210 + 40, 370, 200 + 40);
    
    rectangle(380, 210, 400, 250);
    rectangle(380 + 5, 210 - 5, 400 + 5, 250 - 5);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(386, 211, WHITE);
    floodfill(381, 211, WHITE);
    
}

void labels(){
    setcolor(YELLOW);
    line(60, 300, 60, 350);
    outtextxy(50, 360, "Connector");
    outtextxy(50, 370, "Pins");
    
    line(95, 140, 95, 80);
    outtextxy(90, 60, "Sealing");
    outtextxy(90, 70, "Base");
    
    line(120, 200, 120, 120);
    outtextxy(110, 100, "Control");
    outtextxy(110, 110, "Grid");
    
    line(180, 280, 180, 400);
    line(300, 280, 180, 400);
    outtextxy(150, 410, "Accelerating");
    outtextxy(150, 420, "Anodes");
    
    line(240, 180, 240, 100);
    outtextxy(220, 80, "Focusing");
    outtextxy(220, 90, "Anode");
    
    line(350, 180, 350, 100);
    outtextxy(330, 80, "Vertical Deflecting");
    outtextxy(330, 90, "Plates");
    
    line(380, 280, 380, 400);
    outtextxy(360, 410, "Horizontal Deflecting");
    outtextxy(360, 420, "Plates");
    
    outtextxy(430, 210, "Electron Beam");
    
    outtextxy(570, 200, "Phosphor");
    outtextxy(570, 210, "Coated");
    outtextxy(570, 220, "Screen");
}

int main(void){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    crt();
    labels();
    getch();
    closegraph();
    return 0;
}