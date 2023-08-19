#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_AddCrossBlendBehavior : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    TArray<UClass*> CrossBlendBehaviorClass; // 0x80
    int32_t GroupIndex; // 0x90
    float weight; // 0x94
    ECameraStackBehaviorSorting CrossBlendSorting; // 0x98
    char pad_99[0x3];
    int32_t FilterFlags; // 0x9c
    static UBTT_Camera_AddCrossBlendBehavior* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
