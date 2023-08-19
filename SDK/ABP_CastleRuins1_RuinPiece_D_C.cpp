#include "AActor.hpp"
#include "ABP_CastleRuins1_RuinPiece_D_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CastleRuins1_RuinPiece_D_C* ABP_CastleRuins1_RuinPiece_D_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Blueprints/BP_CastleRuins1_RuinPiece_D.BP_CastleRuins1_RuinPiece_D_C");
    return (ABP_CastleRuins1_RuinPiece_D_C*)res;
}
