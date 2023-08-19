#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAnimationClipState_StationStoryContent : public UObject {
public:
    char pad_28[0x78];
    static UAnimationClipState_StationStoryContent* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
