#pragma once
#include <cstdint>
#include "FMaterialPermuterKey.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UMaterialPermuterKeyBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMaterialPermuterKeyBlueprintLibrary* StaticClass();
    static void MaterialPermuterKeySplit(FMaterialPermuterKey Key, FName& Group, FName& SubType);
    static void MaterialPermuterKeyIsValid(FMaterialPermuterKey Key, bool& bValid);
    static void MaterialPermuterKeyDropdownSplit(FMaterialPermuterKeyProperty KeyDropdown, FName& Group, FName& SubType);
    static void MaterialPermuterKeyDropdownIsValid(FMaterialPermuterKeyProperty KeyDropdown, bool& bValid);
    static FString MakeMaterialPermuterKeyHashString(FMaterialPermuterKey Key);
    static FName MakeMaterialPermuterKeyHash(FMaterialPermuterKey Key);
    static FMaterialPermuterKey MakeMaterialPermuterKeyFromKeyDropdown(FMaterialPermuterKeyProperty KeyDropdown);
    static FMaterialPermuterKey MakeMaterialPermuterKeyFromGroupSubType(FName Group, FName SubType);
    static FString MakeMaterialPermuterKeyDropdownHashString(FMaterialPermuterKeyProperty KeyDropdown);
    static FName MakeMaterialPermuterKeyDropdownHash(FMaterialPermuterKeyProperty KeyDropdown);
}; // Size: 0x28
#pragma pack(pop)
