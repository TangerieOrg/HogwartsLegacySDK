#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPlayerMountOverlapManager.hpp"
#include "URichTextBlock.hpp"
#include "UUI_BP_NoFlyHud_C.hpp"
void UUI_BP_NoFlyHud_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
UUI_BP_NoFlyHud_C* UUI_BP_NoFlyHud_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/BroomFlight/UI_BP_NoFlyHud.UI_BP_NoFlyHud_C");
    return (UUI_BP_NoFlyHud_C*)res;
}
void UUI_BP_NoFlyHud_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_NoFlyHud_C::Show(FName& Error_Key) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/BroomFlight/UI_BP_NoFlyHud.UI_BP_NoFlyHud_C.Show"));
    struct Params_Show {
        FName Error_Key; // 0x0
    }; // Size: 0x8
    Params_Show params{};
    params.Error_Key = (FName)Error_Key;
    ProcessEvent(func, &params);
    Error_Key = params.Error_Key;
}
void UUI_BP_NoFlyHud_C::ExecuteUbergraph_UI_BP_NoFlyHud(int32_t EntryPoint, FName K2Node_CustomEvent_Error_Key, FString CallFunc_Conv_NameToString_ReturnValue, UPlayerMountOverlapManager* CallFunc_Get_ReturnValue, float CallFunc_GetTimeInNoMountZone_time, bool CallFunc_GetTimeInNoMountZone_ReturnValue) {}
