#include <iostream>
#include <limits>
#include <cstring>

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
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
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
    cout << "Criteria#: ";
    cin >> c;
    if (c < 3)
    {
        int value;
        cout << "Integer value: ";
        cin >> value;
        switch(c) {
        case 1:
            for (int i = 0; i < n; i++) {
                if (items[i].quantity >= value)
                    Output(items[i]);
            }
        case 2:
            for (int i = 0; i < n; i++) {
                if (items[i].guarantee >= value)
                    Output(items[i]);
            }
        }
    }
    else
    {
        float value;
        cout << "Float value: ";
        cin >> value;
        switch(c)
        {
        case 3:
            for (int i = 0; i < n ; i++)
            {
                if (items[i].sellRate >= value)
                    Output(items[i]);
            }
        case 4:
            for (int i = ; i < n; i++)
            {
                if (items[i].buyRate >= value)
                    Output(items[i]);
            }
        }
    }
}

void SearchByID()
{
    int id;
    cout << "Search by ID: ";
    cin >> id;
    for(int i = 0; i < n; i++)
    {
        if (id == items[i].id)
            Output(items[i]);
    }
}

void SearchByName()
{
    char name[25];
    cout << "Search by name: ";
    cin.get();
    cin.getline(name, 25);
    for(int i = 0; i < n; i++)
    {
        if (strcmp(items[i].name, name) == 0)
            Output(items[i]);
    }
}

void CountByNumeric() {

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
        case 4:
            SearchByNumericCriteria();
            break;
        case 5:
            SearchByID();
            break;
        case 6:
            SearchByName();
            break;
        case 7:
            CountByNumeric();
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        }

    }
}
