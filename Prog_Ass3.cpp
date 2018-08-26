#include <iostream>
using namespace std;

int main()
{
    int quotient, a, b;
    
   cout << "Compute the average of your midterm and finals grade"; cout << "\n"; 
    cout << "If the quotient of two grades is:"; cout << "\n";
    cout << "100-90 = Very Good"; cout << "\n";
    cout << "89-80 = Good"; cout << "\n";
    cout << "79-75 = Fair"; cout << "\n"; 
    cout << "74 Below = Failed"; cout << "\n"; 
    cout << "100 Above = Error"; cout << "\n";
    
    cout << "Enter your midterm grade: ";
    cin >> a;
    
    cout << "Enter the finals grade: ";
    cin >> b;
    
    quotient = (a+b)/2;
    
    
    

    if (quotient <= 100 && quotient >= 90) {
        cout << "Your Remark is: ", cout << quotient , cout << " Very Good, you PASSED";
    }
    else if (quotient <= 89 && quotient >= 80) {
        cout << "Your Remark is: " , cout << quotient , cout << " Good, you PASSED";
    }
    else if (quotient <= 79 && quotient >= 75) {
        cout << "Your Remark is: " , cout << quotient , cout << " Fair, TRY HARDER";
    }
     else if (quotient <= 74) {
        cout << "Your Remark is: " , cout << quotient , cout << " Poor, you FAILED";
    }
    
    else {
        cout << "Remark is Error";
    }
}