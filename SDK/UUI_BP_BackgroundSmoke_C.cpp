#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UI_BP_BackgroundSmoke_Enum\Type.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "URetainerBox.hpp"
#include "UScreen.hpp"
#include "UUI_BP_BackgroundSmoke_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_BackgroundSmoke_C::OutroAnim_SmokeFluid() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OutroAnim_SmokeFluid"));
    struct Params_OutroAnim_SmokeFluid {
    }; // Size: 0x0
    Params_OutroAnim_SmokeFluid params{};
    ProcessEvent(func, &params);
}
UUI_BP_BackgroundSmoke_C* UUI_BP_BackgroundSmoke_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C");
    return (UUI_BP_BackgroundSmoke_C*)res;
}
void UUI_BP_BackgroundSmoke_C::SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::Finished_A0718D5D4425C53BA4252CA49D170DAC() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Finished_A0718D5D4425C53BA4252CA49D170DAC"));
    struct Params_Finished_A0718D5D4425C53BA4252CA49D170DAC {
    }; // Size: 0x0
    Params_Finished_A0718D5D4425C53BA4252CA49D170DAC params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::Finished_7E5D6D1D4577374A1CD1A781D1E39F3B() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Finished_7E5D6D1D4577374A1CD1A781D1E39F3B"));
    struct Params_Finished_7E5D6D1D4577374A1CD1A781D1E39F3B {
    }; // Size: 0x0
    Params_Finished_7E5D6D1D4577374A1CD1A781D1E39F3B params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::IntroAnim_SmokeFluid() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.IntroAnim_SmokeFluid"));
    struct Params_IntroAnim_SmokeFluid {
    }; // Size: 0x0
    Params_IntroAnim_SmokeFluid params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::ExecuteUbergraph_UI_BP_BackgroundSmoke(int32_t EntryPoint, bool Temp_bool_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UI_BP_BackgroundSmoke_Enum::Type Temp_byte_Variable_2, UObject* Temp_object_Variable, UObject* Temp_object_Variable_1, UObject* Temp_object_Variable_2, UObject* Temp_object_Variable_3) {}
void UUI_BP_BackgroundSmoke_C::SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_BackgroundSmoke_0 params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_BackgroundSmoke_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t NewQuantity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t NewQuantity; // 0x4
    }; // Size: 0x8
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.NewQuantity = (int32_t)NewQuantity;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_BackgroundSmoke_C::SequenceEvent_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent_1"));
    struct Params_SequenceEvent_1 {
    }; // Size: 0x0
    Params_SequenceEvent_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnItemPurchaseFailedNoSpace__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchaseFailedNoSpace__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoSpace__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoSpace__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::SequenceEvent_SmokeFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SequenceEvent_SmokeFadeIn"));
    struct Params_SequenceEvent_SmokeFadeIn {
    }; // Size: 0x0
    Params_SequenceEvent_SmokeFadeIn params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OutroAnim_SmokeDesolve() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OutroAnim_SmokeDesolve"));
    struct Params_OutroAnim_SmokeDesolve {
    }; // Size: 0x0
    Params_OutroAnim_SmokeDesolve params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::IntroAnim_SmokeFluidVortex(float PlaybackSpeed, float StartAtTime, float VortexOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.IntroAnim_SmokeFluidVortex"));
    struct Params_IntroAnim_SmokeFluidVortex {
        float PlaybackSpeed; // 0x0
        float StartAtTime; // 0x4
        float VortexOpacity; // 0x8
    }; // Size: 0xc
    Params_IntroAnim_SmokeFluidVortex params{};
    params.PlaybackSpeed = (float)PlaybackSpeed;
    params.StartAtTime = (float)StartAtTime;
    params.VortexOpacity = (float)VortexOpacity;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::SwitchAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.SwitchAnim"));
    struct Params_SwitchAnim {
    }; // Size: 0x0
    Params_SwitchAnim params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnItemPurchaseFailedNoMoney__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchaseFailedNoMoney__DelegateSignature"));
    struct Params_OnItemPurchaseFailedNoMoney__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchaseFailedNoMoney__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnItemSold__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemSold__DelegateSignature"));
    struct Params_OnItemSold__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemSold__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::OnItemPurchased__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.OnItemPurchased__DelegateSignature"));
    struct Params_OnItemPurchased__DelegateSignature {
    }; // Size: 0x0
    Params_OnItemPurchased__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::LeavePreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.LeavePreview__DelegateSignature"));
    struct Params_LeavePreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_LeavePreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::StartPreview__DelegateSignature(FString PreviewedGearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.StartPreview__DelegateSignature"));
    struct Params_StartPreview__DelegateSignature {
        FString PreviewedGearID; // 0x0
    }; // Size: 0x10
    Params_StartPreview__DelegateSignature params{};
    params.PreviewedGearID = (FString)PreviewedGearID;
    ProcessEvent(func, &params);
}
void UUI_BP_BackgroundSmoke_C::AbortInteraction__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_BackgroundSmoke.UI_BP_BackgroundSmoke_C.AbortInteraction__DelegateSignature"));
    struct Params_AbortInteraction__DelegateSignature {
    }; // Size: 0x0
    Params_AbortInteraction__DelegateSignature params{};
    ProcessEvent(func, &params);
}
