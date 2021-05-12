#include<iostream>
using namespace std;
class shop{
    int serial=1;
    int itemId[50];
    int itemPrice[50];
    int totalProducts=0;
    public:
        void getItem(void);
        void displayItem(void);
};

void shop :: getItem(void){
    int productQuantity;
    cout<<"How much products you want to add:"<<endl;
    cin>>productQuantity;
    totalProducts +=productQuantity;
    for(int i=0;i<productQuantity;i++)
    {
        cout<<"Enter product ID : "<<endl;
        cin>>itemId[i];
        cout<<"Enter product price :"<<endl;
        cin>>itemPrice[i];
    }
}

void shop :: displayItem(void){
        cout<<"*******************Items Details are here*******************"<<endl;
    for(int i=0;i<totalProducts;i++){
        cout<<"Serial No.#"<<serial++<<endl;
        cout<<"Product ID : "<<itemId[i]<<" And price is : "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop dhukan;
    while(true){
        int choise;
        cout<<"##############################"<<endl;
        cout<<"Press 1 for ADD item"<<endl;
        cout<<"Press 2 for Display items"<<endl;
        cout<<"press 3 for exit programm"<<endl;
        cout<<"##############################"<<endl;
        cin>>choise;
        if(choise==1){
            dhukan.getItem();
        }
        else if(choise==2){
            dhukan.displayItem();
        }
        else if(choise==3){
            exit(0);
        }
        else
        {
            cout<<"invalaid input! please try again with correct"<<endl;
        }
        
    }
    
    return 0;
}
