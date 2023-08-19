#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
class UForceFeedbackEffect;
class UCurveFloat;
#pragma pack(push, 1)
class UAblForceFeedbackTask : public UAblAbilityTask {
public:
    UForceFeedbackEffect* ForceFeedbackEffect; // 0x70
    FName FeedbackTagName; // 0x78
    bool bStopFeedbackAtTaskEnd; // 0x80
    bool bLoop; // 0x81
    char pad_82[0x6];
    UCurveFloat* AttenuateDistanceFromPlayerCurve; // 0x88
    UCurveFloat* AttenuateDistanceFromCameraCurve; // 0x90
    bool bPlayerOnly; // 0x98
    char pad_99[0x7];
    static UAblForceFeedbackTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
