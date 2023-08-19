#pragma once
#include <cstdint>
#include "UWindEnvelopeController.hpp"
#pragma pack(push, 1)
class UWindEnvelopeControllerCurveBase : public UWindEnvelopeController {
public:
    static UWindEnvelopeControllerCurveBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
