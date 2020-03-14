#include<iostream>  
using namespace std;
int main()
{
    char nameOfUser[50],inputValue[11];   // variables name of user and input variable
    int var=0;      // to the arithrmatics
   
    do
    {
        cout<<"   ___________________________________________________________    \n";
        cout<<"  |                                                           |   \n";
        cout<<"  |                                                           |   \n";
        cout<<"  |                                                           |   \n";
        cout<<"  |          W E L C O M E   T O   K B C                      |   \n";
        cout<<"  |                                                           |   \n";
        cout<<"  |                                                           |   \n";
        cout<<"  |                                                           |   \n";
        cout<<"   ___________________________________________________________    \n";
        
        cout<<"\n\n Enter your Name: ";
        cin>>nameOfUser;
        cout<<"\n Enter answer in Form of 'a','b' and'c'only.";     // Instructions For user
        cout<<"\n Q1.What is called as ' THE HOLY LAND'?";       // first Question
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Mathura";
        cout<<"\n c.Mecca";
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
        cout<<"\n Q2.What is called as ' THE ROOF OF THE WORLD'?";    // 2nd
        cout<<"\n a.Nepal";
        cout<<"\n b.Rome";
        cout<<"\n c.Tibet";
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
            goto abc;                         // goto calling statement
        }
        cout<<"\n Q3.What is called as ' THE LAND OF RISING SUN'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Japan";
        cout<<"\n c.Tibet";
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
        cout<<"\n Q4.What is called as ' THE GIFT OF NILE'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Egypt";
        cout<<"\n c.Africa";
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
        cout<<"\n Q5.What is called as ' THE LAND OF MIDNIGHT SUN'?";
        cout<<"\n a.Norway";
        cout<<"\n b.Japan";
        cout<<"\n c.Australia";
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
        cout<<"\n Q6.What is called as ' THE LAND OF THUNDERBOLT'?";
        cout<<"\n a.Bhutan";
        cout<<"\n b.Canada";
        cout<<"\n c.Arab";
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
        cout<<"\n Q7.What is called as ' THE WINDY CITY?";
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Japan";
        cout<<"\n c.Chicago";
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
        cout<<"\n Q8.What is called as ' THE LAND OF WHITE ELEPHANTS'?";
        cout<<"\n a.Bangladesh";
        cout<<"\n b.Thailand";
        cout<<"\n c.India";
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
        cout<<"\n Q9.What is called as ' THE CITY OF SEVEN HILLS'?";
        cout<<"\n a.Rome";
        cout<<"\n b.Nilgiri Hills";
        cout<<"\n c.Tibet";
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
        cout<<"\n Q10.What is called as ' THE DARK CONTIENENT'?";
        cout<<"\n a.Asia";
        cout<<"\n b.Australia";
        cout<<"\n c.Africa";
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
