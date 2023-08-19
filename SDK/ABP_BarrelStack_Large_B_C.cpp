#include "AActor.hpp"
#include "ABP_BarrelStack_Large_B_C.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "UPhysicalResponseComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_BarrelStack_Large_B_C* ABP_BarrelStack_Large_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Objects/Population/BP_BarrelStack_Large_B.BP_BarrelStack_Large_B_C");
    return (ABP_BarrelStack_Large_B_C*)res;
}
