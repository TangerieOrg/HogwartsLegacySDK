#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UOptionsWidget : public UUserWidget {
public:
    static UOptionsWidget* StaticClass();
    void ReturnToFrontEndMenu();
}; // Size: 0x268
#pragma pack(pop)
