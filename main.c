#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<fstream>
using namespace std;

#define Pi 3.14285714

//#pragma GCC diagnostic ignored "-Wwrite-strings"
void table();
void display();
void element();
void feed();
void hydrogen();
void helium();
void shell2();
void shell3();
void shell4();
void shell_13();

void period1();

struct ele
{
       char name[20];
       int atNum;
       int atMass;
}e[118];          // to start with class
/*

class Element
{
	int At_no;
	int At_wt;
	char name[20];
}*/


int flag=0;


int main()
{
//	flag=0;
   initwindow(1500,1500,"PERIODIC TABLE");
   feed();
   table();
   display();
   element();
   
   
   
   getch();
   closegraph();
   system("pause");
}
   

void feed()
{
    char element_names[118][20] ={"Hydrogen" ,"Helium" ,"Lithium" ,"Beryllium" , "Boron" , "Carbon" , "Nitrogen" , "Oxygen" , "Fluorine" , "Neon" , "Sodium" , "Magnesium" , "Alluminium" , "Silicon" , "Phosphorous" , "Sulphur" , "Chlorine" , "Argon" , "Potassium" , "Calcium" , "Scandium" , "Titanium" , "Vanadium" , "Chromium" , "Managanese" , "Iron" , "Cobalt" , "Nickel" , "Copper" , "Zinc" , "Gallium" , "Germanium" , "Arsenic" , "Selenium" , "Bromine" , "Krypton" , "Rubidium" , "Strontium" , "Yttrium" , "Zirconium" , "Niobium" , "Molybdenum" , "Technitium" , "Ruthenium" , "Rhodium" , "Palladium" , "Silver" , "Cadmium" , "Indium" , "Tin" , "Antimony" , "Tellurium" , "Iodine" , "Xenon" , "Cesium" , "Barium" , "Lanthanum" , "Cerium" , "Praseodymium" , "Neodymium" , "Promethium" , "Samarium" , "Europium" , "Gadolinium" , "Terbium" , "Dysprosium" , "Holmium" , "Erbium" , "Thulium" , "Ytterbium" , "Lutetium" , "Hafnium" , "Tantalum" , "Tungsten" , "Rhenium" , "Osmium" , "Iridium" , "Platinum" , "Gold" , "Mercury" , "Thallium" , "Lead" , "Bismuth" , "Polonium" , "Astatine" , "Radon" , "Francium" , "Radium" , "Actinium" , "Thorium" , "Protactinium" , "Uranium" , "Neptunium" , "Plutonium" , "Americium" , "Curium" , "Berkelium" , "Californium" , "Einsteinium" , "Fermium" , "Mendelevium" , "Nobelium" , "Lawrencium" , "Rutherfordium" , "Dubnium" , "Seaborgium" , "Bohrium" , "Hassium" , "Meitnerium" , "Darmastadtium" , "Roentgenium" , "Copemicium" , "Nihonium" , "Flerovium" , "Moscovium" , "Livermorium" , "Tennessine" , "Oganesson"};
    for(int i =0;i<118;i++)
            strcpy(e[i].name,element_names[i]);
}

