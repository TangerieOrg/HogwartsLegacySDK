#pragma once
#include <cstdint>
#include "EARObjectClassification.hpp"
#include "FARSessionPayload.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FARPlaneUpdatePayload {
    FARSessionPayload SessionPayload; // 0x0
    char pad_18[0x8];
    FTransform WorldTransform; // 0x20
    FVector Center; // 0x50
    FVector Extents; // 0x5c
    TArray<FVector> BoundaryVertices; // 0x68
    EARObjectClassification ObjectClassification; // 0x78
    char pad_79[0x7];
}; // Size: 0x80
#pragma pack(pop)
