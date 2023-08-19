#include "FMaterialPermuterKey.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterKeyBlueprintLibrary.hpp"
FName UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyHash(FMaterialPermuterKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyHash"));
    struct Params_MakeMaterialPermuterKeyHash {
        FMaterialPermuterKey Key; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MakeMaterialPermuterKeyHash params{};
    params.Key = (FMaterialPermuterKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UMaterialPermuterKeyBlueprintLibrary* UMaterialPermuterKeyBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary");
    return (UMaterialPermuterKeyBlueprintLibrary*)res;
}
void UMaterialPermuterKeyBlueprintLibrary::MaterialPermuterKeyDropdownSplit(FMaterialPermuterKeyProperty KeyDropdown, FName& Group, FName& SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyDropdownSplit"));
    struct Params_MaterialPermuterKeyDropdownSplit {
        FMaterialPermuterKeyProperty KeyDropdown; // 0x0
        FName Group; // 0x10
        FName SubType; // 0x18
    }; // Size: 0x20
    Params_MaterialPermuterKeyDropdownSplit params{};
    params.KeyDropdown = (FMaterialPermuterKeyProperty)KeyDropdown;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Group = params.Group;
    SubType = params.SubType;
}
void UMaterialPermuterKeyBlueprintLibrary::MaterialPermuterKeySplit(FMaterialPermuterKey Key, FName& Group, FName& SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeySplit"));
    struct Params_MaterialPermuterKeySplit {
        FMaterialPermuterKey Key; // 0x0
        FName Group; // 0x10
        FName SubType; // 0x18
    }; // Size: 0x20
    Params_MaterialPermuterKeySplit params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Group = params.Group;
    SubType = params.SubType;
}
FMaterialPermuterKey UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyFromKeyDropdown(FMaterialPermuterKeyProperty KeyDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyFromKeyDropdown"));
    struct Params_MakeMaterialPermuterKeyFromKeyDropdown {
        FMaterialPermuterKeyProperty KeyDropdown; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeMaterialPermuterKeyFromKeyDropdown params{};
    params.KeyDropdown = (FMaterialPermuterKeyProperty)KeyDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
FString UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyHashString(FMaterialPermuterKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyHashString"));
    struct Params_MakeMaterialPermuterKeyHashString {
        FMaterialPermuterKey Key; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeMaterialPermuterKeyHashString params{};
    params.Key = (FMaterialPermuterKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMaterialPermuterKeyBlueprintLibrary::MaterialPermuterKeyIsValid(FMaterialPermuterKey Key, bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyIsValid"));
    struct Params_MaterialPermuterKeyIsValid {
        FMaterialPermuterKey Key; // 0x0
        bool bValid; // 0x10
    }; // Size: 0x11
    Params_MaterialPermuterKeyIsValid params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.bValid = (bool)bValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bValid = params.bValid;
}
void UMaterialPermuterKeyBlueprintLibrary::MaterialPermuterKeyDropdownIsValid(FMaterialPermuterKeyProperty KeyDropdown, bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MaterialPermuterKeyDropdownIsValid"));
    struct Params_MaterialPermuterKeyDropdownIsValid {
        FMaterialPermuterKeyProperty KeyDropdown; // 0x0
        bool bValid; // 0x10
    }; // Size: 0x11
    Params_MaterialPermuterKeyDropdownIsValid params{};
    params.KeyDropdown = (FMaterialPermuterKeyProperty)KeyDropdown;
    params.bValid = (bool)bValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bValid = params.bValid;
}
FMaterialPermuterKey UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyFromGroupSubType(FName Group, FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyFromGroupSubType"));
    struct Params_MakeMaterialPermuterKeyFromGroupSubType {
        FName Group; // 0x0
        FName SubType; // 0x8
        FMaterialPermuterKey ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeMaterialPermuterKeyFromGroupSubType params{};
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
FString UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyDropdownHashString(FMaterialPermuterKeyProperty KeyDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyDropdownHashString"));
    struct Params_MakeMaterialPermuterKeyDropdownHashString {
        FMaterialPermuterKeyProperty KeyDropdown; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeMaterialPermuterKeyDropdownHashString params{};
    params.KeyDropdown = (FMaterialPermuterKeyProperty)KeyDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UMaterialPermuterKeyBlueprintLibrary::MakeMaterialPermuterKeyDropdownHash(FMaterialPermuterKeyProperty KeyDropdown) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterKeyBlueprintLibrary.MakeMaterialPermuterKeyDropdownHash"));
    struct Params_MakeMaterialPermuterKeyDropdownHash {
        FMaterialPermuterKeyProperty KeyDropdown; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_MakeMaterialPermuterKeyDropdownHash params{};
    params.KeyDropdown = (FMaterialPermuterKeyProperty)KeyDropdown;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
