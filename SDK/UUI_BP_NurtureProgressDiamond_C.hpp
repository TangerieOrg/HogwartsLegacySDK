#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UButton;
class UImage;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_NurtureProgressDiamond_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UButton* HitZone; // 0x270
    UImage* MainImage; // 0x278
    UImage* progressMeter; // 0x280
    float MinimumFill; // 0x288
    char pad_28c[0x4];
    static UUI_BP_NurtureProgressDiamond_C* StaticClass();
    void SetProgress(float Progress, float CallFunc_FClamp_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_MathExpression_ReturnValue);
    void SetImageName(FString ImageName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_NurtureProgressDiamond(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x290
#pragma pack(pop)
