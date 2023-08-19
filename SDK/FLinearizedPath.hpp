#pragma once
#include <cstdint>
#include "FLinearizedPathBorderPoint.hpp"
#include "FLinearizedPathSplineAux.hpp"
#include "FLinearizedSpline.hpp"
#pragma pack(push, 1)
struct FLinearizedPath : public FLinearizedSpline {
    TArray<FLinearizedPathSplineAux> PathPointAux; // 0x38
    TArray<FLinearizedPathBorderPoint> NegBorderPoints; // 0x48
    TArray<FLinearizedPathBorderPoint> PosBorderPoints; // 0x58
}; // Size: 0x68
#pragma pack(pop)
