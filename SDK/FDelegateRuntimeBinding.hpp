#pragma once
#include <cstdint>
#include "EBindingKind.hpp"
#include "FDynamicPropertyPath.hpp"
#pragma pack(push, 1)
struct FDelegateRuntimeBinding {
    FString ObjectName; // 0x0
    FName PropertyName; // 0x10
    FName FunctionName; // 0x18
    FDynamicPropertyPath SourcePath; // 0x20
    EBindingKind Kind; // 0x48
    char pad_49[0x7];
}; // Size: 0x50
#pragma pack(pop)
