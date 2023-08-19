#include "UBP_BoomslangSkin_Population_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_BoomslangSkin_Population_C* UBP_BoomslangSkin_Population_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/SpawnSystem/RegionTypes/BP_BoomslangSkin_Population.BP_BoomslangSkin_Population_C");
    return (UBP_BoomslangSkin_Population_C*)res;
}
