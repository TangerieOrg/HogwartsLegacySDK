#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UDamageIndicatorsBase.hpp"
#include "UFunction.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UUI_BP_DamageIndicator_C.hpp"
#include "UUI_BP_DamageIndicators_C.hpp"
void UUI_BP_DamageIndicators_C::OnNPC_Damaged0(FVector2D& ScreenPos, float Damage, bool IsVulnerableDamage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DamageIndicators/UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.OnNPC_Damaged"));
    struct Params_OnNPC_Damaged {
        FVector2D ScreenPos; // 0x0
        float Damage; // 0x8
        bool IsVulnerableDamage; // 0xc
    }; // Size: 0xd
    Params_OnNPC_Damaged params{};
    params.ScreenPos = (FVector2D)ScreenPos;
    params.Damage = (float)Damage;
    params.IsVulnerableDamage = (bool)IsVulnerableDamage;
    ProcessEvent(func, &params);
    ScreenPos = params.ScreenPos;
}
UUI_BP_DamageIndicators_C* UUI_BP_DamageIndicators_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/DamageIndicators/UI_BP_DamageIndicators.UI_BP_DamageIndicators_C");
    return (UUI_BP_DamageIndicators_C*)res;
}
void UUI_BP_DamageIndicators_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DamageIndicators/UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DamageIndicators_C::ExecuteUbergraph_UI_BP_DamageIndicators(int32_t EntryPoint, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetShowEnemyDamageElements_ReturnValue, UUI_BP_DamageIndicator_C* CallFunc_Create_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, FVector2D K2Node_Event_ScreenPos, float K2Node_Event_Damage, bool K2Node_Event_IsVulnerableDamage, int32_t CallFunc_FTrunc_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DamageIndicators/UI_BP_DamageIndicators.UI_BP_DamageIndicators_C.ExecuteUbergraph_UI_BP_DamageIndicators"));
    struct Params_ExecuteUbergraph_UI_BP_DamageIndicators {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x8
        bool CallFunc_GetShowEnemyDamageElements_ReturnValue; // 0x10
        char pad_11[0x7];
        UUI_BP_DamageIndicator_C* CallFunc_Create_ReturnValue; // 0x18
        UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue; // 0x20
        FVector2D K2Node_Event_ScreenPos; // 0x28
        float K2Node_Event_Damage; // 0x30
        bool K2Node_Event_IsVulnerableDamage; // 0x34
        char pad_35[0x3];
        int32_t CallFunc_FTrunc_ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_ExecuteUbergraph_UI_BP_DamageIndicators params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetShowEnemyDamageElements_ReturnValue = (bool)CallFunc_GetShowEnemyDamageElements_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_DamageIndicator_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_AddChildToCanvas_ReturnValue = (UCanvasPanelSlot*)CallFunc_AddChildToCanvas_ReturnValue;
    params.K2Node_Event_ScreenPos = (FVector2D)K2Node_Event_ScreenPos;
    params.K2Node_Event_Damage = (float)K2Node_Event_Damage;
    params.K2Node_Event_IsVulnerableDamage = (bool)K2Node_Event_IsVulnerableDamage;
    params.CallFunc_FTrunc_ReturnValue = (int32_t)CallFunc_FTrunc_ReturnValue;
    ProcessEvent(func, &params);
}
