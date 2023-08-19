#include "UBP_Bitterroot_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_Bitterroot_Population_C* UBP_Bitterroot_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_Bitterroot_Population.BP_Bitterroot_Population_C");
    return (UBP_Bitterroot_Population_C*)res;
}
