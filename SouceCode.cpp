# include "iGraphics.h"

int background_x = 0,  background_y= 0;

int ballPosition_x = 434, ballPosition_y = 40;
int ballDirection = 1;

int randomNumber;

int stickPosition_x = 410 , stickPosition_y = 0 ;

int ballMidpoint;

bool showBrick1 = true, showBrick2 = true, showBrick3 = true,showBrick4 = true,showBrick5 = true,showBrick6 = true;
bool showBrick7 = true,showBrick8 = true,showBrick9 = true,showBrick10 = true, showBrick11 = true,showBrick12 = true,showBrick13 = true;
bool showBrick14 = true,showBrick15 = true,showBrick16 = true,showBrick17 = true,showBrick18 = true,showBrick19 = true,showBrick20 = true;
bool showBrick21 = true,showBrick22 = true,showBrick23 = true,showBrick24 = true,showBrick25 = true,showBrick26 = true,showBrick27 = true;
bool showBrick28 = true,showBrick29 = true,showBrick30 = true,showBrick31 = true,showBrick32 = true,showBrick33 = true,showBrick34 = true;
bool showBrick35 = true,showBrick36 = true,showBrick37 = true,showBrick38 = true,showBrick39 = true,showBrick40 = true,showBrick41 = true;
bool showBrick42 = true,showBrick43 = true, showBrick44 = true, showBrick45 = true;
bool showBrick46 = true,showBrick47 = true ;



