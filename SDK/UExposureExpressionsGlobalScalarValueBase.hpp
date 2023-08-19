#pragma once
#include <cstdint>
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsGlobalScalarValueBase : public UExposureExpressionsScalarValue {
public:
    static UExposureExpressionsGlobalScalarValueBase* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
