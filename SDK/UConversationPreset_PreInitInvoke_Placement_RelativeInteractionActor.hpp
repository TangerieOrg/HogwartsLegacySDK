#pragma once
#include <cstdint>
#include "UConversationPreset_PreInitInvoke_Placement.hpp"
#pragma pack(push, 1)
class UConversationPreset_PreInitInvoke_Placement_RelativeInteractionActor : public UConversationPreset_PreInitInvoke_Placement {
public:
    float IdealDistance; // 0x28
    float NearDistance; // 0x2c
    float AvatarPositionDirectionFromInteractionActor; // 0x30
    float AvatarRotationFromInteractionActor; // 0x34
    static UConversationPreset_PreInitInvoke_Placement_RelativeInteractionActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
