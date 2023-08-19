#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetTranslation : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    EBoneGetterSetterMode Space; // 0x74
    char pad_75[0x3];
    FVector Translation; // 0x78
    float weight; // 0x84
    bool bPropagateToChildren; // 0x88
    char pad_89[0x3];
    FCachedRigElement CachedIndex; // 0x8c
}; // Size: 0xa0
#pragma pack(pop)
