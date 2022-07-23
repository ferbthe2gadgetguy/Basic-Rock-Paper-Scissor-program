#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

int max, rng;
char ans;
bool alive = true;
string convenience[3] = {"Rock", "Paper", "Scissors"};

void RPS (char, int);

int main() {
	
	srand(time(0));
    rng = (rand () % 3) + 1; //Makes the randomness work, but cannot be resetted
    
  //  while (alive = true) { LOOP DOES NOT WORK


    cout << "Choose your hand:" <<endl;
    cout <<"[A] Rock" <<endl;
    cout <<"[B] Paper" <<endl;
    cout <<"[C] Scissors" <<endl;
    cout <<endl;
    

	
    cin>>ans;
    ans = toupper(ans);
    
   
	
    if (ans == 'A' || ans == 'B' || ans == 'C')
    {
    	
    	RPS (ans, rng);
    	
	} else {
		
		cout <<"\nAnswer not acceptable.\n \n";
		
	}
	
//}
	
    //system ("pause"); Was meant to make the player see the result, but deletes the message. Must be commented
    return 0;
}

void RPS (char ans, int rng)
{
	char reply;
	
	//is the damn thing broken?
	if (rng <= 0 && rng >= 3)
	{
		while (rng <= 0 && rng >= 3)
		{
		rng = (rand () % 3) + 1;
		}
	} else 
	
	//if things are working
	if (rng == 1)
	{
		reply = 'A';
	} else
	
	if (rng == 2)
	{
		reply = 'B';
	} else
	
	if (rng == 3)
	{
		reply = 'C';
	}
	
	// cout <<endl <<reply <<endl; DEBUGGING
	
	cout <<endl <<"VS" <<endl <<endl <<reply <<" - " <<convenience[rng] <<endl;
	
	//Player wins
	
	if (ans == 'A' && reply == 'C')
	{
		cout <<"\nRock beats Scissors.\n \nPlayer wins!\n";
	} else 
	
	if (ans == 'B' && reply == 'A')
	{
		cout <<"\nPaper beats Rock.\n \nPlayer wins!\n";
	} else 
	
	if (ans == 'C' && reply == 'B')
	{
		cout <<"\nScissors beats Paper.\n \nPlayer wins!\n";
	} else 
	
	//Program wins
	
	if (reply == 'A' && ans == 'C')
	{
		cout <<"\nRock beats Scissors.\n \nWOPR wins! How about a nice game of chess?\n";
	} else 
	
	if (reply == 'B' && ans == 'A')
	{
		cout <<"\nPaper beats Rock.\n \nWOPR wins! How about a nice game of chess?\n";
	} else 
	
	if (reply == 'C' && ans == 'B')
	{
		cout <<"\nScissors beats Paper.\n \nWOPR wins! How about a nice game of chess?\n";
	} else 
	
	//Nobody wins
	
	if (reply == 'A' && ans == 'A')
	{
		cout <<"\nNobody has won.\n \nTry again\n";
	} else 
	
	if (reply == 'B' && ans == 'B')
	{
		cout <<"\nNobody has won.\n \nTry again\n";
	} else 
	
	if (reply == 'C' && ans == 'C')
	{
		cout <<"\nNobody has won.\n \nTry again\n";
	} 
	
}

