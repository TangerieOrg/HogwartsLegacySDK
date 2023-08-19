#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolIsCurrentPlayerTarget.hpp"
UFXAutoTriggerBoolIsCurrentPlayerTarget* UFXAutoTriggerBoolIsCurrentPlayerTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolIsCurrentPlayerTarget");
    return (UFXAutoTriggerBoolIsCurrentPlayerTarget*)res;
}
