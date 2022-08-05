# include "iostream"
using namespace std;

int main(void){

    while (1){
        int num;
        int start = 1, end = 50, find = 0;
        cin>>num;
        if (num == 0){
            break;
        }
        while(1) {
            find = (start + end) / 2;
            if (num == find) {
                cout<< find <<endl;
                break;
            } else if (num > find) {
                cout << find << " ";
                start = find + 1;
            } else if (num < find) {
                cout << find << " ";
                end = find - 1;
            }
        }
    }
}