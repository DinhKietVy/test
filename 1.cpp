#include<iostream>
#include<string>

using namespace std;

struct SinhVien
{
    string name;
    int age;
};

struct Node
{
    SinhVien ds;
    Node *p;
};

struct List
{
    Node *phead;
    Node *ptail;
};


int main()
{
    List dssv;
    dssv.phead = nullptr;
    dssv.ptail = nullptr;
    Node sv1;
    sv1.ds.name = "Nguyen Van A";
    sv1.ds.age = 20;
    sv1.p = nullptr;
    dssv.phead = &sv1;
    dssv.ptail = &sv1;
    Node sv2;
    sv2.ds.name = "Le Thi B";
    sv2.ds.age = 21;
    sv2.p = nullptr;
    dssv.ptail->p = &sv2;
    dssv.ptail = &sv2;
    cout << "Danh sach sinh vien:" << endl;
    Node *current = dssv.phead;
    while (current != nullptr)
    {
        cout << "Ten: " << current->ds.name << ", Tuoi: " << current->ds.age << endl;
        current = current->p;
    }
}