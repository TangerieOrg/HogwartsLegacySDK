#include "UBP_NPC_MovementCapsuleComponent_C.hpp"
#include "UNPC_MovementCapsuleComponent.hpp"
UBP_NPC_MovementCapsuleComponent_C* UBP_NPC_MovementCapsuleComponent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/BP_NPC_MovementCapsuleComponent.BP_NPC_MovementCapsuleComponent_C");
    return (UBP_NPC_MovementCapsuleComponent_C*)res;
}
