#pragma once
#include <cstdint>
#include "UTimeRig_StoryGraph.hpp"
class USceneRigProvider;
#pragma pack(push, 1)
class USceneRig_StoryGraph : public UTimeRig_StoryGraph {
public:
    char pad_80[0x8];
    USceneRigProvider* AmbientSceneRig; // 0x88
    static USceneRig_StoryGraph* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
