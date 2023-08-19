#include "FPointerToUberGraphFrame.hpp"
#include "UFancyProgressBar.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UUI_BP_FancyEnemyHealthBar_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FancyEnemyHealthBar_C* UUI_BP_FancyEnemyHealthBar_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C");
    return (UUI_BP_FancyEnemyHealthBar_C*)res;
}
void UUI_BP_FancyEnemyHealthBar_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FancyEnemyHealthBar_C::ProgressChanged0(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.ProgressChanged"));
    struct Params_ProgressChanged {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_ProgressChanged params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UUI_BP_FancyEnemyHealthBar_C::GhostProgressChanged0(float GhostProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.GhostProgressChanged"));
    struct Params_GhostProgressChanged {
        float GhostProgress; // 0x0
    }; // Size: 0x4
    Params_GhostProgressChanged params{};
    params.GhostProgress = (float)GhostProgress;
    ProcessEvent(func, &params);
}
void UUI_BP_FancyEnemyHealthBar_C::DepletedFeedback0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.DepletedFeedback"));
    struct Params_DepletedFeedback {
    }; // Size: 0x0
    Params_DepletedFeedback params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FancyEnemyHealthBar_C::FilledFeedback0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.FilledFeedback"));
    struct Params_FilledFeedback {
    }; // Size: 0x0
    Params_FilledFeedback params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FancyEnemyHealthBar_C::ExecuteUbergraph_UI_BP_FancyEnemyHealthBar(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float K2Node_Event_Progress, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Event_GhostProgress, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Actor/NewEnemyHealthBar/UI_BP_FancyEnemyHealthBar.UI_BP_FancyEnemyHealthBar_C.ExecuteUbergraph_UI_BP_FancyEnemyHealthBar"));
    struct Params_ExecuteUbergraph_UI_BP_FancyEnemyHealthBar {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        float K2Node_Event_Progress; // 0x10
        char pad_14[0x4];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x18
        float K2Node_Event_GhostProgress; // 0x20
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_UI_BP_FancyEnemyHealthBar params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.K2Node_Event_Progress = (float)K2Node_Event_Progress;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.K2Node_Event_GhostProgress = (float)K2Node_Event_GhostProgress;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
