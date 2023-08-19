#pragma once
#include <cstdint>
#include "UUberExposureDriver.hpp"
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
class UUberExposureDriverExposureExpression : public UUberExposureDriver {
public:
    UExposureExpressionsExposureValue* Expression; // 0x28
    static UUberExposureDriverExposureExpression* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
