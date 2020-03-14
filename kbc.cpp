#include<iostream>

using namespace std;
int main()
{
    char name[50],ch[11];
    int x;
   
    do
    {
        x=0;
        cout<<"\n       Welcome to KBC";
        cout<<"\n\n Enter your name: ";
        cin>>name;
        cout<<"\n Enter answer in form of 'a','b' and'c'only.";
        cout<<"\n Q1.What is called as ' THE HOLY LAND'?";
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Mathura";
        cout<<"\n c.Mecca";
        cin>>ch[1];
        if(ch[1]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q2.What is called as ' THE ROOF OF THE WORLD'?";
        cout<<"\n a.Nepal";
        cout<<"\n b.Rome";
        cout<<"\n c.Tibet";
        cin>>ch[2];
        if(ch[2]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q3.What is called as ' THE LAND OF RISING SUN'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Japan";
        cout<<"\n c.Tibet";
        cin>>ch[3];
        if(ch[3]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\nSorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q4.What is called as ' THE GIFT OF NILE'?";
        cout<<"\n a.Chicago";
        cout<<"\n b.Egypt";
        cout<<"\n c.Africa";
        cin>>ch[4];
        if(ch[4]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q5.What is called as ' THE LAND OF MIDNIGHT SUN'?";
        cout<<"\n a.Norway";
        cout<<"\n b.Japan";
        cout<<"\n c.Australia";
        cin>>ch[5];
        if(ch[5]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q6.What is called as ' THE LAND OF THUNDERBOLT'?";
        cout<<"\n a.Bhutan";
        cout<<"\n b.Canada";
        cout<<"\n c.Arab";
        cin>>ch[6];
        if(ch[6]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q7.What is called as ' THE WINDY CITY?";
        cout<<"\n a.Jerusalem";
        cout<<"\n b.Japan";
        cout<<"\n c.Chicago";
        cin>>ch[7];
        if(ch[7]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q8.What is called as ' THE LAND OF WHITE ELEPHANTS'?";
        cout<<"\n a.Bangladesh";
        cout<<"\n b.Thailand";
        cout<<"\n c.India";
        cin>>ch[8];
        if(ch[8]=='b')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        cout<<"\n Q9.What is called as ' THE CITY OF SEVEN HILLS'?";
        cout<<"\n a.Rome";
        cout<<"\n b.Nilgiri Hills";
        cout<<"\n c.Tibet";
        cin>>ch[9];
        if(ch[9]=='a')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer";
            goto abc;
        }
        cout<<"\n Q10.What is called as ' THE DARK CONTIENENT'?";
        cout<<"\n a.Asia";
        cout<<"\n b.Australia";
        cout<<"\n c.Africa";
        cin>>ch[10];
        if(ch[10]=='c')
        {
            x=x+10;
            cout<<"\n Good Job.";
            cout<<"\n Your score is "<<x;
        }
        else
        {
            cout<<"\n Sorry wrong answer.";
            goto abc;
        }
        abc:
        if(x==100)
        {
            cout<<"\n No cheating...... "<<name<<" you have done this earlier also.";
            break;
        }
        if(x==90)
        {
            cout<<"\n "<<name<<" you are extremely intelligent.";
            cout<<"\n Your Score is 90";
        }
        if(x==80)
        {
            cout<<"\n "<<name<<" you are intelligent.";
            cout<<"\n Your Score is 80";
        }
        if(50==x||x==70||x==60)
        {
            cout<<"\n "<<name<<" you are average";
            cout<<"\n Your Score is "<<x<<".";
            cout<<"\n Better luck next time";
        }
        else
        if(x<=40)
            cout<<"\n No use........ Not even 5 questions right";
        cout<<"\n\n\n Do you want to play again?(y/n)";
        cin>>ch[11];
    }
    while(ch[11]=='Y'||ch[11]=='y');
    
}
