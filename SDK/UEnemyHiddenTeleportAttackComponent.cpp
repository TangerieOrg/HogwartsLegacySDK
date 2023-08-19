#include "UActorComponent.hpp"
#include "UEnemyHiddenTeleportAttackComponent.hpp"
#include "UMultiFX2Asset.hpp"
UEnemyHiddenTeleportAttackComponent* UEnemyHiddenTeleportAttackComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyHiddenTeleportAttackComponent");
    return (UEnemyHiddenTeleportAttackComponent*)res;
}
