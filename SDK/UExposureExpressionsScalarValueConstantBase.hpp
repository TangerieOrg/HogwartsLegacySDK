#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarValueConstantBase : public UExposureExpressionsScalarValue {
public:
    static UExposureExpressionsScalarValueConstantBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
