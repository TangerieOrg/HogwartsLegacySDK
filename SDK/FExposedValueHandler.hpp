#pragma once
#include <cstdint>
#include "FExposedValueCopyRecord.hpp"
class UFunction;
#pragma pack(push, 1)
struct FExposedValueHandler {
    FName BoundFunction; // 0x0
    TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
    UFunction* Function; // 0x18
    char pad_20[0x30];
}; // Size: 0x50
#pragma pack(pop)