void iDraw()
{


	iClear();

	iShowBMP(background_x, background_y, "derelict_house-wide.bmp");

	iSetColor(10, 280, 300);
	iFilledCircle(ballPosition_x, ballPosition_y, 12);

	iSetColor(155, 250, 200);
	iFilledRectangle(stickPosition_x , stickPosition_y, 96, 16);


	//////////// FOR WALL


	iSetColor(255, 300, 100);
	if(showBrick46 == true){
	   iFilledRectangle( 300 , 270, 10, 360);
	}

	if(showBrick47 == true){
	iFilledRectangle( 600 , 270, 10, 360);
	}

	             /////////////////////////////////    1st box ( DEEP pest)   ////////////////////////

    iSetColor(155, 300, 155);
	if(showBrick1 == true){
	   iFilledRectangle( 830 , 610, 64,16 );
	}
	
	if(showBrick2 == true){
	iFilledRectangle( 760 , 610, 64, 16);

	}

	if(showBrick3 == true){
	iFilledRectangle( 690 , 610, 64, 16);
	}

	if(showBrick4 == true){
	iFilledRectangle( 620 , 610, 64, 16);

	}
	          //////////// 2nd row

	if(showBrick5 == true){
	iFilledRectangle( 762 , 540, 64, 16);
	}

	if(showBrick6 == true){
	iFilledRectangle( 692 , 540, 64, 16);
	}

	          //////////// 3rd row

	if(showBrick7 == true){
	iFilledRectangle( 762 , 470, 64, 16);
	}

	if(showBrick8 == true){
	iFilledRectangle( 692 , 470, 64, 16);
	}
	         ///////// 4th row

	if(showBrick9 == true){
	iFilledRectangle( 762 , 400, 64, 16);
	}
	
	if(showBrick10 == true){
	iFilledRectangle( 692 , 400, 64, 16);
	}

	            ///////// 5th row

	if(showBrick11 == true){
	   iFilledRectangle( 830 , 330, 64, 16);
	}
	
	if(showBrick12 == true){
	iFilledRectangle( 760 , 330, 64, 16);
	}
	
	if(showBrick13 == true){
	iFilledRectangle( 690 , 330, 64, 16);
	}

	if(showBrick14 == true){
	iFilledRectangle( 620 , 330, 64, 16);
	}



	               //////////////////////////////////  2nd box (YELLOW)  /////////////////////////

	iSetColor(255, 300, 100);
	if(showBrick15 == true){
	iFilledRectangle( 538 , 610, 58, 16);
	}

	if(showBrick16 == true){
	iFilledRectangle( 483 , 610, 50, 16);
	}

	if(showBrick17 == true){
	iFilledRectangle( 380 , 610, 50, 16);
	}

	if(showBrick18 == true){
	iFilledRectangle( 315 , 610, 58, 16);
	}

	            ////////////// 2nd row

	if(showBrick19 == true){
	iFilledRectangle( 538 , 540, 58, 16);
	}

	if(showBrick20 == true){
	iFilledRectangle( 483 , 540, 50, 16);
	}

	if(showBrick21 == true){
	iFilledRectangle( 380 , 540, 50, 16);
	}

	if(showBrick22 == true){
	iFilledRectangle( 315 , 540, 58, 16);
	}

	              /////////// 3rd row
	if(showBrick23 == true){
	iFilledRectangle( 538 , 470, 58, 16);
	}

	if(showBrick24 == true){
	iFilledRectangle( 483 , 470, 50, 16);
	}

	if(showBrick25 == true){
	iFilledRectangle( 380 , 470, 50, 16);
	}

	if(showBrick26 == true){
	iFilledRectangle( 315 , 470, 58, 16);
	}

	            ////// 4th row

	if(showBrick27 == true){
	iFilledRectangle( 538 , 400, 58, 16);
	}

	if(showBrick28 == true){
	iFilledRectangle( 483 , 400, 50, 16);
	}

	if(showBrick29 == true){
	iFilledRectangle( 380 , 400, 50, 16);
	}

	if(showBrick30 == true){
	iFilledRectangle( 315 , 400, 58, 16);
	}

	       //////// 5th row

	if(showBrick31 == true){
	iFilledRectangle( 538 , 330, 58, 16);
	}

	if(showBrick32 == true){
	iFilledRectangle( 483 , 330, 50, 16);
	}

	if(showBrick33 == true){
	iFilledRectangle( 380 , 330, 50, 16);
	}

	if(showBrick34 == true){
	iFilledRectangle( 315 , 330, 58, 16);
	}


	                //////////////////////////////////        3rd box ( DARK blue)    ///////////////

	iSetColor(00, 0, 500);
	if(showBrick35 == true){
	iFilledRectangle( 230 , 610, 64, 16);
	}

	if(showBrick36 == true){
	iFilledRectangle( 5 , 610, 64, 16);
	}

	             //////////////// 2nd row

	if(showBrick37 == true){
	iFilledRectangle( 170 , 540, 64, 16);
	}

	if(showBrick38 == true){
	iFilledRectangle( 60 , 540, 64, 16);
	}

	                  ////////3rd row

	if(showBrick39 == true){
	iFilledRectangle( 115 , 470, 64, 16);
	}

	           ////// 4th row
	if(showBrick40 == true){
	iFilledRectangle( 170 , 400, 64, 16);
	}

	if(showBrick41 == true){
	iFilledRectangle( 60 , 400, 64, 16);
	}

	        ////////// 5th row

	if(showBrick42 == true){
	iFilledRectangle( 230 , 330, 64, 16);
	}

	if(showBrick43 == true){
	iFilledRectangle( 155 , 330, 64, 16);
	}

	if(showBrick44 == true){
	iFilledRectangle( 80 , 330, 64, 16);
	}
	    
	if(showBrick45 == true){
	iFilledRectangle( 5 , 330, 64, 16);
	}
	    




	////////////////////////////

	iSetColor(255, 255, 305);
	iText(30, 30, "Press p for pause, r for resume, END for exit.");
}


void iMouseMove(int mx, int my)
{
	//place your codes here
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}


void iKeyboard(unsigned char key)
{
	if(key == 'p')
		iPauseTimer(0);
	
	if(key == 'r')
	   iResumeTimer(0);
	
}



void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}

	if(key == GLUT_KEY_LEFT && stickPosition_x >= 1)
	{
		stickPosition_x -=15;
	}
	if(key == GLUT_KEY_RIGHT && stickPosition_x <= 800 )
	{
		stickPosition_x +=15;
	}
	
}



