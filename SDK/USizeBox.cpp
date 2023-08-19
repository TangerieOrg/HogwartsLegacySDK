#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "USizeBox.hpp"
void USizeBox::SetMinAspectRatio(float InMinAspectRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMinAspectRatio"));
    struct Params_SetMinAspectRatio {
        float InMinAspectRatio; // 0x0
    }; // Size: 0x4
    Params_SetMinAspectRatio params{};
    params.InMinAspectRatio = (float)InMinAspectRatio;
    ProcessEvent(func, &params);
}
void USizeBox::ClearMaxDesiredHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMaxDesiredHeight"));
    struct Params_ClearMaxDesiredHeight {
    }; // Size: 0x0
    Params_ClearMaxDesiredHeight params{};
    ProcessEvent(func, &params);
}
USizeBox* USizeBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SizeBox");
    return (USizeBox*)res;
}
void USizeBox::SetWidthOverride(float InWidthOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetWidthOverride"));
    struct Params_SetWidthOverride {
        float InWidthOverride; // 0x0
    }; // Size: 0x4
    Params_SetWidthOverride params{};
    params.InWidthOverride = (float)InWidthOverride;
    ProcessEvent(func, &params);
}
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMaxDesiredWidth"));
    struct Params_SetMaxDesiredWidth {
        float InMaxDesiredWidth; // 0x0
    }; // Size: 0x4
    Params_SetMaxDesiredWidth params{};
    params.InMaxDesiredWidth = (float)InMaxDesiredWidth;
    ProcessEvent(func, &params);
}
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMinDesiredWidth"));
    struct Params_SetMinDesiredWidth {
        float InMinDesiredWidth; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredWidth params{};
    params.InMinDesiredWidth = (float)InMinDesiredWidth;
    ProcessEvent(func, &params);
}
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMinDesiredHeight"));
    struct Params_SetMinDesiredHeight {
        float InMinDesiredHeight; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredHeight params{};
    params.InMinDesiredHeight = (float)InMinDesiredHeight;
    ProcessEvent(func, &params);
}
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMaxDesiredHeight"));
    struct Params_SetMaxDesiredHeight {
        float InMaxDesiredHeight; // 0x0
    }; // Size: 0x4
    Params_SetMaxDesiredHeight params{};
    params.InMaxDesiredHeight = (float)InMaxDesiredHeight;
    ProcessEvent(func, &params);
}
void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetMaxAspectRatio"));
    struct Params_SetMaxAspectRatio {
        float InMaxAspectRatio; // 0x0
    }; // Size: 0x4
    Params_SetMaxAspectRatio params{};
    params.InMaxAspectRatio = (float)InMaxAspectRatio;
    ProcessEvent(func, &params);
}
void USizeBox::SetHeightOverride(float InHeightOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.SetHeightOverride"));
    struct Params_SetHeightOverride {
        float InHeightOverride; // 0x0
    }; // Size: 0x4
    Params_SetHeightOverride params{};
    params.InHeightOverride = (float)InHeightOverride;
    ProcessEvent(func, &params);
}
void USizeBox::ClearWidthOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearWidthOverride"));
    struct Params_ClearWidthOverride {
    }; // Size: 0x0
    Params_ClearWidthOverride params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearMinDesiredWidth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMinDesiredWidth"));
    struct Params_ClearMinDesiredWidth {
    }; // Size: 0x0
    Params_ClearMinDesiredWidth params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearMinDesiredHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMinDesiredHeight"));
    struct Params_ClearMinDesiredHeight {
    }; // Size: 0x0
    Params_ClearMinDesiredHeight params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearMinAspectRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMinAspectRatio"));
    struct Params_ClearMinAspectRatio {
    }; // Size: 0x0
    Params_ClearMinAspectRatio params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearMaxDesiredWidth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMaxDesiredWidth"));
    struct Params_ClearMaxDesiredWidth {
    }; // Size: 0x0
    Params_ClearMaxDesiredWidth params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearMaxAspectRatio() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearMaxAspectRatio"));
    struct Params_ClearMaxAspectRatio {
    }; // Size: 0x0
    Params_ClearMaxAspectRatio params{};
    ProcessEvent(func, &params);
}
void USizeBox::ClearHeightOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.SizeBox.ClearHeightOverride"));
    struct Params_ClearHeightOverride {
    }; // Size: 0x0
    Params_ClearHeightOverride params{};
    ProcessEvent(func, &params);
}
