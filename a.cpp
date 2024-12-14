#include<bits/stdc++.h>
using namespace std;
class nguoi{
private:
    string hoten;
    int tuoi;
public:
    nguoi(){
        hoten="";
        tuoi=0;
    }
    nguoi(string hoten,int tuoi){
        this->hoten=hoten;
        this->tuoi=tuoi;
    }
    void setnguoi(){
        cin>>hoten>>tuoi;
    }
    void getnguoi(){
        cout<<hoten<<nguoi;
    }
};
class nhanvien:nguoi(){
private:
    int snct;float hsl;
public:
    nhanvien(){
        snct=0;
        hsl=0;
    }
    nhanvien(int snct;float hsl){
        this->snct=snct;
        this->hsl=hsl;
    }
    void setnv(){
        cin>>snct>>hsl;
    }

    void getnv(){
        cout<<snct<<hsl;
    }
    float luong(){
        return 1.5*hsl+0.2*snct;
    }
};
int main(){

}
