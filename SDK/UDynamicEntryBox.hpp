#pragma once
#include <cstdint>
#include "UDynamicEntryBoxBase.hpp"
class UClass;
class UUserWidget;
#pragma pack(push, 1)
class UDynamicEntryBox : public UDynamicEntryBoxBase {
public:
    UClass* EntryWidgetClass; // 0x1d8
    static UDynamicEntryBox* StaticClass();
    void Reset(bool bDeleteWidgets);
    void RemoveEntry(UUserWidget* EntryWidget);
    UUserWidget* BP_CreateEntryOfClass(UClass* EntryClass);
    UUserWidget* BP_CreateEntry();
}; // Size: 0x1e0
#pragma pack(pop)
