#include "EEnvironmentalGlobalsValue.hpp"
#include "UCurveFloat.hpp"
#include "UEnvironmentalGlobalsExpsoureCurveFromGlobals.hpp"
#include "UExposureExpressionsExposureValue.hpp"
UEnvironmentalGlobalsExpsoureCurveFromGlobals* UEnvironmentalGlobalsExpsoureCurveFromGlobals::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.EnvironmentalGlobalsExpsoureCurveFromGlobals");
    return (UEnvironmentalGlobalsExpsoureCurveFromGlobals*)res;
}
