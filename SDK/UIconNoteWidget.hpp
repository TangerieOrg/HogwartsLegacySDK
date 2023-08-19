#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
class UPhoenixTextBlock;
#pragma pack(push, 1)
class UIconNoteWidget : public UUserWidget {
public:
    UImage* NoteImage; // 0x268
    UPhoenixTextBlock* NoteLabel; // 0x270
    static UIconNoteWidget* StaticClass();
    void SetDetails(FString IconName, int32_t Quantity);
    void OnSynchronizeProperties();
}; // Size: 0x278
#pragma pack(pop)
