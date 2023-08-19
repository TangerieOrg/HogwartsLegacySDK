#include "AActor.hpp"
#include "ABP_ConvoLighting_Adapt_Light_Default_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDynamicLightAdaptationSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UArrowComponent.hpp"
#include "UCurveFloat.hpp"
#include "UDayNightTemperatureCurveLightControllerComponent.hpp"
#include "UFunction.hpp"
#include "ULightAdaptationComponentChildOfLight.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "USpotLightComponent.hpp"
ABP_ConvoLighting_Adapt_Light_Default_C* ABP_ConvoLighting_Adapt_Light_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C");
    return (ABP_ConvoLighting_Adapt_Light_Default_C*)res;
}
void ABP_ConvoLighting_Adapt_Light_Default_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_ConvoLighting_Adapt_Light_Default_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ConvoLighting_Adapt_Light_Default_C::SetLightTemperatureValues() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.SetLightTemperatureValues"));
    struct Params_SetLightTemperatureValues {
    }; // Size: 0x0
    Params_SetLightTemperatureValues params{};
    ProcessEvent(func, &params);
}
void ABP_ConvoLighting_Adapt_Light_Default_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_ConvoLighting_Adapt_Light_Default_C::ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_Default.BP_ConvoLighting_Adapt_Light_Default_C.ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default"));
    struct Params_ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default {
        int32_t EntryPoint; // 0x0
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_BP_ConvoLighting_Adapt_Light_Default params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
