#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FARFilter {
    TArray<FName> PackageNames; // 0x0
    TArray<FName> PackagePaths; // 0x10
    TArray<FName> ObjectPaths; // 0x20
    TArray<FName> ClassNames; // 0x30
    char pad_40[0xa0];
    bool bRecursivePaths; // 0xe0
    bool bRecursiveClasses; // 0xe1
    bool bIncludeOnlyOnDiskAssets; // 0xe2
    char pad_e3[0xd];
}; // Size: 0xf0
#pragma pack(pop)
