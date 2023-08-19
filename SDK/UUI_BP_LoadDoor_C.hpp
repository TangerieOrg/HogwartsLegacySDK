#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UWidgetAnimation;
class UImage;
class UObject;
#pragma pack(push, 1)
class UUI_BP_LoadDoor_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UWidgetAnimation* LoadComplete; // 0x270
    UWidgetAnimation* fade; // 0x278
    UImage* LoadBackground; // 0x280
    bool IsDoorLoaded; // 0x288
    char pad_289[0x7];
    static UUI_BP_LoadDoor_C* StaticClass();
    float LoadingComplete();
    void SequenceEvent_0();
    void Construct0();
    void OnDoorLoaded();
    void HideHUD(UObject* Caller);
    void ShowHUD(UObject* Caller);
    void ExecuteUbergraph_UI_BP_LoadDoor(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
