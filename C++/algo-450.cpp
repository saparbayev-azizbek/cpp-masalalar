#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    
    int c=0;
    string s = "";
    string n;
    vector<string> el;
    
    int i = 0;
    while (a[i] != '[') {
            n += a[i];
            i++;
        }
        cout<<n<<endl;
    for (int i = n.length()+4; i < a.length()-1; i++) {
    	if (a[i] != ',' or a[i] != '}') {
            s += a[i];
        }
        else {
        	cout << s <<endl;
	        el.push_back(s);
	        s = "";
		}
    }
    
    for (int i = 0; i < el.size(); i++) {
        cout << n << "[" << i << "]=" << el[i] << ";" << endl;
    }
    
    return 0;
}

