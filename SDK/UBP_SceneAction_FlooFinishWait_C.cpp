#include "FPointerToUberGraphFrame.hpp"
#include "UBP_SceneAction_FlooFinishWait_C.hpp"
#include "UFastTravelManager.hpp"
#include "UFunction.hpp"
#include "USceneAction_Blueprint.hpp"
UBP_SceneAction_FlooFinishWait_C* UBP_SceneAction_FlooFinishWait_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooFinishWait.BP_SceneAction_FlooFinishWait_C");
    return (UBP_SceneAction_FlooFinishWait_C*)res;
}
bool UBP_SceneAction_FlooFinishWait_C::IsInstant0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooFinishWait.BP_SceneAction_FlooFinishWait_C.IsInstant"));
    struct Params_IsInstant {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInstant params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBP_SceneAction_FlooFinishWait_C::OnInstant0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooFinishWait.BP_SceneAction_FlooFinishWait_C.OnInstant"));
    struct Params_OnInstant {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnInstant params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_FlooFinishWait_C::ExecuteUbergraph_BP_SceneAction_FlooFinishWait(int32_t EntryPoint, UFastTravelManager* CallFunc_Get_ReturnValue, float K2Node_Event_Time, bool K2Node_Event_IsScrubbing, bool CallFunc_IsInEditor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Misc/FlooAdvanceTime/BP_SceneAction_FlooFinishWait.BP_SceneAction_FlooFinishWait_C.ExecuteUbergraph_BP_SceneAction_FlooFinishWait"));
    struct Params_ExecuteUbergraph_BP_SceneAction_FlooFinishWait {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UFastTravelManager* CallFunc_Get_ReturnValue; // 0x8
        float K2Node_Event_Time; // 0x10
        bool K2Node_Event_IsScrubbing; // 0x14
        bool CallFunc_IsInEditor_ReturnValue; // 0x15
    }; // Size: 0x16
    Params_ExecuteUbergraph_BP_SceneAction_FlooFinishWait params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UFastTravelManager*)CallFunc_Get_ReturnValue;
    params.K2Node_Event_Time = (float)K2Node_Event_Time;
    params.K2Node_Event_IsScrubbing = (bool)K2Node_Event_IsScrubbing;
    params.CallFunc_IsInEditor_ReturnValue = (bool)CallFunc_IsInEditor_ReturnValue;
    ProcessEvent(func, &params);
}
