#include "UBP_WoodResourceA_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_WoodResourceA_Population_C* UBP_WoodResourceA_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_WoodResourceA_Population.BP_WoodResourceA_Population_C");
    return (UBP_WoodResourceA_Population_C*)res;
}
