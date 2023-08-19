#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
class UIconButtonWidget;
class UUniformGridPanel;
#pragma pack(push, 1)
class USpellUpgradeScreen : public UTabPageWidget {
public:
    TArray<UIconButtonWidget*> Spells; // 0x3c8
    UUniformGridPanel* SpellPanel; // 0x3d8
    char pad_3e0[0x8];
    static USpellUpgradeScreen* StaticClass();
    void OnSynchronizeProperties();
    void OnAttachWand();
}; // Size: 0x3e8
#pragma pack(pop)
