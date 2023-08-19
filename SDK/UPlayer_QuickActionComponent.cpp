#include "UActorComponent.hpp"
#include "UPlayer_QuickActionComponent.hpp"
UPlayer_QuickActionComponent* UPlayer_QuickActionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Player_QuickActionComponent");
    return (UPlayer_QuickActionComponent*)res;
}
