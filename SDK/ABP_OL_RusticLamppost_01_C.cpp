#include "ABP_LightFixture_Master_C.hpp"
#include "ABP_OL_RusticLamppost_01_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UPointLightComponent.hpp"
#include "USpotLightComponent.hpp"
ABP_OL_RusticLamppost_01_C* ABP_OL_RusticLamppost_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C");
    return (ABP_OL_RusticLamppost_01_C*)res;
}
void ABP_OL_RusticLamppost_01_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_OL_RusticLamppost_01_C::ExecuteUbergraph_BP_OL_RusticLamppost_01(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.ExecuteUbergraph_BP_OL_RusticLamppost_01"));
    struct Params_ExecuteUbergraph_BP_OL_RusticLamppost_01 {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_RusticLamppost_01 params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void ABP_OL_RusticLamppost_01_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_OL_RusticLamppost_01.BP_OL_RusticLamppost_01_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
