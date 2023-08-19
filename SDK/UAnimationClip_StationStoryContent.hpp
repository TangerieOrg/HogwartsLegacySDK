#pragma once
#include <cstdint>
#include "EStationStoryContent_ClipType.hpp"
#include "FActionParameter_Object.hpp"
#include "UAnimationClipProvider.hpp"
#pragma pack(push, 1)
class UAnimationClip_StationStoryContent : public UAnimationClipProvider {
public:
    EStationStoryContent_ClipType ClipType; // 0x28
    char pad_29[0x3];
    int32_t CharacterIndex; // 0x2c
    FActionParameter_Object StoryContentParameter; // 0x30
    static UAnimationClip_StationStoryContent* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
