#ifndef EMAIL_CARBON_FOOTPRINT_H
#define EMAIL_CARBON_FOOTPRINT_H

#include <string>
using namespace std;

class EmailCarbonFootprint
{
public:
    EmailCarbonFootprint(string &email, int spam, int inbox_standard, int inbox_attachment, int sent_standard, int sent_attachment);

    void DisplayEmailCarbonFootprint() const;

private:
    string emailId;
    double Inbox_CarbonFootprint;
    double Sent_CarbonFootprint;
    double Spam_CarbonFootprint;
};

#endif
