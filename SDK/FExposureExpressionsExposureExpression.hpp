#pragma once
#include <cstdint>
class UExposureExpressionsExposureValue;
#pragma pack(push, 1)
struct FExposureExpressionsExposureExpression {
    FName Name; // 0x0
    UExposureExpressionsExposureValue* Expression; // 0x8
}; // Size: 0x10
#pragma pack(pop)
