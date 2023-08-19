#pragma once
#include <cstdint>
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
#pragma pack(push, 1)
class UCameraStackTransfigurationPreviewTargetGetter : public UCameraStackSecondaryTargetGetterBlend {
public:
    char pad_b0[0x10];
    static UCameraStackTransfigurationPreviewTargetGetter* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
