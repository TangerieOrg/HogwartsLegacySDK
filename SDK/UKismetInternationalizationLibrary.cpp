#include "ELocalizedTextSourceCategory.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetInternationalizationLibrary.hpp"
UKismetInternationalizationLibrary* UKismetInternationalizationLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetInternationalizationLibrary");
    return (UKismetInternationalizationLibrary*)res;
}
FString UKismetInternationalizationLibrary::GetSuitableCulture(TArray<FString>& AvailableCultures, FString CultureToMatch, FString FallbackCulture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetSuitableCulture"));
    struct Params_GetSuitableCulture {
        TArray<FString> AvailableCultures; // 0x0
        FString CultureToMatch; // 0x10
        FString FallbackCulture; // 0x20
        FString ReturnValue; // 0x30
    }; // Size: 0x40
    Params_GetSuitableCulture params{};
    params.AvailableCultures = (TArray<FString>)AvailableCultures;
    params.CultureToMatch = (FString)CultureToMatch;
    params.FallbackCulture = (FString)FallbackCulture;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AvailableCultures = params.AvailableCultures;
    return (FString)params.ReturnValue;
}
bool UKismetInternationalizationLibrary::SetCurrentLocale(FString Culture, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLocale"));
    struct Params_SetCurrentLocale {
        FString Culture; // 0x0
        bool SaveToConfig; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetCurrentLocale params{};
    params.Culture = (FString)Culture;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(FName AssetGroup, FString Culture, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentAssetGroupCulture"));
    struct Params_SetCurrentAssetGroupCulture {
        FName AssetGroup; // 0x0
        FString Culture; // 0x8
        bool SaveToConfig; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_SetCurrentAssetGroupCulture params{};
    params.AssetGroup = (FName)AssetGroup;
    params.Culture = (FString)Culture;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(FString Culture, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLanguageAndLocale"));
    struct Params_SetCurrentLanguageAndLocale {
        FString Culture; // 0x0
        bool SaveToConfig; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetCurrentLanguageAndLocale params{};
    params.Culture = (FString)Culture;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetInternationalizationLibrary::SetCurrentCulture(FString Culture, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentCulture"));
    struct Params_SetCurrentCulture {
        FString Culture; // 0x0
        bool SaveToConfig; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetCurrentCulture params{};
    params.Culture = (FString)Culture;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetInternationalizationLibrary::SetCurrentLanguage(FString Culture, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.SetCurrentLanguage"));
    struct Params_SetCurrentLanguage {
        FString Culture; // 0x0
        bool SaveToConfig; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_SetCurrentLanguage params{};
    params.Culture = (FString)Culture;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetNativeCulture(ELocalizedTextSourceCategory TextCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetNativeCulture"));
    struct Params_GetNativeCulture {
        ELocalizedTextSourceCategory TextCategory; // 0x0
        char pad_1[0x7];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetNativeCulture params{};
    params.TextCategory = (ELocalizedTextSourceCategory)TextCategory;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FString> UKismetInternationalizationLibrary::GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetLocalizedCultures"));
    struct Params_GetLocalizedCultures {
        bool IncludeGame; // 0x0
        bool IncludeEngine; // 0x1
        bool IncludeEditor; // 0x2
        bool IncludeAdditional; // 0x3
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetLocalizedCultures params{};
    params.IncludeGame = (bool)IncludeGame;
    params.IncludeEngine = (bool)IncludeEngine;
    params.IncludeEditor = (bool)IncludeEditor;
    params.IncludeAdditional = (bool)IncludeAdditional;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetCurrentLocale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentLocale"));
    struct Params_GetCurrentLocale {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentLocale params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetCurrentLanguage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentLanguage"));
    struct Params_GetCurrentLanguage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentLanguage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetCurrentCulture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentCulture"));
    struct Params_GetCurrentCulture {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentCulture params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(FName AssetGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetCurrentAssetGroupCulture"));
    struct Params_GetCurrentAssetGroupCulture {
        FName AssetGroup; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetCurrentAssetGroupCulture params{};
    params.AssetGroup = (FName)AssetGroup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetInternationalizationLibrary::GetCultureDisplayName(FString Culture, bool Localized) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.GetCultureDisplayName"));
    struct Params_GetCultureDisplayName {
        FString Culture; // 0x0
        bool Localized; // 0x10
        char pad_11[0x7];
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetCultureDisplayName params{};
    params.Culture = (FString)Culture;
    params.Localized = (bool)Localized;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(FName AssetGroup, bool SaveToConfig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetInternationalizationLibrary.ClearCurrentAssetGroupCulture"));
    struct Params_ClearCurrentAssetGroupCulture {
        FName AssetGroup; // 0x0
        bool SaveToConfig; // 0x8
    }; // Size: 0x9
    Params_ClearCurrentAssetGroupCulture params{};
    params.AssetGroup = (FName)AssetGroup;
    params.SaveToConfig = (bool)SaveToConfig;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
