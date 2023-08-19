#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_AvailableMissionNote_C.hpp"
#include "UWidgetAnimation.hpp"
TArray<FString> UUI_BP_AvailableMissionNote_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_AvailableMissionNote_C* UUI_BP_AvailableMissionNote_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C");
    return (UUI_BP_AvailableMissionNote_C*)res;
}
void UUI_BP_AvailableMissionNote_C::SetColor(FLinearColor Color, FSlateColor K2Node_MakeStruct_SlateColor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.SetColor"));
    struct Params_SetColor {
        FLinearColor Color; // 0x0
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x10
    }; // Size: 0x38
    Params_SetColor params{};
    params.Color = (FLinearColor)Color;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    ProcessEvent(func, &params);
}
void UUI_BP_AvailableMissionNote_C::ExecuteUbergraph_UI_BP_AvailableMissionNote(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller) {}
void UUI_BP_AvailableMissionNote_C::AvailableMissionLeft(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.AvailableMissionLeft"));
    struct Params_AvailableMissionLeft {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AvailableMissionLeft params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_AvailableMissionNote_C::Set_Mission_Data(FString MissionIcon, FString MissionName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.Set Mission Data"));
    struct Params_Set_Mission_Data {
        FString MissionIcon; // 0x0
        FString MissionName; // 0x10
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x20
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x21
    }; // Size: 0x22
    Params_Set_Mission_Data params{};
    params.MissionIcon = (FString)MissionIcon;
    params.MissionName = (FString)MissionName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_AvailableMissionNote_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_AvailableMissionNote_C::AvailableMissionRight(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Map/UI_BP_AvailableMissionNote.UI_BP_AvailableMissionNote_C.AvailableMissionRight"));
    struct Params_AvailableMissionRight {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AvailableMissionRight params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
