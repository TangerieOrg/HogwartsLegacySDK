#include "UFXAutoTriggerRequiredActorsBase.hpp"
#include "UFXAutoTriggerRequiredActorsPhoenixCharacters.hpp"
UFXAutoTriggerRequiredActorsPhoenixCharacters* UFXAutoTriggerRequiredActorsPhoenixCharacters::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerRequiredActorsPhoenixCharacters");
    return (UFXAutoTriggerRequiredActorsPhoenixCharacters*)res;
}
