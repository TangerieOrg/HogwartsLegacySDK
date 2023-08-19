#include "ECollisionEnabled\Type.hpp"
#include "UCapsuleComponent.hpp"
#include "UNPC_MovementCapsuleComponent.hpp"
UNPC_MovementCapsuleComponent* UNPC_MovementCapsuleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_MovementCapsuleComponent");
    return (UNPC_MovementCapsuleComponent*)res;
}
