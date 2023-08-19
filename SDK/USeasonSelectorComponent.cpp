#include "USceneComponent.hpp"
#include "USeasonSelectorComponent.hpp"
USeasonSelectorComponent* USeasonSelectorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SeasonSelectorComponent");
    return (USeasonSelectorComponent*)res;
}
