#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetTransform : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    EBoneGetterSetterMode Space; // 0x74
    bool bInitial; // 0x75
    char pad_76[0xa];
    FTransform Transform; // 0x80
    float weight; // 0xb0
    bool bPropagateToChildren; // 0xb4
    char pad_b5[0x3];
    FCachedRigElement CachedIndex; // 0xb8
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
