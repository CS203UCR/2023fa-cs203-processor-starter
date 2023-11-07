
extern "C" int foo(register int a, register int b){
   register int c = a * b;
   return a * b + c;
}

int main(){
    return foo(1, 0);
}

// Cfiddle-signature=41f70bc075ed7dd35c994c5761b5f440