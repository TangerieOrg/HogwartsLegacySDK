#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsCharacters.hpp"
UFXAutoTriggerRequiredActorsCharacters* UFXAutoTriggerRequiredActorsCharacters::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerRequiredActorsCharacters");
    return (UFXAutoTriggerRequiredActorsCharacters*)res;
}
