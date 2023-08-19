#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UUserWidget.hpp"
class UTextBlock;
class UButton;
class ULevelStreamingDynamic;
class UFloatingModloaderMainWidget_C;
#pragma pack(push, 1)
class UModloaderChildWidget_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UTextBlock* ModName; // 0x270
    UTextBlock* ModVersion; // 0x278
    UButton* RemoveButton; // 0x280
    UTextBlock* RemoveText; // 0x288
    char pad_290[0x18];
    FVector Location; // 0x2a8
    FRotator Rotation; // 0x2b4
    ULevelStreamingDynamic* LevelInstance; // 0x2c0
    UFloatingModloaderMainWidget_C* ModLoader; // 0x2c8
    char pad_2d0[0x18];
    static UModloaderChildWidget_C* StaticClass();
    void SetText();
    void BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature();
    void SetVersionText();
    void ExecuteUbergraph_ModloaderChildWidget(int32_t EntryPoint);
}; // Size: 0x2e8
#pragma pack(pop)
