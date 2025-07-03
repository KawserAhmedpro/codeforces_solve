#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int a = 0, b = 0, alicee = 0, bob = 0;
        if(n==1||n==2||n==3){
            cout<<"Alice"<<endl;
        }

        // Loop to simulate the moves
        for(int i = 0; i < n - 1; i++) {
            a++;       // Alice's move
            b += 3;    // Bob's move

            alicee++;  // Alice's move count
            bob++;     // Bob's move count

            if(b > n) {   // Stop when b exceeds or equals n
                break;
            }
        }

        if(alicee>bob){
            cout<<"Alice"<<endl;
        }
        else cout<<"Bob"<<endl;
    }
    
    return 0;
}