#pragma once
#include <cstdint>
#include "FCachedRigElement.hpp"
#include "FRigUnitMutable.hpp"
#include "FRigUnit_SetMultiControlBool_Entry.hpp"
#pragma pack(push, 1)
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable {
    TArray<FRigUnit_SetMultiControlBool_Entry> Entries; // 0x68
    TArray<FCachedRigElement> CachedControlIndices; // 0x78
}; // Size: 0x88
#pragma pack(pop)
