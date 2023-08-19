#include "UBP_LeechJuice_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_LeechJuice_Population_C* UBP_LeechJuice_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_LeechJuice_Population.BP_LeechJuice_Population_C");
    return (UBP_LeechJuice_Population_C*)res;
}
