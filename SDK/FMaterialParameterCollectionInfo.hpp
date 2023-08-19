#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UMaterialParameterCollection;
#pragma pack(push, 1)
struct FMaterialParameterCollectionInfo {
    FGuid StateId; // 0x0
    UMaterialParameterCollection* ParameterCollection; // 0x10
}; // Size: 0x18
#pragma pack(pop)
