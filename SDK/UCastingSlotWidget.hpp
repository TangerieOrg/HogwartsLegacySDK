#pragma once
#include <cstdint>
#include "ESpellDirection.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UCastingSlotWidget : public UUserWidget {
public:
    ESpellDirection SpellDirection; // 0x268
    char pad_269[0x7];
    FString SpellIconName; // 0x270
    static UCastingSlotWidget* StaticClass();
    void SetImage(FString ImageName);
    void OnSynchronizeProperties();
    void OnSetSpellIcon();
}; // Size: 0x280
#pragma pack(pop)
