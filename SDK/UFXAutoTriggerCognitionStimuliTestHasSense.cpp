#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestHasSense.hpp"
UFXAutoTriggerCognitionStimuliTestHasSense* UFXAutoTriggerCognitionStimuliTestHasSense::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestHasSense");
    return (UFXAutoTriggerCognitionStimuliTestHasSense*)res;
}
