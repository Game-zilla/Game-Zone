#include<iostream>
using namespace std;
void interface()
{
cout<<"________________________________________________________________________\n";
cout<<"|                       mai hoo amitabha bacchan                        |\n";
cout<<"|                  Swagat hai aapka Kaun Banega Crorepati mein…         |\n";
cout<<"|                    Chaliye is khel ko aage badhaya jaaye              |\n";
cout<<"|_______________________________________________________________________|\n";
}
int main()
{
    char nameOfUser[50],inputValue[11];   // variables name of user and input variable
    int var=0;      // to the arithrmatics
    interface();
     do
    {
        cout<<"\n\n sriman apna naam bataye:";
        cin>>nameOfUser;
        cout<<"\n Enter answer in Form of 'a','b' and'c'only.";    // Instructions For user
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
      
            cout<<"\n Sorry wrong answer.";
            goto abc;                         // goto calling statement
        
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
