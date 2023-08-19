#include "AActor.hpp"
#include "ABP_Bridge_Moon_B_C.hpp"
#include "UDecalComponent.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Bridge_Moon_B_C* ABP_Bridge_Moon_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_2/Blueprints/BP_Bridge_Moon_B.BP_Bridge_Moon_B_C");
    return (ABP_Bridge_Moon_B_C*)res;
}
