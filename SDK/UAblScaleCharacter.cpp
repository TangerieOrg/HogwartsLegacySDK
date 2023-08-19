#include "UAblAbilityTask.hpp"
#include "UAblScaleCharacter.hpp"
UAblScaleCharacter* UAblScaleCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblScaleCharacter");
    return (UAblScaleCharacter*)res;
}
