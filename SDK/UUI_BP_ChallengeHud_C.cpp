#include "FFormatArgumentData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_ChallengeHud_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ChallengeHud_C::ExecuteUbergraph_UI_BP_ChallengeHud(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_ChallengeHud.UI_BP_ChallengeHud_C.ExecuteUbergraph_UI_BP_ChallengeHud"));
    struct Params_ExecuteUbergraph_UI_BP_ChallengeHud {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_ChallengeHud params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
UUI_BP_ChallengeHud_C* UUI_BP_ChallengeHud_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Mission/UI_BP_ChallengeHud.UI_BP_ChallengeHud_C");
    return (UUI_BP_ChallengeHud_C*)res;
}
void UUI_BP_ChallengeHud_C::SetWaveText(int32_t WaveNumber, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData) {}
void UUI_BP_ChallengeHud_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Mission/UI_BP_ChallengeHud.UI_BP_ChallengeHud_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
