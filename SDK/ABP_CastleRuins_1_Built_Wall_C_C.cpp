#include "AActor.hpp"
#include "ABP_CastleRuins_1_Built_Wall_C_C.hpp"
#include "UBoxComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CastleRuins_1_Built_Wall_C_C* ABP_CastleRuins_1_Built_Wall_C_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Meshes/Blueprints_temp/BP_CastleRuins_1_Built_Wall_C.BP_CastleRuins_1_Built_Wall_C_C");
    return (ABP_CastleRuins_1_Built_Wall_C_C*)res;
}