void element()
{
	rectangle(250,60,500,200);
	outtextxy(225,588,"*");
	outtextxy(225,658,"**");

    
	POINT pos;
	int xo=0,window1;
	
	while(1)
    {
        GetCursorPos(&pos);
        
       	if(pos.x!=xo)
        {
          setfillstyle(1,0);
          bar(255,64,500,200);
          bar(510,10,850,220);
          setfillstyle(1,5);
          xo=pos.x;
		}
		
	 	    //hydrogen
        if(pos.x<130&&pos.x>55&&pos.y<150&&pos.y>80)
        {
          setcolor(WHITE);
          outtextxy(260,80,e[0].name);
          outtextxy(260,120,"Atomic No - 1");
          outtextxy(260,160,"Atomic Wt - 1");
		}
 
 	//period numbers
 	//period 1
     if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<130&&pos.y>93)
			{
				period1();
				if(flag==1)
				break;
			}
		}
	//period2
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<200&&pos.y>163)
			{
				circle(220,300,20);
			}
		}	
	//period3
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<270&&pos.y>233)
			{
				circle(320,230,20);
			}
		}	
	//4
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<340&&pos.y>303)
			{
				circle(120,230,20);
			}
		}
	//5
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<410&&pos.y>373)
			{
				circle(240,300,20);
			}
		}
	//6
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<480&&pos.y>443)
			{
				circle(240,260,20);
			}
		}
	//7
	if(GetAsyncKeyState(VK_LBUTTON))
		{
			if(pos.x<48&&pos.x>15&&pos.y<550&&pos.y>513)
			{
				circle(220,230,20);
			}
		}
		
		if(pos.x<1320&&pos.x>=1250&&pos.y<150&&pos.y>80)
		{
	      outtextxy(260,80,e[1].name);
          outtextxy(260,120,"Atomic No - 2");
          outtextxy(260,160,"Atomic Wt - 4");
          circle(655,115,15);//nucleus
		  line(654,109,654,121);
		  line(649,115,661,115);
          circle(655,115,40);
          circle(615,115,5);
          circle(695,115,5);
        }
        
        //2nd period
        if(pos.x<130&&pos.x>55&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[2].name);
            outtextxy(260,120,"Atomic No - 3");
            outtextxy(260,160,"Atomic Wt - 7");
            shell2();
        }
	    if(pos.x<200&&pos.x>=130&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[3].name);
            outtextxy(260,120,"Atomic No - 4");
            outtextxy(260,160,"Atomic Wt - 9");
            shell2();
            circle(655,170,5);
	    }
	    if(pos.x<970&&pos.x>=900&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[4].name);
            outtextxy(260,120,"Atomic No - 5");
            outtextxy(260,160,"Atomic Wt - 11");
            shell2();
            circle(655,170,5);
            circle(655,60,5);
	    }
	    if(pos.x<1040&&pos.x>=970&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[5].name);
            outtextxy(260,120,"Atomic No - 6");
            outtextxy(260,160,"Atomic Wt - 12");
            shell2();
			circle(655,170,5);
            circle(655,60,5);
            circle(711,115,5);
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[6].name);
            outtextxy(260,120,"Atomic No - 7");
            outtextxy(260,160,"Atomic Wt - 14");
            shell2();
			circle(655,170,5);
            circle(655,60,5);
            circle(711,115,5);
            circle(695,157,5);
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[7].name);
            outtextxy(260,120,"Atomic No - 8");
            outtextxy(260,160,"Atomic Wt - 16");
            shell2();
			circle(655,170,5);
            circle(655,60,5);
            circle(710,115,5);
            circle(695,157,5);
            circle(614,74,5);
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[8].name);
            outtextxy(260,120,"Atomic No - 9");
            outtextxy(260,160,"Atomic Wt - 19");
            shell2();
            circle(655,170,5);
            circle(655,60,5);
            circle(710,115,5);
            circle(695,157,5);
            circle(614,74,5);
            circle(700,78,5);
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<220&&pos.y>150)
        {
        	outtextxy(260,80,e[9].name);
            outtextxy(260,120,"Atomic No - 10");
            outtextxy(260,160,"Atomic Wt - 20");
            shell2();
            circle(655,170,5);
            circle(655,60,5);
            circle(710,115,5);
            circle(695,157,5);
            circle(614,74,5);
            circle(700,78,5);
            circle(614,155,5);
	    }
	   //3rd period
	   
	    if(pos.x<130&&pos.x>55&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[10].name);
            outtextxy(260,120,"Atomic No - 11");
            outtextxy(260,160,"Atomic Wt - 23");
            shell3();
	    }
	    if(pos.x<200&&pos.x>=130&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[11].name);
            outtextxy(260,120,"Atomic No - 12");
            outtextxy(260,160,"Atomic Wt - 24");
            shell3();
            circle(655,40,5);
	    }
	    if(pos.x<970&&pos.x>=900&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[12].name);
            outtextxy(260,120,"Atomic No - 13");
            outtextxy(260,160,"Atomic Wt - 27");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);    
		}
	    if(pos.x<1040&&pos.x>=970&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[13].name);
            outtextxy(260,120,"Atomic No - 14");
            outtextxy(260,160,"Atomic Wt - 28");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);
	        circle(580,115,5);
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[14].name);
            outtextxy(260,120,"Atomic No - 15");
            outtextxy(260,160,"Atomic Wt - 31");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);
	        circle(580,115,5);
	        circle(603,60,5);
	        
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[15].name);
            outtextxy(260,120,"Atomic No - 16");
            outtextxy(260,160,"Atomic Wt - 32");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);
	        circle(580,115,5);
	        circle(603,60,5);
	        circle(707,170,5);
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[16].name);
            outtextxy(260,120,"Atomic No - 17");
            outtextxy(260,160,"Atomic Wt - 35");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);
	        circle(580,115,5);
	        circle(603,60,5);
	        circle(707,170,5);
	        circle(602,168,5);
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<290&&pos.y>220)
        {
        	outtextxy(260,80,e[17].name);
            outtextxy(260,120,"Atomic No - 18");
            outtextxy(260,160,"Atomic Wt - 40");
            shell3();
            circle(655,40,5);
	        circle(730,115,5);
	        circle(580,115,5);
	        circle(603,60,5);
	        circle(707,170,5);
	        circle(602,168,5);
	        circle(713,67,5);
	    }
	    
	    //4th period
	     if(pos.x<130&&pos.x>55&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[18].name);
            outtextxy(260,120,"Atomic No - 19");
            outtextxy(260,160,"Atomic Wt - 39");
            shell4();
	    }
	     if(pos.x<200&&pos.x>=130&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[19].name);
            outtextxy(260,120,"Atomic No - 20");
            outtextxy(260,160,"Atomic Wt - 40");
            shell4();
            circle(655,18,5);
	    }
	    if(pos.x<270&&pos.x>=200&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[20].name);
            outtextxy(260,120,"Atomic No - 21");
            outtextxy(260,160,"Atomic Wt - 45");
	        shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	    }
	    if(pos.x<340&&pos.x>=270&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[21].name);
            outtextxy(260,120,"Atomic No - 22");
            outtextxy(260,160,"Atomic Wt - 48");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	    }
	    if(pos.x<410&&pos.x>=340&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[22].name);
            outtextxy(260,120,"Atomic No - 23");
            outtextxy(260,160,"Atomic Wt - 51");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	        circle(745,84,5);
	    }
	    if(pos.x<480&&pos.x>=410&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[23].name);
            outtextxy(260,120,"Atomic No - 24");
            outtextxy(260,160,"Atomic Wt - 52");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	        circle(745,84,5);
	        circle(730,53,5);
            
	    }
	    if(pos.x<550&&pos.x>=480&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[24].name);
            outtextxy(260,120,"Atomic No - 25");
            outtextxy(260,160,"Atomic Wt - 55");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	        circle(745,84,5);
	        circle(730,53,5);
			circle(700,30,5);
	    }
	    if(pos.x<620&&pos.x>=550&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[25].name);
            outtextxy(260,120,"Atomic No - 26");
            outtextxy(260,160,"Atomic Wt - 56");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	        circle(745,84,5);
	        circle(730,53,5);
			circle(700,30,5);
			circle(615,27,5);
	    }
	    if(pos.x<690&&pos.x>=620&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[26].name);
            outtextxy(260,120,"Atomic No - 27");
            outtextxy(260,160,"Atomic Wt - 59");
            shell4();
	        circle(655,18,5);
	        circle(558,115,5);
	        circle(752,115,5);
	        circle(745,84,5);
	        circle(730,53,5);
			circle(700,30,5);
			circle(615,27,5);
			circle(590,46,5);
	    }
	    if(pos.x<760&&pos.x>=690&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[27].name);
            outtextxy(260,120,"Atomic No - 28");
            outtextxy(260,160,"Atomic Wt - 59");
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
	    }
	    if(pos.x<830&&pos.x>=760&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[28].name);
            outtextxy(260,120,"Atomic No - 29");
            outtextxy(260,160,"Atomic Wt - 64");
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
	    }
	    if(pos.x<900&&pos.x>=830&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[29].name);
            outtextxy(260,120,"Atomic No - 30");
            outtextxy(260,160,"Atomic Wt - 65");
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
	    if(pos.x<970&&pos.x>=900&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[30].name);
            outtextxy(260,120,"Atomic No - 31");
            outtextxy(260,160,"Atomic Wt - 70");
            shell_13();
            circle(595,190,5);
	    }
	    if(pos.x<1040&&pos.x>=970&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[31].name);
            outtextxy(260,120,"Atomic No - 32");
            outtextxy(260,160,"Atomic Wt - 73");
            shell_13();
            circle(595,190,5);
            circle(618,205,5);
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[32].name);
            outtextxy(260,120,"Atomic No - 33");
            outtextxy(260,160,"Atomic Wt - 75");
            shell_13();
            circle(595,190,5);
            circle(618,205,5);
            circle(685,205,5);
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[33].name);
            outtextxy(260,120,"Atomic No - 34");
            outtextxy(260,160,"Atomic Wt - 79");
            shell_13();
            circle(595,190,5);
            circle(618,205,5);
            circle(685,205,5);
            circle(715,190,5);
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[34].name);
            outtextxy(260,120,"Atomic No - 35");
            outtextxy(260,160,"Atomic Wt - 80");
            shell_13();
            circle(595,190,5);
            circle(618,205,5);
            circle(685,205,5);
            circle(715,190,5);
            circle(738,165,5);
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<360&&pos.y>290)
        {
        	outtextxy(260,80,e[35].name);
            outtextxy(260,120,"Atomic No - 36");
            outtextxy(260,160,"Atomic Wt - 84");
            shell_13();
            circle(595,190,5);
            circle(618,205,5);
            circle(685,205,5);
            circle(715,190,5);
            circle(738,165,5);
            circle(748,140,5);
	    }
	    
	    
    	//5th period
    	 if(pos.x<130&&pos.x>55&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[36].name);
            outtextxy(260,120,"Atomic No - 37");
            outtextxy(260,160,"Atomic Wt - 85");
	    }
	     if(pos.x<200&&pos.x>=130&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[37].name);
            outtextxy(260,120,"Atomic No - 38");
            outtextxy(260,160,"Atomic Wt - 88");
	    }
	    if(pos.x<270&&pos.x>=200&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[38].name);
            outtextxy(260,120,"Atomic No - 39");
            outtextxy(260,160,"Atomic Wt - 89");
	    }
	    if(pos.x<340&&pos.x>=270&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[39].name);
            outtextxy(260,120,"Atomic No - 40");
            outtextxy(260,160,"Atomic Wt - 91");
	    }
	    if(pos.x<410&&pos.x>=340&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[40].name);
            outtextxy(260,120,"Atomic No - 41");
            outtextxy(260,160,"Atomic Wt - 93");
	    }
	    if(pos.x<480&&pos.x>=410&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[41].name);
            outtextxy(260,120,"Atomic No - 42");
            outtextxy(260,160,"Atomic Wt - 96");
	    }
	    if(pos.x<550&&pos.x>=480&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[42].name);
            outtextxy(260,120,"Atomic No - 43");
            outtextxy(260,160,"Atomic Wt - 98");
	    }
	    if(pos.x<620&&pos.x>=550&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[43].name);
            outtextxy(260,120,"Atomic No - 44");
            outtextxy(260,160,"Atomic Wt - 101");
	    }
	    if(pos.x<690&&pos.x>=620&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[44].name);
            outtextxy(260,120,"Atomic No - 45");
            outtextxy(260,160,"Atomic Wt - 103");
	    }
	    if(pos.x<760&&pos.x>=690&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[45].name);
            outtextxy(260,120,"Atomic No - 46");
            outtextxy(260,160,"Atomic Wt - 106");
	    }
	    if(pos.x<830&&pos.x>=760&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[46].name);
            outtextxy(260,120,"Atomic No - 47");
            outtextxy(260,160,"Atomic Wt - 108");
	    }
	    if(pos.x<900&&pos.x>=830&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[47].name);
            outtextxy(260,120,"Atomic No - 48");
            outtextxy(260,160,"Atomic Wt - 112");
	    }
	    if(pos.x<970&&pos.x>=900&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[48].name);
            outtextxy(260,120,"Atomic No - 49");
            outtextxy(260,160,"Atomic Wt - 115");
	    }
	    if(pos.x<1040&&pos.x>=970&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[49].name);
            outtextxy(260,120,"Atomic No - 50");
            outtextxy(260,160,"Atomic Wt - 119");
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[50].name);
            outtextxy(260,120,"Atomic No - 51");
            outtextxy(260,160,"Atomic Wt - 122");
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[51].name);
            outtextxy(260,120,"Atomic No - 52");
            outtextxy(260,160,"Atomic Wt - 128");
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[52].name);
            outtextxy(260,120,"Atomic No - 53");
            outtextxy(260,160,"Atomic Wt - 127");
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<430&&pos.y>360)
        {
        	outtextxy(260,80,e[53].name);
            outtextxy(260,120,"Atomic No - 54");
            outtextxy(260,160,"Atomic Wt - 131");
	    }
	    
	    //6th period
	    if(pos.x<130&&pos.x>55&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[54].name);
            outtextxy(260,120,"Atomic No - 55");
            outtextxy(260,160,"Atomic Wt - 133");
	    }
	     if(pos.x<200&&pos.x>=130&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[55].name);
            outtextxy(260,120,"Atomic No - 56");
            outtextxy(260,160,"Atomic Wt - 137");
	    }
	    if(pos.x<270&&pos.x>=200&&pos.y<500&&pos.y>430)
        {
        	outtextxy(255,115,"LANTHANIDES");
           
	    }
	    if(pos.x<340&&pos.x>=270&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[71].name);
            outtextxy(260,120,"Atomic No - 72");
            outtextxy(260,160,"Atomic Wt - 178");
	    }
	    if(pos.x<410&&pos.x>=340&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[72].name);
            outtextxy(260,120,"Atomic No - 73");
            outtextxy(260,160,"Atomic Wt - 181");
	    }
	    if(pos.x<480&&pos.x>=410&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[73].name);
            outtextxy(260,120,"Atomic No - 74");
            outtextxy(260,160,"Atomic Wt - 184");
	    }
	    if(pos.x<550&&pos.x>=480&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[74].name);
            outtextxy(260,120,"Atomic No - 75");
            outtextxy(260,160,"Atomic Wt - 186");
	    }
	    if(pos.x<620&&pos.x>=550&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[75].name);
            outtextxy(260,120,"Atomic No - 76");
            outtextxy(260,160,"Atomic Wt - 190");
	    }
	    if(pos.x<690&&pos.x>=620&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[76].name);
            outtextxy(260,120,"Atomic No - 77");
            outtextxy(260,160,"Atomic Wt - 192");
	    }
	    if(pos.x<760&&pos.x>=690&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[77].name);
            outtextxy(260,120,"Atomic No - 78");
            outtextxy(260,160,"Atomic Wt - 195");
	    }
	    if(pos.x<830&&pos.x>=760&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[78].name);
            outtextxy(260,120,"Atomic No - 79");
            outtextxy(260,160,"Atomic Wt - 197");
	    }
	    if(pos.x<900&&pos.x>=830&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[79].name);
            outtextxy(260,120,"Atomic No - 80");
            outtextxy(260,160,"Atomic Wt - 200");
	    }
	    if(pos.x<970&&pos.x>=900&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[80].name);
            outtextxy(260,120,"Atomic No - 81");
            outtextxy(260,160,"Atomic Wt - 204");
	    }
	    if(pos.x<1040&&pos.x>=970&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[81].name);
            outtextxy(260,120,"Atomic No - 82");
            outtextxy(260,160,"Atomic Wt - 207");
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[82].name);
            outtextxy(260,120,"Atomic No - 83");
            outtextxy(260,160,"Atomic Wt - 209");
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[83].name);
            outtextxy(260,120,"Atomic No - 84");
            outtextxy(260,160,"Atomic Wt - 209");
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[84].name);
            outtextxy(260,120,"Atomic No - 85");
            outtextxy(260,160,"Atomic Wt - 210");
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<500&&pos.y>430)
        {
        	outtextxy(260,80,e[85].name);
            outtextxy(260,120,"Atomic No - 86");
            outtextxy(260,160,"Atomic Wt - 222");
	    }
	    
	    //7th period
	    if(pos.x<130&&pos.x>55&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[86].name);
            outtextxy(260,120,"Atomic No - 87");
            outtextxy(260,160,"Atomic Wt - 223");
	    }
	     if(pos.x<200&&pos.x>=130&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[87].name);
            outtextxy(260,120,"Atomic No - 88");
            outtextxy(260,160,"Atomic Wt - 226");
	    }
	    if(pos.x<270&&pos.x>=200&&pos.y<570&&pos.y>500)
        {
        	outtextxy(280,115,"ACTINIDES");
	    }
	    if(pos.x<340&&pos.x>=270&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[103].name);
            outtextxy(260,120,"Atomic No - 104");
            outtextxy(260,160,"Atomic Wt - 267");
	    }
	    if(pos.x<410&&pos.x>=340&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[104].name);
            outtextxy(260,120,"Atomic No - 105");
            outtextxy(260,160,"Atomic Wt - 268");
	    }
	    if(pos.x<480&&pos.x>=410&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[105].name);
            outtextxy(260,120,"Atomic No - 106");
            outtextxy(260,160,"Atomic Wt - 269");
	    }
	    if(pos.x<550&&pos.x>=480&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[106].name);
            outtextxy(260,120,"Atomic No - 107");
            outtextxy(260,160,"Atomic Wt - 270");
	    }
	    if(pos.x<620&&pos.x>=550&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[107].name);
            outtextxy(260,120,"Atomic No - 108");
            outtextxy(260,160,"Atomic Wt - 277");
	    }
	    if(pos.x<690&&pos.x>=620&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[108].name);
            outtextxy(260,120,"Atomic No - 109");
            outtextxy(260,160,"Atomic Wt - 278");
	    }
	    if(pos.x<760&&pos.x>=690&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[109].name);
            outtextxy(260,120,"Atomic No - 110");
            outtextxy(260,160,"Atomic Wt - 281");
	    }
	    if(pos.x<830&&pos.x>=760&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[110].name);
            outtextxy(260,120,"Atomic No - 111");
            outtextxy(260,160,"Atomic Wt - 282");
	    }
	    if(pos.x<900&&pos.x>=830&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[111].name);
            outtextxy(260,120,"Atomic No - 112");
            outtextxy(260,160,"Atomic Wt - 285");
	    }
	    if(pos.x<970&&pos.x>=900&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[112].name);
            outtextxy(260,120,"Atomic No - 113");
            outtextxy(260,160,"Atomic Wt - 286");
	    }
	    if(pos.x<1040&&pos.x>=970&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[113].name);
            outtextxy(260,120,"Atomic No - 114");
            outtextxy(260,160,"Atomic Wt - 289");
	    }
	    if(pos.x<1110&&pos.x>=1040&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[114].name);
            outtextxy(260,120,"Atomic No - 115");
            outtextxy(260,160,"Atomic Wt - 290");
	    }
	    if(pos.x<1180&&pos.x>=1110&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[115].name);
            outtextxy(260,120,"Atomic No - 116");
            outtextxy(260,160,"Atomic Wt - 293");
	    }
	    if(pos.x<1250&&pos.x>=1180&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[116].name);
            outtextxy(260,120,"Atomic No - 117");
            outtextxy(260,160,"Atomic Wt - 294");
	    }
	    if(pos.x<1320&&pos.x>=1250&&pos.y<570&&pos.y>500)
        {
        	outtextxy(260,80,e[117].name);
            outtextxy(260,120,"Atomic No - 118");
            outtextxy(260,160,"Atomic Wt - 294");
	    }
	    
	    //f-block
	    if(pos.x<336&&pos.x>=266&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[56].name);
            outtextxy(260,120,"Atomic No - 57");
            outtextxy(260,160,"Atomic Wt - 139");
	    }
	    if(pos.x<406&&pos.x>=336&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[57].name);
            outtextxy(260,120,"Atomic No - 58");
            outtextxy(260,160,"Atomic Wt - 140");
	    }
	    if(pos.x<476&&pos.x>=406&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[58].name);
            outtextxy(260,120,"Atomic No - 59");
            outtextxy(260,160,"Atomic Wt - 141");
	    }
	    if(pos.x<546&&pos.x>=476&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[59].name);
            outtextxy(260,120,"Atomic No - 60");
            outtextxy(260,160,"Atomic Wt - 144");
	    }
	    if(pos.x<616&&pos.x>=546&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[60].name);
            outtextxy(260,120,"Atomic No - 61");
            outtextxy(260,160,"Atomic Wt - 145");
	    }
	    if(pos.x<686&&pos.x>=616&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[61].name);
            outtextxy(260,120,"Atomic No - 62");
            outtextxy(260,160,"Atomic Wt - 150");
	    }
	    if(pos.x<756&&pos.x>=686&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[62].name);
            outtextxy(260,120,"Atomic No - 63");
            outtextxy(260,160,"Atomic Wt - 152");
	    }
	    if(pos.x<826&&pos.x>=756&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[63].name);
            outtextxy(260,120,"Atomic No - 64");
            outtextxy(260,160,"Atomic Wt - 157");
	    }
	    if(pos.x<896&&pos.x>=826&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[64].name);
            outtextxy(260,120,"Atomic No - 65");
            outtextxy(260,160,"Atomic Wt - 159");
	    }
	    if(pos.x<966&&pos.x>=896&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[65].name);
            outtextxy(260,120,"Atomic No - 66");
            outtextxy(260,160,"Atomic Wt - 163");
	    }
	    if(pos.x<1036&&pos.x>=966&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[66].name);
            outtextxy(260,120,"Atomic No - 67");
            outtextxy(260,160,"Atomic Wt - 165");
	    }
	    if(pos.x<1106&&pos.x>=1036&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[67].name);
            outtextxy(260,120,"Atomic No - 68");
            outtextxy(260,160,"Atomic Wt - 167");
	    }
	    if(pos.x<1176&&pos.x>=1106&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[68].name);
            outtextxy(260,120,"Atomic No - 69");
            outtextxy(260,160,"Atomic Wt - 169");
	    }
	    if(pos.x<1246&&pos.x>=1176&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[69].name);
            outtextxy(260,120,"Atomic No - 70");
            outtextxy(260,160,"Atomic Wt - 173");
	    }
	    if(pos.x<1316&&pos.x>=1246&&pos.y<653&&pos.y>583)
        {
        	outtextxy(260,80,e[70].name);
            outtextxy(260,120,"Atomic No - 71");
            outtextxy(260,160,"Atomic Wt - 175");
	    }
	    //---------------------------------------------------------------------------------------------------
	    if(pos.x<336&&pos.x>=266&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[88].name);
            outtextxy(260,120,"Atomic No - 89");
            outtextxy(260,160,"Atomic Wt - 227");
	    }
	    if(pos.x<406&&pos.x>=336&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[89].name);
            outtextxy(260,120,"Atomic No - 90");
            outtextxy(260,160,"Atomic Wt - 232");
	    }
	    if(pos.x<476&&pos.x>=406&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[90].name);
            outtextxy(260,120,"Atomic No - 91");
            outtextxy(260,160,"Atomic Wt - 231");
	    }
	    if(pos.x<546&&pos.x>=476&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[91].name);
            outtextxy(260,120,"Atomic No - 92");
            outtextxy(260,160,"Atomic Wt - 238");
	    }
	    if(pos.x<616&&pos.x>=546&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[92].name);
            outtextxy(260,120,"Atomic No - 93");
            outtextxy(260,160,"Atomic Wt - 237");
	    }
	    if(pos.x<686&&pos.x>=616&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[93].name);
            outtextxy(260,120,"Atomic No - 94");
            outtextxy(260,160,"Atomic Wt - 244");
	    }
	    if(pos.x<756&&pos.x>=686&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[94].name);
            outtextxy(260,120,"Atomic No - 95");
            outtextxy(260,160,"Atomic Wt - 243");
	    }
	    if(pos.x<826&&pos.x>=756&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[95].name);
            outtextxy(260,120,"Atomic No - 96");
            outtextxy(260,160,"Atomic Wt - 247");
	    }
	    if(pos.x<896&&pos.x>=826&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[96].name);
            outtextxy(260,120,"Atomic No - 97");
            outtextxy(260,160,"Atomic Wt - 247");
	    }
	    if(pos.x<966&&pos.x>=896&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[97].name);
            outtextxy(260,120,"Atomic No - 98");
            outtextxy(260,160,"Atomic Wt - 251");
	    }
	    if(pos.x<1036&&pos.x>=966&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[98].name);
            outtextxy(260,120,"Atomic No - 99");
            outtextxy(260,160,"Atomic Wt - 252");
	    }
	    if(pos.x<1106&&pos.x>=1036&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[99].name);
            outtextxy(260,120,"Atomic No - 100");
            outtextxy(260,160,"Atomic Wt - 257");
	    }
	    if(pos.x<1176&&pos.x>=1106&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[100].name);
            outtextxy(260,120,"Atomic No - 101");
            outtextxy(260,160,"Atomic Wt - 258");
	    }
	    if(pos.x<1246&&pos.x>=1176&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[101].name);
            outtextxy(260,120,"Atomic No - 102");
            outtextxy(260,160,"Atomic Wt - 259");
	    }
	    if(pos.x<1316&&pos.x>=1246&&pos.y<723&&pos.y>653)
        {
        	outtextxy(260,80,e[102].name);
            outtextxy(260,120,"Atomic No - 103");
            outtextxy(260,160,"Atomic Wt - 266");
	    }
	    
	    delay(5);
        }
}

void period1()
{
	closegraph();
	cout<<"In Function1\n";
    int x = initwindow(1500,1500,"PERIOD 1");
    settextstyle(9,0,2);
    cout<<"Hello";
    rectangle(450,600,500,650);
    outtextxy(1100,600,"BACK");
    flag=1;
	POINT p;
    ifstream ifile;
    ifile.open("Period1.txt");
    char arr[1000];
    while(!(ifile.eof()))
    {
    	cout<<"l";
        ifile.getline(arr,1000);
    }
    outtextxy(100,100,arr);
    ifile.close();
    while(1)
    {
     GetCursorPos(&p);
     if(GetAsyncKeyState(VK_LBUTTON))
     {
     if(p.x>1050&&p.x<1200&&p.y>600&&p.y<650)
        {
        	cout<<"\n\nHEllo2";
            cleardevice();
            cout<<"1";
            table();
            display();
            cout<<"2";
            element();
            cout<<"3";
           
          
        }
     }
     }
      
     
}



Main.cpp
Displaying Main.cpp.