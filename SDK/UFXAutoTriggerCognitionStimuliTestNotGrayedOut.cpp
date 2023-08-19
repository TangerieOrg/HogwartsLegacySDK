#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestNotGrayedOut.hpp"
UFXAutoTriggerCognitionStimuliTestNotGrayedOut* UFXAutoTriggerCognitionStimuliTestNotGrayedOut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestNotGrayedOut");
    return (UFXAutoTriggerCognitionStimuliTestNotGrayedOut*)res;
}
