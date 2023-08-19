#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#pragma pack(push, 1)
struct FPhysicsConvexData {
    int32_t NumVertices; // 0x0
    int32_t NumFaces; // 0x4
    FKShapeElem Element; // 0x8
}; // Size: 0x38
#pragma pack(pop)
