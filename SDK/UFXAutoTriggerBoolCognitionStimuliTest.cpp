#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTest.hpp"
UFXAutoTriggerBoolCognitionStimuliTest* UFXAutoTriggerBoolCognitionStimuliTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolCognitionStimuliTest");
    return (UFXAutoTriggerBoolCognitionStimuliTest*)res;
}
