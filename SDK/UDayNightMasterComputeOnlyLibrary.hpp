#pragma once
#include <cstdint>
#include "FDayNightMasterComputeOnlyPerLevel.hpp"
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UDayNightMasterComputeOnlyLibrary : public UDataAsset {
public:
    UClass* ComputeDefault; // 0x30
    TArray<FDayNightMasterComputeOnlyPerLevel> LevelOverrides; // 0x38
    static UDayNightMasterComputeOnlyLibrary* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
