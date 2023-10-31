#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool IsValidEmail(string &email) {
    const regex pattern(R"(\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b)");
    return regex_match(email, pattern);
}

class EmailCarbonFootprint {
public:
    string emailId;
    double Inbox_CarbonFootprint;
    double Sent_CarbonFootprint;
    double Spam_CarbonFootprint;

    EmailCarbonFootprint(string email, int spam, int inbox_standard, int inbox_attachment, int sent_standard, int sent_attachment) {
        emailId = email;
        Inbox_CarbonFootprint = inbox_standard * 4 + inbox_attachment * 50;
        Sent_CarbonFootprint = sent_standard * 4 + sent_attachment * 50;
        Spam_CarbonFootprint = spam * 0.3;
    }

    void DisplayEmailCarbonFootprint() {
        cout << "Email Id: " << emailId << endl;
        cout << "Inbox: " << Inbox_CarbonFootprint << " KG" << endl;
        cout << "Sent: " << Sent_CarbonFootprint << " KG" << endl;
        cout << "Spam: " << Spam_CarbonFootprint << " KG" << endl;
    }
};

int main() {
    cout << "Email Carbon Footprint Calculator" << endl;

    string email;
    int spam, inbox_standard, inbox_attachment;
    int sent_standard, sent_attachment;

    do {
        cout << "Enter a valid email ID : ";
        cin >> email;
        if(!IsValidEmail(email)){
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
