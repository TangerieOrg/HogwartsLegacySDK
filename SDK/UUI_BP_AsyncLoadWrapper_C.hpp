#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAsyncLoadWrapper.hpp"
class UCanvasPanel;
class UCircularThrobber;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BP_AsyncLoadWrapper_C : public UAsyncLoadWrapper {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x308
    UCanvasPanel* Container; // 0x310
    UCircularThrobber* Loadingwidget; // 0x318
    static UUI_BP_AsyncLoadWrapper_C* StaticClass();
    UCanvasPanel* GetAttachCanvas0();
    void GetChild(UUserWidget*& AsyncChildWidget);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void EditorPreviewConstruct();
    void InitChild0();
    void ChildLoadComplete(UAsyncLoadWrapper* SelfReference);
    void SetParent0(UUserWidget* Parent);
    void SetThrobberVisibility0(ESlateVisibility NewVisibility);
    void ExecuteUbergraph_UI_BP_AsyncLoadWrapper(int32_t EntryPoint, FString CallFunc_BreakSoftClassPath_PathString, bool CallFunc_NotEqual_StrStr_ReturnValue, bool K2Node_Event_IsDesignTime);
}; // Size: 0x320
#pragma pack(pop)
