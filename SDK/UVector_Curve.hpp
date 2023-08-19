#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "UVectorProvider.hpp"
#pragma pack(push, 1)
class UVector_Curve : public UVectorProvider {
public:
    FRuntimeCurveVector Curve; // 0x28
    static UVector_Curve* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
