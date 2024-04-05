//MEDIUM DOSE
//QUESTION 1:- CREATE A VARIABLE

#include<iostream>
using namespace std;
struct mars{
    string name;
    int roll_no;
}variable;
auto printstatement =[](const mars& club)
{
    return to_string(club.roll_no)+club.name;
};
int main()
{
    variable.roll_no = 2001;
    cout << variable.roll_no << "(myself) wants to be selected in the mars team" << endl;
    cout << "THIS STATEMENT IS PRINTED BY DISPLAYING THE OUTPUT DIRECTLY" << endl;
    auto variable2 = mars{" (myself) wants to be selected in the mars team ", 2001};
    cout << printstatement(variable2) << endl;
    cout << "THIS STATEMENT IS PRINTED BY PASSING IT INTO A FUNCTION" << endl;
    return 0;
}