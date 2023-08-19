#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolActorTagList.hpp"
UFXAutoTriggerBoolActorTagList* UFXAutoTriggerBoolActorTagList::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorTagList");
    return (UFXAutoTriggerBoolActorTagList*)res;
}
