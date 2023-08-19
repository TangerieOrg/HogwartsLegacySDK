#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCompilerNativizationOptions {
    FName PlatformName; // 0x0
    bool ServerOnlyPlatform; // 0x8
    bool ClientOnlyPlatform; // 0x9
    bool bExcludeMonolithicHeaders; // 0xa
    char pad_b[0x5];
    TArray<FName> ExcludedModules; // 0x10
    char pad_20[0x50];
    TArray<FString> ExcludedFolderPaths; // 0x70
}; // Size: 0x80
#pragma pack(pop)
