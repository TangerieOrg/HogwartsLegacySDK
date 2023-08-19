#pragma once
#include <cstdint>
#include "FConstraintProfileProperties.hpp"
#pragma pack(push, 1)
struct FPhysicsConstraintProfileHandle {
    FConstraintProfileProperties ProfileProperties; // 0x0
    FName ProfileName; // 0x118
}; // Size: 0x120
#pragma pack(pop)
