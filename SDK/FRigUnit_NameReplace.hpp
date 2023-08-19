#pragma once
#include <cstdint>
#include "FRigUnit_NameBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_NameReplace : public FRigUnit_NameBase {
    FName Name; // 0x8
    FName Old; // 0x10
    FName NEW; // 0x18
    FName Result; // 0x20
}; // Size: 0x28
#pragma pack(pop)
