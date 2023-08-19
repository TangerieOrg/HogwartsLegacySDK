#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_PauseBehavior : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    ECameraStackBehaviorSorting BehaviorSorting; // 0x78
    char pad_79[0x3];
    int32_t FilterFlags; // 0x7c
    bool bReturnImmediately; // 0x80
    char pad_81[0x7];
    static UBTT_Camera_PauseBehavior* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
