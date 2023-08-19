#pragma once
#include <cstdint>
#include "ECreatureNeed.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UPhoenixImage;
class UCreatureState;
#pragma pack(push, 1)
class UUI_BP_CreatureNeedWidget_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UPhoenixImage* iconBack; // 0x270
    UPhoenixImage* NeedIcon; // 0x278
    FVector2D BrushSize; // 0x280
    ECreatureNeed CreatureNeed; // 0x288
    char pad_289[0x7];
    UCreatureState* CreatureState; // 0x290
    static UUI_BP_CreatureNeedWidget_C* StaticClass();
    void UpdateWithCreatureState(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue);
    void Update(bool IsNeedMet, bool Temp_bool_Variable, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_Select_Default);
    void PreConstruct0(bool IsDesignTime);
    void OnNeedsChanged();
    void Destruct0();
    void ExecuteUbergraph_UI_BP_CreatureNeedWidget(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush, FSlateBrush K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0x298
#pragma pack(pop)