void ballMovement(){

	if (ballPosition_y <= -20)
		exit(0);

	////////////  1st box (DEEP pest color)........1st row (DEEP pest color)   ///////////////


		else if(ballPosition_x > 830 && ballPosition_x < 894 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick1 = false;
	}

		else if(ballPosition_x > 760 && ballPosition_x < 824 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick2 = false;
	}

        else if(ballPosition_x > 690 && ballPosition_x < 754 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick3 = false;
	}

       else if(ballPosition_x > 620 && ballPosition_x < 684 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick4 = false;
	}

	   //////////////  2nd row

	   	else if(ballPosition_x > 762 && ballPosition_x < 826 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick5 = false;
	}

		else if(ballPosition_x > 692 && ballPosition_x < 756 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick6 = false;
	}

          /////////////    3rd row

	   	else if(ballPosition_x > 762 && ballPosition_x < 826 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick7 = false;
	}

		else if(ballPosition_x > 692 && ballPosition_x < 756 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick8 = false;
	}
		//////////// 4th row

		else if(ballPosition_x > 762 && ballPosition_x < 826 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick9 = false;
	}

		else if(ballPosition_x > 692 && ballPosition_x < 756 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick10 = false;
	}

		//////////// 5th row 
     
     	else if(ballPosition_x > 830 && ballPosition_x < 894 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick11 = false;
	}

		else if(ballPosition_x > 760 && ballPosition_x < 824 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick12 = false;
	}

        else if(ballPosition_x > 690 && ballPosition_x < 754 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick13 = false;
	}

       else if(ballPosition_x > 620 && ballPosition_x < 684 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick14 = false;
	}

	   //////////////////////////////    2nd box ( YELLOW )   /////////////////////

	   	else if(ballPosition_x > 538 && ballPosition_x < 596 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick15 = false;
	}

		else if(ballPosition_x > 483 && ballPosition_x < 533 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick16 = false;
	}

        else if(ballPosition_x > 380 && ballPosition_x < 430 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick17 = false;
	}

       else if(ballPosition_x > 315 && ballPosition_x < 373 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick18 = false;
	}

	   //////////// 2nd row

	    else if(ballPosition_x > 538 && ballPosition_x < 596 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick19 = false;
	}

		else if(ballPosition_x > 483 && ballPosition_x < 533 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick20 = false;
	}

        else if(ballPosition_x > 380 && ballPosition_x < 430 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick21 = false;
	}

       else if(ballPosition_x > 315 && ballPosition_x < 373 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick22 = false;
	}

	   //////////// 3rd row

    	else if(ballPosition_x > 538 && ballPosition_x < 596 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick23 = false;
	}

		else if(ballPosition_x > 483 && ballPosition_x < 533 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick24 = false;
	}

        else if(ballPosition_x > 380 && ballPosition_x < 430 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick25 = false;
	}

       else if(ballPosition_x > 315 && ballPosition_x < 373 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick26 = false;
	}

	   ///////////// 4th row

	   else if(ballPosition_x > 538 && ballPosition_x < 596 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick27 = false;
	}

		else if(ballPosition_x > 483 && ballPosition_x < 533 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick28 = false;
	}

        else if(ballPosition_x > 380 && ballPosition_x < 430 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick29 = false;
	}

       else if(ballPosition_x > 315 && ballPosition_x < 373 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick30 = false;
	}

	   ///////////  5th row

	   else if(ballPosition_x > 538 && ballPosition_x < 596 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick31 = false;
	}

		else if(ballPosition_x > 483 && ballPosition_x < 533 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick32 = false;
	}

        else if(ballPosition_x > 380 && ballPosition_x < 430 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick33 = false;
	}

       else if(ballPosition_x > 315 && ballPosition_x < 373 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick34 = false;
	}

	   ///////////////////////////  3rd box (DARK blue)  ////////////////////

	   else if(ballPosition_x > 230 && ballPosition_x < 294 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick35 = false;
	}

		else if(ballPosition_x > 5 && ballPosition_x < 69 && (ballPosition_y > 610 && ballPosition_y < 626)){
			showBrick36 = false;
	}

		///////////// 2nd row

		else if(ballPosition_x > 170 && ballPosition_x < 234 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick37 = false;
	}

		else if(ballPosition_x > 60 && ballPosition_x < 124 && (ballPosition_y > 540 && ballPosition_y < 556)){
			showBrick38 = false;
	}
		//////// 3rd row

		else if(ballPosition_x > 115 && ballPosition_x < 179 && (ballPosition_y > 470 && ballPosition_y < 486)){
			showBrick39 = false;
	}

        //////// 4th row

		else if(ballPosition_x > 170 && ballPosition_x < 234 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick40 = false;
	}

		else if(ballPosition_x > 60 && ballPosition_x < 124 && (ballPosition_y > 400 && ballPosition_y < 416)){
			showBrick41 = false;
	}

		///////// 5th row

		else if(ballPosition_x > 230 && ballPosition_x < 294 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick42 = false;
	}

		else if(ballPosition_x > 155 && ballPosition_x < 219 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick43 = false;
	}

        else if(ballPosition_x > 80 && ballPosition_x < 144 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick44 = false;
	}

       else if(ballPosition_x > 5 && ballPosition_x < 69 && (ballPosition_y > 330 && ballPosition_y < 346)){
			showBrick45 = false;
	}

	/////////////////////////////////////////////// for wall reflection  //////////////////////////////////////////////

	
	 else if(ballPosition_x > 300 && ballPosition_x < 310 && (ballPosition_y > 270 && ballPosition_y < 630)){
			if(ballDirection == 2)
			ballDirection = 1;

		else if(ballDirection == 4)
			ballDirection = 3;
	}

		/////

	else if(ballPosition_x == 310 && (ballPosition_y > 270 && ballPosition_y < 630)){
		if(ballDirection == 1)
			ballDirection = 2;

		else if(ballDirection == 3)
			ballDirection = 4;
	}

		//////////

		else if(ballPosition_x > 600 && ballPosition_x < 610 && (ballPosition_y > 270 && ballPosition_y < 630)){
			if(ballDirection == 2)
			ballDirection = 1;

		else if(ballDirection == 4)
			ballDirection = 3;
	}
		/////////

	else if(ballPosition_x == 610 && (ballPosition_y > 270 && ballPosition_y < 630)){

			if(ballDirection == 1)
			ballDirection = 2;

		else if(ballDirection == 3)
			ballDirection = 4;
	}


                    ///////////////////////////////////// stickPosition 

	if (ballPosition_y == 16){
		ballMidpoint = ballPosition_x + 16;

	if (ballMidpoint >= stickPosition_x && ballMidpoint <= stickPosition_x + 24)
		ballDirection = 1;

	else if (ballMidpoint >= stickPosition_x + 72 && ballMidpoint <= stickPosition_x + 96)
		ballDirection = 2;

	else if (ballMidpoint > stickPosition_x + 24 && ballMidpoint < stickPosition_x + 72)
		ballDirection = 5;
	}

	     //////////////////////////////////////////////////

	if (ballPosition_x <= 1){

		if(ballDirection == 1)
			ballDirection = 2;

		else if(ballDirection == 3)
			ballDirection = 4;
	}

	else if (ballPosition_x >= 890){

		if(ballDirection == 2)
			ballDirection = 1;

		else if(ballDirection == 4)
			ballDirection = 3;
	}


	else if (ballPosition_y >= 620){

		randomNumber = rand() % 3 + 1;

		if(randomNumber == 1)
			ballDirection = 3;

		else if(randomNumber == 2)
			ballDirection = 4;

		else 
			ballDirection = 6;
	}



	if (ballDirection == 1){
		ballPosition_x -= 4;
		ballPosition_y += 4;
	}

	else if (ballDirection == 2){
		ballPosition_x += 4;
		ballPosition_y += 4;
	}

      else if (ballDirection == 3){
		ballPosition_x -= 4;
		ballPosition_y -= 4;
	}

     else if (ballDirection == 4){
		ballPosition_x += 4;
		ballPosition_y -= 4;
	}

	 else if (ballDirection == 5){
		ballPosition_y += 4;
	}

	 else if (ballDirection == 6){
		ballPosition_y -= 4;
	}


}


int main()
{
	
	iSetTimer(1, ballMovement);

	srand(time(NULL));

	PlaySound("01-sdxb_intro", NULL,SND_LOOP || SND_ASYNC);

	iInitialize(900, 630, "EASY DX BALL");
	return 0;
}
