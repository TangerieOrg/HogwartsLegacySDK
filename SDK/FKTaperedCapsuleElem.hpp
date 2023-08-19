#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FKTaperedCapsuleElem : public FKShapeElem {
    FVector Center; // 0x30
    FRotator Rotation; // 0x3c
    float Radius0; // 0x48
    float Radius1; // 0x4c
    float Length; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
