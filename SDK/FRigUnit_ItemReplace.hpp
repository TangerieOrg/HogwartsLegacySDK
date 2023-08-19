#pragma once
#include <cstdint>
#include "FRigElementKey.hpp"
#include "FRigUnit_ItemBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase {
    FRigElementKey Item; // 0x8
    FName Old; // 0x14
    FName NEW; // 0x1c
    FRigElementKey Result; // 0x24
}; // Size: 0x30
#pragma pack(pop)
