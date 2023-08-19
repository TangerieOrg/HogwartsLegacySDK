#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneRig;
#pragma pack(push, 1)
class USceneRigStory : public UObject {
public:
    char pad_28[0x30];
    USceneRig* StorySceneRig; // 0x58
    char pad_60[0xd8];
    static USceneRigStory* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
