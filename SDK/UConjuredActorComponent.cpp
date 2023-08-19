#include "FDbSingleColumnInfo.hpp"
#include "UChildActorComponent.hpp"
#include "UConjuredActorComponent.hpp"
UConjuredActorComponent* UConjuredActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjuredActorComponent");
    return (UConjuredActorComponent*)res;
}
