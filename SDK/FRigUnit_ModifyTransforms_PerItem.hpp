#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_ModifyTransforms_PerItem {
    FRigElementKey Item; // 0x0
    char pad_c[0x4];
    FTransform Transform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
