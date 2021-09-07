//
// Created by chris on 2021/9/7.
//

#include <iostream>

int main(){
    using namespace std;
    int num = 10;
    int* pointer_num = &num;
    cout << "num val:" << num << "\npointer_num val:" << pointer_num << "\n";
    return 0;
}