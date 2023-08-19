#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblNpcBakedPoseRigidbodyScratchpad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x20];
    static UAblNpcBakedPoseRigidbodyScratchpad* StaticClass();
    void OnBakedRigidBodyAttachedEvent();
}; // Size: 0x48
#pragma pack(pop)
