#pragma once
#include <cstdint>
#include "FEphemerisBasisPerLevel.hpp"
#include "UDataAsset.hpp"
class UEphemerisBasis;
#pragma pack(push, 1)
class UEphemerisBasisLibrary : public UDataAsset {
public:
    UEphemerisBasis* DefaultBasis; // 0x30
    TArray<FEphemerisBasisPerLevel> LevelBasis; // 0x38
    static UEphemerisBasisLibrary* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
