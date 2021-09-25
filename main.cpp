#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>

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
    void calculateData();
    void printData();
};

//-------------GST FUNCTIONS----------------
void GST::getData()
{
    system("cls");
    printf(
        "  ____ ____ _____ \t  ____      _            _       _\n"
        " / ___/ ___|_   _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "| |  _\\___ \\ | |  \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |_| |___) || |  \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        " \\____|____/ |_|  \t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n"
    );
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

void GST::calculateData()
{
    GSTAmt = (taxableAmt * GSTRate) / 100;
    CGST = SGST = GSTAmt / 2;
    finalAmt = taxableAmt + GSTAmt;
}

void GST::printData()
{
    system("cls");
    printf(
        "  ____ ____ _____ \t  ____      _            _       _\n"
        " / ___/ ___|_   _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "| |  _\\___ \\ | |  \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |_| |___) || |  \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        " \\____|____/ |_|  \t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n"
    );
    cout << "=========================================================\n";
    cout << "\t\tGST Bifurcation";
    cout << "\n=========================================================\n";
    cout << "Taxable Amount:\tRs." << taxableAmt << "\t\tRate of GST: " << GSTRate << endl;
    cout << "=========================================================\n";
    cout << "CGST:\t\tRs." << CGST << endl;
    cout << "SGST:\t\tRs." << SGST << endl;
    cout << "Total GST:\tRs." << GSTAmt << endl;
    cout << "=========================================================\n";
    cout << "Final Amount:\tRs." << finalAmt << endl;
    cout << "=========================================================\n";
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
    void calculateData();
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

void SI::calculateData()
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
    void calculateData();
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

void CI::calculateData()
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
    void calculateData();
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

void EMI::calculateData()
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

/*INCOME TAX START*/
//-------------------INCOME TAX CLASS---------------
class iTax
{
private:
    int taxableIncome;
    int age;
    int year;
    float incomeTax;
    float eduCess;
    float highEduCess;
    float taxPayable;
    string name;
    int temp;

public:
    void Calculate();
    void zeroToSixty();
    void sixtyToEighty();
    void eightyAndAbove();
    //void printData();
};

//---------------INCOME TAX FUNCTIONS--------------

void iTax::Calculate()
{
    system("cls");
    cout << "Enter your name: ";
    getline(cin >> ws, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your Annual Income: ";
    cin >> taxableIncome;
    cout << "Enter the financial year for which you wish to pay the Income Tax: ";
    cin >> year;

    switch (age)
    {
    case 0 ... 60:
        iTax::zeroToSixty();
        break;
    case 61 ... 80:
        iTax::sixtyToEighty();
        break;
    case 81 ... 100:
        iTax::eightyAndAbove();
        break;
    default:
        MessageBox(0, "Please enter a valid number", "Error", 1);
        break;
    }
}

void iTax::zeroToSixty()
{
    if(taxableIncome > 0 && taxableIncome <= 250000)
        temp = 1;
    else if(taxableIncome > 250000 && taxableIncome <= 500000)
        temp = 2;
    else if (taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 3;
    else if(taxableIncome > 1000000)
        temp = 4;
    else
        cout << "Enter a valid Amount";
    
        switch (temp)
        {
        case 1:
            incomeTax = 0;
            eduCess = 0;
            highEduCess = 0;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;

        case 2:
            incomeTax = 0.05 * (taxableIncome - 250000);
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        case 3:
            incomeTax = (0.2 * (taxableIncome - 500000)) + 12500;
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        case 4:
            incomeTax = (0.3 * (taxableIncome - 1000000)) + 112500;
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        default:
            break;
        }

    cout << incomeTax << endl << eduCess << endl << highEduCess << endl;
}

void iTax::sixtyToEighty()
{
    if(taxableIncome > 0 && taxableIncome <= 300000)
        temp = 1;
    else if(taxableIncome > 300000 && taxableIncome <= 500000)
        temp = 2;
    else if (taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 3;
    else if(taxableIncome > 1000000)
        temp = 4;
    else
        cout << "Enter a Valid Number....";
    
        switch (temp)
        {
        case 1:
            incomeTax = 0;
            eduCess = 0;
            highEduCess = 0;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;

        case 2:
            incomeTax = 0.05 * (taxableIncome - 300000);
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        case 3:
            incomeTax = (0.2 * (taxableIncome - 500000)) + 10000;
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        case 4:
            incomeTax = (0.3 * (taxableIncome - 1000000)) + 110000;
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        default:
            break;
        }

    cout << incomeTax << endl << eduCess << endl << highEduCess << endl;
}

void iTax::eightyAndAbove()
{
    if(taxableIncome > 0 && taxableIncome <= 500000)
        temp = 1;
    else if(taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 2;
    else if(taxableIncome > 1000000)
        temp = 4;
    else
        cout << "Enter a Valid Number....";
    
        switch (temp)
        {
        case 1:
            incomeTax = 0;
            eduCess = 0;
            highEduCess = 0;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;

        case 2:
            incomeTax = 0.2 * (taxableIncome - 500000);
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        case 4:
            incomeTax = (0.3 * (taxableIncome - 1000000)) + 100000;
            eduCess = 0.02 * incomeTax;
            highEduCess = 0.01 * incomeTax;
            taxPayable = incomeTax + eduCess + highEduCess;
            break;
        default:
            break;
        }

    cout << incomeTax << endl << eduCess << endl << highEduCess << endl;
}

/*INCOME TAX END*/

int main()
{
    iTax inctax;
    inctax.Calculate();
    return 0;
}