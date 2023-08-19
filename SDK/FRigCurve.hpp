#pragma once
#include <cstdint>
#include "FRigElement.hpp"
#pragma pack(push, 1)
struct FRigCurve : public FRigElement {
    float Value; // 0x18
    char pad_1c[0x4];
}; // Size: 0x20
#pragma pack(pop)
