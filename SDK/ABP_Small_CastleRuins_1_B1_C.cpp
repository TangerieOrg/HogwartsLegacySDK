#include "AActor.hpp"
#include "ABP_Small_CastleRuins_1_B1_C.hpp"
#include "UDecalComponent.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_Small_CastleRuins_1_B1_C* ABP_Small_CastleRuins_1_B1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Castle_Ruin_1/Blueprints/BP_Small_CastleRuins_1_B1.BP_Small_CastleRuins_1_B1_C");
    return (ABP_Small_CastleRuins_1_B1_C*)res;
}
