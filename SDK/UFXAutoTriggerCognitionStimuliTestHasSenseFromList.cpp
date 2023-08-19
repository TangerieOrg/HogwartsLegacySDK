#include "UFXAutoTriggerCognitionStimuliTest.hpp"
#include "UFXAutoTriggerCognitionStimuliTestHasSenseFromList.hpp"
UFXAutoTriggerCognitionStimuliTestHasSenseFromList* UFXAutoTriggerCognitionStimuliTestHasSenseFromList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerCognitionStimuliTestHasSenseFromList");
    return (UFXAutoTriggerCognitionStimuliTestHasSenseFromList*)res;
}
