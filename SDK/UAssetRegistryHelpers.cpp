#include "FARFilter.hpp"
#include "FAssetData.hpp"
#include "FSoftObjectPath.hpp"
#include "FTagAndValue.hpp"
#include "UAssetRegistryHelpers.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UAssetRegistryHelpers* UAssetRegistryHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/AssetRegistry.AssetRegistryHelpers");
    return (UAssetRegistryHelpers*)res;
}
bool UAssetRegistryHelpers::IsUAsset(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset"));
    struct Params_IsUAsset {
        FAssetData InAssetData; // 0x0
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_IsUAsset params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (bool)params.ReturnValue;
}
FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath"));
    struct Params_ToSoftObjectPath {
        FAssetData InAssetData; // 0x0
        FSoftObjectPath ReturnValue; // 0x60
    }; // Size: 0x78
    Params_ToSoftObjectPath params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (FSoftObjectPath)params.ReturnValue;
}
bool UAssetRegistryHelpers::GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue"));
    struct Params_GetTagValue {
        FAssetData InAssetData; // 0x0
        FName InTagName; // 0x60
        FString OutTagValue; // 0x68
        bool ReturnValue; // 0x78
    }; // Size: 0x79
    Params_GetTagValue params{};
    params.InAssetData = (FAssetData)InAssetData;
    params.InTagName = (FName)InTagName;
    params.OutTagValue = (FString)OutTagValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    InTagName = params.InTagName;
    OutTagValue = params.OutTagValue;
    return (bool)params.ReturnValue;
}
bool UAssetRegistryHelpers::IsValid(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid"));
    struct Params_IsValid {
        FAssetData InAssetData; // 0x0
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_IsValid params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (bool)params.ReturnValue;
}
FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues"));
    struct Params_SetFilterTagsAndValues {
        FARFilter InFilter; // 0x0
        TArray<FTagAndValue> InTagsAndValues; // 0xf0
        FARFilter ReturnValue; // 0x100
    }; // Size: 0x1f0
    Params_SetFilterTagsAndValues params{};
    params.InFilter = (FARFilter)InFilter;
    params.InTagsAndValues = (TArray<FTagAndValue>)InTagsAndValues;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InFilter = params.InFilter;
    InTagsAndValues = params.InTagsAndValues;
    return (FARFilter)params.ReturnValue;
}
bool UAssetRegistryHelpers::IsRedirector(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector"));
    struct Params_IsRedirector {
        FAssetData InAssetData; // 0x0
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_IsRedirector params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (bool)params.ReturnValue;
}
bool UAssetRegistryHelpers::IsAssetLoaded(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded"));
    struct Params_IsAssetLoaded {
        FAssetData InAssetData; // 0x0
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_IsAssetLoaded params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (bool)params.ReturnValue;
}
bool UAssetRegistryHelpers::GetTagKeys(FAssetData& InAssetData, TArray<FName>& OutTagKeys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagKeys"));
    struct Params_GetTagKeys {
        FAssetData InAssetData; // 0x0
        TArray<FName> OutTagKeys; // 0x60
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_GetTagKeys params{};
    params.InAssetData = (FAssetData)InAssetData;
    params.OutTagKeys = (TArray<FName>)OutTagKeys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutTagKeys = params.OutTagKeys;
    InAssetData = params.InAssetData;
    return (bool)params.ReturnValue;
}
FString UAssetRegistryHelpers::GetFullName(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName"));
    struct Params_GetFullName {
        FAssetData InAssetData; // 0x0
        FString ReturnValue; // 0x60
    }; // Size: 0x70
    Params_GetFullName params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (FString)params.ReturnValue;
}
FAssetData UAssetRegistryHelpers::CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData"));
    struct Params_CreateAssetData {
        UObject* InAsset; // 0x0
        bool bAllowBlueprintClass; // 0x8
        char pad_9[0x7];
        FAssetData ReturnValue; // 0x10
    }; // Size: 0x70
    Params_CreateAssetData params{};
    params.InAsset = (UObject*)InAsset;
    params.bAllowBlueprintClass = (bool)bAllowBlueprintClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FAssetData)params.ReturnValue;
}
FString UAssetRegistryHelpers::GetExportTextName(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName"));
    struct Params_GetExportTextName {
        FAssetData InAssetData; // 0x0
        FString ReturnValue; // 0x60
    }; // Size: 0x70
    Params_GetExportTextName params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (FString)params.ReturnValue;
}
UClass* UAssetRegistryHelpers::GetClass(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass"));
    struct Params_GetClass {
        FAssetData InAssetData; // 0x0
        UClass* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_GetClass params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (UClass*)params.ReturnValue;
}
void UAssetRegistryHelpers::GetAssetRegistry() {}
UObject* UAssetRegistryHelpers::GetAsset(FAssetData& InAssetData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset"));
    struct Params_GetAsset {
        FAssetData InAssetData; // 0x0
        UObject* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_GetAsset params{};
    params.InAssetData = (FAssetData)InAssetData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAssetData = params.InAssetData;
    return (UObject*)params.ReturnValue;
}
