/*

   ***************************************************************
   *    THIS IS THE CODE FOR "FIGHTER BALL Z"              *
   *    CODE BY- SOUMYA RANJAN RAULA, (B.TECH)        *
   *    (+919505109011), soumya.raula@gmail.com              *
   *																						    *
   *    PROJECT NAME: FIGHTER BALL                               *
   *    LANGUAGE USED: C++                                               *
   *                                                                                           *
   *    SCOPE: FOR EVERY ONE WHO THINK ITS EASY   *
   *                   TO                                                                   *
   *	               BREAK BRICKS RATHER THAN LEGS....    *
   ***************************************************************

*/

//-------------  HEADER FILES FOR THE PROGRAM-----------------------------//


#include<iostream.h>     // THE HEADER FOR GRAPHICS LIBRARY FUNCTION...
#include<conio.h>           // FOR THE CONSOLE INPUT AND OUTPUT..
#include<ctype.h>           // FOR  CASE CONVERSION ...
#include<process.h>       // FOR HANDLING THE DIFFERENT PROCESSES...
#include<dos.h>               
#include<stdlib.h>            // FOR STL FUNCTIONS..
#include<graphics.h>       // THE MOST IMP.. FOR IMPLEMEMTING THE GRAPHICS...
#include<stdio.h>              //FOR THE STANDARD INPUT AND OUTPUT FUNCTIONS...

//----------------------------------------------------------------------------------------------//


// --------------  LET THE GAME BEGIN ----------------------------------------------//



//----------------------------------------------------------------------------------------------//
//--------THE WELCOME SCREEN OF THE FIGHTER BALL Z GAME-------//
//-----------------------------------------------------------------------------------------------//

void welcome(void)
{

//----GRAPHIC INITIALIZATION FOR MAIN MENU----//
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\tc\bgi");
//------------------------------------------------------------------//


//----SET FONT FOR THE TITLE-------------------------//
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	setcolor(1);
//----------------------------------------------------------------- //
	rectangle(2,2,639,479);
	rectangle(6,6,634,474);


//---- SET BACKGROUND COLOR ---------------------//
	setbkcolor(2);
//------------------------------------------------------------------//


//---- WELCOME SCREEN WOULD LOOK AND FEEL LIKE THIS ---------------------------//

	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
		setcolor(1);
		outtextxy(20,70,"WELCOME TO FIGHTER BALL Z");
	rectangle(10,160,630,445);
		settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		outtextxy(30,180,"WELCOME TO THE GAME,PLEASE FOLLOW INSTRUCTIONS");
		outtextxy(30,250," -->IN THE NEXT SCREEN YOU HAVE TO FILL THE DETAILS<--");
		outtextxy(100,300,"1.YOUR NAME");
		outtextxy(100,320,"2.YOUR AGE");
		outtextxy(100,340,"3.THE LEVEL YOU WANT TO PLAY");
		outtextxy(90,400,"PLEASE PRESS A KEY TO CONTINUE");

//------------------------------------------------------------------------------------------------------------------//
//----------SOUND FOR THE WELCOME SCREEN--------------------------------------------------//

float sou1[26]={111,254,244,145,145,145,251,122,256,244,214,258,214,244,125,145,254,214,254,215,265,236,265,214,258};

		for(int s=0;s<=24;s++)
			{
			sound(sou1[s]);
			delay(530);

			nosound();
			}

//---------------------------------------------------------------------------------------------------------------------//
//----- CLOSING THE GRAPHICS INITIALIZATION-------//
getch();
closegraph();

//----- END OF WELCOME FUNCTION --------------------//

}


//------  PLAYER DETAILS SCREEN -------------------------//
//------  WHERE HE/SHE HAS TO ENTER------------------//
//------ NAME---- AGE----- LEVEL OF PLAY-----------------//

void welcome2()
{
int age ;
char name[30];
int level;
				cout<<"\n\n\t\tPLEASE ENTER YOUR NAME:";
				cin>>name;
				cout<<"\n\t\tPLEASE ENTER YOUR AGE:";
				cin>>age;
				cout<<"\n\t\tPLEASE ENTER THE LEVEL YOU WISH TO PLAY(1-10):";
				cin>>level;
				cout<<"\n\n\n\n\n\n\n\t\tPRESS A KEY TO CONTINUE......";

}

