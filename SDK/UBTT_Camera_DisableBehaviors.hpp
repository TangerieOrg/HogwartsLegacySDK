#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_DisableBehaviors : public UBTT_Camera_Base {
public:
    TArray<UClass*> BehaviorClasses; // 0x70
    ECameraStackBehaviorSorting BehaviorSorting; // 0x80
    char pad_81[0x3];
    int32_t FilterFlags; // 0x84
    float BlendOutDuration; // 0x88
    float BlendInDuration; // 0x8c
    static UBTT_Camera_DisableBehaviors* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
