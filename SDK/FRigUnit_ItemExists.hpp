#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit_ItemBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_ItemExists : public FRigUnit_ItemBase {
    FRigElementKey Item; // 0x8
    bool Exists; // 0x14
    char pad_15[0x3];
    FCachedRigElement CachedIndex; // 0x18
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
