#pragma once
#include <cstdint>
#include "UWidget.hpp"
class UPanelSlot;
#pragma pack(push, 1)
class UPanelWidget : public UWidget {
public:
    TArray<UPanelSlot*> Slots; // 0x108
    char pad_118[0x8];
    static UPanelWidget* StaticClass();
    bool RemoveChildAt(int32_t Index);
    bool RemoveChild(UWidget* Content);
    bool HasChild(UWidget* Content);
    bool HasAnyChildren();
    int32_t GetChildrenCount();
    int32_t GetChildIndex(UWidget* Content);
    UWidget* GetChildAt(int32_t Index);
    TArray<UWidget*> GetAllChildren();
    void ClearChildren();
    UPanelSlot* AddChild(UWidget* Content);
}; // Size: 0x120
#pragma pack(pop)
