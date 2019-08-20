
#include <iostream>
#include <unistd.h>

using namespace std;

string user_name;
char u_president;
char u_ceogoogle;

class utils{
	public:
		utils();
		static bool ask(string question, char desiredAnswer){
			string answer;
			cout << question;
			cin >> answer;
			if(toupper(answer.at(0))==desiredAnswer){
				cout << "Correct!\n";
				return 1;
			} else {
				cout << "Wrong, the answer is " << desiredAnswer << "!\n";
				return 0;
			}
		}
};

int main(int argc, const char * argv[]){
   
    cout << "Hello there! What's your name?  ";
    cin >> user_name;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "These are the Game Rules" << endl;
    sleep(2.32);
    cout << endl;
    cout << "1. Only enter 1 letter! if you enter more, the first letter you enter will be regarded as your answer." << endl;
    sleep(2.72);
    cout << "2. Only write in one word; otherwise the whole program will break." << endl;
    sleep(2.72);
    cout << endl;
    cout << endl;
    // __________________________________________________________________________
    
    
    cout << endl;
    cout << "Question 1... ";
    sleep(1);
    int points = utils::ask("Who was the 45th President of the US? A(Pres. Trump) B(Pres. Obama) C(Pres. Clinton) D(Pres. Bush)", 'A');
    cout << endl;
    cout << "Question 2... ";
    sleep(1);
    points = points + utils::ask("Who is the Chief Executive Officer of Google? A(Bill Gates) B(Sundar Pichai) C(Ruth Porat) D(Gary Briggs)", 'B');
    
    cout << "You finished with " << points << "Points!\n";
    sleep(10);
    exit(0);
    return 0;
}
