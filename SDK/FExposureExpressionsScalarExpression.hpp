#pragma once
#include <cstdint>
class UExposureExpressionsScalarValue;
#pragma pack(push, 1)
struct FExposureExpressionsScalarExpression {
    FName Name; // 0x0
    UExposureExpressionsScalarValue* Expression; // 0x8
}; // Size: 0x10
#pragma pack(pop)
