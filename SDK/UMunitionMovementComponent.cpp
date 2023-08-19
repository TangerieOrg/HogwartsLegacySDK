#include "UMunitionMovementComponent.hpp"
#include "UProjectileMovementComponent.hpp"
UMunitionMovementComponent* UMunitionMovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionMovementComponent");
    return (UMunitionMovementComponent*)res;
}
