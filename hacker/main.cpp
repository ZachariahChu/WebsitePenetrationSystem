#include <graphics.h>
#include <conio.h>

int main(){
	initgraph(600, 340);//创建窗口
	loadimage(0, "bg.jpg");//加载背景图片

	//        左上角    右下角
	rectangle(300, 40, 550, 80);//绘制矩形按钮
	settextcolor(RGB(255, 255, 0));
	settextstyle(30, 0, "微软雅黑");
	outtextxy(310, 45, "1-网站404攻击");//在矩形中写入文本
	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-网站篡改攻击");
	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-网站攻击修复");
	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-查看攻击记录");
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-退出");
	_getch();
	closegraph();
	return 0;
}