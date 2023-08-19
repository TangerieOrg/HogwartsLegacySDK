#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_LoadSaveDetails_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_LoadSaveDetails_C* UUI_BP_LoadSaveDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/UI_BP_LoadSaveDetails.UI_BP_LoadSaveDetails_C");
    return (UUI_BP_LoadSaveDetails_C*)res;
}
void UUI_BP_LoadSaveDetails_C::Set_Details_Data(FString SaveImage, FString SaveName, FString SaveType, FString SaveDate, FString TimePlayed) {}
