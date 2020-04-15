// we test function
#include <stdio.h>
#include <unistd.h>
#include "screen.h"
#include "comm.h"

int main(void){
	Position cur = getscreensize();		// get screen size
	char postdata[100];
	sprintf(postdata, "row=%d&col=%d&id=e1900312", cur.row, cur.col);
	sendpost(URL, postdata);
	gotoXY(1,1);
	printf("Screen size: row-%d, col-%d\n", cur.row ,cur.col);
	printf("Today we will make some animations. Press any key to continue\n");
	getchar();
	getchar();	//waiting for the user to press a key
	int ff,bb;
	float step = (float)cur.col/cur.row;
	for (int i =1; i<=cur.row; i++){
		ff=(i+1)%8+BLACK;
		bb=(i+2)%8+BLACK;
		setcolors(ff,bg(bb));
		clearscreen();
		drawrect(10,10,5,30);
		gotoXY(cur.row-i, (i-1)*step+1);
		printf("HELLO\n");
		usleep(400000);
	}
	getchar();
	resetcolors();
	clearscreen();
	printf("Color is set back to default\n");
	getchar();
/*	for (int i=0;i<17;i++){
	   setcolors(RED,GREEN);
	   clearscreen();
	   gotoXY(1,i+1);
	   printf("HeLLo\n");
	   usleep(500000);
	}
	for (int i =1; i<=17; i++){
	  setcolors(RED,GREEN);
	  clearscreen();
	  gotoXY(i, 17);
	  printf("HeLLo\n");
	  usleep(500000);
	}
	for (int i=17; i>=1; i--){
	  setcolors(RED,GREEN);
	  clearscreen();
	  gotoXY(17, i);
	  printf("HeLLo\n");
	  usleep(500000);
	}
	for (int i= 17; i>=1; i--){
	  setcolors(RED,GREEN);
	  clearscreen();
	  gotoXY(i,1);
	  printf("HeLLo\n");
	  usleep(500000);
	}
*/
/*	for(int i=0; i<25; i++){
	setcolors(GREEN,BLACK);
	clearscreen();
	gotoXY(25-i, i);
	printf("Hello\n");
	setcolors(RED,BLACK);
	gotoXY(i+1,i+1);
	printf("\u2580\n");
	usleep(300000);
	}
	for(int i=0; i<25; i++){
	setcolors(GREEN,BLACK);
	clearscreen();
	gotoXY(i,i+26);
	printf("Hello\n");
 	setcolors(RED,BLACK);
	gotoXY(25-i,i+25);
	printf("\u2580\n");
	usleep(300000);
	}
*/	
  /* printf("The following message will be in BLUE color\n");
   gotoXY(14,35);
   setfgcolor(BLUE);
   printf("e1900312\n");
   getchar();
   drawbar(30, 30);
   drawbar(50, 30);

   getchar();
   resetcolors();
   printf("This line is back to default color\n");*/
}



