#include "UBP_StoneResourceC_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_StoneResourceC_Population_C* UBP_StoneResourceC_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_StoneResourceC_Population.BP_StoneResourceC_Population_C");
    return (UBP_StoneResourceC_Population_C*)res;
}
