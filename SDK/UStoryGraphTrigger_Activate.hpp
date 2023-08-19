#pragma once
#include <cstdint>
#include "EStoryGraphTriggerActive_InitializeType.hpp"
#include "EStoryGraphTrigger_ActivateType.hpp"
#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphTrigger_Activate : public UStoryGraphTriggerProvider {
public:
    EStoryGraphTriggerActive_InitializeType InitializationType; // 0x28
    EStoryGraphTrigger_ActivateType ActivationType; // 0x29
    char pad_2a[0x6];
    FTimeRigEventReference ActivationEvent; // 0x30
    ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0x68
    char pad_69[0x7];
    FTimeRigEventReference FeedbackEvent; // 0x70
    static UStoryGraphTrigger_Activate* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
