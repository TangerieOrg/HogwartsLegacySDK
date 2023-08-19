#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#pragma pack(push, 1)
struct FRigUnit_SpaceName : public FRigUnit {
    FName Space; // 0x8
}; // Size: 0x10
#pragma pack(pop)
