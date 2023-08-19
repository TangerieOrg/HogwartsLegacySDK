#pragma once
#include <cstdint>
#include "FSubdividedWireEdge.hpp"
#include "FSubdivisionLimitSection.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSubdivisionLimitData {
    TArray<FVector> VertexPositions; // 0x0
    TArray<FSubdivisionLimitSection> Sections; // 0x10
    TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
}; // Size: 0x30
#pragma pack(pop)
