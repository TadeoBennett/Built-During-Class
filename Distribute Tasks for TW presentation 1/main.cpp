#include <iostream>
#include <ctime>
#include <vector>


using namespace std;

int main()
{
    srand((unsigned) time(NULL));
   
    vector<string> names;
    names.push_back("Tadeo");
    names.push_back("Leanne");
    names.push_back("Floyd");
    names.push_back("Bianca");
    names.push_back("Vanessa");

    vector<string> tasks;
    tasks.push_back("Do Clarity");
    tasks.push_back("Do Conciseness");
    tasks.push_back("Accessibility");
    tasks.push_back("Accuracy");
    tasks.push_back("Audience Recognition");

    vector<string> extras;
    extras.push_back("Introduction, Intended Learning Outcomes");
    extras.push_back("Why this a technical document?; Important definitions, Purpose/Important/relevance to working people or students to know/use/write this type of document.");
    extras.push_back("Create an Assessment (Quiz Activity)");
    extras.push_back("Summarize the content");
    extras.push_back("Conclude");

   
    for (int i = 0; i< 5; i++){
        int randomName = rand() % names.size();
        int randomTask = rand() % tasks.size();
        int randomExtra = rand() % extras.size();

        cout<<names[randomName]<< "; "<<tasks[randomTask] <<"; "<<extras[randomExtra]<<endl;
        names.erase(names.begin()+randomName);
        tasks.erase(tasks.begin()+randomTask);
        extras.erase(extras.begin()+randomExtra);
    }

    return 0;
}