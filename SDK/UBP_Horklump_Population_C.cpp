#include "UBP_Horklump_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_Horklump_Population_C* UBP_Horklump_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_Horklump_Population.BP_Horklump_Population_C");
    return (UBP_Horklump_Population_C*)res;
}
