#include "EStretch\Type.hpp"
#include "EStretchDirection\Type.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UScaleBox.hpp"
void UScaleBox::SetStretch(EStretch::Type InStretch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBox.SetStretch"));
    struct Params_SetStretch {
        EStretch::Type InStretch; // 0x0
    }; // Size: 0x1
    Params_SetStretch params{};
    params.InStretch = (EStretch::Type)InStretch;
    ProcessEvent(func, &params);
}
UScaleBox* UScaleBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ScaleBox");
    return (UScaleBox*)res;
}
void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBox.SetUserSpecifiedScale"));
    struct Params_SetUserSpecifiedScale {
        float InUserSpecifiedScale; // 0x0
    }; // Size: 0x4
    Params_SetUserSpecifiedScale params{};
    params.InUserSpecifiedScale = (float)InUserSpecifiedScale;
    ProcessEvent(func, &params);
}
void UScaleBox::SetStretchDirection(EStretchDirection::Type InStretchDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBox.SetStretchDirection"));
    struct Params_SetStretchDirection {
        EStretchDirection::Type InStretchDirection; // 0x0
    }; // Size: 0x1
    Params_SetStretchDirection params{};
    params.InStretchDirection = (EStretchDirection::Type)InStretchDirection;
    ProcessEvent(func, &params);
}
void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale"));
    struct Params_SetIgnoreInheritedScale {
        bool bInIgnoreInheritedScale; // 0x0
    }; // Size: 0x1
    Params_SetIgnoreInheritedScale params{};
    params.bInIgnoreInheritedScale = (bool)bInIgnoreInheritedScale;
    ProcessEvent(func, &params);
}
