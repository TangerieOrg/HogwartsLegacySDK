#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UPathSelectHUD : public UUserWidget {
public:
    static UPathSelectHUD* StaticClass();
    void Start();
}; // Size: 0x268
#pragma pack(pop)
