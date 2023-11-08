#include <iostream>
#include <iostream>
#include <string>
#include "Email_Validator.h"
#include "Carbon_Footprint_Calculator.h"
#include "Email_Carbon_Footprint.h"
using namespace std;

int main()
{
    cout << "Email Carbon Footprint Calculator" << endl;

    string email;
    int spam, inbox_standard, inbox_attachment;
    int sent_standard, sent_attachment;

    do
    {
        cout << "Enter a valid email ID : ";
        cin >> email;
        if (!IsValidEmail(email))
        {
            cout << "Email id you entered was not valid.\n";
        }
    } while (!IsValidEmail(email));

    cout << "Enter the number of spam emails: ";
    cin >> spam;
    cout << "Enter the number of standard emails in the Inbox category: ";
    cin >> inbox_standard;
    cout << "Enter the number of emails with attachments in the Inbox category: ";
    cin >> inbox_attachment;
    cout << "Enter the number of standard emails in the Sent category: ";
    cin >> sent_standard;
    cout << "Enter the number of emails with attachments in the Sent category: ";
    cin >> sent_attachment;

    EmailCarbonFootprint emailFootprint(email, spam, inbox_standard, inbox_attachment, sent_standard, sent_attachment);

    emailFootprint.DisplayEmailCarbonFootprint();

    return 0;
}
