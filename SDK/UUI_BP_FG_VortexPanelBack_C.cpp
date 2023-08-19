#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUI_BP_FG_VortexPanelBack_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FG_VortexPanelBack_C::PannelVortexDisAppearGold() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C.PannelVortexDisAppearGold"));
    struct Params_PannelVortexDisAppearGold {
    }; // Size: 0x0
    Params_PannelVortexDisAppearGold params{};
    ProcessEvent(func, &params);
}
UUI_BP_FG_VortexPanelBack_C* UUI_BP_FG_VortexPanelBack_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C");
    return (UUI_BP_FG_VortexPanelBack_C*)res;
}
void UUI_BP_FG_VortexPanelBack_C::PannelVortexAppearAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C.PannelVortexAppearAnim"));
    struct Params_PannelVortexAppearAnim {
    }; // Size: 0x0
    Params_PannelVortexAppearAnim params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VortexPanelBack_C::PannelVortexAppearGold() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C.PannelVortexAppearGold"));
    struct Params_PannelVortexAppearGold {
    }; // Size: 0x0
    Params_PannelVortexAppearGold params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VortexPanelBack_C::PannelVortexDisAppearAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C.PannelVortexDisAppearAnim"));
    struct Params_PannelVortexDisAppearAnim {
    }; // Size: 0x0
    Params_PannelVortexDisAppearAnim params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FG_VortexPanelBack_C::ExecuteUbergraph_UI_BP_FG_VortexPanelBack(int32_t EntryPoint, float CallFunc_PauseAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/UI_BP_FG_VortexPanelBack.UI_BP_FG_VortexPanelBack_C.ExecuteUbergraph_UI_BP_FG_VortexPanelBack"));
    struct Params_ExecuteUbergraph_UI_BP_FG_VortexPanelBack {
        int32_t EntryPoint; // 0x0
        float CallFunc_PauseAnimation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        float CallFunc_PauseAnimation_ReturnValue_1; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x18
        float CallFunc_PauseAnimation_ReturnValue_2; // 0x20
        char pad_24[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2; // 0x28
        float CallFunc_PauseAnimation_ReturnValue_3; // 0x30
        char pad_34[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3; // 0x38
    }; // Size: 0x40
    Params_ExecuteUbergraph_UI_BP_FG_VortexPanelBack params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PauseAnimation_ReturnValue_1 = (float)CallFunc_PauseAnimation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_PauseAnimation_ReturnValue_2 = (float)CallFunc_PauseAnimation_ReturnValue_2;
    params.CallFunc_PlayAnimation_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_2;
    params.CallFunc_PauseAnimation_ReturnValue_3 = (float)CallFunc_PauseAnimation_ReturnValue_3;
    params.CallFunc_PlayAnimation_ReturnValue_3 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_3;
    ProcessEvent(func, &params);
}
