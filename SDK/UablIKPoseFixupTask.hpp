#pragma once
#include <cstdint>
#include "FIKPoseFixupDefinition.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablIKPoseFixupTask : public UAblAbilityTask {
public:
    FIKPoseFixupDefinition Definition; // 0x70
    static UablIKPoseFixupTask* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
