//
//  VacationAccount.cpp
//  project6
//
//  Created by Jack Chin on 2022/3/17.
//

#include "VacationAccount.h"
#include <string>
#include <iostream>
VacationAccount::VacationAccount(int EmployeeID)
{
    if ( EmployeeID < 100000 || EmployeeID > 999999){
        mID = -1;
    }
    else{
        mID = EmployeeID;
    }
//    mBalance = 0.0;
//    cout << 10 << endl;
}
//Getter or accessor
int VacationAccount::getID()
{
    return mID;
}
double VacationAccount::getBalance()
{
    return mBalance;
}
//Setter
bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
    if( ( donation.getID() != mID ) || ( donation.getID() == -1 ) ){
        return false;
    }
    if ( donation.getAge() == -1 )
    {
        return false;
    }
    if ( donation.getWeight() == -1 )
    {
        return false;
    }
    //Function 1.
    if ( donation.getAge() > 55 ){
        mBalance = mBalance + ( 2.5 * 4 );
        return true;
    }
    else{
        mBalance += 4;
        return true;
    }
}
