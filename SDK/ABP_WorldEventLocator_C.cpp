#include "ABP_WorldEventLocator_C.hpp"
#include "AWorldEventLocationActor.hpp"
#include "UArrowComponent.hpp"
#include "UChildActorComponent.hpp"
ABP_WorldEventLocator_C* ABP_WorldEventLocator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/WorldEvents/Blueprints/BP_WorldEventLocator.BP_WorldEventLocator_C");
    return (ABP_WorldEventLocator_C*)res;
}
