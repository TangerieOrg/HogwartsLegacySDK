#include "UBP_AshwinderEgg_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_AshwinderEgg_Population_C* UBP_AshwinderEgg_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_AshwinderEgg_Population.BP_AshwinderEgg_Population_C");
    return (UBP_AshwinderEgg_Population_C*)res;
}
