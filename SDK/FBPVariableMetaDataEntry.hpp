#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBPVariableMetaDataEntry {
    FName DataKey; // 0x0
    FString DataValue; // 0x8
}; // Size: 0x18
#pragma pack(pop)
