#include<iostream> 
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 
using namespace std;


    // Tik tok toe game
    // global value for board array for tik tik toe
char gameBoard[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char playerTurn='X';
int row,column;
bool drawCondition=false;


     // global var for kbc
char nameOfUser[50],inputValue[11];   // name and ch, kbc
        int var=0;   //x,kbc
        
        
        
// global for zombee
         char enter;

    // game stats
                 int playeralive = true;
                 int playerskill = 9;
                 int playerscore = 1;
                 string playername = "";
                 int zombiecount = 0;
                 int zombieskilled = 0;

void disp_gameBoard()      //  function to make board
{
    system("cls");   	  // two clear the previous screen
    //	heading
    cout<<"\t\t\t*****************************************************************************\n";
    cout<<"\t\t\t*                                                                           *\n";
	cout<<"\t\t\t*                T i c k   C r o s s   G a m e                              *\n";
    cout<<"\t\t\t*                                                                           *\n"; 
    cout<<"\t\t\t*****************************************************************************\n";
	//  players name
	cout<<"\tPlayer1 [ X ] \n\n\tPlayer2 [ 0 ] \n\n\n\n";  
	
	// to display board or the lines
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<gameBoard[0][0]<<"  |  "<<gameBoard[0][1]<<"  |  "<<gameBoard[0][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<gameBoard[1][0]<<"  |  "<<gameBoard[1][1]<<"  |  "<<gameBoard[1][2]<<"  \n"; 
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<gameBoard[2][0]<<"  |  "<<gameBoard[2][1]<<"  |  "<<gameBoard[2][2]<<"  \n";
	cout<<"\t\t     |     |     \n";
}

void player_turn()
   {
   	
   	int choice;  	
   	if(playerTurn=='X')
   	cout<<"\n\tPlayer 1 [x] turn:";   	// to take the input from user
   	
   	if(playerTurn=='O')
   	cout<<"\n\tPlayer 2 [O] turn:";
   	
	cin>>choice;
	
	switch(choice)          // to put X at perticular code
	  {	    
	     case 1: row=0; column=0; break;
	     case 2: row=0; column=1; break;
	     case 3: row=0; column=2; break;
	     case 4: row=1; column=0; break;
	     case 5: row=1; column=1; break;
	     case 6: row=1; column=2; break;
	     case 7: row=2; column=0; break;
	     case 8: row=2; column=1; break;
	     case 9: row=2; column=2; break;
	     default :
		 cout<<"Invalid choice\n";	  	  	  	  	  	  	  	    	  	  	
	  }
	
	if(playerTurn=='X' && gameBoard[row][column]!='X' && gameBoard[row][column]!='O')
	  {
	  	gameBoard[row][column]='X';
	  	playerTurn='O';
	  }
	else if (playerTurn=='O' && gameBoard[row][column]!='X' && gameBoard[row][column]!='O')
	  {
	  	gameBoard[row][column]='O';
	  	playerTurn='X';
	  }
    else
    {
    	cout<<"BOX already filled!\n Please try again!!\n\n";
    	player_turn();
	}
	
	    disp_gameBoard();  // to the board after putting 'X'
    }
   	  
   	  
   	
	   bool game_over()
	   {
	   	// check win
	   	for(int i=0;i<3;i++)
	   	if((gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][0] == gameBoard[i][2] )|| (gameBoard[0][i] == gameBoard[1][i] && gameBoard[i][0] == gameBoard[i][2]))
	   	return false;  
	   	
	   	if(gameBoard[0][0]==gameBoard[1][1] && gameBoard[0][0]==gameBoard[2][2] || gameBoard[0][2]==gameBoard[1][1] && gameBoard[0][2]==gameBoard[2][0])
	   	return false;
	   	
	   	// if there is any box not filled
	   	for(int i=0;i<3;i++)
	   	for(int j=0;j<3;j++)
	   	if(gameBoard[i][j] != 'X' && gameBoard[i][j] != 'o')
	   	return true;
	   	
	   	
	   	drawCondition= true;
	   	return false;
	   }  
	   
	   
	   
	   
  // KBC GAME
    void KBC(){
    	do
    {
    	system("cls");   	  // two clear the previous screen
    cout<<"\t\t\t*****************************************************************************\n";
    cout<<"\t\t\t*                                                                           *\n";
    cout<<"\t\t\t*                       Mai hun Amitabha bacchan                            *\n";
    cout<<"\t\t\t*                  Swagat hai aapka Kaun Banega Crorepati mein…             *\n";
    cout<<"\t\t\t*                    Chaliye is Khel ko aage Badhaya jaaye                  *\n";
    cout<<"\t\t\t*                                                                           *\n";
    cout<<"\t\t\t*****************************************************************************\n";
     
        cout<<"\n\n\t\t\t Enter your name :";
        cin>>nameOfUser;
        system("cls"); 
        cout<<"\n\t\t\t Enter answer in Form of 'a','b' and'c'only.";    // Instructions For user
        cout<<endl;
        cout<<endl;
        cout<<"\n Q1.Who is the father of 'C' language ?";      // first Question
        cout<<"\n a.Dennis Ritchie";
        cout<<"\n b.Bjarne Stroustrup";
        cout<<"\n c.Linus Torvalds";
        cin>>inputValue[1];
        
        if(inputValue[1]=='a')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else                                       // condition if answer is wrong
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;                              // goto calling statement
        }
        cout<<"\n";
        
        cout<<"\n Q2.Which of the following is the correct syntax of including a user defined header files in C++?";    // 2nd
        cout<<"\n a.#include <userdefined.h>";
        cout<<"\n b.#include <userdefined>";
        cout<<"\n c.#include “userdefined";
        cin>>inputValue[2];
        if(inputValue[2]=='c')
        {
           var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
		
            cout<<"\n Sorry wrong answer.";
            goto abc; 
			}                        // goto calling statement
        cout<<"\n";
        cout<<"\n Q3. Which of the following is a correct identifier in C++?";                  // 3rd
        cout<<"\n a.7var_name";
        cout<<"\n b.VAR_1234";
        cout<<"\n c.$var_name";
        cin>>inputValue[3];
        if(inputValue[3]=='b')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\nSorry wrong answer.";
            goto abc;                       // goto calling statement
        }
        cout<<"\n";
        cout<<"\n Q4.Which of the following is called address operator?";                          //4 th  
        cout<<"\n a.*";
        cout<<"\n b. &";
        cout<<"\n c. _";
        cin>>inputValue[4];
        if(inputValue[4]=='b')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"Sorry wrong answer.";
            goto abc;                       // goto calling statement
        }
         cout<<"\n";
        cout<<"\n Q5. Which of the following is used for comments in C++?";                        //5 th
        cout<<"\n a.both // comment or /* comment */";
        cout<<"\n b./* comment */";
        cout<<"\n c.// comment */";
        cin>>inputValue[5];
        if(inputValue[5]=='a')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;                        // goto calling statement
        }
        cout<<"\n";
        cout<<"\n Q6.What are the actual parameters in C++?";                       //6th
        cout<<"\n a.Parameters with which functions are called";
        cout<<"\n b.Parameters which are used in the definition of a function";
        cout<<"\n c.Variables other than passed parameters in a function";
        cin>>inputValue[6];
        if(inputValue[6]=='a')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;                 // goto calling statement
        }
         cout<<"\n";
        cout<<"\n Q7.What are the formal parameters in C++?";                          //7th
        cout<<"\n a. Parameters with which functions are called";
        cout<<"\n b. Variables other than passed parameters in a function";
        cout<<"\n c.Parameters which are used in the definition of the function";
        cin>>inputValue[7];
        if(inputValue[7]=='c')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;                  // goto calling statement
        }
         cout<<"\n";
        cout<<"\n Q8. Which function is used to read a single character from the console in C++?";                //8th
        cout<<"\n a.getline(ch)";
        cout<<"\n b.cin.get(ch)";
        cout<<"\n c.read(ch)";
        cin>>inputValue[8];
        if(inputValue[8]=='b')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;                       // goto calling statement
        }
         cout<<"\n";
        cout<<"\n Q9.Which function is used to write a single character to console in C++?";                         //9th
        cout<<"\n a.cout.put(ch)";
        cout<<"\n b.cout.putline(ch)";
        cout<<"\n c.write(ch)";
        cin>>inputValue[9];
        if(inputValue[9]=='a')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto abc;                      // goto calling statement
        }
         cout<<"\n";
        cout<<"\n Q10.What are the escape sequences?";                          //10th
        cout<<"\n a.Set of characters that are used in the name of the main function of the program";
        cout<<"\n b.Set of characters that whose use are avoided in C++ programs";
        cout<<"\n c.Set of characters that convey special meaning in a program";
        cin>>inputValue[10];
        if(inputValue[10]=='c')
        {
            var=var+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<var;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;           // goto calling statement
        }
        
        
        abc:                   // statement if goto is called
        if(var==100)
        {
            cout<<"\n No cheating...... "<<nameOfUser<<" You have done this earlier also.";
            break;
        }
        if(var==90)
        {
            cout<<"\n "<<nameOfUser<<" You are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(var==80)
        {
            cout<<"\n "<<nameOfUser<<" You are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==var||var==70||var==60)
        {
            cout<<"\n "<<nameOfUser<<" you are average";
            cout<<"\n Your Score is "<<var<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(var<=40)
            cout<<"\n No use........ Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>inputValue[11];
    }
    while(inputValue[11]=='Y'||inputValue[11]=='y');
    
    
}


// zombie game


 int createzombie() 
			   {
			
                   if (rand() % 67 < 10)
                  return 11;

               else
                    return rand() % 10 + 1;
            }
  

int zombee()
{
     	system("cls");
	 // title
                cout << "Welcome to Zombie War." << endl << "Press [ENTER] to start.";
                cin.get();

    // player name
                cout << "Please enter your name: ";
                cin >> playername;

    // ask how many zombies
                cout << "How many zombies do you wish to fight? ";
                cin >> zombiecount;

                cout << "Get ready to fight for  your life, " << playername << "!" << endl;

    // main game loop
                while (playeralive && zombieskilled < zombiecount) {
        // create a random zombie
                int zombieskill = createzombie();

        // battle sequence
                if (zombieskill > 10) {
                       cout << endl << "Here comes a huge zombie!" << endl;
        }
                else {
                    cout << endl << "Here comes zombie " << zombieskilled + 1 << endl;
        }

                cout << "Fighting..." << endl;
                sleep(2);

        // zombie killed the player
        if (playerskill < zombieskill) {
            playeralive = false;
            cout << "You have died." << endl;
        }

        // player killed the zombie
        else {
            if (playerskill - zombieskill > 7) {
                cout << "You wasted the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else if (playerskill - zombieskill > 5) {
                cout << "You decapitated the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else if (playerskill - zombieskill > 0) {
                cout << "You killed the zombie!" << endl;
                playerscore = playerscore * 2;
            }

            else {
                cout << "You killed the zombie, but suffered injuries." << endl;
            }

            zombieskilled++;
        }

        cout << endl;
        sleep(1);
    }

    // end game
    if (zombieskilled == zombiecount) {
        // victory
        cout << "You have survived the onslaught!" << endl;
    }
    else {
        // lost
        cout << "You did not survive the zombie war." << endl;
    }

    cout << "Zombies killed: " << zombieskilled << endl;
    cout << "Final score: " << playerscore << endl << endl;
}



	
      
   	  
int main()
  {
  	int inputForGame;
  	
  	char ch;              // tik tok toe
  	
  	
    cout<<"********************************************************************************************************";
    cout<<endl;
  	cout<<endl;
  	cout<<endl;
  	cout<<"\t\t\t\tW E L C O M E   T O   T H E   G A M E   Z O N E\t\n";
  	cout<<endl;
  	cout<<endl;
  	cout<<"********************************************************************************************************";
  	cout<<endl;
  	cout<<endl;
  	cout<<"\t\t\t\t\tEnter your choice Either '1' or '2' !!";
  	cout<<endl;
  	cout<<endl;
  	cout<<"\t\t\t\t\t1. Kon Banega Carore Pati (KBC)\n";
  	cout<<endl;
  	cout<<endl;
  	cout<<"\t\t\t\t\t2. Tik Tok Toe (cross/zero)\n";
  	
  		cout<<endl;
  	cout<<endl;
  	cout<<"\t\t\t\t\t3. Zombie War\n";
  	cin>>inputForGame;
  	
  	switch(inputForGame)
  	  {
  	  	case 1:
			 KBC();
			 break;
	    case 2:
	    	 	while(game_over())       // to take the loop to never ends
                	{
                     	disp_gameBoard();     // calling statement
                       	player_turn();
                    	game_over();

                 	}
	            if(playerTurn=='X' && drawCondition==false)
               	      cout<<"Player2 [0] wins!! congratulations\n";
               	else if(playerTurn=='O' && drawCondition==false)
	                 cout<<"Player1 [X] Wins!! congratulations\n";
	            else
                    	cout<<"DRAW!!";
                
                break;
        case 3:
        	     srand(time(NULL));
                   zombee();
   
        break;
            
            default:
            	cout<<"Wrong choice, Sorry";
            	
  	  	    
    	}
  	
  	
  }

