#include<iostream>
#include<limits>
using namespace std;

struct Item
{
    int id;
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
    cout << "ID: ";
    cin >> e.id;
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

void SearchByNumericCriteria()
{
    int c;
    cout << "c= ";
    cin >> c;
    switch(c)
    {
    case 0:

    }
}

void SearchByFloat(int c)
{

}

void SearchByInt(int c)
{

}

void SearchByID()
{

}

void SearchByName()
{

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
        case 3:
            SearchByNumericCriteria();
            break;
        case 4:
            SearchByID();
            break;
        case 5:
            SearchByName();
            break;
        }
    }
}
