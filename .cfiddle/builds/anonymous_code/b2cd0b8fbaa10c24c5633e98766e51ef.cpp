
extern "C" int foo(register int a, register int b){
    register int c = 4;
    register int d = 4;
    return a + c + d;
}

int main(){
    return foo(1, 0);
}

// Cfiddle-signature=b2cd0b8fbaa10c24c5633e98766e51ef