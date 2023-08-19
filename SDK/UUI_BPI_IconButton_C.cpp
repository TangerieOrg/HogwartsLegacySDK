#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_IconButton_C.hpp"
#include "UWidget.hpp"
UUI_BPI_IconButton_C* UUI_BPI_IconButton_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C");
    return (UUI_BPI_IconButton_C*)res;
}
void UUI_BPI_IconButton_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UUI_BPI_IconButton_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UUI_BPI_IconButton_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
void UUI_BPI_IconButton_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BPI_IconButton_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_IconButton.UI_BPI_IconButton_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
