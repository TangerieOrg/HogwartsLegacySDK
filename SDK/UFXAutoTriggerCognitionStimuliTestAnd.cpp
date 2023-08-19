#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestAnd.hpp"
UFXAutoTriggerCognitionStimuliTestAnd* UFXAutoTriggerCognitionStimuliTestAnd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestAnd");
    return (UFXAutoTriggerCognitionStimuliTestAnd*)res;
}
