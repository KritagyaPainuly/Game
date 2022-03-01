#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class game{
    public:
    int score;
    int level;
     int n;
    game()
    {
      score=0;
      level=1;
      n=0;
    }
    void result()
    {
     cout<<"SCORE: "<<score<<endl; 
    }
    void hangman()
    {
        if(n==0){
            cout<<" ___H A N G M A N____ \n";
            cout<<"|                    |\n";  
            cout<<"|                    |\n";
            cout<<"|                    |\n";
            cout<<"|                    |\n";
            cout<<"|____________________|\n";
        }

        if(n==1){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
       
        if(n==2){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}     
        
        
        if(n==3){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /           |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==4){    
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||         |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==5){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||\\\        |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==6){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||\\\        |"<<endl;
        cout<<"|         /          |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==7){
        cout<<" ___H A N G M A N____ \n";
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||\\\        |"<<endl;
        cout<<"|         /\\\         |"<<endl;
        cout<<"|____________________|"<<endl;
        }
    }  
    void begin(string temp)
    {
        cout<<"------LEVEL "<<level<<"------\n";
        cout<<"------SCORE "<<score<<"------\n";
        string temp1;
        while(1){
        for(int i=0;i<temp.size();i++)
        {
            if(i==0||i==(temp.size()-1))
            cout<<temp[i];
            else
            cout<<"_";
        }
        cout<<"\n";
        cin>>temp1;
        if(temp==temp1){
        score++;
        break;       
        }
        else{
        cout<<"OOPS WRONG GUESS\n";    
        hangman();
        n++;
        break;
        }}
        level++;
    } 
};
int main()
{
    game a;
    string hm[10]={"CAR","MANGO","ORANGE","HELP","COMPUTER","PHONE","ALONE","INTERNET","BIKE","CLASS"} ;
    for(int i=0;i<10;i++)
    { 
    system("cls");
    a.hangman();    
    a.begin(hm[i]);
    if(a.n>6)
    {
    system("cls");
    a.hangman();      
    cout<<"YOU FAIL\n";
    cout<<"THANKYOU FOR PLAYING\n";
    getch();
    system("cls");
    return 0;
    }
    }
    cout<<"          WOOHOO YOU WON\n";
    cout<<"       THANKYOU FOR PLAYING\n";
    getch();
    system("cls");
}
/*
  ____________________
 |         |          |   
 |         O          | 
 |        /||\        |  
 |         /\         | 
 |____________________|  */
