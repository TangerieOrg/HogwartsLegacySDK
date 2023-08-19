#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestOr.hpp"
UFXAutoTriggerCognitionStimuliTestOr* UFXAutoTriggerCognitionStimuliTestOr::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestOr");
    return (UFXAutoTriggerCognitionStimuliTestOr*)res;
}
