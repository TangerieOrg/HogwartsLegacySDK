#pragma once
#include <cstdint>
#include "ETimeRig_StoryGraphEdgeFeedbackType.hpp"
#include "ETimeRig_StoryGraphEdgeInitType.hpp"
#include "ETimeRig_StoryGraphEdgeTriggerType.hpp"
#include "FTimeRigEventReference.hpp"
#include "UObject.hpp"
class UStoryGraphConditionProvider;
class UStoryGraphTriggerProvider;
class UTimeRig_StoryGraphNode;
#pragma pack(push, 1)
class UTimeRig_StoryGraphEdge : public UObject {
public:
    UStoryGraphConditionProvider* Condition; // 0x28
    UStoryGraphTriggerProvider* Trigger; // 0x30
    ETimeRig_StoryGraphEdgeInitType InitializationType; // 0x38
    char pad_39[0x7];
    FTimeRigEventReference InitializationEvent; // 0x40
    ETimeRig_StoryGraphEdgeTriggerType TriggerType; // 0x78
    char pad_79[0x3];
    FName BranchID; // 0x7c
    char pad_84[0x4];
    FTimeRigEventReference ActivationEvent; // 0x88
    ETimeRig_StoryGraphEdgeFeedbackType FeedbackType; // 0xc0
    char pad_c1[0x7];
    FTimeRigEventReference FeedbackEvent; // 0xc8
    UTimeRig_StoryGraphNode* StartNode; // 0x100
    UTimeRig_StoryGraphNode* EndNode; // 0x108
    static UTimeRig_StoryGraphEdge* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
