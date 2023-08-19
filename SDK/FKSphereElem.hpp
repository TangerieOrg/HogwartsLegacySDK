#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FKSphereElem : public FKShapeElem {
    FVector Center; // 0x30
    float Radius; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
