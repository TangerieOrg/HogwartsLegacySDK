#include "UMunitionMovementComponent.hpp"
#include "USubsonicSpellMovementComponent.hpp"
USubsonicSpellMovementComponent* USubsonicSpellMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SubsonicSpellMovementComponent");
    return (USubsonicSpellMovementComponent*)res;
}
