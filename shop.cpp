#include<iostream>
#include<limits>
using namespace std;

struct Item
{
    char name[25];
    int quantity;
    int guarantee;
    float sellRate;
    float buyRate;
};


Item items[20];
int n = 0;

void Input(Item &e)
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Name: ";
    cin.getline(e.name, 25);
    cout<<"Quantity: ";
    cin>>e.quantity;
    cout<<"Guarantee: ";
    cin>>e.guarantee;
    cout<<"Sell rate: ";
    cin>>e.sellRate;
    cout<<"Buy rate: ";
    cin>>e.buyRate;
}

void Output(Item b)
{
    cout<<b.name<<" "<<b.quantity<<" "<<b.guarantee<<" "<<b.sellRate<<" "<<b.buyRate;
    cout<<endl;
}

void InputItem()
{
    Item item;
    Input(item);
    items[n++] = item;
}

void OutputArray()
{
    for (int i = 0; i < n; i++)
        Output(items[i]);
}

int main()
{
    int n;
    while(true)
    {
        cout << "n= ";
        cin >> n;
        switch(n)
        {
        case 0:
            return 0;
        case 1:
            InputItem();
            break;
        case 2:
            OutputArray();
            break;
        }
    }
}
