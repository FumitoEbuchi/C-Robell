#include <iostream>
using namespace std;

void BirthMonth(void)
{
    int month;
    cout<<"あなたは何月生まれですか？ : "<<flush;
    cin >> month;

    if(1<=month&&month<=12)
    {
        cout<<"へ〜, "<<month<<"月なんですか。"<<endl;
    }else{
        cout<<month<<"月やと!?"<<endl<<"んな月, あらへんわ!"<<endl;
    }
}

int main(void)
{
    BirthMonth();
    BirthMonth();
    return 0;
}

