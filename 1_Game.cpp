#include<iostream>
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
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
       
        if(n==1){
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}     
        
        
        if(n==2){
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /           |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==3){
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||         |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==4){
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||\\\        |"<<endl;
        cout<<"|                    |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==5){
        cout<<" ____________________"<<endl;
        cout<<"|         |          |"<<endl;  
        cout<<"|         O          |"<<endl;
        cout<<"|        /||\\\        |"<<endl;
        cout<<"|         /          |"<<endl;
        cout<<"|____________________|"<<endl;}
        
        if(n==6){
        cout<<" ____________________"<<endl;
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
    cout<<" ________LET THE GAME BEGIN_______\n";
    cout<<"|                                 |\n";  
    cout<<"|                                 |\n";
    cout<<"|                                 |\n";
    cout<<"|                                 |\n";
    cout<<"|_________________________________|\n";
    string hm[10]={"CAR","MANGO","ORANGE","HELP","COMPUTER","PHONE","ALONE","INTERNET","BIKE","CLASS"} ;
    for(int i=0;i<10;i++)
    {
    a.begin(hm[i]);
    if(a.n>6)
    {
    cout<<"YOU FAIL\n";
    cout<<"THANKYOU FOR PLAYING\n";
    return 0;
    }
    a.result();    
    }
    cout<<"WOOHOO YOU WON\n";
    cout<<"       THANKYOU FOR PLAYING\n";
}
/*
  ____________________
 |         |          |   
 |         O          | 
 |        /||\        |  
 |         /\         | 
 |____________________|  */