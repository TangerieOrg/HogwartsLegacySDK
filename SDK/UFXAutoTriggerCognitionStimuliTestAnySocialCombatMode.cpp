#include "ESocialCombatMode.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode.hpp"
UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode* UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestAnySocialCombatMode");
    return (UFXAutoTriggerCognitionStimuliTestAnySocialCombatMode*)res;
}
