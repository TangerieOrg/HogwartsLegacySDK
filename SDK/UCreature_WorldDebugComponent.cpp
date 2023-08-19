#include "FColor.hpp"
#include "FVector.hpp"
#include "UCreature_WorldDebugComponent.hpp"
#include "UTextRenderComponent.hpp"
UCreature_WorldDebugComponent* UCreature_WorldDebugComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_WorldDebugComponent");
    return (UCreature_WorldDebugComponent*)res;
}
