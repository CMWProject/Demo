struct CONTROL1{
    double signal1;
    double signal2;
};

struct CONTROL2{
    double signal1;
    double signal2;
};

struct CONTROL1 In1;
struct CONTROL2 Out1;

void Subsystem (){   
    Out1.signal1 = In1.signal1;
    Out1.signal2 = In1.signal2;
}

void main(){
}