#include "UFXAdjustments.hpp"
#include "UFXAdjustments_TargetCharacter.hpp"
UFXAdjustments_TargetCharacter* UFXAdjustments_TargetCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_TargetCharacter");
    return (UFXAdjustments_TargetCharacter*)res;
}
