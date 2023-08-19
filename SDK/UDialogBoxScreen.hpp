#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class UDialogBoxScreen : public UScreen {
public:
    static UDialogBoxScreen* StaticClass();
    void SetDialogContent(FString TitleText, FString BodyText, FString LegendText);
}; // Size: 0x370
#pragma pack(pop)
