
extern "C" int foo(register unsigned int a, register unsigned int b){
    return a *8;
}

int main(){
    return foo(1, 0);
}

// Cfiddle-signature=470885ab2251cbda2d6e709a5107a800