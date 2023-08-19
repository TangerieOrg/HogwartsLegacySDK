#include "UBP_LacewingFlies_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_LacewingFlies_Population_C* UBP_LacewingFlies_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_LacewingFlies_Population.BP_LacewingFlies_Population_C");
    return (UBP_LacewingFlies_Population_C*)res;
}
