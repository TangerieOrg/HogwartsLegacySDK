#include "FPointerToUberGraphFrame.hpp"
#include "UBP_SceneAction_FlooAdvanceTime_C.hpp"
#include "UFastTravelManager.hpp"
#include "UFunction.hpp"
#include "USceneAction_Blueprint.hpp"
void UBP_SceneAction_FlooAdvanceTime_C::OnInstant(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.OnInstant"));
    struct Params_OnInstant {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstant params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
UBP_SceneAction_FlooAdvanceTime_C* UBP_SceneAction_FlooAdvanceTime_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C");
    return (UBP_SceneAction_FlooAdvanceTime_C*)res;
}
void UBP_SceneAction_FlooAdvanceTime_C::AdvanceTime(UFastTravelManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.AdvanceTime"));
    struct Params_AdvanceTime {
        UFastTravelManager* CallFunc_Get_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_AdvanceTime params{};
    params.CallFunc_Get_ReturnValue = (UFastTravelManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
bool UBP_SceneAction_FlooAdvanceTime_C::IsInstant() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.IsInstant"));
    struct Params_IsInstant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInstant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SceneAction_FlooAdvanceTime_C::ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime(int32_t EntryPoint, float K2Node_Event_Time, bool K2Node_Event_IsScrubbing, bool CallFunc_IsInEditor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooAdvanceTime.BP_SceneAction_FlooAdvanceTime_C.ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime"));
    struct Params_ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Time; // 0x4
        bool K2Node_Event_IsScrubbing; // 0x8
        bool CallFunc_IsInEditor_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ExecuteUbergraph_BP_SceneAction_FlooAdvanceTime params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.CallFunc_IsInEditor_ReturnValue = (bool)CallFunc_IsInEditor_ReturnValue;
    ProcessEvent(func, &params);
}
