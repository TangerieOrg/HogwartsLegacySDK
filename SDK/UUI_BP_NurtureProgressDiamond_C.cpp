#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UUI_BP_NurtureProgressDiamond_C.hpp"
#include "UUserWidget.hpp"
void UUI_BP_NurtureProgressDiamond_C::ExecuteUbergraph_UI_BP_NurtureProgressDiamond(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.ExecuteUbergraph_UI_BP_NurtureProgressDiamond"));
    struct Params_ExecuteUbergraph_UI_BP_NurtureProgressDiamond {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_NurtureProgressDiamond params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
UUI_BP_NurtureProgressDiamond_C* UUI_BP_NurtureProgressDiamond_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C");
    return (UUI_BP_NurtureProgressDiamond_C*)res;
}
void UUI_BP_NurtureProgressDiamond_C::SetProgress(float Progress, float CallFunc_FClamp_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_MathExpression_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.SetProgress"));
    struct Params_SetProgress {
        float Progress; // 0x0
        float CallFunc_FClamp_ReturnValue; // 0x4
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        float K2Node_MathExpression_ReturnValue; // 0x10
    }; // Size: 0x14
    Params_SetProgress params{};
    params.Progress = (float)Progress;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NurtureProgressDiamond_C::SetImageName(FString ImageName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.SetImageName"));
    struct Params_SetImageName {
        FString ImageName; // 0x0
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetImageName params{};
    params.ImageName = (FString)ImageName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_NurtureProgressDiamond_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_NurtureProgressDiamond.UI_BP_NurtureProgressDiamond_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
