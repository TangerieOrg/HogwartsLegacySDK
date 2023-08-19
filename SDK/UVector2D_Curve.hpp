#pragma once
#include <cstdint>
#include "FRuntimeCurveVector2D.hpp"
#include "UVector2DProvider.hpp"
#pragma pack(push, 1)
class UVector2D_Curve : public UVector2DProvider {
public:
    FRuntimeCurveVector2D Curve; // 0x28
    static UVector2D_Curve* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
