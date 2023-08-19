#include "AActor.hpp"
#include "ABP_DayNightIndoorOutdoor_4Way_PP_C.hpp"
#include "UFunction.hpp"
#include "UPostProcessWithBlendDomainComponent.hpp"
#include "UPostProcessingVarsComponent.hpp"
#include "USceneComponent.hpp"
#include "UUberExposureComponentExposureExpression.hpp"
ABP_DayNightIndoorOutdoor_4Way_PP_C* ABP_DayNightIndoorOutdoor_4Way_PP_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Blueprints/BP_DayNightIndoorOutdoor_4Way_PP.BP_DayNightIndoorOutdoor_4Way_PP_C");
    return (ABP_DayNightIndoorOutdoor_4Way_PP_C*)res;
}
void ABP_DayNightIndoorOutdoor_4Way_PP_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Blueprints/BP_DayNightIndoorOutdoor_4Way_PP.BP_DayNightIndoorOutdoor_4Way_PP_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
