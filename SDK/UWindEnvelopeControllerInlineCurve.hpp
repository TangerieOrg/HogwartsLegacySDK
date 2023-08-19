#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UWindEnvelopeControllerCurveBase.hpp"
#pragma pack(push, 1)
class UWindEnvelopeControllerInlineCurve : public UWindEnvelopeControllerCurveBase {
public:
    FRuntimeFloatCurve Envelope; // 0x28
    static UWindEnvelopeControllerInlineCurve* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
