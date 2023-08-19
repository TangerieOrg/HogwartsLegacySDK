#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UOverlapEffectsHandler;
#pragma pack(push, 1)
class UOverlapEffectsDataAsset : public UDataAsset {
public:
    TArray<UOverlapEffectsHandler*> OverlapHandlers; // 0x30
    static UOverlapEffectsDataAsset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
