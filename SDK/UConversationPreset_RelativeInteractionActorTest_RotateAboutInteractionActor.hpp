#pragma once
#include <cstdint>
#include "UConversationPreset_RelativeInteractionActorTest.hpp"
#pragma pack(push, 1)
class UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor : public UConversationPreset_RelativeInteractionActorTest {
public:
    float CheckAngleStep; // 0x30
    bool StartRotationToAvatar; // 0x34
    char pad_35[0x3];
    static UConversationPreset_RelativeInteractionActorTest_RotateAboutInteractionActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
