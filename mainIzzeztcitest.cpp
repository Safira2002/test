 #include <iostream>
#include <exception>
using namespace std;

class Izuzetakocjena: public exception{
protected:
string s;
public:
virtual const char* Greska(){
return "Gr4eska prii unosu ocjene";
}
};
class Izuzetakdatum: public exception{
protected:
string s;
public:
virtual const char* Greska(){
return "Greska pri unosu datuma";
}
};//komentar


class student {
string ime, prezime, predmet;
int dan, mj, god, ocj;
public:
student(string i, string p, string pred, int d, int m,int g, int o){
ime=i;
prezime=p;
prezime=pred;
dan=d;
mj=m;
god=g;
ocj=o;
}
void ProvjeraO(){
if(ocj <5 && ocj>1){
throw Izuzetakocjena();
}}
void ProvjeraD(){
if(dan<1 || dan>31 || mj<1 || mj>12){throw Izuzetakdatum();}
}
};

int main()
{
string ime, prezime, predmet;
int dan, mj, god, ocj;
cout<<"ime:";
cin>>ime;
cout<<"prezime:";
cin>>prezime;
cout<<"predmet:";
cin>>predmet;
cout<<"dan:";
cin>>dan;
cout<<"mj:";
cin>>mj;
cout<<"god:";
cin>>god;
cout<<"ocj:";
cin>>ocj;
student st(ime,prezime,predmet,dan,mj,god,ocj);
try {
st.ProvjeraO();
st.ProvjeraD();
} catch (Izuzetakocjena &o) {
cout<<o.Greska();
}
catch (Izuzetakdatum &t) {
cout<<t.Greska();
}

return 0;
}
