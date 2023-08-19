#pragma once
#include <cstdint>
#include "EStoryGraphTrigger_InitializeType.hpp"
#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UStoryGraphTriggerProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphTrigger_Initialize : public UStoryGraphTriggerProvider {
public:
    EStoryGraphTrigger_InitializeType InitializationType; // 0x28
    char pad_29[0x7];
    FTimeRigEventReference InitializationEvent; // 0x30
    ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0x68
    char pad_69[0x7];
    FTimeRigEventReference FeedbackEvent; // 0x70
    static UStoryGraphTrigger_Initialize* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
