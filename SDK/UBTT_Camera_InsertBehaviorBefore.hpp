#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_InsertBehaviorBefore : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    TArray<UClass*> InsertBeforeBehaviorClass; // 0x80
    ECameraStackBehaviorSorting InsertBeforeBehaviorSorting; // 0x90
    char pad_91[0x3];
    int32_t FilterFlags; // 0x94
    bool bReuseBehaviorOnReactivate; // 0x98
    char pad_99[0x7];
    static UBTT_Camera_InsertBehaviorBefore* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
