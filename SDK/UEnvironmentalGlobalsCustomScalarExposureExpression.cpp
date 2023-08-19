#include "UEnvironmentalGlobalsCustomScalarExposureExpression.hpp"
#include "UEnvironmentalGlobalsCustomScalarModsBase.hpp"
#include "UExposureExpressionsScalarValue.hpp"
UEnvironmentalGlobalsCustomScalarExposureExpression* UEnvironmentalGlobalsCustomScalarExposureExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsCustomScalarExposureExpression");
    return (UEnvironmentalGlobalsCustomScalarExposureExpression*)res;
}
