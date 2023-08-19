#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_Item : public FRigUnit {
    FRigElementKey Item; // 0x8
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
