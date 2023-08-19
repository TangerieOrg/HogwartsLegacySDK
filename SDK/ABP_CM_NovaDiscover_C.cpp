#include "AAncientMagicNova.hpp"
#include "ABP_CM_NovaDiscover_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAncientMagicEffect_Nova.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABP_CM_NovaDiscover_C* ABP_CM_NovaDiscover_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_NovaDiscover.BP_CM_NovaDiscover_C");
    return (ABP_CM_NovaDiscover_C*)res;
}
void ABP_CM_NovaDiscover_C::OnCollide__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.OnCollide__DelegateSignature"));
    struct Params_OnCollide__DelegateSignature {
    }; // Size: 0x0
    Params_OnCollide__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_CM_NovaDiscover_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_CM_NovaDiscover_C::ExecuteUbergraph_BP_CM_NovaDiscover(int32_t EntryPoint, float K2Node_Event_DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Experimental/Levels/CoreMechanics/Blueprints/BP_CM_NovaDiscover.BP_CM_NovaDiscover_C.ExecuteUbergraph_BP_CM_NovaDiscover"));
    struct Params_ExecuteUbergraph_BP_CM_NovaDiscover {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_DeltaSeconds; // 0x4
    }; // Size: 0x8
    Params_ExecuteUbergraph_BP_CM_NovaDiscover params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    ProcessEvent(func, &params);
}
