#include "ESocialCombatMode.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestSocialCombatMode.hpp"
UFXAutoTriggerCognitionStimuliTestSocialCombatMode* UFXAutoTriggerCognitionStimuliTestSocialCombatMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestSocialCombatMode");
    return (UFXAutoTriggerCognitionStimuliTestSocialCombatMode*)res;
}
