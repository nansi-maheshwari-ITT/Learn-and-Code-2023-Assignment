#include "Email_Carbon_Footprint.h"
#include "Carbon_Footprint_Calculator.h"
#include <iostream>
using namespace std;

EmailCarbonFootprint::EmailCarbonFootprint(string &email, int spam, int inbox_standard, int inbox_attachment, int sent_standard, int sent_attachment)
    : emailId(email),
      Inbox_CarbonFootprint(CalculateInboxCarbonFootprint(inbox_standard, inbox_attachment)),
      Sent_CarbonFootprint(CalculateSentCarbonFootprint(sent_standard, sent_attachment)),
      Spam_CarbonFootprint(CalculateSpamCarbonFootprint(spam))
{
}

void EmailCarbonFootprint::DisplayEmailCarbonFootprint() const
{
    cout << "Email Id: " << emailId << endl;
    cout << "Inbox: " << Inbox_CarbonFootprint << " KG" << endl;
    cout << "Sent: " << Sent_CarbonFootprint << " KG" << endl;
    cout << "Spam: " << Spam_CarbonFootprint << " KG" << endl;
}
