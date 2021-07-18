/* Chain Marketing Organization has has a scheme for income generation, through which its members generate income for themselves. The scheme is such that suppose A joins the scheme and makes R and V to join this scheme  then A is Parent Member of R and V who are child Members. When any member joins the scheme then the parent gets total commission of 10% from each of its child members.
Child members receive commission of 5% respectively. If a Parent member does not have any member joined under him, then he gets commission of 5%.
Take name of the members joining the scheme as input.
Display how many members joined the scheme including parent member.Calculate the Total commission gained by each members in the scheme. The fixed amount for joining the scheme is Rs.5000 on which commission will be generated
SchemeAmount = 5000

Example 1: When there are more than one child members 
Input : (Do not give input prompts.Accept values as follows. )
Amit                     //Enter parent Member as this
Y                           //Enter Y if  Parent member has child members otherwise enter N
Rajesh,Virat        //Enter names of child members of Amit in comma separated
Output:(Final Output must be in format given below.)
TOTAL MEMBERS:3
COMISSION DETAILS
Amit: 1000 INR
Rajesh :250 INR
Virat: 250 INR

Example 2: When there is only one child member in the hierarchy
Input :
Amit
Y
Rajesh
Output:
Total Members: 2 
Comission Details
Amit: 500 INR
Rajesh: 250 INR */

#include <iostream>
#include <vector>

using namespace std;

int main(void){
    string par;
    cin>> par;
    string x;
    cin>>x;
    if (x == "N"){
        cout << "TOTAL MEMBERS: 1"<<endl;
        cout << "COMISSION DETAILS\n";
        cout << par << ": 250 INR" <<endl;
    }else{
        string child;
        cin >> child;
        vector<string>v;
        string temp = "";
        for(int i=0; i< child.length(); i++){
            if(child[i] == ','){        
                v.push_back(temp);
                temp = "";
            }else if (child[i] != ','){
                temp += child[i];
            }
        }
        v.push_back(temp);
        cout << "TOTAL MEMBERS: " << v.size() + 1 << endl;
        cout << "COMISSION DETAILS" << endl;
        cout << par << ": " << v.size()*500 << " INR\n";
        for (vector<string>::iterator a = v.begin(); a!=v.end(); a++){
            cout << *a << ": 250 INR" << endl;
            }
        } 
}
// for(auto a: v){
//  cout << a << ": 250 INR" << endl;
//}   

// vectorname.push_back(value)
// adds to the end of the list and size will be increased by 1 (like dynamic array)
//vectorname.pop_back() --> removes the element from the last, no arguments are passed
//vectorname.empty() --> no arguments are passed. returns True if list is empty else False
//vectorname.size() -->No parameters are passed
// size() function returns the size of vector contained
//vectorname.front() --> No parameters are passed
// Can be used to fetch the first element of the vector container
//vectorname.back() --> No parameters are passed
//Can be used to fetch the last element of the vector container  
