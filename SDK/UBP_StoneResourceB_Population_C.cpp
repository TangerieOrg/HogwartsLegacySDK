#include "UBP_StoneResourceB_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_StoneResourceB_Population_C* UBP_StoneResourceB_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_StoneResourceB_Population.BP_StoneResourceB_Population_C");
    return (UBP_StoneResourceB_Population_C*)res;
}