//------ END OF THE WELCOME 2 FUNCTION --------------//



//------ THE SECOND WELCOME / INSTRUCTION SCREEN OF THE GAME---//

void fightermain(void)
{

//----GRAPHIC INITIALIZATION FOR MAIN MENU----//

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");

//-----------------------------------------------------------------//


//---- MAIN SCREEN BORDER---------------------------//

rectangle(2,2,639,479);
rectangle(4,4,634,474);
//------------------------------------------------------------------//

//----SET FONT FOR THE TITLE-------------------------//
settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);

rectangle(1,115,135,475);

rectangle(0,0,639,100);
rectangle(2,2,637,98);
rectangle(0,0,639,100);

//---- SET BACKGROUND COLOR ----------------------//
setbkcolor(6);
//-------------------------------------------------------------------//



//---- INSTRUCTIONS OF THE GAME-------------------------------------------------------------------------//

	outtextxy(50,40,"FIGHTER BALL Z");
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(10,120,"INSTRUCTIONS");
	outtextxy(8,130," --------- ");
	outtextxy(170,155,"1.PLAY WITH CONFIDENCE...");
	outtextxy(170,175,"2.KEEP YOUR EYE ON THE BULLET... ");
	outtextxy(170,195,"3.USE KEYBOARD TO KEEP LEFT AND RIGHT");
	outtextxy(170,215,"4.USE SPACE TO SHOOT.. ");
	outtextxy(170,235,"5.USE THE MOUSE TO CONTROL THE PADDLE.. ");
	outtextxy(170,255,"6.WANT TO SCORE MUCH DONT MAKE A MISTAKE: ");
	outtextxy(200,275,"--> DONT LOOSE THE BULLET.. ");
	outtextxy(200,295,"--> MAKE EVERY BULLET SHOT COUNT..");
	outtextxy(170,325,"7.KEEP IN MIND YOU HAVE 4 LIFES...  ");
	outtextxy(200,350,"**POINTS PLEASE** ");
	outtextxy(200,375,"-->BREAK A BRICK GET 100");
	outtextxy(200,400,"-->IF YOU LOOSE THE BULLET :1 LIFE IS GONE..");

settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	outtextxy(250,430,"LET THE GAME BEGIN");

//-----------------------------------------------------------------------------------------------------------------------------//



//---- MENU SOUND ----------------------------------------------------------------------------------------------------//
float sou1[20]={122,256,244,214,258,214,244,125,145,254,214,254,215,265,236,265,214,258};

		for(int s=0;s<=19;s++)
			{
			sound(sou1[s]);
			delay(530);

			nosound();
			}



getch();
closegraph();
}

//--------------------------------------------------------------------------------------------------------------------------------//


//----- NOW WE INITIALIZE THE MOUSE -----------------------------------------------------------------------------//

//----- THIS FUNCTION DETECTS THE MOUSE---------------------------------------------------------------------//
void detectmouse()
	{
		union REGS in,out;
		in.x.ax=33;
		int86(0x33,&in,&out);
    }

//--------------------------------------------------------------------------------------------------------------------------------//


//----- TAKES THE CURRENT MOUSE POINTER... POSITION VALUES.....----------------------------------//

void currentmouse( int* a1,int* b1,int* action)
		{
		union REGS in,out;
		in.x.ax=3;
			int86(0x33,&in,&out);
				*action=(int)out.x.bx;
				*a1=(int)out.x.cx;
				*b1=(int)out.x.dx;
		 }

//-------------------------------------------------------------------------------------------------------------------------------//

//--------SHOWS THE CURRENT MOUSE POSITION AND DISPLAYS IT ON SCREEN-----------------//

void showmousetext()
{
union REGS in,out;
in.x.ax=1;
int86(0x33,&in,&out);
}

//--------------------------------------------------------------------------------------------------------------------------------//



