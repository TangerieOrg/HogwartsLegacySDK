#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestNot.hpp"
UFXAutoTriggerCognitionStimuliTestNot* UFXAutoTriggerCognitionStimuliTestNot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestNot");
    return (UFXAutoTriggerCognitionStimuliTestNot*)res;
}
