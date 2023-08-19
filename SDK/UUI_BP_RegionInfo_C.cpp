#include "APlayerController.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRegionPopuplData.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMapRegionInfoWidget.hpp"
#include "UObject.hpp"
#include "UPanelSlot.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_RegionInfoItem_C.hpp"
#include "UUI_BP_RegionInfo_C.hpp"
#include "UVerticalBox.hpp"
void UUI_BP_RegionInfo_C::HideBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.HideBP"));
    struct Params_HideBP {
    }; // Size: 0x0
    Params_HideBP params{};
    ProcessEvent(func, &params);
}
UUI_BP_RegionInfo_C* UUI_BP_RegionInfo_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C");
    return (UUI_BP_RegionInfo_C*)res;
}
TArray<FString> UUI_BP_RegionInfo_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable) {}
void UUI_BP_RegionInfo_C::ShowBP0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.ShowBP"));
    struct Params_ShowBP {
    }; // Size: 0x0
    Params_ShowBP params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfo_C::SetEnemyData(FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetEnemyData"));
    struct Params_SetEnemyData {
        FString EnemyLevel; // 0x0
        int32_t MinLevel; // 0x10
        int32_t MaxLevel; // 0x14
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x18
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x1c
        char pad_1d[0x3];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x20
        FString CallFunc_Conv_IntToString_ReturnValue_1; // 0x30
    }; // Size: 0x40
    Params_SetEnemyData params{};
    params.EnemyLevel = (FString)EnemyLevel;
    params.MinLevel = (int32_t)MinLevel;
    params.MaxLevel = (int32_t)MaxLevel;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Conv_IntToString_ReturnValue_1 = (FString)CallFunc_Conv_IntToString_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfo_C::SetMapParent(UObject* ParentScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetMapParent"));
    struct Params_SetMapParent {
        UObject* ParentScreen; // 0x0
    }; // Size: 0x8
    Params_SetMapParent params{};
    params.ParentScreen = (UObject*)ParentScreen;
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfo_C::SetItemData(FString RegionName, TArray<FRegionPopuplData>& ItemData, FRegionPopuplData Item, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, FRegionPopuplData CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetItemData"));
    struct Params_SetItemData {
        FString RegionName; // 0x0
        TArray<FRegionPopuplData> ItemData; // 0x10
        FRegionPopuplData Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x50
        int32_t Temp_int_Loop_Counter_Variable; // 0x54
        bool CallFunc_Less_IntInt_ReturnValue; // 0x58
        char pad_59[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x5c
        int32_t Temp_int_Array_Index_Variable; // 0x60
        char pad_64[0x4];
        FRegionPopuplData CallFunc_Array_Get_Item; // 0x68
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x98
        char pad_99[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0xa0
        UUI_BP_RegionInfoItem_C* CallFunc_Create_ReturnValue; // 0xa8
        UPanelSlot* CallFunc_AddChild_ReturnValue; // 0xb0
        int32_t CallFunc_Array_Add_ReturnValue; // 0xb8
    }; // Size: 0xbc
    Params_SetItemData params{};
    params.RegionName = (FString)RegionName;
    params.ItemData = (TArray<FRegionPopuplData>)ItemData;
    params.Item = (FRegionPopuplData)Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FRegionPopuplData)CallFunc_Array_Get_Item;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_RegionInfoItem_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_AddChild_ReturnValue = (UPanelSlot*)CallFunc_AddChild_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    ProcessEvent(func, &params);
    ItemData = params.ItemData;
}
void UUI_BP_RegionInfo_C::SetDataBP0(FString RegionName, FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.SetDataBP"));
    struct Params_SetDataBP {
        FString RegionName; // 0x0
        FString EnemyLevel; // 0x10
        int32_t MinLevel; // 0x20
        int32_t MaxLevel; // 0x24
        TArray<FRegionPopuplData> RegionData; // 0x28
    }; // Size: 0x38
    Params_SetDataBP params{};
    params.RegionName = (FString)RegionName;
    params.EnemyLevel = (FString)EnemyLevel;
    params.MinLevel = (int32_t)MinLevel;
    params.MaxLevel = (int32_t)MaxLevel;
    params.RegionData = (TArray<FRegionPopuplData>)RegionData;
    ProcessEvent(func, &params);
    RegionData = params.RegionData;
}
void UUI_BP_RegionInfo_C::ExecuteUbergraph_UI_BP_RegionInfo(int32_t EntryPoint, FString K2Node_Event_RegionName, FString K2Node_Event_EnemyLevel, int32_t K2Node_Event_MinLevel, int32_t K2Node_Event_MaxLevel, TArray<FRegionPopuplData>& K2Node_Event_RegionData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.ExecuteUbergraph_UI_BP_RegionInfo"));
    struct Params_ExecuteUbergraph_UI_BP_RegionInfo {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FString K2Node_Event_RegionName; // 0x8
        FString K2Node_Event_EnemyLevel; // 0x18
        int32_t K2Node_Event_MinLevel; // 0x28
        int32_t K2Node_Event_MaxLevel; // 0x2c
        TArray<FRegionPopuplData> K2Node_Event_RegionData; // 0x30
    }; // Size: 0x40
    Params_ExecuteUbergraph_UI_BP_RegionInfo params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_RegionName = (FString)K2Node_Event_RegionName;
    params.K2Node_Event_EnemyLevel = (FString)K2Node_Event_EnemyLevel;
    params.K2Node_Event_MinLevel = (int32_t)K2Node_Event_MinLevel;
    params.K2Node_Event_MaxLevel = (int32_t)K2Node_Event_MaxLevel;
    params.K2Node_Event_RegionData = (TArray<FRegionPopuplData>)K2Node_Event_RegionData;
    ProcessEvent(func, &params);
    K2Node_Event_RegionData = params.K2Node_Event_RegionData;
}
void UUI_BP_RegionInfo_C::HideRegionInfoEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.HideRegionInfoEvent__DelegateSignature"));
    struct Params_HideRegionInfoEvent__DelegateSignature {
    }; // Size: 0x0
    Params_HideRegionInfoEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_RegionInfo_C::ShowRegionInfoEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_RegionInfo.UI_BP_RegionInfo_C.ShowRegionInfoEvent__DelegateSignature"));
    struct Params_ShowRegionInfoEvent__DelegateSignature {
    }; // Size: 0x0
    Params_ShowRegionInfoEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
