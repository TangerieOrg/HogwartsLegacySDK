#include "UWindEnvelopeControllerCurveBase.hpp"
#include "UWindEnvelopeControllerOne.hpp"
UWindEnvelopeControllerOne* UWindEnvelopeControllerOne::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeControllerOne");
    return (UWindEnvelopeControllerOne*)res;
}
