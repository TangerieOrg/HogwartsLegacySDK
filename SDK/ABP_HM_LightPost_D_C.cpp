#include "ABP_HM_LightPost_D_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_HM_LightPost_D_C* ABP_HM_LightPost_D_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_D.BP_HM_LightPost_D_C");
    return (ABP_HM_LightPost_D_C*)res;
}
void ABP_HM_LightPost_D_C::ExecuteUbergraph_BP_HM_LightPost_D(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_D.BP_HM_LightPost_D_C.ExecuteUbergraph_BP_HM_LightPost_D"));
    struct Params_ExecuteUbergraph_BP_HM_LightPost_D {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_HM_LightPost_D params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_HM_LightPost_D_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_D.BP_HM_LightPost_D_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
