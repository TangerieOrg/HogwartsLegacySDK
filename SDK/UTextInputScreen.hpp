#pragma once
#include <cstdint>
#include "UScreen.hpp"
class UCreatureState;
#pragma pack(push, 1)
class UTextInputScreen : public UScreen {
public:
    char pad_370[0x20];
    static UTextInputScreen* StaticClass();
    void SetPopupTitle(FString PopupTitle);
    void SetCreatureState(UCreatureState* CreatureState);
}; // Size: 0x390
#pragma pack(pop)
