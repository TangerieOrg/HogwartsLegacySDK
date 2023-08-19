#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCAssetFilter {
    TArray<FName> PackageNames; // 0x0
    TArray<FName> PackagePaths; // 0x10
    TArray<FName> ClassNames; // 0x20
    char pad_30[0x50];
    bool RecursiveClasses; // 0x80
    bool RecursivePaths; // 0x81
    char pad_82[0x6];
}; // Size: 0x88
#pragma pack(pop)
