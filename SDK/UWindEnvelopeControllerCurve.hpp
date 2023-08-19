#pragma once
#include <cstdint>
#include "UWindEnvelopeControllerCurveBase.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UWindEnvelopeControllerCurve : public UWindEnvelopeControllerCurveBase {
public:
    UCurveFloat* Envelope; // 0x28
    static UWindEnvelopeControllerCurve* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
