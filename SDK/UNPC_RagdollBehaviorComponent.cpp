#include "UNPC_RagdollBehaviorComponent.hpp"
#include "URagdollBehaviorComponent.hpp"
UNPC_RagdollBehaviorComponent* UNPC_RagdollBehaviorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_RagdollBehaviorComponent");
    return (UNPC_RagdollBehaviorComponent*)res;
}
