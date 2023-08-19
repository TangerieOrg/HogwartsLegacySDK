#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UMapHogwarts.hpp"
#pragma pack(push, 1)
class UUI_BP_HogwartsMapClass_C : public UMapHogwarts {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc80
    char pad_c88[0x18];
    static UUI_BP_HogwartsMapClass_C* StaticClass();
    void ShowFastTavelMap();
    void TestEvent();
    void OnMapItemSelected_Event(FString ItemString, int32_t ItemIndex, bool WasCanceled);
    void ExecuteUbergraph_UI_BP_HogwartsMapClass(int32_t EntryPoint, FString K2Node_Event_ItemString, int32_t K2Node_Event_ItemIndex, bool K2Node_Event_WasCanceled);
    void MapItemSelected__DelegateSignature(FString Item_String, int32_t Item_Index, bool Was_Cancelled);
}; // Size: 0xca0
#pragma pack(pop)
