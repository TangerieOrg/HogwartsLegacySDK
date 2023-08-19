#pragma once
#include <cstdint>
#include "EScheduleEnableDisable.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_DisableSchedule : public USceneRigObjectActionBase {
public:
    EScheduleEnableDisable ActionOnEnter; // 0xa0
    EScheduleEnableDisable ActionOnExit; // 0xa1
    char pad_a2[0x6];
    static USceneAction_DisableSchedule* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
