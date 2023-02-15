//How function calls work
//The call stack
#include<iostream>
using namespace std;

void func2(int &x, int y, int z){
    x+=y+z; //x = x+ y + z
    
}
int func1(int a, int b){
    int result {};
    result = a + b;
    func2 (result, a, b);
    return result;
}
int main() {
    int x {10};
    int y {20};
    int z {};
    z = func1(x, y);
    cout<<z<<endl;
    
    return 0;
}

/* what typically happens when main calls (or any function calls another)?
(There are other ways to achieve the same result:

Main::
    push space for return value
    push space for parameter
    push the return address
    transfer contril to func1(jmp)
    
    func1::
        push the address of the previous activation record
        push any register values that will need to be restored before returning to the caller perform the code in fun1
        restore the register value
        restore the previous activation record(move the stack pointer)
        store any function result
        transfer control to the return address (jmp)
        
        
        main():
        pop the parameter.
        pop the return value 
*/
