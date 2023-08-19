#include "AActor.hpp"
#include "ACameraStackTransitionController.hpp"
#include "EGearSlotIDEnum.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActorProvider.hpp"
#include "UBP_SceneAction_GearPreview_Camera_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneAction_Blueprint.hpp"
void UBP_SceneAction_GearPreview_Camera_C::TransitionToCameraForSlot(EGearSlotIDEnum GearSlot, float Duration, bool& Result, UObject* CallFunc_GetContext_ReturnValue, UObject* CallFunc_GetContext_ReturnValue_1, AActor* CallFunc_GetActor_ReturnValue, UActorProvider* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, ACameraStackTransitionController* K2Node_DynamicCast_AsCamera_Stack_Transition_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/Vendor/BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.TransitionToCameraForSlot"));
    struct Params_TransitionToCameraForSlot {
        EGearSlotIDEnum GearSlot; // 0x0
        char pad_1[0x3];
        float Duration; // 0x4
        bool Result; // 0x8
        char pad_9[0x7];
        UObject* CallFunc_GetContext_ReturnValue; // 0x10
        UObject* CallFunc_GetContext_ReturnValue_1; // 0x18
        AActor* CallFunc_GetActor_ReturnValue; // 0x20
        UActorProvider* CallFunc_Map_Find_Value; // 0x28
        bool CallFunc_Map_Find_ReturnValue; // 0x30
        char pad_31[0x7];
        ACameraStackTransitionController* K2Node_DynamicCast_AsCamera_Stack_Transition_Controller; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x7];
        AActor* CallFunc_GetActor_ReturnValue_1; // 0x48
        bool CallFunc_IsValid_ReturnValue; // 0x50
    }; // Size: 0x51
    Params_TransitionToCameraForSlot params{};
    params.GearSlot = (EGearSlotIDEnum)GearSlot;
    params.Duration = (float)Duration;
    params.Result = (bool)Result;
    params.CallFunc_GetContext_ReturnValue = (UObject*)CallFunc_GetContext_ReturnValue;
    params.CallFunc_GetContext_ReturnValue_1 = (UObject*)CallFunc_GetContext_ReturnValue_1;
    params.CallFunc_GetActor_ReturnValue = (AActor*)CallFunc_GetActor_ReturnValue;
    params.CallFunc_Map_Find_Value = (UActorProvider*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.K2Node_DynamicCast_AsCamera_Stack_Transition_Controller = (ACameraStackTransitionController*)K2Node_DynamicCast_AsCamera_Stack_Transition_Controller;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetActor_ReturnValue_1 = (AActor*)CallFunc_GetActor_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
UBP_SceneAction_GearPreview_Camera_C* UBP_SceneAction_GearPreview_Camera_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Conversations/Vendor/BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C");
    return (UBP_SceneAction_GearPreview_Camera_C*)res;
}
void UBP_SceneAction_GearPreview_Camera_C::OnEnterInterval0(float Time, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/Vendor/BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.OnEnterInterval"));
    struct Params_OnEnterInterval {
        float Time; // 0x0
        bool IsScrubbing; // 0x4
    }; // Size: 0x5
    Params_OnEnterInterval params{};
    params.Time = (float)Time;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_GearPreview_Camera_C::OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/Vendor/BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.OnExitInterval"));
    struct Params_OnExitInterval {
        float Time; // 0x0
        bool Cancelled; // 0x4
        bool IsScrubbing; // 0x5
    }; // Size: 0x6
    Params_OnExitInterval params{};
    params.Time = (float)Time;
    params.Cancelled = (bool)Cancelled;
    params.IsScrubbing = (bool)IsScrubbing;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_GearPreview_Camera_C::UpdateVendorPreviewGearCamera(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Cinematics/Conversations/Vendor/BP_SceneAction_GearPreview_Camera.BP_SceneAction_GearPreview_Camera_C.UpdateVendorPreviewGearCamera"));
    struct Params_UpdateVendorPreviewGearCamera {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_UpdateVendorPreviewGearCamera params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UBP_SceneAction_GearPreview_Camera_C::ExecuteUbergraph_BP_SceneAction_GearPreview_Camera(int32_t EntryPoint, bool CallFunc_TransitionToCameraForSlot_Result) {}
