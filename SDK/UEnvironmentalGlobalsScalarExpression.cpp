#include "EEnvironmentalGlobalsScalarConversion.hpp"
#include "UEnvironmentalGlobalsScalarExpression.hpp"
#include "UEnvironmentalGlobalsScalarVar.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UEnvironmentalGlobalsScalarExpression* UEnvironmentalGlobalsScalarExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsScalarExpression");
    return (UEnvironmentalGlobalsScalarExpression*)res;
}
