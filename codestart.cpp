#include <iostream> 
#include<vector>
using namespace std;

int main() {
    vector <int> vec;
    vector<int> veci = {1, 2, 3, 4, 5};
    vector <int> last (3,0);
    vec.push_back(10);
    cout << "Size of vec: " << vec.size() << endl;
    cout << "Size of vec: " << veci.size() << endl;
    cout << "Size of vec: " << last.size() << endl;
    cout<< veci[4] << endl;
    cout << "Hello, World!" << endl;
    return 0;
}