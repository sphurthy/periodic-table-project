#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdio.h>
#include<math.h>


using namespace std;


void table()
{
	cout<<"5";
	//groups
   line(50,50,50,540);
   line(120,50,120,540);
   line(190,120,190,540);
   line(260,260,260,540);
   line(330,260,330,540);
   line(400,260,400,540);
   line(470,260,470,540);
   line(540,260,540,540);
   line(610,260,610,540);
   line(680,260,680,540);
   line(750,260,750,540);
   line(820,260,820,540);
   line(890,120,890,540);//12
   line(960,120,960,540);
   line(1030,120,1030,540);
   line(1100,120,1100,540);
   line(1170,120,1170,540);
   line(1240,50,1240,540);
   line(1310,50,1310,540);
   
    //columns
   line(50,50,120,50);  
   line(50,120,190,120); 
   line(50,190,190,190);
   line(50,260,1310,260);
   line(50,330,1310,330);
   line(50,400,1310,400);
   line(50,470,1310,470);
   line(50,540,1310,540);   
   line(1240,50,1310,50);//18
   line(890,120,1310,120);//12 onwards
   line(890,190,1310,190);
   line(960,260,1310,260);
   
   
   line(260,553,1310,553);
   line(260,693,1310,693);
   line(260,623,1310,623);
  
   line(260,553,260,693);
   line(330,553,330,693);
   line(400,553,400,693);
   line(470,553,470,693);
   line(540,553,540,693);
   line(610,553,610,693);
   line(680,553,680,693);
   line(750,553,750,693);
   line(820,553,820,693);
   line(890,553,890,693);
   line(960,553,960,693);
   line(1030,553,1030,693);
   line(1100,553,1100,693);
   line(1170,553,1170,693);
   line(1240,553,1240,693);
   line(1310,553,1310,693);
   
   
   //period box
   rectangle(10,65,40,100);
   rectangle(10,135,40,170);
   rectangle(10,205,40,240);  
   rectangle(10,275,40,310);
   rectangle(10,345,40,380);
   rectangle(10,415,40,450);
   rectangle(10,485,40,520);
   
   //group box
   rectangle(67,5,97,40);
   rectangle(137,75,167,110);

}    


void shell2()
{
	
    circle(655,115,15);//nucleus
    line(654,109,654,121);
    line(649,115,661,115);
    circle(655,115,40);    
    circle(615,115,5);
    circle(695,115,5);
	circle(655,115,58);
	circle(597,115,5);
}

void shell3()
{
	shell2();
	circle(655,170,5);
    circle(655,60,5);
    circle(710,115,5);
    circle(695,157,5);
    circle(614,74,5);
    circle(700,78,5);
    circle(614,155,5);
    
    circle(655,115,75);
    circle(655,190,5);
}



void shell4()
{
	shell3();
	circle(655,40,5);
	circle(730,115,5);
    circle(580,115,5);
	circle(603,60,5);
	circle(707,170,5);
	circle(602,168,5);
	circle(713,67,5);
	
	circle(655,115,97);
	circle(655,212,5);
}

void shell_13()
{
	shell4();
	circle(655,18,5);
	circle(558,115,5);
	circle(752,115,5);
	circle(745,84,5);
	circle(730,53,5);
	circle(700,30,5);
	circle(615,27,5);
	circle(590,46,5);
	circle(564,80,5);
	circle(562,138,5);
	circle(574,164,5);
}
	

Table.cpp
Displaying Table.cpp.