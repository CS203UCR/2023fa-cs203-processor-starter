
extern "C" int foo(register unsigned int a, register unsigned int b){
    return a *8;
}
int main(){
    return foo(1, 0);
}

// Cfiddle-signature=694a5af363fbdd1d4dc9071804c3ea31