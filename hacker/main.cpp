#include <graphics.h>
#include <conio.h>

int main(){
	initgraph(600, 340);//��������
	loadimage(0, "bg.jpg");//���ر���ͼƬ

	//        ���Ͻ�    ���½�
	rectangle(300, 40, 550, 80);//���ƾ��ΰ�ť
	settextcolor(RGB(255, 255, 0));
	settextstyle(30, 0, "΢���ź�");
	outtextxy(310, 45, "1-��վ404����");//�ھ�����д���ı�
	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-��վ�۸Ĺ���");
	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-��վ�����޸�");
	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-�鿴������¼");
	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-�˳�");
	_getch();
	closegraph();
	return 0;
}