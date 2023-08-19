#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetControlVisibility : public FRigUnitMutable {
    FRigElementKey Item; // 0x68
    char pad_74[0x4];
    FString Pattern; // 0x78
    bool bVisible; // 0x88
    char pad_89[0x7];
    TArray<FCachedRigElement> CachedControlIndices; // 0x90
}; // Size: 0xa0
#pragma pack(pop)
