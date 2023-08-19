#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FPhysicsSphereData {
    float Radius; // 0x0
    char pad_4[0xc];
    FTransform Transform; // 0x10
    FKShapeElem Element; // 0x40
}; // Size: 0x70
#pragma pack(pop)
