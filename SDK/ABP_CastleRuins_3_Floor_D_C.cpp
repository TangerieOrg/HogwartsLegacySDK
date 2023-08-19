#include "AActor.hpp"
#include "ABP_CastleRuins_3_Floor_D_C.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
ABP_CastleRuins_3_Floor_D_C* ABP_CastleRuins_3_Floor_D_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_3/Blueprints/BP_CastleRuins_3_Floor_D.BP_CastleRuins_3_Floor_D_C");
    return (ABP_CastleRuins_3_Floor_D_C*)res;
}
