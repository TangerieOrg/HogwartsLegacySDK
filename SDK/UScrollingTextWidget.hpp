#pragma once
#include <cstdint>
#include "EScrollingWidgetMode.hpp"
#include "EScrollingWidgetTypes.hpp"
#include "ETextTransformPolicy.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UHorizontalBox;
#pragma pack(push, 1)
class UScrollingTextWidget : public UUserWidget {
public:
    float ScrollSpeed; // 0x268
    bool ShouldShowEllipsis; // 0x26c
    EScrollingWidgetTypes ScrollType; // 0x26d
    bool ShouldLoop; // 0x26e
    bool TickerScroll; // 0x26f
    FString EllipsisText; // 0x270
    float TruncationPosition; // 0x280
    float DefaultScrollLimitPad; // 0x284
    float TickerWrapPosition; // 0x288
    EScrollingWidgetMode ScrollMode; // 0x28c
    char pad_28d[0x3];
    UPhoenixTextBlock* TextBlock; // 0x290
    FDataTableRowHandle ColorTag; // 0x298
    FString LocalizationKey; // 0x2a8
    bool Translatable; // 0x2b8
    bool ScaleFontSize; // 0x2b9
    char pad_2ba[0x6];
    FSlateFontInfo Font; // 0x2c0
    FSlateBrush StrikeBrush; // 0x318
    FVector2D ShadowOffset; // 0x3a0
    FLinearColor ShadowColorAndOpacity; // 0x3a8
    float MinDesiredWidth; // 0x3b8
    bool bWrapWithInvalidationPanel; // 0x3bc
    ETextTransformPolicy TextTransformPolicy; // 0x3bd
    char pad_3be[0x2];
    UHorizontalBox* HorizontalBox; // 0x3c0
    bool ShouldScroll; // 0x3c8
    bool ScrollOnHover; // 0x3c9
    char pad_3ca[0x2];
    float ScrollDirection; // 0x3cc
    char pad_3d0[0x30];
    static UScrollingTextWidget* StaticClass();
    void SetTruncationPosition(float Position);
    void SetTextKey(FString Key);
    void SetText();
    void SetShouldShowEllipsis(bool pShouldShowEllipsis);
    void SetScrollSpeed(float pScrollSpeed);
    void SetPhoenixTextOpacity(float InOpacity);
    void SetPhoenixTextColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetHorizontalBoxSize(FMargin Size);
    void SetColorTag(FDataTableRowHandle NewColorTag);
    void OnUnhovered();
    void OnHovered();
    float GetTruncationPosition();
    bool GetShouldShowEllipsis();
    float GetScrollSpeed();
    void GetPhoenixText();
    FMargin GetHorizontalBoxSize();
    FDataTableRowHandle GetColorTag();
}; // Size: 0x400
#pragma pack(pop)
