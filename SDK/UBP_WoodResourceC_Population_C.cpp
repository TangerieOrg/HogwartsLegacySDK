#include "UBP_WoodResourceC_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_WoodResourceC_Population_C* UBP_WoodResourceC_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_WoodResourceC_Population.BP_WoodResourceC_Population_C");
    return (UBP_WoodResourceC_Population_C*)res;
}
