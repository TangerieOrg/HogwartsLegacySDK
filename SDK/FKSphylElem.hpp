#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FKSphylElem : public FKShapeElem {
    FVector Center; // 0x30
    FRotator Rotation; // 0x3c
    float Radius; // 0x48
    float Length; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
