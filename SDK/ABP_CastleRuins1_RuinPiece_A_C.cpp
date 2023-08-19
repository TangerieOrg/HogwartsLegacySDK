#include "AActor.hpp"
#include "ABP_CastleRuins1_RuinPiece_A_C.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CastleRuins1_RuinPiece_A_C* ABP_CastleRuins1_RuinPiece_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Blueprints/BP_CastleRuins1_RuinPiece_A.BP_CastleRuins1_RuinPiece_A_C");
    return (ABP_CastleRuins1_RuinPiece_A_C*)res;
}
