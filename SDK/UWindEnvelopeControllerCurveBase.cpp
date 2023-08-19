#include "UWindEnvelopeController.hpp"
#include "UWindEnvelopeControllerCurveBase.hpp"
UWindEnvelopeControllerCurveBase* UWindEnvelopeControllerCurveBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeControllerCurveBase");
    return (UWindEnvelopeControllerCurveBase*)res;
}
