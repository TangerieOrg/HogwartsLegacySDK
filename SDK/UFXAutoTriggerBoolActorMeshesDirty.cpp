#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolActorMeshesDirty.hpp"
UFXAutoTriggerBoolActorMeshesDirty* UFXAutoTriggerBoolActorMeshesDirty::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorMeshesDirty");
    return (UFXAutoTriggerBoolActorMeshesDirty*)res;
}
