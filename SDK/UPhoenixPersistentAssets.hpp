#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPhoenixPersistentAssets : public UDataAsset {
public:
    TArray<FSoftObjectPath> AssetPaths; // 0x30
    static UPhoenixPersistentAssets* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
