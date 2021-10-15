#include<iostream>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
using namespace std;


//creating a class bare main class

class bare
{
	char title[25],actor[20],actress[20],anstitle[25],ansactor[20],ansactress[20],password[20],anspassword[20];
	char bare[4]={'B','A','R','E'};
	char s;
	public:
		void team1();
		void team2();
		void display();
};

void bare::team1()
{
	//getting input from team1
	
	cout<<"\n\t\t BARE \n\n\t\tTEAM 1\n";
	
	cout<<"\nENTER THE MOVIE TITLE :";
	gets(title);
	
	cout<<"\nENTER THE ACTOR NAME :";
	gets(actor);
	
	cout<<"\nENTER THE ACTRESS NAME :";
	gets(actress);
	
	cout<<"\n NOTE:-\n\tyou need enter a password .\n\tyou need to relive it only after \n\tthe opponent find the song correctly.";
	cout<<"\nENTER THE PASSWORD :";
	gets(password);
	
	cout<<"\nENTER THE 1ST LETTER OF THE SONG :";
	cin>>s;
	
	cout<<"\n YOUR INPUT SUCCESSFULLY TAKEN!!! ";
	sleep(2);
	
	system("cls");
}


//drawing bare board 

void bare::display()
{
	system("cls");
	cout<<"\n\t\t TEAM 2\n";	//title
	
	cout<<"\n\t\t"<<bare[0]<<" "<<bare[1]<<" "<<bare[2]<<" "<<bare[3];		//bare name
	
	cout<<"\n\t\t____ ____"<<"\n\n\t\t| "<<title[0]<<" | "<<actor[0]<<" |\n\n\t\t____ ____\n\n\t\t| "<<actress[0]<<" | "<<s<<" |\n\n\t\t____ ____\n"; //bareboard
}

//team 2 game

void bare::team2()
{
	int ch,ans,r=1,i=0,r1=0;
				
				display();
				step1:
					
					if(i>3)
					{
						goto final;
					}
					
				cout<<"\nENTER THE MOVIE TITLE :";
				cin>>anstitle;
				
				r=strcmp(title,anstitle);
				
				if(r==0)
				{
					cout<<"\nCORRECT ANSWER"<<endl;
				
				}
				
				else
				{
					bare[i]='*';
					i++;
					display();
					cout<<"\nWRONG ANSWER"<<endl;
					goto step1;
				}
				
				step2:
					if(i>3)
					{
						goto final;
					}
					
				cout<<"\nENTER THE ACTOR NAME :";
				cin>>ansactor;
				
				r=strcmp(actor,ansactor);
				if(r==0)
				{
					cout<<"\ncorrect answer"<<endl;
				}
				else
				{
					bare[i]='*';
					i++;
					display();
					cout<<"\nWRONG ANSWER"<<endl;
					goto step2;
				}
			
				step3:
					
					if(i>3)
					{
						goto final;
					}
					
				cout<<"\nENTER THE ACTRESS NAME :";
				cin>>ansactress;
				
				r=strcmp(actress,ansactress);
				
				if(r==0)
				{
					cout<<"\nCORRECT ANSWER"<<endl;
				}
				
				else
				{
					bare[i]='*';
					i++;
					display();
					cout<<"\nWRONG ANSWER"<<endl;
					goto step3;
				}
		
				step4:
					
					if(i>3)
					{
						goto final;
					}
					
				cout<<"\n PLEASETELL THE SONG TO THE OPPONENT \nAND GET THE PASSWORD.\n\t\t*team 1 enter \"wrong\" if answer is wrong *\n\nENTER THE PASSWORD :";
				cin>>anspassword;
				
				r=strcmp(password,anspassword);
				
				if(r==0)
				{
					cout<<"\nCORRECT ANSWER"<<endl;
				
				}
				else
				{
					bare[i]='*';
					i++;
					display();
					cout<<"\nWRONG ANSWER"<<endl;
					goto step4;
				}
				
	final:
	if(i>3)
	{
	cout<<"\n\n\a\t\tyou lose the game ";
	}																//PRINTING FINAL MESSAGE
	else
	{
	cout<<"\n\n\a\t\tcongratulations you won the game";
	}
}

int main()
{
	bare g;
	g.team1();
	g.team2();
}

