#include "AActor.hpp"
#include "ABP_CastleRuin1_TopBroken_B_C.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CastleRuin1_TopBroken_B_C* ABP_CastleRuin1_TopBroken_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Blueprints/BP_CastleRuin1_TopBroken_B.BP_CastleRuin1_TopBroken_B_C");
    return (ABP_CastleRuin1_TopBroken_B_C*)res;
}
