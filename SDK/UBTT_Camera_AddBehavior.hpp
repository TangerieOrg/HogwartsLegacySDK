#pragma once
#include <cstdint>
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_AddBehavior : public UBTT_Camera_Base {
public:
    UClass* BehaviorClass; // 0x70
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    bool bReuseBehaviorOnReactivate; // 0x80
    char pad_81[0x7];
    static UBTT_Camera_AddBehavior* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
