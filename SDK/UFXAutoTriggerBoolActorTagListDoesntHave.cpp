#include "UFXAutoTriggerBoolActorTagList.hpp"
#include "UFXAutoTriggerBoolActorTagListDoesntHave.hpp"
UFXAutoTriggerBoolActorTagListDoesntHave* UFXAutoTriggerBoolActorTagListDoesntHave::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorTagListDoesntHave");
    return (UFXAutoTriggerBoolActorTagListDoesntHave*)res;
}
