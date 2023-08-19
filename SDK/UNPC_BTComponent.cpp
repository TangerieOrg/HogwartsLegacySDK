#include "UBehaviorTreeComponent.hpp"
#include "UNPC_BTComponent.hpp"
UNPC_BTComponent* UNPC_BTComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_BTComponent");
    return (UNPC_BTComponent*)res;
}
