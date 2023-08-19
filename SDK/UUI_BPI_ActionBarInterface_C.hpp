#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_ActionBarInterface_C : public UInterface {
public:
    static UUI_BPI_ActionBarInterface_C* StaticClass();
    void ShowMiniDiamond(ESlateVisibility Show);
    void SetWandState();
}; // Size: 0x28
#pragma pack(pop)
