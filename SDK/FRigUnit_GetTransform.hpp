#pragma once
#include <cstdint>
#include "EBoneGetterSetterMode.hpp"
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_GetTransform : public FRigUnit {
    FRigElementKey Item; // 0x8
    EBoneGetterSetterMode Space; // 0x14
    bool bInitial; // 0x15
    char pad_16[0xa];
    FTransform Transform; // 0x20
    FCachedRigElement CachedIndex; // 0x50
    char pad_64[0xc];
}; // Size: 0x70
#pragma pack(pop)
