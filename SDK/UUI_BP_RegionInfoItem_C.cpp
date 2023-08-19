#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_RegionInfoItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_RegionInfoItem_C::ExecuteUbergraph_UI_BP_RegionInfoItem(int32_t EntryPoint) {}
UUI_BP_RegionInfoItem_C* UUI_BP_RegionInfoItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C");
    return (UUI_BP_RegionInfoItem_C*)res;
}
void UUI_BP_RegionInfoItem_C::SetIcon(FString IconName, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetIcon"));
    struct Params_SetIcon {
        FString IconName; // 0x0
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x10
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1; // 0x11
    }; // Size: 0x12
    Params_SetIcon params{};
    params.IconName = (FString)IconName;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue_1 = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue_1;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_RegionInfoItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings) {}
void UUI_BP_RegionInfoItem_C::SetRegionInfoRight(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetRegionInfoRight"));
    struct Params_SetRegionInfoRight {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SetRegionInfoRight params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::SetRegionInfoLeft(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetRegionInfoLeft"));
    struct Params_SetRegionInfoLeft {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_SetRegionInfoLeft params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::SetTotal(int32_t Total, FString CallFunc_Conv_IntToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetTotal"));
    struct Params_SetTotal {
        int32_t Total; // 0x0
        char pad_4[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SetTotal params{};
    params.Total = (int32_t)Total;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::SetCompleted(int32_t Completed, FString CallFunc_Conv_IntToString_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.SetCompleted"));
    struct Params_SetCompleted {
        int32_t Completed; // 0x0
        char pad_4[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
    }; // Size: 0x18
    Params_SetCompleted params{};
    params.Completed = (int32_t)Completed;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::SetItemName(FString ItemName) {}
void UUI_BP_RegionInfoItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::RegionInfoItemLeft(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.RegionInfoItemLeft"));
    struct Params_RegionInfoItemLeft {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RegionInfoItemLeft params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfoItem_C::RegionInfoItemRight(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfoItem.UI_BP_RegionInfoItem_C.RegionInfoItemRight"));
    struct Params_RegionInfoItemRight {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RegionInfoItemRight params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
