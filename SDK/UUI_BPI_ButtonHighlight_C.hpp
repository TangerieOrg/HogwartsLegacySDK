#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_ButtonHighlight_C : public UInterface {
public:
    static UUI_BPI_ButtonHighlight_C* StaticClass();
    void I_PlayHighlightAnimation(bool ShowHighlight);
}; // Size: 0x28
#pragma pack(pop)
