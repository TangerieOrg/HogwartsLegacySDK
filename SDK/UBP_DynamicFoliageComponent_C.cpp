#include "UBP_DynamicFoliageComponent_C.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
UBP_DynamicFoliageComponent_C* UBP_DynamicFoliageComponent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_DynamicFoliageComponent.BP_DynamicFoliageComponent_C");
    return (UBP_DynamicFoliageComponent_C*)res;
}
