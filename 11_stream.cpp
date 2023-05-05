#include <iostream>
#include <string>
using namespace std;
void streamCipher(string &msg, int key){
	srand(key);

	for ( int i=0; i<msg.length(); i++){
		msg[i] ^= (char)rand();
	}
}

int main() {
    string msg;

        cout<<endl<<"Enter Message: ";
	    getline(cin>>ws, msg);
	    
    	streamCipher(msg, 23457);
	    cout<<endl<<"Encrypted Message: "<<msg<<endl;
    	streamCipher(msg, 23457);
	    cout<<endl<<"Decrypted Message: "<<msg<<endl;

	return 0;
}
