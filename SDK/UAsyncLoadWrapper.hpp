#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FSoftClassPath.hpp"
#include "UUserWidget.hpp"
class UClass;
class UCanvasPanel;
#pragma pack(push, 1)
class UAsyncLoadWrapper : public UUserWidget {
public:
    FSoftClassPath ChildWidgetClassRef; // 0x268
    char pad_280[0x50];
    bool IsLoading; // 0x2d0
    bool ClassIsLoaded; // 0x2d1
    bool ChildInstantiated; // 0x2d2
    bool ChildInitialized; // 0x2d3
    char pad_2d4[0x24];
    UUserWidget* ChildWidgetInstance; // 0x2f8
    UClass* LoadedChildClass; // 0x300
    static UAsyncLoadWrapper* StaticClass();
    void SetThrobberVisibility(ESlateVisibility NewVisibility);
    void SetParent(UUserWidget* Parent);
    void InstantiateChild();
    void InitChild();
    UCanvasPanel* GetAttachCanvas();
    void AsyncLoadChildClass(bool InstantiateImmediately);
}; // Size: 0x308
#pragma pack(pop)
