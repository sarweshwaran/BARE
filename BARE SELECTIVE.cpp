#include<iostream>
#include<unistd.h>
#include<string.h>
using namespace std;

//creating main class 'bare' for game

class bare
{
	char title[25],actor[20],actress[20];										//to store team1 values.
	
	char anstitle[25],ansactor[20],ansactress[20],password[20],anspassword[20];	//to store answers of the team2.
	
	char bare[4]={'B','A','R','E'};
	
	char s;									//to store first letter of the song
	
	public:
		void team1();		//function to get values from team1
		
		void team2();		//function to get answer from team2
		
		void display();		//to display bare board
};


//defininig member functions

//getting value from team1

void bare::team1()
{
	cout<<"\n\t\t BARE \n\n\t\tTEAM 1\n";
	cout<<"\nENTER THE MOVIE TITLE :";
	gets(title);
	cout<<"\nENTER THE ACTOR NAME :";
	gets(actor);
	cout<<"\nENTER THE ACTRESS NAME :";
	gets(actress);
	cout<<"\n NOTE:-\n\t you need enter a password .\n\tyou need to relive it only after \n\tthe opponent find the song correctly.";
	cout<<"\nENTER THE PASSWORD :";
	gets(password);
	cout<<"\nENTER THE 1ST LETTER OF THE SONG :";
	cin>>s;
	cout<<"\n YOUR INPUT SUCCESSFULLY TAKEN!!! ";
	system("cls");
}


//to display bare board

void bare::display()
{
	system("cls");
	cout<<"\n\t\t TEAM 2\n";
	cout<<"\n\t\t"<<bare[0]<<" "<<bare[1]<<" "<<bare[2]<<" "<<bare[3];
	cout<<"\n\t\t____ ____"<<"\n\n\t\t| "<<title[0]<<" | "<<actor[0]<<" |\n\n\t\t____ ____\n\n\t\t| "<<actress[0]<<" | "<<s<<" |\n\n\t\t____ ____\n";
}


//getting answer from team2


void bare::team2()
{
	int ch, ans, r =1, i =0, r1 =0, c =0;
	
	int c1=0, c2=0, c3=0, c4=0;		//some integers to check whether the selected answer is already entered
	
	do
	{
		ch=0;
		display();
		
		if(r==0&&r1!=0)
		{
			cout<<"\n\n\tYOUR PREVIOUS ANSWER IS CORRECT\n\n";
		}
		
		else if(i!=0)
		{
			cout<<"\n\n\tYOUR PREVIOUS ANSWER IS WRONG\n\n";
		}
		
		//asking team2 to choose  what they are going to enter  
		
		cout<<"\nWHICH ONE YOU'RE GOING TO ENTER :\n  1.MOVIE TITLE\n  2.ACTOR NAME\n  3.ACTRESS NAME\n  4.SONG\n";
		
		cout<<"\nENTER YOUR CHOICE : \t";
		cin.ignore();
		scanf("%d",&ch);
		
		switch(ch)
		{
			
			case 1:
				
				if(c1==0)
				{
					cout<<"\n ENTER THE MOVIE TITLE :";
					
					cin>>anstitle;
					
					r=strcmp(title,anstitle);
					
					if(r==0)
					{
						ans++;
						c1++;			//INCRESING VALUE OF C1 FROM 0 TO 1 
					
					}
					else
					{
						bare[i]='*';
						i++;
					}			
					break;
				
				}
				else
				{
					cout<<"\nYOU ALREADY ENTERED THIS ANSWER\nPLEASE ENTER ANYOTHER ANSWER";	//make exist the loop if this answer is already entered
					cout<<ch;
					sleep(2);
					
					break;
						
				}
				
				
			case 2:
				
				if(c2==0)
				{
					cout<<"\nENTER THE ACTOR NAME :";
					cin>>ansactor;
					
					r=strcmp(actor,ansactor);
					
					if(r==0)
					{
						ans++;
						c2++;
					}
					else
					{
						bare[i]='*';
						i++;
					}
					
					break;
				}
				else
				{
					cout<<"\nYOU ALREADY ENTERED THIS ANSWER2";
					sleep(2);
					break;
				}
				
				
			case 3:
				
				if(c3==0)
				{
					cout<<"\nENTER THE ACTRESS NAME :";
					cin>>ansactress;
					
					r=strcmp(actress,ansactress);
					if(r==0)
					{
						ans++;
						c3++;
					}
					else
					{
						bare[i]='*';
						i++;
					}
					
					break;
				}
				else
				{
					cout<<"\nYOU ALREADY ENTERED THIS ANSWER";
					sleep(2);
					break;
				}
				
				
			case 4:
				if(c4==0)
				{
					cout<<"\nPLEASE TELL THE SONG TO THE OPPONENT \nAND GET THE PASSWORD.\n\n*team 1 enter \"wrong\" if answer is wrong *\n\nENTER THE PASSWORD :";
					cin>>anspassword;
					r=strcmp(password,anspassword);
					if(r==0)
					{
						ans++;
						c4++;
					}
					else
					{
						bare[i]='*';
						i++;
					}
						
					break;
				
				}
				
				else
				{
					cout<<"\nYOU ALREADY ENTERED THIS ANSWER";
					sleep(2);
					break;
				}
				
				
			default:
				
					cout<<"\n INVALID CHOICE";
					ch=0;
					sleep(1);
					
		}
		
		
			
		if(i>=4)
		{
			ans=4;			//assigning to exit the loop when all letter in bare where crossed
			c++;			//to identify that the loop exited due to lose of chance
		}
			
			
	}while(ans!=4);
	
	if(c==0)
	{													//printing victory message
	cout<<"\ncongratulations you won the game";
	}
	
	else
	{
	cout<<"\nyou loose the game ";
	}
}

//main function

int main()
{
	bare g;
	
	
	//calling the functions needed
	
	g.team1();
	
	g.team2();
	
}

