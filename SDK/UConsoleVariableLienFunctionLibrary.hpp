#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UConsoleVariableLienAsset;
#pragma pack(push, 1)
class UConsoleVariableLienFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UConsoleVariableLienFunctionLibrary* StaticClass();
    static void ConsoleVariableRemoveLiens(UObject* LienHolder, bool& bSuccess);
    static void ConsoleVariableRemoveLien(UObject* LienHolder, FString Variable, bool& bSuccess);
    static void ConsoleVariableRemoveAssetLiens(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess);
    static void ConsoleVariableHasLien(UObject* LienHolder, FString Variable, bool& bHasALien);
    static void ConsoleVariableHasAnyLiens(UObject* LienHolder, bool& bHasALien);
    static void ConsoleVariableAssetLiensActivate(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess, bool bActivate);
    static void ConsoleVariableAddStringLien(UObject* LienHolder, FString Variable, FString Value, bool& bSuccess, float Priority);
    static void ConsoleVariableAddIntegerLien(UObject* LienHolder, FString Variable, int32_t Value, bool& bSuccess, float Priority);
    static void ConsoleVariableAddFloatLien(UObject* LienHolder, FString Variable, float Value, bool& bSuccess, float Priority);
    static void ConsoleVariableAddDefaultLien(UObject* LienHolder, FString Variable, bool& bSuccess, float Priority);
    static void ConsoleVariableAddAssetLiens(UObject* LienHolder, UConsoleVariableLienAsset* LienAsset, bool& bSuccess);
}; // Size: 0x28
#pragma pack(pop)
