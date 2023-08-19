#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary {
public:
    static UBlueprintSetLibrary* StaticClass();
    static void SetSetPropertyByName(UObject* Object, FName PropertyName);
    static void Set_Union();
    static void Set_ToArray();
    static void Set_RemoveItems();
    static void Set_Remove();
    static void Set_Length();
    static void Set_Intersection();
    static void Set_Difference();
    static void Set_Contains();
    static void Set_Clear();
    static void Set_AddItems();
    static void Set_Add();
}; // Size: 0x28
#pragma pack(pop)
