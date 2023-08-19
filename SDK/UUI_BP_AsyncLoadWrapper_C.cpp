#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UCanvasPanel.hpp"
#include "UCircularThrobber.hpp"
#include "UFunction.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_AsyncLoadWrapper_C* UUI_BP_AsyncLoadWrapper_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C");
    return (UUI_BP_AsyncLoadWrapper_C*)res;
}
void UUI_BP_AsyncLoadWrapper_C::ChildLoadComplete(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.ChildLoadComplete"));
    struct Params_ChildLoadComplete {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_ChildLoadComplete params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
UCanvasPanel* UUI_BP_AsyncLoadWrapper_C::GetAttachCanvas0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.GetAttachCanvas"));
    struct Params_GetAttachCanvas {
        UCanvasPanel* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachCanvas params{};
    ProcessEvent(func, &params);
    return (UCanvasPanel*)params.ReturnValue;
}
void UUI_BP_AsyncLoadWrapper_C::GetChild(UUserWidget*& AsyncChildWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.GetChild"));
    struct Params_GetChild {
        UUserWidget* AsyncChildWidget; // 0x0
    }; // Size: 0x8
    Params_GetChild params{};
    params.AsyncChildWidget = (UUserWidget*)AsyncChildWidget;
    ProcessEvent(func, &params);
    AsyncChildWidget = params.AsyncChildWidget;
}
void UUI_BP_AsyncLoadWrapper_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::EditorPreviewConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.EditorPreviewConstruct"));
    struct Params_EditorPreviewConstruct {
    }; // Size: 0x0
    Params_EditorPreviewConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::InitChild0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.InitChild"));
    struct Params_InitChild {
    }; // Size: 0x0
    Params_InitChild params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::SetParent0(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::SetThrobberVisibility0(ESlateVisibility NewVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_AsyncLoadWrapper.UI_BP_AsyncLoadWrapper_C.SetThrobberVisibility"));
    struct Params_SetThrobberVisibility {
        ESlateVisibility NewVisibility; // 0x0
    }; // Size: 0x1
    Params_SetThrobberVisibility params{};
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_AsyncLoadWrapper_C::ExecuteUbergraph_UI_BP_AsyncLoadWrapper(int32_t EntryPoint, FString CallFunc_BreakSoftClassPath_PathString, bool CallFunc_NotEqual_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime) {}
