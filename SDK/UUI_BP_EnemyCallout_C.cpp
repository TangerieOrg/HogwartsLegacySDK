#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCallOutComponent.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObjectStateInfo.hpp"
#include "UOverlay.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "URetainerBox.hpp"
#include "UUI_BP_EnemyCallout_C.hpp"
#include "UUI_BP_FancyEnemyHealthBar_C.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_EnemyCallout_C::ShowWidget(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.ShowWidget"));
    struct Params_ShowWidget {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_ShowWidget params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::SetHasOffscreenProxyActive(bool HasOffscreenProxy) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetHasOffscreenProxyActive"));
    struct Params_SetHasOffscreenProxyActive {
        bool HasOffscreenProxy; // 0x0
    }; // Size: 0x1
    Params_SetHasOffscreenProxyActive params{};
    params.HasOffscreenProxy = (bool)HasOffscreenProxy;
    ProcessEvent(func, &params);
}
UUI_BP_EnemyCallout_C* UUI_BP_EnemyCallout_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C");
    return (UUI_BP_EnemyCallout_C*)res;
}
void UUI_BP_EnemyCallout_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::HealthChanged(AActor* Target, float InHealthChange, bool IndicateHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.HealthChanged"));
    struct Params_HealthChanged {
        AActor* Target; // 0x0
        float InHealthChange; // 0x8
        bool IndicateHUD; // 0xc
    }; // Size: 0xd
    Params_HealthChanged params{};
    params.Target = (AActor*)Target;
    params.InHealthChange = (float)InHealthChange;
    params.IndicateHUD = (bool)IndicateHUD;
    ProcessEvent(func, &params);
}
UWidget* UUI_BP_EnemyCallout_C::GetOffscreenIndicator() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.GetOffscreenIndicator"));
    struct Params_GetOffscreenIndicator {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOffscreenIndicator params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
float UUI_BP_EnemyCallout_C::GetOutroDuration(int32_t OutroType, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.GetOutroDuration"));
    struct Params_GetOutroDuration {
        int32_t OutroType; // 0x0
        float ReturnValue; // 0x4
        bool K2Node_SwitchInteger_CmpSuccess; // 0x8
    }; // Size: 0x9
    Params_GetOutroDuration params{};
    params.OutroType = (int32_t)OutroType;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UUI_BP_EnemyCallout_C::NPC_Character_State_Setup(ANPC_Character* NPC_Character, bool CallFunc_IsValid_ReturnValue, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.NPC Character State Setup"));
    struct Params_NPC_Character_State_Setup {
        ANPC_Character* NPC_Character; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
        char pad_9[0x7];
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x10
        bool CallFunc_GetPlayingDemoBuild_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_NPC_Character_State_Setup params{};
    params.NPC_Character = (ANPC_Character*)NPC_Character;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    params.CallFunc_GetPlayingDemoBuild_ReturnValue = (bool)CallFunc_GetPlayingDemoBuild_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetupWidget"));
    struct Params_SetupWidget {
        AActor* Parent; // 0x0
        UCallOutComponent* CallOutComponent; // 0x8
    }; // Size: 0x10
    Params_SetupWidget params{};
    params.Parent = (AActor*)Parent;
    params.CallOutComponent = (UCallOutComponent*)CallOutComponent;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::SetIsOffscreenCallout(bool IsOffscreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.SetIsOffscreenCallout"));
    struct Params_SetIsOffscreenCallout {
        bool IsOffscreen; // 0x0
    }; // Size: 0x1
    Params_SetIsOffscreenCallout params{};
    params.IsOffscreen = (bool)IsOffscreen;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::UpdateCallOutUI(FName CharacterID, float BarPercent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.UpdateCallOutUI"));
    struct Params_UpdateCallOutUI {
        FName CharacterID; // 0x0
        float BarPercent; // 0x8
    }; // Size: 0xc
    Params_UpdateCallOutUI params{};
    params.CharacterID = (FName)CharacterID;
    params.BarPercent = (float)BarPercent;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::AwareStateInfoChanged(bool bFromUpdate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.AwareStateInfoChanged"));
    struct Params_AwareStateInfoChanged {
        bool bFromUpdate; // 0x0
    }; // Size: 0x1
    Params_AwareStateInfoChanged params{};
    params.bFromUpdate = (bool)bFromUpdate;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::AttackThreatDataChange(bool Revealio) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/UI_BP_EnemyCallout.UI_BP_EnemyCallout_C.AttackThreatDataChange"));
    struct Params_AttackThreatDataChange {
        bool Revealio; // 0x0
    }; // Size: 0x1
    Params_AttackThreatDataChange params{};
    params.Revealio = (bool)Revealio;
    ProcessEvent(func, &params);
}
void UUI_BP_EnemyCallout_C::ExecuteUbergraph_UI_BP_EnemyCallout(int32_t EntryPoint, FName CallFunc_GetDbId_ReturnValue, float CallFunc_GetLevel_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue) {}
