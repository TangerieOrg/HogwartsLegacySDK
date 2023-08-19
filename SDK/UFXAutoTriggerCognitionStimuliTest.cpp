#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UObject.hpp"
UFXAutoTriggerCognitionStimuliTest* UFXAutoTriggerCognitionStimuliTest::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTest");
    return (UFXAutoTriggerCognitionStimuliTest*)res;
}
