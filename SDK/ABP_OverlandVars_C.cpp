#include "AActor.hpp"
#include "ABP_OverlandVars_C.hpp"
#include "USceneComponent.hpp"
ABP_OverlandVars_C* ABP_OverlandVars_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/BP_OverlandVars.BP_OverlandVars_C");
    return (ABP_OverlandVars_C*)res;
}
