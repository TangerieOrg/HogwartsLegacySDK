#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_Curve : public UIntProvider {
public:
    FRuntimeFloatCurve Curve; // 0x28
    static UInt_Curve* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