void thankyou(void)
{

//----GRAPHIC INITIALIZATION FOR THANK YOU SCREEN ----//
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");
//------------------------------------------------------------------------------- //

//----SET FONT FOR THE TITLE---------------------------------------//
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(1);
//--------------------------------------------------------------------------------//

//---- MAIN SCREEN BORDER------------------------------------------//
rectangle(2,2,639,479);
rectangle(6,6,634,474);
//---------------------------------------------------------------------------------//


//---- SET BACKGROUND COLOR ------------------------------------//
setbkcolor(2);
//---------------------------------------------------------------------------------//

settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
setcolor(1);
	outtextxy(20,70,"THANKS FOR PLAYING");
	rectangle(10,160,630,445);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	outtextxy(30,180,"HOPE YOU PLAY AGAIN");
outtextxy(30,250," GOOD BYE FOR NOW.. SEE YOU SOON..");
	setcolor(4);
	settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);

//-------CREDENTIALS------------------------------------------------------//

	outtextxy(100,280,"-----------------------------");
	outtextxy(100,300,"-> CODED & DESIGNED BY <- ");
	outtextxy(100,320,"-----------------------------");
setcolor(1);
	outtextxy(100,340,"SOUMYA RANJAN RAULA");
	outtextxy(100,360,"+919505109011");
	outtextxy(100,380,"email: soumya.raula@gmail.com");
	outtextxy(90,400," -----------------------------");

getch();
closegraph();
}
//-------END OF THANK YOU SCREEN---------------------------------//

//------ THE GAME OVER SCREEN STARTS HERE---------------//

void gameover(void)
{

//----GRAPHIC INITIALIZATION FOR MAIN MENU--------------------//
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");

//----SET FONT FOR THE TITLE----------------------------------------//
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	setcolor(1);

	rectangle(2,2,639,479);
	rectangle(6,6,634,474);


//---- SET BACKGROUND COLOR -------------------------------------//
setbkcolor(4);
//----------------------------------------------------------------------------------//

settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	setcolor(255);
	outtextxy(120,160,"************************");
	outtextxy(120,200,"*  GAME OVER !!! *");
	outtextxy(120,240,"************************");

settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	outtextxy(220,400,"PRESS A KEY TO CONTINUE TO EXIT SCREEN");
getch();
closegraph();
}


//-----------------------------------------------------------------------------------//


