#pragma once
#include <cstdint>
#include "FRuntimeCurveLinearColor.hpp"
#include "UColorProvider.hpp"
#pragma pack(push, 1)
class UColor_Curve : public UColorProvider {
public:
    FRuntimeCurveLinearColor Curve; // 0x28
    static UColor_Curve* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
