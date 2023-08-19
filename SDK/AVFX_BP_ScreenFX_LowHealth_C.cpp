#include "AActor.hpp"
#include "AVFX_BP_ScreenFX_LowHealth_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPostProcessComponent.hpp"
#include "USceneComponent.hpp"
#include "UTimelineComponent.hpp"
#include "UVFX_BP_Detected_HUD_FlashColor_C.hpp"
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_Health__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Health__UpdateFunc"));
    struct Params_Timeline_Health__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_Health__UpdateFunc params{};
    ProcessEvent(func, &params);
}
AVFX_BP_ScreenFX_LowHealth_C* AVFX_BP_ScreenFX_LowHealth_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C");
    return (AVFX_BP_ScreenFX_LowHealth_C*)res;
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_Health__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Health__FinishedFunc"));
    struct Params_Timeline_Health__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_Health__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Apply_Effect(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Apply Effect"));
    struct Params_Apply_Effect {
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x0
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x4
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xc
        float CallFunc_Add_FloatFloat_ReturnValue_3; // 0x10
        float CallFunc_Add_FloatFloat_ReturnValue_4; // 0x14
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x18
    }; // Size: 0x1c
    Params_Apply_Effect params{};
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue_3 = (float)CallFunc_Add_FloatFloat_ReturnValue_3;
    params.CallFunc_Add_FloatFloat_ReturnValue_4 = (float)CallFunc_Add_FloatFloat_ReturnValue_4;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::ReachedTarget(ETimelineDirection::Type NewParam, float CurrentPercent, bool& TargetReached, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReachedTarget"));
    struct Params_ReachedTarget {
        ETimelineDirection::Type NewParam; // 0x0
        char pad_1[0x3];
        float CurrentPercent; // 0x4
        bool TargetReached; // 0x8
        bool K2Node_SwitchEnum_CmpSuccess; // 0x9
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0xa
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xb
    }; // Size: 0xc
    Params_ReachedTarget params{};
    params.NewParam = (ETimelineDirection::Type)NewParam;
    params.CurrentPercent = (float)CurrentPercent;
    params.TargetReached = (bool)TargetReached;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    TargetReached = params.TargetReached;
}
void AVFX_BP_ScreenFX_LowHealth_C::Calculate_Desired_Percent(float& Percent, float CallFunc_GetHealthPercentage_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Calculate Desired Percent"));
    struct Params_Calculate_Desired_Percent {
        float Percent; // 0x0
        float CallFunc_GetHealthPercentage_ReturnValue; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xc
        float CallFunc_Subtract_FloatFloat_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Calculate_Desired_Percent params{};
    params.Percent = (float)Percent;
    params.CallFunc_GetHealthPercentage_ReturnValue = (float)CallFunc_GetHealthPercentage_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Subtract_FloatFloat_ReturnValue = (float)CallFunc_Subtract_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
    Percent = params.Percent;
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_Pulse__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Pulse__FinishedFunc"));
    struct Params_Timeline_Pulse__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_Pulse__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_Pulse__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_Pulse__UpdateFunc"));
    struct Params_Timeline_Pulse__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_Pulse__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_FadeOut__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_FadeOut__FinishedFunc"));
    struct Params_Timeline_FadeOut__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_FadeOut__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_FadeOut__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_FadeOut__UpdateFunc"));
    struct Params_Timeline_FadeOut__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_FadeOut__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_0__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_0__FinishedFunc"));
    struct Params_Timeline_0__FinishedFunc {
    }; // Size: 0x0
    Params_Timeline_0__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Timeline_0__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Timeline_0__UpdateFunc"));
    struct Params_Timeline_0__UpdateFunc {
    }; // Size: 0x0
    Params_Timeline_0__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::FadeIn__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.FadeIn__FinishedFunc"));
    struct Params_FadeIn__FinishedFunc {
    }; // Size: 0x0
    Params_FadeIn__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::FadeIn__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.FadeIn__UpdateFunc"));
    struct Params_FadeIn__UpdateFunc {
    }; // Size: 0x0
    Params_FadeIn__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::OnActorDamaged(AActor* Target, AActor* Instigator, float Damage, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.OnActorDamaged"));
    struct Params_OnActorDamaged {
        AActor* Target; // 0x0
        AActor* Instigator; // 0x8
        float Damage; // 0x10
        FHitResult Hit; // 0x14
    }; // Size: 0x9c
    Params_OnActorDamaged params{};
    params.Target = (AActor*)Target;
    params.Instigator = (AActor*)Instigator;
    params.Damage = (float)Damage;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void AVFX_BP_ScreenFX_LowHealth_C::OnHealthChanged(AActor* Target, float InHealthChange, bool bIndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.OnHealthChanged"));
    struct Params_OnHealthChanged {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool bIndicateHUD; // 0xc
    }; // Size: 0xd
    Params_OnHealthChanged params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.bIndicateHUD = (bool)bIndicateHUD;
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::CriticalHealthPulse(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.CriticalHealthPulse"));
    struct Params_CriticalHealthPulse {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CriticalHealthPulse params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Flash_UI__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Flash_UI__DelegateSignature"));
    struct Params_Flash_UI__DelegateSignature {
    }; // Size: 0x0
    Params_Flash_UI__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::ReceiveDestroyed0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveDestroyed"));
    struct Params_ReceiveDestroyed {
    }; // Size: 0x0
    Params_ReceiveDestroyed params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::Damaged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.Damaged"));
    struct Params_Damaged {
    }; // Size: 0x0
    Params_Damaged params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::UpdateFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Game/VFX/Screen_FX/Danger/VFX_BP_ScreenFX_LowHealth.VFX_BP_ScreenFX_LowHealth_C.UpdateFadeOut"));
    struct Params_UpdateFadeOut {
    }; // Size: 0x0
    Params_UpdateFadeOut params{};
    ProcessEvent(func, &params);
}
void AVFX_BP_ScreenFX_LowHealth_C::ExecuteUbergraph_VFX_BP_ScreenFX_LowHealth(int32_t EntryPoint) {}
