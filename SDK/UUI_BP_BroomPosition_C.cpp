#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_BroomPosition_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_BroomPosition_C* UUI_BP_BroomPosition_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Broom/UI_BP_BroomPosition.UI_BP_BroomPosition_C");
    return (UUI_BP_BroomPosition_C*)res;
}
void UUI_BP_BroomPosition_C::SetPositionData(FString RacerName) {}
void UUI_BP_BroomPosition_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomPosition.UI_BP_BroomPosition_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_BroomPosition_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Broom/UI_BP_BroomPosition.UI_BP_BroomPosition_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_BroomPosition_C::ExecuteUbergraph_UI_BP_BroomPosition(int32_t EntryPoint) {}
