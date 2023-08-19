#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FQuat.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetRotation : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    EBoneGetterSetterMode Space; // 0x74
    char pad_75[0xb];
    FQuat Rotation; // 0x80
    float weight; // 0x90
    bool bPropagateToChildren; // 0x94
    char pad_95[0x3];
    FCachedRigElement CachedIndex; // 0x98
    char pad_ac[0x4];
}; // Size: 0xb0
#pragma pack(pop)
