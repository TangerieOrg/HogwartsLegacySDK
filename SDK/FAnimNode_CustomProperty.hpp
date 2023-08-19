#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
class UObject;
#pragma pack(push, 1)
struct FAnimNode_CustomProperty : public FAnimNode_Base {
    TArray<FName> SourcePropertyNames; // 0x10
    TArray<FName> DestPropertyNames; // 0x20
    UObject* TargetInstance; // 0x30
    char pad_38[0x20];
}; // Size: 0x58
#pragma pack(pop)
