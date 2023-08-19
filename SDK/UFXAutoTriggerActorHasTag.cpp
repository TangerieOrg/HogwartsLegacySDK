#include "UFXAutoTriggerActorHasTag.hpp"
#include "UFXAutoTriggerBool.hpp"
UFXAutoTriggerActorHasTag* UFXAutoTriggerActorHasTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerActorHasTag");
    return (UFXAutoTriggerActorHasTag*)res;
}
