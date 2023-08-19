#pragma once
#include <cstdint>
#include "FSubdividedQuad.hpp"
#pragma pack(push, 1)
struct FSubdivisionLimitSection {
    TArray<FSubdividedQuad> SubdividedQuads; // 0x0
}; // Size: 0x10
#pragma pack(pop)
