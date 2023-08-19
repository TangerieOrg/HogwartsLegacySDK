#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_ReplaceBehavior : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    TArray<UClass*> BehaviorClassToReplace; // 0x80
    float BlendOutPredecessorDuration; // 0x90
    float BlendInPredecessorDuration; // 0x94
    ECameraStackBehaviorSorting PredecessorSorting; // 0x98
    char pad_99[0x3];
    int32_t FilterFlags; // 0x9c
    bool bRemovePredecessor; // 0xa0
    char pad_a1[0x7];
    static UBTT_Camera_ReplaceBehavior* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
