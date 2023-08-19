#include "UAIPerceptionComponent.hpp"
#include "UGame_PerceptionComponent.hpp"
UGame_PerceptionComponent* UGame_PerceptionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Game_PerceptionComponent");
    return (UGame_PerceptionComponent*)res;
}
