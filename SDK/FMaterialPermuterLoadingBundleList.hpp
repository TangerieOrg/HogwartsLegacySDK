#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMaterialPermuterLoadingBundleList {
    TArray<void*> Bundles; // 0x0
    TArray<void*> QueuedBundles; // 0x10
    TArray<void*> RemoveBundles; // 0x20
    bool bProcessing; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
