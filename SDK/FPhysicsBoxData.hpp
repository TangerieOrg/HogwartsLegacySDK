#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPhysicsBoxData {
    FVector Dimensions; // 0x0
    char pad_c[0x4];
    FTransform Transform; // 0x10
    FKShapeElem Element; // 0x40
}; // Size: 0x70
#pragma pack(pop)
