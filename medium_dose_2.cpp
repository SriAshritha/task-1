//MEDIUM DOSE
//QUESTION 2 :- HIERARCHY

#include<iostream>
#include<vector>
using namespace std;
class Person{
    public:
    string name;
    int roll_no;
    string subsystem;
    vector<Person *>members;
    Person(string name,int roll_no)
    {
        this->name=name;
        this->roll_no=roll_no;
        this->subsystem=subsystem;
    }
    void addmember(Person* variable)
    {
        members.push_back(variable);
    }
    void output(Person* person)
    {
        cout << this->name << " is communicating with" << person->name <<endl;
    }
};
int main()
{
    Person * LEADER= new Person("LEADER",1);
    Person* CO_LEAD1 = new Person("CO_LEAD1", 90);
    Person* CO_LEAD2 = new Person("CO_LEAD2", 90);
    Person* TEAM_LEAD = new Person("TEAM_LEAD", 70);
    Person* TEAM_MEM1 = new Person("TEAM_MEM1", 60);
    Person* TEAM_MEM2 = new Person("TEAM_MEM2", 60);
    Person* TEAM_MEM3 = new Person("TEAM_MEM3", 60);
    Person* TEAM_MEM4 = new Person("TEAM_MEM4", 60);

    LEADER->addmember(CO_LEAD1);
    LEADER->addmember(CO_LEAD2);
    CO_LEAD1->addmember(TEAM_LEAD);
    TEAM_LEAD->addmember(TEAM_MEM1);
    TEAM_LEAD->addmember(TEAM_MEM2);
    TEAM_LEAD->addmember(TEAM_MEM3);
    TEAM_LEAD->addmember(TEAM_MEM4);
    LEADER->output(CO_LEAD1);
    LEADER->output(CO_LEAD2);
    CO_LEAD1->output(TEAM_LEAD);
    CO_LEAD2->output(TEAM_LEAD);
    TEAM_LEAD->output(TEAM_MEM1);
    TEAM_LEAD->output(TEAM_MEM2);
    TEAM_LEAD->output(TEAM_MEM3);
    TEAM_LEAD->output(TEAM_MEM4);
    return 0;
}