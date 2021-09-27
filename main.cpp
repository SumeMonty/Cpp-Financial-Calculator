#include <iostream>
#include <cstdlib>
#include <cmath>
#include <stdio.h>

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
    void getGST();
    void showGST();
};

//-------------GST FUNCTIONS----------------
void GST::getGST()
{
    system("clear");
    printf(
        "  ____ ____ _____ \t  ____      _            _       _\n"
        " / ___/ ___|_   _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "| |  _\\___ \\ | |  \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |_| |___) || |  \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        " \\____|____/ |_|  \t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    cout << "Enter the Taxable Amount of the Product: ";
    cin >> taxableAmt;
    cout << "Enter the Rate of GST Applicable: \n1. 5%\n2. 12%\n3. 18%\n4. 28%\n\nEnter your choice: ";
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
        cout << "Enter a Valid Choice......\n\n";
        exit(0);
    }

    GSTAmt = (taxableAmt * GSTRate) / 100;
    CGST = SGST = GSTAmt / 2;
    finalAmt = taxableAmt + GSTAmt;
}

void GST::showGST()
{
    system("clear");
    printf(
        "  ____ ____ _____ \t  ____      _            _       _\n"
        " / ___/ ___|_   _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "| |  _\\___ \\ | |  \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |_| |___) || |  \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        " \\____|____/ |_|  \t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    cout << "=========================================================\n";
    cout << "\t\tGST Bifurcation";
    cout << "\n=========================================================\n";
    cout << "Taxable Amount:\tRs." << taxableAmt << "\t\tRate of GST: " << GSTRate << "%" << endl;
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
    float SITax;
    float Amt;

public:
    void getSI();
    void showSI();
};

// ----------------SIMPLE INTEREST FUNCTIONS------------

void SI::getSI()
{
    system("clear");

    printf(
        " ____  _                 _       \t ___       _                     _\n"
        "/ ___|(_)_ __ ___  _ __ | | ___  \t|_ _|_ __ | |_ ___ _ __ ___  ___| |_\n"
        "\\___ \\| | '_ ` _ \\| '_ \\| |/ _ \\ \t | || '_ \\| __/ _ \\ '__/ _ \\/ __| __|\n"
        " ___) | | | | | | | |_) | |  __/ \t | || | | | ||  __/ | |  __/\\__ \\ |_\n"
        "|____/|_|_| |_| |_| .__/|_|\\___| \t|___|_| |_|\\__\\___|_|  \\___||___/\\__|\n"
        "                  |_|\n\n\n");
    cout << "Enter Principal Value: ";
    cin >> principal;
    cout << "Enter Time Period In Years: ";
    cin >> time;
    cout << "Enter Rate of Interest: ";
    cin >> rateOfInterest;

    SITax = (principal * rateOfInterest * time) / 100;
    Amt = principal + SITax;
}

void SI::showSI()
{
    system("clear");

    printf(
        " ____  _                 _       \t ___       _                     _\n"
        "/ ___|(_)_ __ ___  _ __ | | ___  \t|_ _|_ __ | |_ ___ _ __ ___  ___| |_\n"
        "\\___ \\| | '_ ` _ \\| '_ \\| |/ _ \\ \t | || '_ \\| __/ _ \\ '__/ _ \\/ __| __|\n"
        " ___) | | | | | | | |_) | |  __/ \t | || | | | ||  __/ | |  __/\\__ \\ |_\n"
        "|____/|_|_| |_| |_| .__/|_|\\___| \t|___|_| |_|\\__\\___|_|  \\___||___/\\__|\n"
        "                  |_|\n\n\n");

    cout << "==================================\n";
    cout << "Principal:\t\tRs." << principal << "\nTime Period:\t\t" << time << " yrs"
         << "\nRate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "==================================\n";
    cout << "Simple Interest:\tRs." << SITax;
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
    float CITax;
    float Amt;

public:
    void getCI();
    void showCI();
};

