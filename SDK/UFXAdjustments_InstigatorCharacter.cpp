#include "UFXAdjustments.hpp"
#include "UFXAdjustments_InstigatorCharacter.hpp"
UFXAdjustments_InstigatorCharacter* UFXAdjustments_InstigatorCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAdjustments_InstigatorCharacter");
    return (UFXAdjustments_InstigatorCharacter*)res;
}
