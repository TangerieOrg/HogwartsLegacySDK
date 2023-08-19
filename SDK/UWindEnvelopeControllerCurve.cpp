#include "UCurveFloat.hpp"
#include "UWindEnvelopeControllerCurve.hpp"
#include "UWindEnvelopeControllerCurveBase.hpp"
UWindEnvelopeControllerCurve* UWindEnvelopeControllerCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeControllerCurve");
    return (UWindEnvelopeControllerCurve*)res;
}
