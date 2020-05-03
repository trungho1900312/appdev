#appdev for I-IT-1N1&2
---------------------------------------------------------------
--------------Application Development 2020---------------------
---------------------------------------------------------------

General Discription of the Application
	The sound file will be read, the sound waves is analyzed 
	in the file by "Sample Rate", "Duration", "Peaks", "Max
	decibel" of the sound. These informations are sent to PHP
	program as a HTTP POST.

This project is made in course " Application Development 2020" 
for us to understand what tools and measures will be used in a 
software application development.

List of contents
1. Configuration instructions
2. Installation instructions
3. Operating instructions
4. File manifest
5. Copyright and Licensing information
6. Contact information
7. Credits and acknowledgements


1. Configuration instructions
	In this section we should give users information of how to 
	configure the operating system, software environment, libaries,
	etc. to run this application
	There are 3 steps in this section:
	- Create 2 folders which are: "appdev" and "public_html";
	- Convert all the needed sound files into .wav file;
	- Download these sound files into "appdev".

2. Installation instructions
	In this section we should give users information of how to 
	install this application, what files not included in this
	package should ba added. What command/operation should be 
	used to install this application.
	- Go to my own github link which is 
	https://github.com/TrungHo1900312/appdev and download the 
	soure code with the option "Download ZIP";
	- Go to "This PC" on desktop, click on Download section;
	- Copy the ZIP file names "appdev-master", to the "appdev"
	made before;
	- Go to the "appdev" folder, then use right-click on ZIP file
	, choose "Extract here". There are 13 files in total;
	- There are 2 .php files need moving to "public_html";
	- Check and make sure that there are sound files and 11 soure
	should be located in the same folder( "appdev" folder).
	

3. Operating instructions
	In this section we should give users information of how to 
	run this application, e.g., what command-line arguments can 
	be given and what do they mean
	There are several libraries needed: <stdio.h> <unistd.h>
	<i386-linux-gnu/curl/curl.h> <math.h>
	- Go to the application file by using command window and type
	"cd appdev";
	- List whole files in this application by using "ls -l";
	- Compile all the .c files into .o files for excution by using
	" make ";
	- Excute the application by using "./sound";
	- There are analyzation of the sound waves on the top of the 
	screen: Samples Rates, Duration, Peaks. There is a graph shows 
	the value of decibel values.

4. File manifest
	We should list all the files of this application at here with
	short descriptions.

	List of files:
	README.md		this file.
	screen.c		contains screen manipulation functions
	screen.h		contains constant definition and function
					declarations of screen.c
	comm.c 			contains function for client-server communication
	comm.h 			contains constant definition and function
					declarations of comm.c
	makefile		contains four rules: linking rule, compiling
					rule, cleaning rule and archiving rule; used 
					to compile .c file into .o files for excution
	testscreen.c	contains main function to run animation on screen
	tetscurl.c		contains main function to implement curl.
	main.c
	sound.c
	sound.h
	puttysize.php
	test.php

5. Copyright
	This application follows GPlv2 copyright.




