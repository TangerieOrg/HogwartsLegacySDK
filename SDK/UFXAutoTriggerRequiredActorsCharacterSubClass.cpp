#include "UFXAutoTriggerRequiredActorsCharacterSubClass.hpp"
#include "UFXAutoTriggerRequiredActorsCharacters.hpp"
UFXAutoTriggerRequiredActorsCharacterSubClass* UFXAutoTriggerRequiredActorsCharacterSubClass::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsCharacterSubClass");
    return (UFXAutoTriggerRequiredActorsCharacterSubClass*)res;
}
