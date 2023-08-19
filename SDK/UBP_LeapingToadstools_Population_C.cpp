#include "UBP_LeapingToadstools_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_LeapingToadstools_Population_C* UBP_LeapingToadstools_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_LeapingToadstools_Population.BP_LeapingToadstools_Population_C");
    return (UBP_LeapingToadstools_Population_C*)res;
}
