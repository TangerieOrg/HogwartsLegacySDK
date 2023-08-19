#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_PeriodicSRTrigger : public USceneRigActionState {
public:
    char pad_50[0x60];
    static USceneActionState_PeriodicSRTrigger* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
