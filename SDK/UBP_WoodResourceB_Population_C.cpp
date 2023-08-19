#include "UBP_WoodResourceB_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_WoodResourceB_Population_C* UBP_WoodResourceB_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_WoodResourceB_Population.BP_WoodResourceB_Population_C");
    return (UBP_WoodResourceB_Population_C*)res;
}
