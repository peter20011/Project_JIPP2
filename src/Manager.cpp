//
// Created by PW on 23.01.2022.
//

#include "Manager.h"

void Manager::Print_ManagerDetails()
{
    cout << "\nName.size: " << Name.size();
    cout << "\nID.size: " << ID.size();
    cout << "\nBranch.size: " << Branch.size();
    for (int i = 0; i < Name.size(); i++)
    {
        cout << "\nThe ID of Manager is : " << ID[i] << endl;
        cout << "\nThe Name of Manager is : " << Name[i] << endl;
        cout << "\nThe Branch of Manager is : " << Branch[i] << endl;
    }
}
void Manager::TakeManagersData(string n, string b, int id)
{
    Name.push_back(n);
    Branch.push_back(b);
    ID.push_back(id);
}