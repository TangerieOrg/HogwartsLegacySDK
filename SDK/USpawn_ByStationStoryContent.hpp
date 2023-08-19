#pragma once
#include <cstdint>
#include "UActorSpawner.hpp"
#pragma pack(push, 1)
class USpawn_ByStationStoryContent : public UActorSpawner {
public:
    int32_t CharacterIndex; // 0x48
    char pad_4c[0x4];
    FString StoryContentParameter; // 0x50
    static USpawn_ByStationStoryContent* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
