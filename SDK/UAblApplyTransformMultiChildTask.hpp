#pragma once
#include <cstdint>
#include "FAblTransformMultiChildTask.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblApplyTransformMultiChildTask : public UAblAbilityTask {
public:
    FName AttachPointName; // 0x70
    TArray<UAblTaskCondition*> TaskConditions; // 0x78
    TArray<FAblTransformMultiChildTask> ChildTasks; // 0x88
    FAlphaBlend BlendIn; // 0x98
    bool RestoreValueOnEnd; // 0xc8
    char pad_c9[0x7];
    FAlphaBlend BlendOut; // 0xd0
    static UAblApplyTransformMultiChildTask* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
