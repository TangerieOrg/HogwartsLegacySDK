#pragma once
#include <cstdint>
#include "ELocalizedTextSourceCategory.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetInternationalizationLibrary* StaticClass();
    static bool SetCurrentLocale(FString Culture, bool SaveToConfig);
    static bool SetCurrentLanguageAndLocale(FString Culture, bool SaveToConfig);
    static bool SetCurrentLanguage(FString Culture, bool SaveToConfig);
    static bool SetCurrentCulture(FString Culture, bool SaveToConfig);
    static bool SetCurrentAssetGroupCulture(FName AssetGroup, FString Culture, bool SaveToConfig);
    static FString GetSuitableCulture(TArray<FString>& AvailableCultures, FString CultureToMatch, FString FallbackCulture);
    static FString GetNativeCulture(ELocalizedTextSourceCategory TextCategory);
    static TArray<FString> GetLocalizedCultures(bool IncludeGame, bool IncludeEngine, bool IncludeEditor, bool IncludeAdditional);
    static FString GetCurrentLocale();
    static FString GetCurrentLanguage();
    static FString GetCurrentCulture();
    static FString GetCurrentAssetGroupCulture(FName AssetGroup);
    static FString GetCultureDisplayName(FString Culture, bool Localized);
    static void ClearCurrentAssetGroupCulture(FName AssetGroup, bool SaveToConfig);
}; // Size: 0x28
#pragma pack(pop)
