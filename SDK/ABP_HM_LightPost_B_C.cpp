#include "ABP_HM_LightPost_B_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "UFunction.hpp"
void ABP_HM_LightPost_B_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_B.BP_HM_LightPost_B_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
ABP_HM_LightPost_B_C* ABP_HM_LightPost_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_B.BP_HM_LightPost_B_C");
    return (ABP_HM_LightPost_B_C*)res;
}
