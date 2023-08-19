#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UClass;
#pragma pack(push, 1)
class UCreature_FootstepRedirectorAsset : public UDataAsset {
public:
    UClass* AssetClass; // 0x30
    static UCreature_FootstepRedirectorAsset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
