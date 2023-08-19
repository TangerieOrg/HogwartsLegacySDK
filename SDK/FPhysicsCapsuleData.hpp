#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPhysicsCapsuleData {
    float Radius; // 0x0
    float Length; // 0x4
    char pad_8[0x8];
    FTransform Transform; // 0x10
    FKShapeElem Element; // 0x40
}; // Size: 0x70
#pragma pack(pop)
