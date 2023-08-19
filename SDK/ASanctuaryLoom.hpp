#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
#pragma pack(push, 1)
class ASanctuaryLoom : public ATransfigurationObjectBase {
public:
    static ASanctuaryLoom* StaticClass();
    void ShowLoomUI();
}; // Size: 0x2a8
#pragma pack(pop)
