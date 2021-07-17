/* We want to estimate the cost of painting a property. Interior wall painting cost is Rs.18 per sq.ft. and exterior wall painting cost is Rs.12 per sq.ft.

Take input as
1. Number of Interior walls
2. Number of Exterior walls
3. Surface Area of each Interior 4. Wall in units of square feet
Surface Area of each Exterior Wall in units of square feet

If a user enters zero  as the number of walls then skip Surface area values as User may don’t  want to paint that wall.

Calculate and display the total cost of painting the property
Example 1:

6
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
Total estimated Cost : 1847.4 INR */

#include <iostream>

using namespace std;

int main(void){
    int m, n, i;
    printf("No of interior walls: ");
    scanf("%d", &m);
    printf("No of exterior walls: ");
    scanf("%d", &n);
    int inter_p = 18;
    int exter_p = 12;
    float cost = 0, temp;
    if (m<0 || n<0){
        cout << "INVALID INPUT"<<endl;
    }else if(m==0 && n==0){
        cout << "Total estimated Cost : 0.0"<<endl;
    }else{
    for(i=0; i<m; i++){
        cin>> temp;
        cost += inter_p * temp;
    }
    for(i=0; i<n; i++){
        cin>>temp;
        cost += exter_p * temp;
    }
    cout << "Total estimated Cost : "<<cost<<endl;  
    }
}
