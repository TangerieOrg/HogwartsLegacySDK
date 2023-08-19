#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetMultiControlVector2D_Entry {
    FName Control; // 0x0
    FVector2D Vector; // 0x8
}; // Size: 0x10
#pragma pack(pop)
