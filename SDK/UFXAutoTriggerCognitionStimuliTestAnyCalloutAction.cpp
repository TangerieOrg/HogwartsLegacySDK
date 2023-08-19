#include "ECalloutActions.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestAnyCalloutAction.hpp"
UFXAutoTriggerCognitionStimuliTestAnyCalloutAction* UFXAutoTriggerCognitionStimuliTestAnyCalloutAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestAnyCalloutAction");
    return (UFXAutoTriggerCognitionStimuliTestAnyCalloutAction*)res;
}
