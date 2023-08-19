#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_DisableBehavior : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    ECameraStackBehaviorSorting BehaviorSorting; // 0x78
    char pad_79[0x3];
    int32_t FilterFlags; // 0x7c
    float BlendOutDuration; // 0x80
    float BlendInDuration; // 0x84
    bool bReturnImmediately; // 0x88
    char pad_89[0x7];
    static UBTT_Camera_DisableBehavior* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
