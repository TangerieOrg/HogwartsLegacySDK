#include "FRuntimeFloatCurve.hpp"
#include "UWindEnvelopeControllerCurveBase.hpp"
#include "UWindEnvelopeControllerInlineCurve.hpp"
UWindEnvelopeControllerInlineCurve* UWindEnvelopeControllerInlineCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindEnvelopeControllerInlineCurve");
    return (UWindEnvelopeControllerInlineCurve*)res;
}
