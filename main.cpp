#include <iostream>
using namespace std;
string parties[20] = {"TLP", "PTI"};
int registeredparties = 1;
string voterName[100], voterId[100], party[100];
int totalVotes = 0;
// Top Most Heading of Page
void heading()
{
    cout << "=========================================================\n";
    cout << "       WELLCOME TO ELECTION COMMISION OF PAKISTAN        \n";
    cout << "========================================================= ";
};
/* Function to register the new party
Maximum Parties =  20 ,
Detault Parties = 2 ( TLP , PTI
)
*/
void registerparty()
{
    string party;
    cout << "===================================================\n";
    cout << "              Enter Details of New Party           \n";
    cout << "===================================================\n";
    cout << "Enter Party Name = ";
    cin>>party;
  for(int i=0; i<=registeredparties; i++){
    if(party != parties[i]){
  parties[registeredparties+1] = party ;
    }
  }
  registeredparties = registeredparties + 1;
};
void showparties()
{
    cout << "===================================================\n";
    cout << "              List of Registered Parties           \n";
    cout << "===================================================\n";
    for (int i = 0; i <= registeredparties; i++)
    {
        cout << i + 1 << ") " << parties[i] << endl;
    }
};
void voteCasting()
{
    string partyName;
    cout << "===================================================\n";
    cout << "          Dear Candidate Enter Your Data Here       \n";
    cout << "===================================================\n";
    cout << "Enter PartyName Name = ";
    cin >> partyName;
    for (int i = 0; i <= registeredparties + 1; i++)
    {
        if (partyName == parties[i])
        {
            cout << "Enter Your Name = ";
            cin >> voterName[totalVotes];
            cout << "Enter  Your ID Card No = ";
            cin >> voterId[totalVotes];
            party[totalVotes]= partyName;
            totalVotes = totalVotes + 1;
            cout << "Dear " << voterName[i] << " Your Vote has been added to the " << partyName << " party \n";
            // cout<<totalVotes;
        }
    }
}
void showResult()
{
    cout << "===================================================\n";
    cout << "     Over All Result of Vote Casting in 2023       \n";
    cout << "===================================================\n";
    cout<<"Total Vote Casting in 2023 = "<<totalVotes;
    int max_count = 0;
      string maxfreq ;
      for (int i = 0; i < totalVotes; i++){
         int count = 0;
         for (int j = 0; j < totalVotes; j++){
            if (party[i] == party[j]){
               count++;
            }
         }
         if (count > max_count){
            max_count = count;
            maxfreq = party[i];
         }
      }
   cout<<" "<<endl<<maxfreq<<" has Won the General Election 2023 as it get "<<max_count<<" votes out of "<<totalVotes;
    for (int i = 0; i<=totalVotes-1; i++)
    {  
        cout << "=============================\n";
        cout<<"\nData of "<<i+1<<" Person \n";
	           cout<<"Candidate Vote To"<<party[i]<<" party. "<<endl;
	    		cout<<"Candidate Name "<<voterName[i]<<endl;
	    		cout<<"Candidate CNIC No "<<voterId[i]<<endl;
    }
};

int main()
{
    heading();
    int value;

    while (true)
    {
        cout << "\nPress 1 to Register New Party" << endl;
        cout << "Press 2 to Show Registered Parties" << endl;
        cout << "Press 3 to Cast Vote" << endl;
        cout << "Press 4 to Get Result" << endl;
        cout << "Press 5 to Exit" << endl;
        cin >> value;
        switch (value)
        {
        case 1:
            registerparty();
            break;
        case 2:
            showparties();
            break;
        case 3:
            voteCasting();
            break;
        case 4:
             showResult();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
    return 0;
}