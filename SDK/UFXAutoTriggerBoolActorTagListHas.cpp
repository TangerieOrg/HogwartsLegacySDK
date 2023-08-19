#include "UFXAutoTriggerBoolActorTagList.hpp"
#include "UFXAutoTriggerBoolActorTagListHas.hpp"
UFXAutoTriggerBoolActorTagListHas* UFXAutoTriggerBoolActorTagListHas::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorTagListHas");
    return (UFXAutoTriggerBoolActorTagListHas*)res;
}
