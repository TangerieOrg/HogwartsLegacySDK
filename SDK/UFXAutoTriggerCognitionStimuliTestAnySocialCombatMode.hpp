#pragma once
#include <cstdint>
#include "ESocialCombatMode.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode : public UFXAutoTriggerCognitionStimuliTest {
public:
    TArray<ESocialCombatMode> SocialCombatModes; // 0x28
    static UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
