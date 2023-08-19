#pragma once
#include <cstdint>
#include "EFullyLoadPackageType.hpp"
class UObject;
#pragma pack(push, 1)
struct FFullyLoadedPackagesInfo {
    EFullyLoadPackageType FullyLoadType; // 0x0
    char pad_1[0x7];
    FString Tag; // 0x8
    TArray<FName> PackagesToLoad; // 0x18
    TArray<UObject*> LoadedObjects; // 0x28
}; // Size: 0x38
#pragma pack(pop)
