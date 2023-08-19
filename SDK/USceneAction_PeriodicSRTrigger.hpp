#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_PeriodicSRTrigger : public USceneRigActionBase {
public:
    float MinTriggerTime; // 0x88
    float MaxTriggerTime; // 0x8c
    char pad_90[0x50];
    bool bTriggerImmediately; // 0xe0
    bool bStopScenerigsAtEnd; // 0xe1
    char pad_e2[0x6];
    static USceneAction_PeriodicSRTrigger* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
