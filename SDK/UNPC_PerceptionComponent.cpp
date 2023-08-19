#include "UGame_PerceptionComponent.hpp"
#include "UNPC_PerceptionComponent.hpp"
UNPC_PerceptionComponent* UNPC_PerceptionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_PerceptionComponent");
    return (UNPC_PerceptionComponent*)res;
}
