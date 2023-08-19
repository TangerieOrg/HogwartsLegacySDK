#include "UAmbulatory_MovementComponent.hpp"
#include "UNPC_MovementComponent.hpp"
UNPC_MovementComponent* UNPC_MovementComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_MovementComponent");
    return (UNPC_MovementComponent*)res;
}
