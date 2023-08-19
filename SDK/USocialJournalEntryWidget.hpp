#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class USocialJournalEntryWidget : public UUserWidget {
public:
    UPhoenixTextBlock* Count; // 0x268
    UImage* IconObserver; // 0x270
    UImage* IconObserverType; // 0x278
    UImage* IconSource; // 0x280
    static USocialJournalEntryWidget* StaticClass();
    void OnSynchronizeProperties();
    void InitDetails(FString inIconObserverName, FString inIconObserverTypeName, FString inIconSourceName, int32_t InCount);
}; // Size: 0x288
#pragma pack(pop)
