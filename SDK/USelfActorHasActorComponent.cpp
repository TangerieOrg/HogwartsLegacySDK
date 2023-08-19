#include "UClass.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfActorHasActorComponent.hpp"
USelfActorHasActorComponent* USelfActorHasActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfActorHasActorComponent");
    return (USelfActorHasActorComponent*)res;
}