// ----------------COMPOUND INTEREST FUNCTIONS------------
void CI::getCI()
{
    system("clear");

    printf(
        "  ____                                            _\t ___       _                     _\n"
        " / ___|___  _ __ ___  _ __   ___  _   _ _ __   __| |\t|_ _|_ __ | |_ ___ _ __ ___  ___| |_\n"
        "| |   / _ \\| '_ ` _ \\| '_ \\ / _ \\| | | | '_ \\ / _` |\t | || '_ \\| __/ _ \\ '__/ _ \\/ __| __|\n"
        "| |__| (_) | | | | | | |_) | (_) | |_| | | | | (_| |\t | || | | | ||  __/ | |  __/\\__ \\ |_\n"
        " \\____\\___/|_| |_| |_| .__/ \\___/ \\__,_|_| |_|\\__,_|\t|___|_| |_|\\__\\___|_|  \\___||___/\\__|\n"
        "                     |_|\n\n\n");
    cout << "Enter Principal Value: ";
    cin >> principal;
    cout << "Enter Time Period: ";
    cin >> time;
    cout << "Enter Rate of Interest: ";
    cin >> rateOfInterest;

    Amt = principal * (pow((1 + rateOfInterest / 100), time));
    CITax = Amt - principal;
}

void CI::showCI()
{
    system("clear");

    printf(
        "  ____                                            _\t ___       _                     _\n"
        " / ___|___  _ __ ___  _ __   ___  _   _ _ __   __| |\t|_ _|_ __ | |_ ___ _ __ ___  ___| |_\n"
        "| |   / _ \\| '_ ` _ \\| '_ \\ / _ \\| | | | '_ \\ / _` |\t | || '_ \\| __/ _ \\ '__/ _ \\/ __| __|\n"
        "| |__| (_) | | | | | | |_) | (_) | |_| | | | | (_| |\t | || | | | ||  __/ | |  __/\\__ \\ |_\n"
        " \\____\\___/|_| |_| |_| .__/ \\___/ \\__,_|_| |_|\\__,_|\t|___|_| |_|\\__\\___|_|  \\___||___/\\__|\n"
        "                     |_|\n\n\n");
    cout << "==================================\n";
    cout << "Principal:\t\tRs." << principal << "\nTime Period:\t\t" << time << " yrs"
         << "\nRate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "==================================\n";
    cout << "Compound Interest:\tRs." << CITax;
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
    float EMIAmt;

public:
    void getEMI();
    void showEMI();
};

//---------------EMI Functions--------------

