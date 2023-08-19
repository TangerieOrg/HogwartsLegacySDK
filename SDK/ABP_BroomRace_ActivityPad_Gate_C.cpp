#include "AActor.hpp"
#include "ABP_BroomRace_ActivityPad_Gate_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_BroomRace_ActivityPad_Gate_C* ABP_BroomRace_ActivityPad_Gate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/BroomFlight/Blueprints/BP_BroomRace_ActivityPad_Gate.BP_BroomRace_ActivityPad_Gate_C");
    return (ABP_BroomRace_ActivityPad_Gate_C*)res;
}
