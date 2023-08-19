#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class USchedulerTimeProvider;
#pragma pack(push, 1)
class USceneAction_SetCurrentTime : public USceneRigActionBase {
public:
    USchedulerTimeProvider* SchedulerTime; // 0x88
    int32_t Hours; // 0x90
    int32_t Minutes; // 0x94
    static USceneAction_SetCurrentTime* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
