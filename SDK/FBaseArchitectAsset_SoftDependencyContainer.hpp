#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBaseArchitectAsset_SoftDependencyContainer {
    FName Category; // 0x0
    TArray<FName> AssetNames; // 0x8
}; // Size: 0x18
#pragma pack(pop)
