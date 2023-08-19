#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UActorProvider;
class AActor;
class UObject;
class ACameraStackTransitionController;
#pragma pack(push, 1)
class UBP_SceneAction_GearPreview_Camera_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UActorProvider* CameraTransitionController; // 0xb0
    char pad_b8[0x50];
    float TransitionDuration; // 0x108
    char pad_10c[0x4];
    FHermesBPDelegateHandle Handle; // 0x110
    static UBP_SceneAction_GearPreview_Camera_C* StaticClass();
    void TransitionToCameraForSlot(EGearSlotIDEnum GearSlot, float Duration, bool& Result, UObject* CallFunc_GetContext_ReturnValue, UObject* CallFunc_GetContext_ReturnValue_1, AActor* CallFunc_GetActor_ReturnValue, UActorProvider* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, ACameraStackTransitionController* K2Node_DynamicCast_AsCamera_Stack_Transition_Controller, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void UpdateVendorPreviewGearCamera(UObject* Caller);
    void ExecuteUbergraph_BP_SceneAction_GearPreview_Camera(int32_t EntryPoint, bool CallFunc_TransitionToCameraForSlot_Result);
}; // Size: 0x120
#pragma pack(pop)
