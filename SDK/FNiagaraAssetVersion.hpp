#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FNiagaraAssetVersion {
    int32_t MajorVersion; // 0x0
    int32_t MinorVersion; // 0x4
    FGuid VersionGuid; // 0x8
    bool bIsVisibleInVersionSelector; // 0x18
    char pad_19[0x3];
}; // Size: 0x1c
#pragma pack(pop)
