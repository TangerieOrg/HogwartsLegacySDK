#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class ULetterbox_Base : public UUserWidget {
public:
    static ULetterbox_Base* StaticClass();
    void ShowLetterbox(bool Show);
    void OnShowLetterbox(bool Show);
}; // Size: 0x268
#pragma pack(pop)
