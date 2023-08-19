#pragma once
#include <cstdint>
#include "FExposureExpressionsExtraScalarName.hpp"
#include "UExposureExpressionsScalarValue.hpp"
#pragma pack(push, 1)
class UExposureExpressionsScalarExtrasValue : public UExposureExpressionsScalarValue {
public:
    FExposureExpressionsExtraScalarName Value; // 0x28
    static UExposureExpressionsScalarExtrasValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
