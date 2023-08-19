#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class USocialJournalHeadlineWidget : public UUserWidget {
public:
    UPhoenixTextBlock* Count; // 0x268
    UImage* Icon; // 0x270
    UPhoenixTextBlock* Name; // 0x278
    static USocialJournalHeadlineWidget* StaticClass();
    void OnSynchronizeProperties();
    void InitDetails();
}; // Size: 0x280
#pragma pack(pop)
