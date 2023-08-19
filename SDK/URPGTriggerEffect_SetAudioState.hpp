#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_SetAudioState : public URPGTriggerEffect_Base {
public:
    FName stateGroup; // 0x40
    FName State; // 0x48
    static URPGTriggerEffect_SetAudioState* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
