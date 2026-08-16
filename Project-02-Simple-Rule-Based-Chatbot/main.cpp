#include<iostream>
using namespace std;
bool backToMenu();
class Gpt {
private: string name,mood;
int choice;
void greet(){
cout<<"Enter your name😀: ";
getline(cin,name); cout<<"\n\nHi "<<name<<"👋"<< endl; }
public: void assist();
void choicing();
void welcome() {
cout<<"\n=======🤖✅Welcome To AI world✅🤖=======\n"<<endl<<"\n";
cout<<"\n Please note: ⚠️You are chatting with AI not real human, don't share any sensitive or personal information as we use the data in the chat to train our model \n"<<endl;
greet();
cout<<"I'm ChatGPT🤖, a large language model.\nI can help in various fields.\nI've topped AI leaderboard🤓.\nI can be a study buddy🙂, coding partner🤝,cheering squad🍻,rant buddy, or silly storyteller📰.\nJust say the word😎"<<endl;
assist();
choicing();}
} ;

void Gpt::assist() {
cout<<"How can I help you today☺️"<<name<<endl;
cout << "\nJust pick an option below, and let's make magic happen! ✨🚀\n";
cout<<"\n___________________________________\n"<<endl;
cout<<"1.School Ace🏆"<<endl;
cout<<"2.Problems😷"<<endl;
cout<<"3.Solution seeker🧐"<<endl;
cout<<"4.Entertainment😜"<<endl;}

void Gpt::choicing() {
while(true)
{
cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"<<endl ;
cout<<"Enter your choice number😌: ";
cin>>choice;
cin.ignore();
cout<<"\n___________________________________\n"<<endl;
if(choice==0) {
cout<<"Bye🎉! "<<name<<" Have a nice day⚡✨"<<endl;
break;}
else {switch(choice){
case 1: cout<<"\n Let's Ace your school 🏫. \n What class are you studying ? \n What subjects do you 😱fear the most? \n What are your favourite subjects😃?"<<endl;
break;
case 2: cout<<" \n What problem have stucked in 🧐 ? \n Let's discuss alternative 🧪 ways to approach the same problem.\n I'll guide 🦮 you how to solve. \n Try solving it, if you couldn't find then I'll give actual answer 😉"<<endl;
break;
case 3: cout<<"\n So you are 🔎 searching solution for something.\n I know, I know😆.\n You want accurate answer to cross check the ones you solved, right🤫.\n Do you want other assistance🤗?"<<endl;
break;
case 4: {cout<<"\n Waoo🤨🥴! \n It's time for entertainment 😜😉.\n What do you want- a joke🤪, a silly story🥴 or your choice😂? "<<endl;
cout<<"\n••••••••••••••••••••••••••••••••••••••••\n"<<endl ;
cout<<"\n What's your mood now?";
getline(cin,mood);
cout<<"\n••••••••••••••••••••••••••••••••••••••••\n"<<endl ;
if(mood=="happy")
{ cout<<"\n Glad🙃 to know you are 😁happy, what shall we do now?";}
else if(mood=="sad"|| mood=="tired"||mood=="anxious"||mood=="dull"||mood=="pale")
{cout<<"\nOkay okay... here's a silly story to cheer you up 😜:\n Afhjhi was a smarty-pants who thought teasing people was her birthright.One peaceful day, her super quiet neighbor walked in with a bowl of chilli soup and an innocent smile.Afhjhi, acting like the queen of spice, gulped it down in one go — AAAH! 🔥Her mouth turned into a fire alarm, eyes became fountains, and she ran around like a cartoon who stepped on Lego.She cried, danced, begged for water, and swore off teasing forever.\nMoral of the story? Never mess with quiet girls, especially when they serve soup🌶😜😢😂" <<endl; }
else {cout<<"\n Why don't I, Chatgpt , go to buy chat masala? \n Because I chat too much , chat masala comes on its own to me😜"; }
break; }

default: cout<<"What's on your mind🤯?\n What are you ✈️ planning to do? \n Or \n Something entirely different?"<<endl;
break;}}
if (!backToMenu()) {
cout << "Bye🎉! " << name << " Have a nice day⚡✨" << endl;
break;
} }}
bool backToMenu() {
string back;
while (true) {
cout<<"\n---------------------------------------\n"<<endl;
cout << "\n Do you want to go back to the main menu? (y/n): ";
getline(cin, back);
if (back == "y" || back == "Y")
return true;
else if (back == "n" || back == "N")
return false;
else
cout << "\nInvalid input 🙃. \nPlease type 'y' or 'n' only."<<endl;
cout<<"Enter only 'y' for yes and 'n' for no"<<endl;
}
}
int main()
{
Gpt gpt;
gpt.welcome();
return 0;
}


