#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestGrayedOut.hpp"
UFXAutoTriggerCognitionStimuliTestGrayedOut* UFXAutoTriggerCognitionStimuliTestGrayedOut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestGrayedOut");
    return (UFXAutoTriggerCognitionStimuliTestGrayedOut*)res;
}
