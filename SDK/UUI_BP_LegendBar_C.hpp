#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UCanvasPanel;
class UUI_BP_LegendBox_C;
struct FVector2D;
#pragma pack(push, 1)
class UUI_BP_LegendBar_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UCanvasPanel* LegendBar; // 0x270
    UUI_BP_LegendBox_C* LegendBox; // 0x278
    static UUI_BP_LegendBar_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    void SetHouseColors(FLinearColor TempHouseColor);
    void SetButtonLegend(TArray<FString>& LegendArray);
    void Initialize();
    void InEditorPostConstruct();
    void SetParent(UUserWidget* Parent);
    void I_SetButtonLegend(TArray<FString>& NewParam);
    void Construct0();
    void ExecuteUbergraph_UI_BP_LegendBar(int32_t EntryPoint, UUserWidget* K2Node_Event_Parent, TArray<FString>& K2Node_Event_NewParam);
}; // Size: 0x280
#pragma pack(pop)
