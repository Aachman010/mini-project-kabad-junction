#include <iostream>
using namespace std;

int a;

class kabadi {
int b, c, d, ans1 = 0, ans2 = 0;
public:
int karo(int a) {
switch (a) {
case 1: {
cout << "Enter the amount(kg) of\nplastic(₹5/kg)\npaper(₹3/kg)\nglass(₹10/kg)\nrespectively.\nIf none, enter 0:\n";
cin >> b >> c >> d;
ans1 = ans1 + 5 * b + 3 * c + 10 * d;
cout << "Your total pay for the trash is = " << ans1 <<"₹"<< endl;
return ans1;
}
case 2: {
cout << "Enter the amount(kg) of geela kachra(₹7/kg):\n";
cin >> b;
ans2 = ans2 + 7 * b;
cout << "Your total pay will be = " << ans2 <<"₹"<< endl;
return ans2;
}
case 3: {
return ans1 + ans2;
}
}
return 0;
}
void coins(){
char x;
float z;
int y;
cout<<"do you want to check your kachra currency press 'Y' for yes and 'N'  for no\n";
cin>>x;
if(x=='Y'){

cout<<"\nyour current Kachra credit is "<<(ans1+ans2)*0.5<<"c"<<endl;

z=(ans1+ans2)*0.5;
cout<<"List of items that are available in stock\n1-BALL(100c)\n2-PEN SET(70c)\n3-HAT(50c)\n";
cout<<"select the no you want from the item\n";
cin>>y;

switch(y){  
    case 1:{  
        if(z>=100){  
            cout<<"\nyour order for ball has been placed successfully net credit remains "<<z-100<<endl;  
            break;}  
            else{  
            cout<<"\ninsufficient funds!!\n";  
        break;}}  
  
        case 2:{  
         if(z>=70){  
            cout<<"\nyour order for pen set has been placed successfully net credit remains "<<z-70<<endl;  
            break;}  
            else{  
                cout<<"\ninsufficient funds!!\n";  
                break;}  
            }  
            case 3:{  
                if(z>=50){  
                    cout<<"\nyour order for hat has been placed successfully net credit remains "<<z-50<<endl;  
                    break;}  
                    else{  
                    cout<<"\ninsufficient funds!!\n";  
                break;}  
                }  

            }  

          
      
  
              
              
        }  
          

          
    }

int  kachra() {
int i;
cout
<< "Please enter the no of service you want:\n"
<< "1. Sukha\n"
<< "2. Geela\n"
<< "3. Exit\n";
cin >> a;
i = karo(a);
return i;
}
};

int main() {
cout<<"WELCOME TO KABAD JUNCTION\n";
kabadi b1;
int c;
do {
c= b1.kachra();

} while (a != 3);  
b1.coins();  

cout << "THANK YOU FOR USING KABAD JUNCTION\n"  
     << "Your total payout will be = " << c<< "₹\n\n"  
     << "Have a nice day :)\n";  

return 0;

}
