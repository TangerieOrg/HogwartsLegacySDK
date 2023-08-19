#pragma once
#include <cstdint>
#include "ERigVMMemoryType.hpp"
#include "FRigVMRegister.hpp"
#include "FRigVMRegisterOffset.hpp"
class UScriptStruct;
#pragma pack(push, 1)
struct FRigVMMemoryContainer {
    bool bUseNameMap; // 0x0
    ERigVMMemoryType MemoryType; // 0x1
    char pad_2[0x6];
    TArray<FRigVMRegister> Registers; // 0x8
    TArray<FRigVMRegisterOffset> RegisterOffsets; // 0x18
    TArray<uint8_t> Data; // 0x28
    TArray<UScriptStruct*> ScriptStructs; // 0x38
    char pad_48[0x50];
    bool bEncounteredErrorDuringLoad; // 0x98
    char pad_99[0x7];
}; // Size: 0xa0
#pragma pack(pop)
