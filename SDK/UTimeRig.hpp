#pragma once
#include <cstdint>
#include "ETimeRigInitializingBehavior.hpp"
#include "UTimeRigInterval.hpp"
class UTimeRigElement;
class UTimeRig_StoryGraph;
#pragma pack(push, 1)
class UTimeRig : public UTimeRigInterval {
public:
    char pad_88[0xb0];
    TArray<UTimeRigElement*> ChildElements; // 0x138
    ETimeRigInitializingBehavior InitializingBehavior; // 0x148
    char pad_149[0x3];
    int32_t RandomSeed; // 0x14c
    UTimeRig_StoryGraph* StoryGraph; // 0x150
    TArray<FName> WarmUpTags; // 0x158
    static UTimeRig* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
