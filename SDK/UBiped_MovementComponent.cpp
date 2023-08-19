#include "UAmbulatory_MovementComponent.hpp"
#include "UBiped_MovementComponent.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMeshComponent.hpp"
UBiped_MovementComponent* UBiped_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Biped_MovementComponent");
    return (UBiped_MovementComponent*)res;
}
