#include "ESlateVisibility.hpp"
#include "FSlateBrush.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_DuelTechnique_Item_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_DuelTechnique_Item_C::SetTechniqueData(bool ShowCount, bool ShowTime, FString TaskDesc, FName ID, int32_t MaxValue, int32_t Seconds, int32_t Minutes, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1) {}
UUI_BP_DuelTechnique_Item_C* UUI_BP_DuelTechnique_Item_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C");
    return (UUI_BP_DuelTechnique_Item_C*)res;
}
void UUI_BP_DuelTechnique_Item_C::UpdateTime() {}
void UUI_BP_DuelTechnique_Item_C::GetTechniqueID(FName& ID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.GetTechniqueID"));
    struct Params_GetTechniqueID {
        FName ID; // 0x0
    }; // Size: 0x8
    Params_GetTechniqueID params{};
    params.ID = (FName)ID;
    ProcessEvent(func, &params);
    ID = params.ID;
}
void UUI_BP_DuelTechnique_Item_C::MarkTaskFailure(bool IsNew, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.MarkTaskFailure"));
    struct Params_MarkTaskFailure {
        bool IsNew; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MarkTaskFailure params{};
    params.IsNew = (bool)IsNew;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_DuelTechnique_Item_C::UpdateCount(int32_t CurrentCount) {}
void UUI_BP_DuelTechnique_Item_C::MarkTaskSuccess(bool IsNew, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/DuelTechniques/UI_BP_DuelTechnique_Item.UI_BP_DuelTechnique_Item_C.MarkTaskSuccess"));
    struct Params_MarkTaskSuccess {
        bool IsNew; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MarkTaskSuccess params{};
    params.IsNew = (bool)IsNew;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
