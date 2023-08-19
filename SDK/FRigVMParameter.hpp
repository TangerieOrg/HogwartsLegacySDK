#pragma once
#include <cstdint>
#include "ERigVMParameterType.hpp"
class UScriptStruct;
#pragma pack(push, 1)
struct FRigVMParameter {
    ERigVMParameterType Type; // 0x0
    char pad_1[0x3];
    FName Name; // 0x4
    int32_t RegisterIndex; // 0xc
    FString CPPType; // 0x10
    UScriptStruct* ScriptStruct; // 0x20
    FName ScriptStructPath; // 0x28
}; // Size: 0x30
#pragma pack(pop)
