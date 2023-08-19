#include "ETextTransformPolicy.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FTextBlockStyle.hpp"
#include "FVector2D.hpp"
#include "UClass.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "URichTextBlock.hpp"
#include "URichTextBlockDecorator.hpp"
#include "UTextLayoutWidget.hpp"
URichTextBlock* URichTextBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.RichTextBlock");
    return (URichTextBlock*)res;
}
void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetAutoWrapText"));
    struct Params_SetAutoWrapText {
        bool InAutoTextWrap; // 0x0
    }; // Size: 0x1
    Params_SetAutoWrapText params{};
    params.InAutoTextWrap = (bool)InAutoTextWrap;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetTextTransformPolicy"));
    struct Params_SetTextTransformPolicy {
        ETextTransformPolicy InTransformPolicy; // 0x0
    }; // Size: 0x1
    Params_SetTextTransformPolicy params{};
    params.InTransformPolicy = (ETextTransformPolicy)InTransformPolicy;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultTextStyle"));
    struct Params_SetDefaultTextStyle {
        FTextBlockStyle InDefaultTextStyle; // 0x0
    }; // Size: 0x270
    Params_SetDefaultTextStyle params{};
    params.InDefaultTextStyle = (FTextBlockStyle)InDefaultTextStyle;
    ProcessEvent(func, &params);
    InDefaultTextStyle = params.InDefaultTextStyle;
}
FSlateColor URichTextBlock::GetDefaultColorAndOpacity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.GetDefaultColorAndOpacity"));
    struct Params_GetDefaultColorAndOpacity {
        FSlateColor ReturnValue; // 0x0
    }; // Size: 0x28
    Params_GetDefaultColorAndOpacity params{};
    ProcessEvent(func, &params);
    return (FSlateColor)params.ReturnValue;
}
void URichTextBlock::SetTextStyleSet(UDataTable* NewTextStyleSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetTextStyleSet"));
    struct Params_SetTextStyleSet {
        UDataTable* NewTextStyleSet; // 0x0
    }; // Size: 0x8
    Params_SetTextStyleSet params{};
    params.NewTextStyleSet = (UDataTable*)NewTextStyleSet;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetText() {}
void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetMinDesiredWidth"));
    struct Params_SetMinDesiredWidth {
        float InMinDesiredWidth; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredWidth params{};
    params.InMinDesiredWidth = (float)InMinDesiredWidth;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush"));
    struct Params_SetDefaultStrikeBrush {
        FSlateBrush InStrikeBrush; // 0x0
    }; // Size: 0x88
    Params_SetDefaultStrikeBrush params{};
    params.InStrikeBrush = (FSlateBrush)InStrikeBrush;
    ProcessEvent(func, &params);
    InStrikeBrush = params.InStrikeBrush;
}
void URichTextBlock::SetDefaultShadowOffset(FVector2D InShadowOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset"));
    struct Params_SetDefaultShadowOffset {
        FVector2D InShadowOffset; // 0x0
    }; // Size: 0x8
    Params_SetDefaultShadowOffset params{};
    params.InShadowOffset = (FVector2D)InShadowOffset;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity"));
    struct Params_SetDefaultShadowColorAndOpacity {
        FLinearColor InShadowColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetDefaultShadowColorAndOpacity params{};
    params.InShadowColorAndOpacity = (FLinearColor)InShadowColorAndOpacity;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetDefaultFont(FSlateFontInfo InFontInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultFont"));
    struct Params_SetDefaultFont {
        FSlateFontInfo InFontInfo; // 0x0
    }; // Size: 0x58
    Params_SetDefaultFont params{};
    params.InFontInfo = (FSlateFontInfo)InFontInfo;
    ProcessEvent(func, &params);
}
void URichTextBlock::SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity"));
    struct Params_SetDefaultColorAndOpacity {
        FSlateColor InColorAndOpacity; // 0x0
    }; // Size: 0x28
    Params_SetDefaultColorAndOpacity params{};
    params.InColorAndOpacity = (FSlateColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
void URichTextBlock::GetText() {}
URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(UClass* DecoratorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.GetDecoratorByClass"));
    struct Params_GetDecoratorByClass {
        UClass* DecoratorClass; // 0x0
        URichTextBlockDecorator* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDecoratorByClass params{};
    params.DecoratorClass = (UClass*)DecoratorClass;
    ProcessEvent(func, &params);
    return (URichTextBlockDecorator*)params.ReturnValue;
}
void URichTextBlock::ClearAllDefaultStyleOverrides() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides"));
    struct Params_ClearAllDefaultStyleOverrides {
    }; // Size: 0x0
    Params_ClearAllDefaultStyleOverrides params{};
    ProcessEvent(func, &params);
}
