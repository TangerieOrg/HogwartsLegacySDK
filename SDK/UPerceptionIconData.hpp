#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UBeaconInfo;
class UHUDCompassIcon;
class UPerceptionTextureCacheItem;
#pragma pack(push, 1)
class UPerceptionIconData : public UObject {
public:
    AActor* NPCCharacter; // 0x28
    UBeaconInfo* BeaconInfo; // 0x30
    UHUDCompassIcon* Icon; // 0x38
    UPerceptionTextureCacheItem* TextureItem; // 0x40
    char pad_48[0x20];
    static UPerceptionIconData* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
