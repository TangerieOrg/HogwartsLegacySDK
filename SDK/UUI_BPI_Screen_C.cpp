#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_Screen_C.hpp"
#include "UUserWidget.hpp"
UUI_BPI_Screen_C* UUI_BPI_Screen_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_Screen.UI_BPI_Screen_C");
    return (UUI_BPI_Screen_C*)res;
}
void UUI_BPI_Screen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Screen.UI_BPI_Screen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BPI_Screen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Screen.UI_BPI_Screen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BPI_Screen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Screen.UI_BPI_Screen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_Screen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_Screen.UI_BPI_Screen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
