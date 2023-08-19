#include "AActor.hpp"
#include "ABP_cornerIvy_01_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_cornerIvy_01_C* ABP_cornerIvy_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Overland_Common/Objects/Ivy/BluePrints/BP_cornerIvy_01.BP_cornerIvy_01_C");
    return (ABP_cornerIvy_01_C*)res;
}
