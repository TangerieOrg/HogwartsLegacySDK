#pragma once
#include <cstdint>
#include "FKShapeElem.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FKBoxElem : public FKShapeElem {
    FVector Center; // 0x30
    FRotator Rotation; // 0x3c
    float X; // 0x48
    float Y; // 0x4c
    float Z; // 0x50
    char pad_54[0x4];
}; // Size: 0x58
#pragma pack(pop)
