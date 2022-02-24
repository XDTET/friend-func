
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Car;

class Serwis {
private:
    float cena_naprawy;
public:
    void ileSerwis(Car& obiekt, float naprawa);
};

class Car {
private:
    string marka;
    string model;
    float spalanie;
public:
    Car(string m_marka, string m_model, float s_spalanie)
        : marka(m_marka), model(m_model), spalanie(s_spalanie){}
    
    void gettingData()
    {
        cout << marka << endl;
        cout << model << endl;
        cout << spalanie << endl;
    }

    void operator + ()
    {
        model += 1;
    }

    friend void Serwis::ileSerwis(Car& obiekt, float naprawa);
};

void Serwis::ileSerwis(Car& obiekt, float naprawa)
{
    cout << "Za auto marki " << obiekt.marka << " trzeba zaplacic " << naprawa << endl;
}

int main()
{
    Car c1("Volvo", "V40", 7.5);

    Serwis s1;

    s1.ileSerwis(c1, 200);
}

