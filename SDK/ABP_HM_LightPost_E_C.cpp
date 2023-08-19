#include "ABP_Candles_C.hpp"
#include "ABP_HM_LightPost_E_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ABP_HM_LightPost_E_C* ABP_HM_LightPost_E_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_E.BP_HM_LightPost_E_C");
    return (ABP_HM_LightPost_E_C*)res;
}
void ABP_HM_LightPost_E_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_E.BP_HM_LightPost_E_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_HM_LightPost_E_C::ExecuteUbergraph_BP_HM_LightPost_E(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_LightPost_E.BP_HM_LightPost_E_C.ExecuteUbergraph_BP_HM_LightPost_E"));
    struct Params_ExecuteUbergraph_BP_HM_LightPost_E {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_HM_LightPost_E params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
