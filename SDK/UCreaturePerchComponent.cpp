#include "UArrowComponent.hpp"
#include "UCreaturePerchComponent.hpp"
UCreaturePerchComponent* UCreaturePerchComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePerchComponent");
    return (UCreaturePerchComponent*)res;
}
