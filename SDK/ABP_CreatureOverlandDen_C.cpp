#include "ABP_CreatureOverlandDen_C.hpp"
#include "AEncounterCreator.hpp"
#include "AInteractiveObjectActor.hpp"
#include "USceneComponent.hpp"
ABP_CreatureOverlandDen_C* ABP_CreatureOverlandDen_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/BeastDens/Blueprints/BP_CreatureOverlandDen.BP_CreatureOverlandDen_C");
    return (ABP_CreatureOverlandDen_C*)res;
}
