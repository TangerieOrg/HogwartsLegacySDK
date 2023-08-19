#pragma once
#include <cstdint>
#include "FSubdividedQuadVertex.hpp"
#pragma pack(push, 1)
struct FSubdividedQuad {
    FSubdividedQuadVertex QuadVertex0; // 0x0
    FSubdividedQuadVertex QuadVertex1; // 0x34
    FSubdividedQuadVertex QuadVertex2; // 0x68
    FSubdividedQuadVertex QuadVertex3; // 0x9c
}; // Size: 0xd0
#pragma pack(pop)
