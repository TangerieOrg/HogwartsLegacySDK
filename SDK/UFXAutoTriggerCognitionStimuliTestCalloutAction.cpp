#include "ECalloutActions.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestCalloutAction.hpp"
UFXAutoTriggerCognitionStimuliTestCalloutAction* UFXAutoTriggerCognitionStimuliTestCalloutAction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestCalloutAction");
    return (UFXAutoTriggerCognitionStimuliTestCalloutAction*)res;
}
