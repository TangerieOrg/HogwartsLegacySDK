#pragma once
#include <cstdint>
#include "UBTT_Camera_Base.hpp"
class UClass;
#pragma pack(push, 1)
class UBTT_Camera_SetPrimaryTargetActor : public UBTT_Camera_Base {
public:
    UClass* TargetActor; // 0x70
    float BlendInDuration; // 0x78
    float BlendOutDuration; // 0x7c
    static UBTT_Camera_SetPrimaryTargetActor* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