main()
{



//----------------------------------------------------------------------------------//
//------  ALL THE GAME INITIALIZATION STARTS HERE------------//
//-----------------------------------------------------------------------------------//

int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");


detectmouse();
showmousetext();
welcome();
welcome2();
fightermain();

int gd1=DETECT,gm1;
initgraph(&gd1,&gm1,"c:\tc\bgi");


setbkcolor(4);
int maxx=getmaxx();
int maxy=getmaxy();
int midx=maxx/2;
int midy=maxy/2;

setcolor(1);
//------ FIRST LINE OF BRICKS----------------------//

   rectangle(80,80,140,95);
   rectangle(80,100,140,115);
   rectangle(80,120,140,135);
   rectangle(80,140,140,155);
   rectangle(80,160,140,175);

//------- SECOND BLOCK OF THE BRICKS---------//
   rectangle(150,80,210,95);
   rectangle(150,100,210,115);
   rectangle(150,120,210,135);
   rectangle(150,140,210,155);
   rectangle(150,160,210,175);

  //------- THIRD BLOCK OF THE BRICKS---------//
   rectangle(220,80,280,95);
   rectangle(220,100,280,115);
   rectangle(220,120,280,135);
   rectangle(220,140,280,155);
   rectangle(220,160,280,175);


   //------- FORTH BLOCK OF THE BRICKS---------//
   rectangle(290,80,350,95);
   rectangle(290,100,350,115);
   rectangle(290,120,350,135);
   rectangle(290,140,350,155);
   rectangle(290,160,350,175);

   //-------FIFTH BLOCK OF BRICKS------------------//

   rectangle(360,80,420,95);
   rectangle(360,100,420,115);
   rectangle(360,120,420,135);
   rectangle(360,140,420,155);
   rectangle(360,160,420,175);


   //------- SIXTH BLOCK OF THE BRICKS---------//
   rectangle(430,80,490,95);
   rectangle(430,100,490,115);
   rectangle(430,120,490,135);
   rectangle(430,140,490,155);
   rectangle(430,160,490,175);

setcolor(255);
//-------------------------------------//
rectangle(2,2,639,479);
//----------------------------//
rectangle(4,4,635,475);
//---------SOUND2-------------//


//-----------------------------------------//


detectmouse();
showmousetext();


char *paddle;
char *ball;



unsigned int size;

//--------INITIALIZION OF PADDLE ------//



maxx=getmaxx();
maxy=getmaxy();

midx=maxx/2;
midy=maxy/2;

setbkcolor(4);		  // cout<<maxx<<maxy;
//---------RECTANGLE----------//

rectangle(2,2,639,479);
//----------------------------//
rectangle(4,4,635,475);

settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
rectangle(2,2,637,40);
outtextxy(525,10,"SCORE");
outtextxy(590,10,"ZERO");

//---------SOUND2------------------------------------------------------------------------------------------------------//

float sou1[20]={122,256,265,214,258,214,114,125,145,145,214,254,215,265,236,265,214,258};

for(int s=0;s<=19;s++)
{

sound(sou1[s]);
delay(330);
nosound();
}

//-----------------------------------------------------------------------------------------------------------------------------//

//------ BALL DRAWING --------------------------------------------------------------------------------------------------//

circle(midx,maxy-15-12,7);

//--- MEMORY ALLOCATION OF BALL--------------------------------------------------------------------------------//

size=imagesize(midx-25,maxy-23-12,midx+12,maxy-8);
ball= ((char*)malloc(size));

//--- GET THE IMAGE OF THE BALL -----------------------------------------------------------------------------------//
getimage(midx-25,maxy-23-12,midx+12,maxy-8,ball);

//----- PADDLE DRAWING------------------------------------------------------------------------------------------------//

rectangle(midx-45,maxy-6-12,midx+25,maxy-8);

//----- MEMORY ALLOCATON OF PADDLE---------------------------------------------------------------------------//


size=imagesize(midx-22,maxy-18,midx+12,maxy-6);
paddle = ((char*)malloc(size));

//---------------------------------------------------------------------------------------------------------------------------------//
//--- ---------------------------------GET THE IMAGE OF PADDLE ----------------------------------------------------//

getimage(midx-22,maxy-18-18+1,midx+12,maxy-6-8,paddle);

//---------------------------------------------------------------------------------------------------------------------------------//

//----- -----------------------------THIS IS WHERE THE CODE STARTS --------------------------------------------//

 // --- POSITION OF BALL ----------------------------//
 int ballx=midx-25;
 int bally=maxy-23-12;
 int paddx=midx-45;
 int paddy=maxy-6-12;
 int opaddx=paddx;
 int opaddy=paddy;
 //------------------------------------------------------------//


 int xaxis=1;
 int yaxis=-1;

 int status=0;
 int oballx,obally;

//-------- PRESS S TO START THE GAME-----------------//
 char input;
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
 outtextxy(100,15,"PRESS S AND PRESS ENTER TO START");
 cin>>input;

 //-------------------IF A KEY IS PRESSED ------------//


//---- GIVES THE MOVEMENT OF THE BALL-------//

 while('s')
 {

 //-------CURRENT POSITION OF THE BALL--------//
 oballx=ballx;
 obally=bally;
//------------------------------------------------------------------//


//------- UPDATE BALL--------------------------------------//


 ballx=ballx+xaxis;
 bally=bally+yaxis;

// --------RIGHT BOUND  SEND LEFT-------------------//
 if( ballx > (maxx-25-1))
   {
   sound(5);
   ballx=maxx-25-1;
   xaxis=-xaxis;
   line(maxx,0,maxx,50);
   }
 // top bound

  if(bally<1)
  {
  bally=1;
  yaxis=-yaxis;
  line(0,0,maxx,0);
  }

 //left boundary

 if(ballx<4)
 {
 bally=1;
 xaxis=-xaxis;
 line(3,3,3,440);
 }

 //BOTTOM

 if( bally > (maxy-25-1))
   {
   sound(5);
   bally=maxy-25-1;
   yaxis=-yaxis;
   line(maxx,0,maxx,50);
   }

 // BRICKS

  if((ballx==80&&ballx==490)&&(bally==80&&bally==490))
    {
    xaxis=-xaxis;
    yaxis=-yaxis;
    }
 if(input=='e')
    {
    gameover();
    thankyou();
   }

/*
 points-=100;
 gotoxy(500,50);
 cout<<points;
 */
 delay(7);

putimage(oballx,obally,ball,OR_PUT);
putimage(oballx,obally,ball,XOR_PUT);
putimage(ballx,bally,ball,XOR_PUT);


}




gameover();
thankyou();
getch();
closegraph();
}