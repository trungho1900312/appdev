//usually in a header file we have 2 parts:
// 1. function drclarations
// 2. constant definotions

// constant definotions
#define ESC 27		// or using hex 0x1B
//make enumeration for fg colors
enum FG {BLACK =30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
#define bg(c) (c+10) 		// this is called macro definition
// making a constant in a name will make your program more meaningfull
// now we can use color names in function setfgcolor()
#define UNICODE
#define BAR "\u2590"
#define BOX "\u2580"

#define DEBUG    // for conditional compliation
typedef struct{  // this struct will define a compound data, which consist of
	int row;	 // the number of rows and the number of colums of our screen
	int col;
}Position;

// function declarations
void setfgcolor(int);
void setcolors(int, int);
void setbgcolor(int);
void resetcolors(void);
void clearscreen(void);
void gotoXY( int, int);
void drawbar(int, int);
void drawrect(int, int, int, int);
Position getscreensize(void);

