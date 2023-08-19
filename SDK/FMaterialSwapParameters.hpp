#pragma once
#include <cstdint>
#include "FMaterialSwapParametersSimple.hpp"
#include "FMaterialSwapTransformedPosition.hpp"
#include "FMaterialSwapTransformedVector.hpp"
#pragma pack(push, 1)
struct FMaterialSwapParameters : public FMaterialSwapParametersSimple {
    TArray<FMaterialSwapTransformedPosition> TransformedPositions; // 0x30
    TArray<FMaterialSwapTransformedVector> TransformedVectors; // 0x40
}; // Size: 0x50
#pragma pack(pop)
