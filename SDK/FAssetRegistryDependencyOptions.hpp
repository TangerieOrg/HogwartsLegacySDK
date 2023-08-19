#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAssetRegistryDependencyOptions {
    bool bIncludeSoftPackageReferences; // 0x0
    bool bIncludeHardPackageReferences; // 0x1
    bool bIncludeSearchableNames; // 0x2
    bool bIncludeSoftManagementReferences; // 0x3
    bool bIncludeHardManagementReferences; // 0x4
}; // Size: 0x5
#pragma pack(pop)
