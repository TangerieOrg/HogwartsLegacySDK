#pragma once
#include <cstdint>
#include "USceneRigStory.hpp"
class UAnimationSet_TagLookup;
#pragma pack(push, 1)
class UStationStory : public USceneRigStory {
public:
    char pad_138[0x18];
    UAnimationSet_TagLookup* AnimationSetProvider; // 0x150
    static UStationStory* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
