#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UHUDCompassIcon.hpp"
class UWidgetAnimation;
class UHorizontalBox;
class UPhoenixTextBlock;
class UImage;
class UVerticalBox;
class UBorder;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CompassIcon_C : public UHUDCompassIcon {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x270
    UWidgetAnimation* FadeDistanceText; // 0x278
    UHorizontalBox* DistancePanel; // 0x280
    UPhoenixTextBlock* DistanceText; // 0x288
    UImage* ElevationArrow; // 0x290
    UVerticalBox* IconContainer; // 0x298
    UImage* iconImage; // 0x2a0
    UBorder* IndicatorArrow; // 0x2a8
    UImage* LockBadge; // 0x2b0
    UImage* Pulse; // 0x2b8
    UImage* TrackBorder; // 0x2c0
    bool DistanceNumbersShown; // 0x2c8
    char pad_2c9[0x7];
    static UUI_BP_CompassIcon_C* StaticClass();
    void SetIconTexture0(UTexture2D* Texture);
    void SetCompassIconVisibility0(ESlateVisibility NewVisibility);
    void SetCompassIconColorAndOpacity0(FLinearColor NewColor);
    void SetIconTextureByName0(FString IconName, bool ShowPulse);
    void SetElevationVisibility0(ESlateVisibility NewVisibility);
    void SetIconScale0(float Scale);
    void SetDistanceValue0(int32_t Distance);
    void SetIconOpacity0(float Opacity);
    void ShowDistance0(bool ShouldShow);
    void ShowIndicatorArrow0(bool ShouldShow);
    void SetIndicatorArrowRotation0(float DegreeRot);
    void SetIconSize0(FVector2D NewSize);
    void SetPulse0(bool Enable);
    void SetRotation0(float Angle);
    void TogglePathingBorder0(bool ShowBorder, FString OutlineIconName);
    void TrackBorderLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void SetElevationDistance0(int32_t Distance);
    void ToggleLockBadge0(bool ShowLock);
    void WidgetAnimationEvt_FadeDistanceText_K2Node_WidgetAnimationEvent_0();
    void ExecuteUbergraph_UI_BP_CompassIcon(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable);
}; // Size: 0x2d0
#pragma pack(pop)
