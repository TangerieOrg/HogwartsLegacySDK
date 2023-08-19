#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary {
public:
    static UUserObjectListEntryLibrary* StaticClass();
    static void GetListItemObject();
}; // Size: 0x28
#pragma pack(pop)
