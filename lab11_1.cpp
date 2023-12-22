#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;
bool checkEnter(int& counter) {
    if (cin.get() == '\n') {
        counter++;
        if (counter == 3) {
            return true;
        }
    }
    
    return false;
}

char getRandomGrade() {
    const char grades[] = {'A', 'B', 'C', 'D', 'F', 'W'};
    return grades[rand() % sizeof(grades)];
}

char getRandomPD() {
    const char PD[] = {'+',' '};
    return PD[rand() % sizeof(PD)];
}

int main(){
    cout << "Press Enter 3 times to reveal your future." << endl;

    int enterCounter = 0;
    char grade;

    srand(time(0));

    while (!checkEnter(enterCounter)) {
    }
char graderand = getRandomGrade();
string PD;
if (graderand == 'B'||graderand=='C'||graderand=='D'){
    PD = getRandomPD();
    if(PD == "+"){
        PD=PD+' ';
    }
}else {
    PD = ' ';
}
    cout << "You will get " << graderand << PD <<"in this 261102."<< endl;

    return 0;
}