void EMI::getEMI()
{
    system("clear");

    printf(
        " _____ __  __ ___ \t  ____      _            _       _\n"
        "| ____|  \\/  |_ _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "|  _| | |\\/| || | \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |___| |  | || | \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        "|_____|_|  |_|___|\t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    cout << "Enter the Loan Amount: ";
    cin >> principalAmt;
    cout << "Enter the time period of the loan (in years): ";
    cin >> timePeriod;
    cout << "Enter the Rate of Interest (per anum): ";
    cin >> rateOfInterest;

    float rate = rateOfInterest / (12 * 100);
    float time = timePeriod * 12;
    EMIAmt = (principalAmt * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);
}

void EMI::showEMI()
{
    system("clear");

    printf(
        " _____ __  __ ___ \t  ____      _            _       _\n"
        "| ____|  \\/  |_ _|\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "|  _| | |\\/| || | \t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "| |___| |  | || | \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        "|_____|_|  |_|___|\t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    cout << "==========================================\n";
    cout << "Loan Amount:\t\tRs." << principalAmt << endl;
    cout << "Rate Of Interest:\t" << rateOfInterest << "%" << endl;
    cout << "Time Period:\t\t" << timePeriod << " yrs" << endl;
    cout << "==========================================\n";
    cout << "Your Monthly EMI is:\tRs." << EMIAmt << endl;
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
    void getiTax();
    void zeroToSixty();
    void sixtyToEighty();
    void eightyAndAbove();
    void showiTax();
};

//---------------INCOME TAX FUNCTIONS--------------

void iTax::getiTax()
{
    system("clear");

    printf(
        " ___                                  _____          \t  ____      _            _       _\n"
        "|_ _|_ __   ___ ___  _ __ ___   ___  |_   _|_ ___  __\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        " | || '_ \\ / __/ _ \\| '_ ` _ \\ / _ \\   | |/ _` \\ \\/ /\t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        " | || | | | (_| (_) | | | | | |  __/   | | (_| |>  < \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        "|___|_| |_|\\___\\___/|_| |_| |_|\\___|   |_|\\__,_/_/\\_\\\t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
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
        // MessageBox(0, "Please enter a valid number", "Error", 1);
        cout << "Please enter a valid number";
        break;
    }
}

void iTax::zeroToSixty()
{
    if (taxableIncome > 0 && taxableIncome <= 250000)
        temp = 1;
    else if (taxableIncome > 250000 && taxableIncome <= 500000)
        temp = 2;
    else if (taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 3;
    else if (taxableIncome > 1000000)
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
}

void iTax::sixtyToEighty()
{
    if (taxableIncome > 0 && taxableIncome <= 300000)
        temp = 1;
    else if (taxableIncome > 300000 && taxableIncome <= 500000)
        temp = 2;
    else if (taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 3;
    else if (taxableIncome > 1000000)
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
}

void iTax::eightyAndAbove()
{
    if (taxableIncome > 0 && taxableIncome <= 500000)
        temp = 1;
    else if (taxableIncome > 500000 && taxableIncome <= 1000000)
        temp = 2;
    else if (taxableIncome > 1000000)
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
}

void iTax::showiTax()
{
    system("clear");
    printf(
        " ___                                  _____          \t  ____      _            _       _\n"
        "|_ _|_ __   ___ ___  _ __ ___   ___  |_   _|_ ___  __\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        " | || '_ \\ / __/ _ \\| '_ ` _ \\ / _ \\   | |/ _` \\ \\/ /\t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        " | || | | | (_| (_) | | | | | |  __/   | | (_| |>  < \t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        "|___|_| |_|\\___\\___/|_| |_| |_|\\___|   |_|\\__,_/_/\\_\\\t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    cout << "=========================================================================\n";
    cout << "\t\t\tIncome Tax Invoice\n";
    cout << "=========================================================================\n";
    cout << "Name of the Payee:\t" << name << endl;
    cout << "Age:\t\t\t" << age << "yrs" << endl;
    cout << "Financial Year:\t\t" << year << endl;
    cout << "=========================================================================\n";
    cout << "Taxable Income:\t\t\t\t\t\tRs." << taxableIncome << endl;
    cout << "Income Tax (As per age slot and Taxable Income):\tRs." << incomeTax << endl;
    cout << "Education Cess (2% of Income Tax):\t\t\tRs." << eduCess << endl;
    cout << "Higher Education Cess (1% of Income Tax):\t\tRs." << highEduCess << endl;
    cout << "=========================================================================\n";
    cout << "Total Income Tax Payable:\t\t\t\tRs." << taxPayable << endl;
    cout << "=========================================================================\n";
}

/*INCOME TAX END*/

int main()
{
    GST gst;
    SI si;
    CI ci;
    iTax itax;
    EMI emi;

mainmenu:
    system("clear");
    printf(
        " _____ _                        _       _ \t  ____      _            _       _\n"
        "|  ___(_)_ __   __ _ _ __   ___(_) __ _| |\t / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __\n"
        "| |_  | | '_ \\ / _` | '_ \\ / __| |/ _` | |\t| |   / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n"
        "|  _| | | | | | (_| | | | | (__| | (_| | |\t| |__| (_| | | (__| |_| | | (_| | || (_) | |\n"
        "|_|   |_|_| |_|\\__,_|_| |_|\\___|_|\\__,_|_|\t \\____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|\n\n\n");
    int choice;
    printf(
        "Choose An Option\n\n"
        "1.GST Calculator\n\n"
        "2.Simple Interest Calculator\n\n"
        "3.Compound Interest Calculator\n\n"
        "4.Income Tax Calculator\n\n"
        "5.EMI Interest Calculator\n\n"
        "Enter your choice: "
        );
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        gst.getGST();
        gst.showGST();
        break;
    case 2:
        si.getSI();
        si.showSI();
        break;
    case 3:
        ci.getCI();
        ci.showCI();
        break;
    case 4:
        itax.getiTax();
        itax.showiTax();
        break;
    case 5:
        emi.getEMI();
        emi.showEMI();
        break;
    default:
        cout << "Enter a Valid Option....!!" << endl;
        break;
    }
    return 0;
}