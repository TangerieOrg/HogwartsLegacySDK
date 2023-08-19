#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_Curve : public UBoolProvider {
public:
    FRuntimeFloatCurve Curve; // 0x28
    static UBool_Curve* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
