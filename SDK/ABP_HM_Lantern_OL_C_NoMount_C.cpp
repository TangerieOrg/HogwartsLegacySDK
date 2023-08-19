#include "ABP_HM_Lantern_OL_C_NoMount_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
void ABP_HM_Lantern_OL_C_NoMount_C::ExecuteUbergraph_BP_HM_Lantern_OL_C_NoMount(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_Lantern_OL_C_NoMount.BP_HM_Lantern_OL_C_NoMount_C.ExecuteUbergraph_BP_HM_Lantern_OL_C_NoMount"));
    struct Params_ExecuteUbergraph_BP_HM_Lantern_OL_C_NoMount {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_HM_Lantern_OL_C_NoMount params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
ABP_HM_Lantern_OL_C_NoMount_C* ABP_HM_Lantern_OL_C_NoMount_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_Lantern_OL_C_NoMount.BP_HM_Lantern_OL_C_NoMount_C");
    return (ABP_HM_Lantern_OL_C_NoMount_C*)res;
}
void ABP_HM_Lantern_OL_C_NoMount_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_Lantern_OL_C_NoMount.BP_HM_Lantern_OL_C_NoMount_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
