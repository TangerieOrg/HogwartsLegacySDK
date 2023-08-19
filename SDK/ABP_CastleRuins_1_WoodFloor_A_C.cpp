#include "AActor.hpp"
#include "ABP_CastleRuins_1_WoodFloor_A_C.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CastleRuins_1_WoodFloor_A_C* ABP_CastleRuins_1_WoodFloor_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Blueprints/BP_CastleRuins_1_WoodFloor_A.BP_CastleRuins_1_WoodFloor_A_C");
    return (ABP_CastleRuins_1_WoodFloor_A_C*)res;
}
