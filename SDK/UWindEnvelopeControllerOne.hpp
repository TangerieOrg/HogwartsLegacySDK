#pragma once
#include <cstdint>
#include "UWindEnvelopeControllerCurveBase.hpp"
#pragma pack(push, 1)
class UWindEnvelopeControllerOne : public UWindEnvelopeControllerCurveBase {
public:
    static UWindEnvelopeControllerOne* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
