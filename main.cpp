#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
/*GST START*/
//-------------GST CLASSES----------------
class GST
{
private:
    float taxableAmt;
    float CGST;
    float SGST;
    float GSTRate;
    float GSTAmt;
    float finalAmt;
    int choice;

public:
    void getData();
    void calculateGST();
    void printData();
};

//-------------GST FUNCTIONS----------------
void GST::getData()
{
    system("cls");
    cout << "Enter the Taxable Amount of the Product: ";
    cin >> taxableAmt;
    cout << "Enter the Rate of GST Applicable: \n1. 5%\n2. 12%\n3. 18%\n4. 28%\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        GSTRate = 5.0;
        break;
    case 2:
        GSTRate = 12.0;
        break;
    case 3:
        GSTRate = 18.0;
        break;
    case 4:
        GSTRate = 28.0;
        break;

    default:
        cout << "Enter a Valid Choice......";
        break;
    }
}

void GST::calculateGST()
{
    GSTAmt = (taxableAmt * GSTRate) / 100;
    CGST = SGST = GSTAmt / 2;
    finalAmt = taxableAmt + GSTAmt;
}

void GST::printData()
{
    system("cls");
    cout << "\n=================================================\n";
    cout << "Taxable Amount:\tRs." << taxableAmt << "\tRate of GST: " << GSTRate << endl;
    cout << "=================================================\n";
    cout << "CGST:\t\tRs." << CGST << endl;
    cout << "SGST:\t\tRs." << SGST << endl;
    cout << "Total GST:\tRs." << GSTAmt << endl;
    cout << "=================================================\n";
    cout << "Final Amount:\tRs." << finalAmt << endl;
    cout << "=================================================\n";
}
/*GST END*/

/*SIMPLE INTEREST START*/
// ----------------SIMPLE INTEREST CLASSES------------
class SI
{
private:
    int principal;
    int time;
    float rateOfInterest;
    float SI;
    float Amt;

public:
    void getData();
    void calculateSI();
    void printData();
};

// ----------------SIMPLE INTEREST FUNCTIONS------------

void SI::getData()
{
    system("cls");
    cout << "Enter Principal Value: ";
    cin >> principal;
    cout << "Enter Time Period In Years: ";
    cin >> time;
    cout << "Enter Rate of Interest: ";
    cin >> rateOfInterest;
}

void SI::calculateSI()
{
    SI = (principal * rateOfInterest * time) / 100;
    Amt = principal + SI;
}

void SI::printData()
{
    system("cls");

    cout << "==================================\n";
    cout << "Principal:\t\tRs." << principal << "\nTime Period:\t\t" << time << " yrs"
         << "\nRate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "==================================\n";
    cout << "Simple Interest:\tRs." << SI;
    cout << "\n==================================\n";
    cout << "Total Amount:\t\tRs." << Amt << endl;
    cout << "==================================\n";
}
/*SIMPLE INTEREST END*/

/*COMPOUND INTEREST START*/
//--------------Compound INTEREST CLASSES------------
class CI
{
private:
    int principal;
    int time;
    float rateOfInterest;
    float CI;
    float Amt;

public:
    void getData();
    void calculateCI();
    void printData();
};

// ----------------COMPOUND INTEREST FUNCTIONS------------
void CI::getData()
{
    system("cls");
    cout << "Enter Principal Value: ";
    cin >> principal;
    cout << "Enter Time Period: ";
    cin >> time;
    cout << "Enter Rate of Interest: ";
    cin >> rateOfInterest;
}

void CI::calculateCI()
{
    Amt = principal * (pow((1 + rateOfInterest / 100), time));
    CI = Amt - principal;
}

void CI::printData()
{
    system("cls");
    cout << "==================================\n";
    cout << "Principal:\t\tRs." << principal << "\nTime Period:\t\t" << time << " yrs"
    << "\nRate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "==================================\n";
    cout << "Compound Interest:\tRs." << CI;
    cout << "\n==================================\n";
    cout << "Total Amount:\t\tRs." << Amt << endl;
    cout << "==================================\n";
}
/*COMPOUND INTEREST END*/

/*EMI START*/
//-----------------EMI CALCULATOR CLASS-------------------
class EMI
{
private:
    float principalAmt;
    float rateOfInterest;
    float timePeriod;
    float EMI;

public:
    void getData();
    void calculateEMI();
    void printData();
};

//---------------EMI Functions--------------

void EMI::getData()
{
    system("cls");
    cout << "Enter the Loan Amount: ";
    cin >> principalAmt;
    cout << "Enter the time period of the loan (in years): ";
    cin >> timePeriod;
    cout << "Enter the Rate of Interest (per anum): ";
    cin >> rateOfInterest;
}

void EMI::calculateEMI()
{
    float rate = rateOfInterest / (12 * 100);
    float time = timePeriod * 12;
    EMI = (principalAmt * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);
}

void EMI::printData()
{
    system("cls");
    cout << "==========================================\n";
    cout << "Loan Amount:\t\tRs." << principalAmt << endl;
    cout << "Rate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "Time Period:\t\t" << timePeriod << " yrs" << endl;
    cout << "==========================================\n";
    cout << "Your Monthly EMI is:\tRs." << EMI << endl;
    cout << "==========================================\n";
}
/*EMI END*/

int main()
{
    CI emi;
    emi.getData();
    emi.calculateCI();
    emi.printData();
    return 0;
}