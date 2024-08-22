// #include<iostream>
// using namespace std;

// class complex 
// {
//     int real;
//     int img;
//     public:
//         complex(int r, int i){
//             real = r;
//             img = i;
//         }
//         void disp(){
//             cout << "Real part: " << real << "\t" << "Imaginary part: " << img << endl;
//         }
//         complex operator + (complex C){
//             complex a(0,0);
//             a.real = real + C.real;
//             a.img = img + C.img;
//             return a;
//         }
//         void dispSum(){
//             cout << "The sum is " << "(" <<real << " + " << img << "j)" << endl;
//         }
//         complex diff(complex C){
//             complex a(0,0);
//             a.real = real - C.real;
//             a.img = img - C.img;
//             return a;
//         }
//         void dispDiff(){
//             cout << "The difference is " << "(" << real << " + " << img << "j)" << endl;
//         }
// };

// int main()
// {
//     complex C1(5, 10);
//     complex C2(2, 4);
//     C1.disp();
//     C2.disp();
//     complex C3 = C1 + C2;
//     C3.dispSum();
//     complex C4 = C1.diff(C2);
//     C4.dispDiff();
//     return 0;
// }



// #include<iostream>
// using namespace std;

// class Bool
// {
//     int x;
//     public: 
//         Bool(int X){
//             x = X;
//         }

//         bool operator > (Bool b){
//             return x > b.x;
//         }
// };
// int main()
// {
//     Bool n1(2);
//     Bool n2(3);
//     if(n1 > n2)
//         cout << "Its greater." << endl;
//     else
//         cout << "Its not greater." << endl;
//     return 0;
// }