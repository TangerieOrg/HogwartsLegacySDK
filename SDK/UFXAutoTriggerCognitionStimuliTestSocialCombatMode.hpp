#pragma once
#include <cstdint>
#include "ESocialCombatMode.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestSocialCombatMode : public UFXAutoTriggerCognitionStimuliTest {
public:
    ESocialCombatMode SocialCombatMode; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerCognitionStimuliTestSocialCombatMode* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
