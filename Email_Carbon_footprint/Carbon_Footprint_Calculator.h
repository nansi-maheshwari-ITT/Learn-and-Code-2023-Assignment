#ifndef CARBON_FOOTPRINT_CALCULATOR_H
#define CARBON_FOOTPRINT_CALCULATOR_H

double CalculateInboxCarbonFootprint(int inbox_standard, int inbox_attachment);
double CalculateSentCarbonFootprint(int sent_standard, int sent_attachment);
double CalculateSpamCarbonFootprint(int spam);

#endif