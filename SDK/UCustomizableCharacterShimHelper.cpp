#include "UCustomizableCharacterShimHelper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UCustomizableCharacterShimHelper::RemoveCharacterLookOverride(FName CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableCharacterShimHelper.RemoveCharacterLookOverride"));
    struct Params_RemoveCharacterLookOverride {
        FName CharacterID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RemoveCharacterLookOverride params{};
    params.CharacterID = (FName)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCustomizableCharacterShimHelper* UCustomizableCharacterShimHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CustomizableCharacterShimHelper");
    return (UCustomizableCharacterShimHelper*)res;
}
bool UCustomizableCharacterShimHelper::SetCharacterLookOverride(FName CharacterID, FName CharacterIdOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableCharacterShimHelper.SetCharacterLookOverride"));
    struct Params_SetCharacterLookOverride {
        FName CharacterID; // 0x0
        FName CharacterIdOverride; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetCharacterLookOverride params{};
    params.CharacterID = (FName)CharacterID;
    params.CharacterIdOverride = (FName)CharacterIdOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UCustomizableCharacterShimHelper::GetCharacterLookOverride(FName CharacterID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableCharacterShimHelper.GetCharacterLookOverride"));
    struct Params_GetCharacterLookOverride {
        FName CharacterID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCharacterLookOverride params{};
    params.CharacterID = (FName)CharacterID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
