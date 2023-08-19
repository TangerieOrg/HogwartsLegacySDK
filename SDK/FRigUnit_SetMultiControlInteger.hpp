#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_SetMultiControlInteger_Entry.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable {
    TArray<FRigUnit_SetMultiControlInteger_Entry> Entries; // 0x68
    float weight; // 0x78
    char pad_7c[0x4];
    TArray<FCachedRigElement> CachedControlIndices; // 0x80
}; // Size: 0x90
#pragma pack(pop)
