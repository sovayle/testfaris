#include <iostream>
#define row 5
#define col 5
using namespace std;

void PrintList(bool[row][col] , char[][20]);

int main(){
	
	bool friendship[row][col] = {0};
	char name[5][20] = {};
	char choice;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter the name:";
		cin >> name[i];	
	}
	cout<< endl;
	
	
	cout << "# | 0 1 2 3 4" << endl << "- - - - - - -" <<endl;	
	
		for(int x=0; x<5; x++)
	{
		cout<< x << "|" << endl;
	}
	cout<<endl;
	for(int y=0; y<5; y++){
		cout << y << ":" << name[y] <<endl;
	}
	
		while(choice != 'q')
	{
	PrintList(friendship, name);
	
	cout <<"Enter any key to continue or q to end: ";
cin >> choice;
	
	}  
	
}

void PrintList(bool friendship[row][col], char name[][20])
{
	int i=-1,j=-1;
	
	cout<< endl<< "Enter the index: " ;
	cin >> i;

	while(i <0 || i >4)
	{
	cout << "Input is invalid." << endl;
	cout<< endl<< "Enter the index: " ;
	cin >> i;
	}

	cout<<endl << "Enter the friend of " <<name[i] << " by index: ";
	cin >>  j; 
	while(j <0 || j >4)
	{
	cout << "Input is invalid." <<endl;
	cout<<endl << "Enter the friend of " <<name[i] << " by index: ";
	cin >>  j; 
	}
	
	friendship[i][j] = true;
	friendship[j][i] = true;
	
	
	//table
		cout << "# | 0 1 2 3 4" << endl << "- - - - - - -" <<endl;	
	
		for(int x=0; x<5; x++)
	{
		cout<< x << "| ";
		
		for(int y=0; y<5; y++)
		{
		if (friendship[x][y] == true){
		cout << " *";
	}
		else{
		
		cout << "  ";
	}
	}
		cout<<endl;
 }
	cout<<endl;
	

}

