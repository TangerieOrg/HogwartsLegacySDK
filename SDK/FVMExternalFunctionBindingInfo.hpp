#pragma once
#include <cstdint>
#include "FVMFunctionSpecifier.hpp"
#pragma pack(push, 1)
struct FVMExternalFunctionBindingInfo {
    FName Name; // 0x0
    FName OwnerName; // 0x8
    TArray<bool> InputParamLocations; // 0x10
    int32_t NumOutputs; // 0x20
    char pad_24[0x4];
    TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
}; // Size: 0x38
#pragma pack(pop)
