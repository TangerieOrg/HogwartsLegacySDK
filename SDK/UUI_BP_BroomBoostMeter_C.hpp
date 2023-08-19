#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UImage;
class UUI_BP_BroomBoostSection_C;
class UTexture2D;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_BroomBoostMeter_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* CloseToGroundOn; // 0x270
    UWidgetAnimation* BoostOn; // 0x278
    UWidgetAnimation* ComboFlamesFade; // 0x280
    UImage* BroomRaceIcon; // 0x288
    UUI_BP_BroomBoostSection_C* section1; // 0x290
    UImage* selectedFlameRight; // 0x298
    UImage* selectedFlameTop; // 0x2a0
    UImage* TurboMeter; // 0x2a8
    TArray<UUI_BP_BroomBoostSection_C*> MeterSegments; // 0x2b0
    UTexture2D* MeterIcon; // 0x2c0
    FVector2D MeterIconSize; // 0x2c8
    bool CloseToGroundState; // 0x2d0
    bool BoostHeld; // 0x2d1
    bool TurboState; // 0x2d2
    char pad_2d3[0x1];
    FLinearColor TurboColor; // 0x2d4
    FLinearColor BoostColor; // 0x2e4
    char pad_2f4[0x4];
    static UUI_BP_BroomBoostMeter_C* StaticClass();
    void BoostInputChanged(bool BoostHeld, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void ToggleBoostingEffect(bool ShouldShow);
    void ToggleCloseToGroundEffect(bool ShouldShow, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void UpdateMeter(float BoostPercent, bool IsInTurbo, int32_t NumMeters, bool CallFunc_Not_PreBool_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, int32_t CallFunc_GetNumUpgrades_Upgrades, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SetVisibleSegments(int32_t Upgrades, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, UUI_BP_BroomBoostSection_C* CallFunc_Array_Get_Item, ESlateVisibility K2Node_Select_Default, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetNumUpgrades(int32_t& Upgrades, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_GetLockName_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_1, FName CallFunc_GetLockName_ReturnValue_2, bool CallFunc_IsUnlocked_ReturnValue_2);
    void PreConstruct(bool IsDesignTime);
    void SyncUpgradeSegments();
    void ExecuteUbergraph_UI_BP_BroomBoostMeter(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32_t CallFunc_GetNumUpgrades_Upgrades, int32_t CallFunc_GetNumUpgrades_Upgrades_1);
}; // Size: 0x2f8
#pragma pack(pop)
