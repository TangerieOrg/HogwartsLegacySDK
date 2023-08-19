#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UDamageIndicatorsBase.hpp"
class UCanvasPanel;
class UPhoenixGameSettings;
class UUI_BP_DamageIndicator_C;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_DamageIndicators_C : public UDamageIndicatorsBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UCanvasPanel* Root; // 0x2f0
    static UUI_BP_DamageIndicators_C* StaticClass();
    void Construct();
    void OnNPC_Damaged0(FVector2D& ScreenPos, float Damage, bool IsVulnerableDamage);
    void ExecuteUbergraph_UI_BP_DamageIndicators(int32_t EntryPoint, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetShowEnemyDamageElements_ReturnValue, UUI_BP_DamageIndicator_C* CallFunc_Create_ReturnValue, UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, FVector2D K2Node_Event_ScreenPos, float K2Node_Event_Damage, bool K2Node_Event_IsVulnerableDamage, int32_t CallFunc_FTrunc_ReturnValue);
}; // Size: 0x2f8
#pragma pack(pop)
