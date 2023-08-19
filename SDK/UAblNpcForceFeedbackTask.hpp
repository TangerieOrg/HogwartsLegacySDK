#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UForceFeedbackEffect;
class UAblTaskCondition;
#pragma pack(push, 1)
class UAblNpcForceFeedbackTask : public UAblAbilityTask {
public:
    UForceFeedbackEffect* ForceFeedbackEffect; // 0x70
    FName FeedbackTagName; // 0x78
    bool bStopFeedbackAtTaskEnd; // 0x80
    bool bLoop; // 0x81
    bool bOnlyRumbleIfInstigatorIsPlayer; // 0x82
    bool bUseAttenuation; // 0x83
    char pad_84[0x4];
    TArray<UAblTaskCondition*> Conditions; // 0x88
    bool bMustPassAllConditions; // 0x98
    bool bOnlyCheckConditionsOnTaskStart; // 0x99
    char pad_9a[0x6];
    static UAblNpcForceFeedbackTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
