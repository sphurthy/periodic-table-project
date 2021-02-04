#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<string.h>

#define Pi 3.14285714

#pragma GCC diagnostic ignored "-Wwrite-strings"
void table();
void display();
void feed();


struct ele
{
       char name[20];
       int atNum;
       int atMass;
}e[118];          // to start with class


void main()
{
	//initwindow(1500,1500,"PERIODIC TABLE");
   int gdriver=DETECT,gmode;
   initgraph(&gdriver,&gmode,"C:\\tubroc3\\bgi");
   feed();
   table();
   display();
   getch();
   closegraph();
}
   

void feed()
{
    char element_names[118][20] ={"Hydrogen" ,"Helium" ,"Lithium" ,"Beryllium" , "Boron" , "Carbon" , "Nitrogen" , "Oxygen" , 
    "Fluorine" , "Neon" , "Sodium" , "Magnesium" , "Alluminium" , "Silicon" , "Phosphorous" , "Sulphur" , "Chlorine" , "Argon" , "Potassium" , "Calcium" , "Scandium" , "Titanium" , 
    "Vanadium" , "Chromium" , "Managanese" , "Iron" , "Cobalt" , "Nickel" , "Copper" , "Zinc" , "Gallium" , "Germanium" , 
    "Arsenic" , "Selenium" , "Bromine" , "Krypton" , "Rubidium" , "Strontium" , "Yttrium" , "Zirconium" , "Niobium" , "Molybdenum" ,
     "Technitium" , "Ruthenium" , "Rhodium" , "Palladium" , "Silver" , "Cadmium" , "Indium" , "Tin" , "Antimony" , "Tellurium" ,
      "Iodine" , "Xenon" , "Cesium" , "Barium" , "Lanthanum" , "Cerium" , "Praseodymium" , "Neodymium" , "Promethium" , "Samarium" , "Europium" , "Gadolinium" , "Terbium" ,
     "Dysprosium" , "Holmium" , "Erbium" , "Thulium" , "Ytterbium" , "Lutetium" , "Hafnium" , "Tantalum" , "Tungsten" , "Rhenium" , "Osmium" , "Iridium" , "Platinum" , "Gold" ,
      "Mercury" , "Thallium" , "Lead" , "Bismuth" , "Polonium" , "Astatine" , "Radon" , "Francium" , "Radium" , "Actinium" , "Thorium" , "Protactinium" , "Uranium" , "Neptunium" , 
      "Plutonium" , "Americium" , "Curium" , "Berkelium" , "Californium" , "Einsteinium" , "Fermium" , "Mendelevium" , "Nobelium" , "Lawrencium" , "Rutherfordium" , "Dubnium" , "Seaborgium" , "Bohrium" , "Hassium" , "Meitnerium" , "Darmastadtium" , "Roentgenium" , "Copemicium" , "Nihonium" , "Flerovium" , "Moscovium" , "Livermorium" , "Tennessine" , "Oganesson"};
    int i;
    for(i=0;i<118;i++)
    {
            strcpy(e[i].name,element_names[i]);
    }
}

  
void display()
{
	settextstyle(9,0,3);
	setcolor(11);
    outtextxy(70,70,"H");
    setcolor(YELLOW);
	outtextxy(68,140,"Li");//1
    outtextxy(65,210,"Na");
    outtextxy(70,280,"K"); 
    outtextxy(65,350,"Rb"); //5
    outtextxy(68,490,"Fr"); //7
    outtextxy(65,420,"Cs");
     
    
    setcolor(LIGHTRED);
	outtextxy(136,490,"Ra");
    outtextxy(136,420,"Ba");
    outtextxy(135,210,"Mg");
    outtextxy(138,350,"Sr");
    outtextxy(137,140,"Be");
    outtextxy(137,280,"Ca");
    
	
	setcolor(LIGHTBLUE);
	outtextxy(1257,70,"He");
	outtextxy(1257,140,"Ne");
    outtextxy(1257,210,"Ar");
    outtextxy(1257,280,"Kr");
    outtextxy(1257,350,"Xe");
    outtextxy(1257,420,"Rn");
    
   
    
	setcolor(LIGHTMAGENTA);
	outtextxy(208,280,"Sc");
    outtextxy(280,280,"Ti");
    outtextxy(210,350,"Y");
    outtextxy(348,350,"Nb");
    outtextxy(350,280,"V");
    outtextxy(412,280,"Cr");
    outtextxy(481,280,"Mn");
    outtextxy(560,280,"Fe");
    outtextxy(622,280,"Co");
    outtextxy(694,280,"Ni");
    outtextxy(762,280,"Cu");
    outtextxy(280,350,"Zr");
    outtextxy(412,350,"Mo");
    outtextxy(484,350,"Tc");
    outtextxy(558,350,"Ru");
    outtextxy(621,350,"Rh");
    outtextxy(694,350,"Pd");
    outtextxy(761,350,"Ag");
    outtextxy(212,420,"*");
    outtextxy(280,420,"Hf");
    outtextxy(348,420,"Ta");
    outtextxy(415,420,"W");
    outtextxy(484,420,"Re");
    outtextxy(558,420,"Os");
    outtextxy(630,420,"Ir");
    outtextxy(695,420,"Pt");
    outtextxy(761,420,"Au");
    outtextxy(204,490,"**");
   
    
	
	setcolor(LIGHTGREEN);
	outtextxy(917,140,"B");
    outtextxy(981,140,"C");
    outtextxy(1051,140,"N");
    outtextxy(1128,140,"O");
    outtextxy(1198,140,"F");
    outtextxy(980,210,"Si");
    outtextxy(1052,210,"P");
    outtextxy(1128,210,"S");
    outtextxy(1190,210,"Cl");
    outtextxy(1049,280,"As");
    outtextxy(1120,280,"Se");
    outtextxy(1190,280,"Br");
    outtextxy(1120,350,"Te");
    outtextxy(1198,350,"I");
    outtextxy(1190,420,"At");
   
    
	
	setcolor(CYAN);
	outtextxy(912,210,"Al");
    outtextxy(839,280,"Zn");
    outtextxy(908,280,"Ga");
    outtextxy(975,280,"Ge");
    outtextxy(838,350,"Cd");
    outtextxy(911,350,"In");
    outtextxy(976,350,"Sn");
    outtextxy(1048,350,"Sb");
    outtextxy(839,420,"Hg");
    outtextxy(910,420,"Tl");
    outtextxy(976,420,"Pb");
    outtextxy(1049,420,"Bi");
    outtextxy(1120,420,"Po");
 
    
    setcolor(7);
    outtextxy(277,490,"Rf");
    outtextxy(346,490,"Db");
    outtextxy(413,490,"Sg");
    outtextxy(482,490,"Bh");
    outtextxy(558,490,"Hs");
    outtextxy(621,490,"Mt");
    outtextxy(693,490,"Ds");
    outtextxy(763,490,"Rg");
    outtextxy(832,490,"Cn");
    outtextxy(907,490,"Nh");
    outtextxy(1044,490,"Mc");
    outtextxy(978,490,"Fl");
    outtextxy(1120,490,"Lv");
    outtextxy(1190,490,"Ts");
    outtextxy(1257,490,"Og");
    
    setcolor(4);
    outtextxy(274,575,"La");
    outtextxy(344,575,"Ce");
	outtextxy(414,575,"Pr");
    outtextxy(484,575,"Nd");
    outtextxy(554,575,"Pm");
    outtextxy(624,575,"Sm");
    outtextxy(694,575,"Eu");
    outtextxy(764,575,"Gd");
    outtextxy(834,575,"Tb");
    outtextxy(904,575,"Dy");
    outtextxy(974,575,"Ho");
    outtextxy(1044,575,"Er");
    outtextxy(1114,575,"Tm");
    outtextxy(1184,575,"Yb");
    outtextxy(1254,575,"Lu");
    
    setcolor(5);
    outtextxy(274,645,"Ac");
    outtextxy(344,645,"Th");
	outtextxy(414,645,"Pa");
    outtextxy(489,645,"U");
    outtextxy(554,645,"Np");
    outtextxy(625,645,"Pu");
    outtextxy(692,645,"Am");
    outtextxy(764,645,"Cm");
    outtextxy(834,645,"Bk");
    outtextxy(904,645,"Cf");
    outtextxy(974,645,"Es");
    outtextxy(1044,645,"Fm");
    outtextxy(1114,645,"Md");
    outtextxy(1184,645,"No");
    outtextxy(1254,645,"Lr");
  
  
    setcolor(WHITE);
    outtextxy(72,10,"1");//group no 
    outtextxy(142,80,"2");
    outtextxy(212,220,"3");
    outtextxy(282,220,"4");
    outtextxy(352,220,"5");
	outtextxy(422,220,"6");
	outtextxy(492,220,"7");
	outtextxy(562,220,"8");
	outtextxy(632,220,"9");
	outtextxy(700,220,"10");
    outtextxy(770,220,"11");
    outtextxy(840,220,"12");
    outtextxy(910,80,"13");
    outtextxy(980,80,"14");
    outtextxy(1050,80,"15");
    outtextxy(1120,80,"16");
    outtextxy(1190,80,"17");
    outtextxy(1260,10,"18");
    
    outtextxy(15,70,"1");//period no
    outtextxy(15,140,"2");
    outtextxy(15,210,"3");
    outtextxy(15,280,"4");
    outtextxy(15,350,"5");
    outtextxy(15,420,"6");
    outtextxy(15,490,"7");
}


void table()
{

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