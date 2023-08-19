#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable {
    FName SpaceName; // 0x68
    FTransform Transform; // 0x70
    FTransform Result; // 0xa0
    EBoneGetterSetterMode Space; // 0xd0
    char pad_d1[0x3];
    FCachedRigElement CachedSpaceIndex; // 0xd4
    char pad_e8[0x8];
}; // Size: 0xf0
#pragma pack(pop)
