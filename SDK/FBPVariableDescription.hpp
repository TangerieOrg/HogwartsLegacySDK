#pragma once
#include <cstdint>
#include "ELifetimeCondition.hpp"
#include "FBPVariableMetaDataEntry.hpp"
#include "FEdGraphPinType.hpp"
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FBPVariableDescription {
    FName VarName; // 0x0
    FGuid VarGuid; // 0x8
    FEdGraphPinType VarType; // 0x18
    FString FriendlyName; // 0x70
    char pad_80[0x18];
    uint64_t PropertyFlags; // 0x98
    FName RepNotifyFunc; // 0xa0
    ELifetimeCondition ReplicationCondition; // 0xa8
    char pad_a9[0x7];
    TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
    FString DefaultValue; // 0xc0
}; // Size: 0xd0
#pragma pack(pop)
