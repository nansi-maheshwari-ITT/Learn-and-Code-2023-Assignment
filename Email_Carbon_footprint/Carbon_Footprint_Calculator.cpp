#include "Carbon_Footprint_Calculator.h"

double CalculateInboxCarbonFootprint(int inbox_standard, int inbox_attachment)
{
    return inbox_standard * 4 + inbox_attachment * 50;
}

double CalculateSentCarbonFootprint(int sent_standard, int sent_attachment)
{
    return sent_standard * 4 + sent_attachment * 50;
}

double CalculateSpamCarbonFootprint(int spam)
{
    return spam * 0.3;
}
