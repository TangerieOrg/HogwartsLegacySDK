#include "FNavAgent.hpp"
#include "UAmbulatory_MovementComponent.hpp"
#include "UNonCombat_MovementComponent.hpp"
UNonCombat_MovementComponent* UNonCombat_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NonCombat_MovementComponent");
    return (UNonCombat_MovementComponent*)res;
}
