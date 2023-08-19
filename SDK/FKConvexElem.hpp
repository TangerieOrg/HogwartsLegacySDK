#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FKShapeElem.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FKConvexElem : public FKShapeElem {
    TArray<FVector> VertexData; // 0x30
    TArray<int32_t> IndexData; // 0x40
    FBox ElemBox; // 0x50
    char pad_6c[0x4];
    FTransform Transform; // 0x70
    char pad_a0[0x10];
}; // Size: 0xb0
#pragma pack(pop)
