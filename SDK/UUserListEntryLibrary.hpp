#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary {
public:
    static UUserListEntryLibrary* StaticClass();
    static void IsListItemSelected();
    static void IsListItemExpanded();
    static void GetOwningListView();
}; // Size: 0x28
#pragma pack(pop)
