#pragma once
#include <cstdint>
#include "ERigVMRegisterType.hpp"
class UScriptStruct;
#pragma pack(push, 1)
struct FRigVMRegisterOffset {
    TArray<int32_t> Segments; // 0x0
    ERigVMRegisterType Type; // 0x10
    char pad_11[0x3];
    FName CPPType; // 0x14
    char pad_1c[0x4];
    UScriptStruct* ScriptStruct; // 0x20
    UScriptStruct* ParentScriptStruct; // 0x28
    int32_t ArrayIndex; // 0x30
    uint16_t ElementSize; // 0x34
    char pad_36[0x2];
    FString CachedSegmentPath; // 0x38
}; // Size: 0x48
#pragma pack(pop)
