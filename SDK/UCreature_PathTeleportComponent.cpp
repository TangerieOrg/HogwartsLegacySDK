#include "ACreature_Character.hpp"
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
#include "UCreature_PathFollowingComponent.hpp"
#include "UCreature_PathTeleportComponent.hpp"
UCreature_PathTeleportComponent* UCreature_PathTeleportComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_PathTeleportComponent");
    return (UCreature_PathTeleportComponent*)res;
}
