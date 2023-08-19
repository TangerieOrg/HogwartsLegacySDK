#pragma once
#include <cstdint>
#include "UConversationPreset_CheckBetweenTest.hpp"
#pragma pack(push, 1)
class UConversationPreset_CheckBetweenTest_BoneCylinderTest : public UConversationPreset_CheckBetweenTest {
public:
    FName BoneName; // 0x30
    float Radius; // 0x38
    float TuckInMultipler; // 0x3c
    static UConversationPreset_CheckBetweenTest_BoneCylinderTest* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
