#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMaterialParameterInfo.hpp"
#pragma pack(push, 1)
struct FMaterialCachedParameterEntry {
    TArray<uint64_t> NameHashes; // 0x0
    TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
    TArray<FGuid> ExpressionGuids; // 0x20
}; // Size: 0x30
#pragma pack(pop)
