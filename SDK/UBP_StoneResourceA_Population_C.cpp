#include "UBP_StoneResourceA_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_StoneResourceA_Population_C* UBP_StoneResourceA_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_StoneResourceA_Population.BP_StoneResourceA_Population_C");
    return (UBP_StoneResourceA_Population_C*)res;
}
