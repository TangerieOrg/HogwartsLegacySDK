#include "FCombatCursedData.hpp"
#include "UCombatCursedComponent.hpp"
#include "UGameplayPropertyMod.hpp"
#include "UStateEffectComponent.hpp"
UCombatCursedComponent* UCombatCursedComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CombatCursedComponent");
    return (UCombatCursedComponent*)res;
}
