//BOJ 17202 궁합
//DP

#include <iostream>
using namespace std;

int main() {
    char num1[10], num2[10];
    int arr[16];

    cin >> num1 >> num2;


    //이 for문에 의해서 arr 안에 num1과 num2가 번갈아 들어가게 됨
    for (int i = 0; i < 8; ++i) {
        arr[i * 2] = num1[i] - '0'; //-'0'에 의해서 문자열이 숫자가 됨. 아스키 코드 이용
        //예를 들어서 num1[i] 가 문자열'1' 이라면 ascii 코드 값으로 49 번이고 
        //'0' 은 48번이므로 num1[i] - '0' 은 1 이 됩니다. (49 - 48)
        arr[i * 2 + 1] = num2[i] - '0';
    }

    //
    for (int i = 15; i >= 2; --i) { //총 자릿수가 1자리씩 줄어듬
        for (int j = 0; j < i; ++j) {
            arr[j] = (arr[j] + arr[j + 1]) % 10;
        }
    }

    cout << arr[0] << arr[1];
}