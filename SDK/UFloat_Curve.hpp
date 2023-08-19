#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_Curve : public UFloatProvider {
public:
    FRuntimeFloatCurve Curve; // 0x28
    static UFloat_Curve* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
