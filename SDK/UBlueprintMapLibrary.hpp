#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary {
public:
    static UBlueprintMapLibrary* StaticClass();
    static void SetMapPropertyByName(UObject* Object, FName PropertyName);
    static void Map_Values();
    static void Map_Remove();
    static void Map_Length();
    static void Map_Keys();
    static void Map_Find();
    static void Map_Contains();
    static void Map_Clear();
    static void Map_Add();
}; // Size: 0x28
#pragma pack(pop)
