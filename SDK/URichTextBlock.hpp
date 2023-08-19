#pragma once
#include <cstdint>
#include "ETextTransformPolicy.hpp"
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVector2D.hpp"
#include "UTextLayoutWidget.hpp"
class UDataTable;
class URichTextBlockDecorator;
class UClass;
struct FSlateBrush;
#pragma pack(push, 1)
class URichTextBlock : public UTextLayoutWidget {
public:
    char pad_128[0x18];
    UDataTable* TextStyleSet; // 0x140
    TArray<UClass*> DecoratorClasses; // 0x148
    bool bOverrideDefaultStyle; // 0x158
    char pad_159[0x7];
    FTextBlockStyle DefaultTextStyleOverride; // 0x160
    float MinDesiredWidth; // 0x3d0
    ETextTransformPolicy TextTransformPolicy; // 0x3d4
    char pad_3d5[0x3];
    FTextBlockStyle DefaultTextStyle; // 0x3d8
    TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x648
    char pad_658[0x20];
    static URichTextBlock* StaticClass();
    void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
    void SetTextStyleSet(UDataTable* NewTextStyleSet);
    void SetText();
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);
    void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);
    void SetDefaultShadowOffset(FVector2D InShadowOffset);
    void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);
    void SetDefaultFont(FSlateFontInfo InFontInfo);
    void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);
    void SetAutoWrapText(bool InAutoTextWrap);
    void GetText();
    FSlateColor GetDefaultColorAndOpacity();
    URichTextBlockDecorator* GetDecoratorByClass(UClass* DecoratorClass);
    void ClearAllDefaultStyleOverrides();
}; // Size: 0x678
#pragma pack(pop)
