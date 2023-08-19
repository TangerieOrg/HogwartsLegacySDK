#include "UBlueprintFunctionLibrary.hpp"
#include "UDatasmithAssetUserData.hpp"
#include "UDatasmithContentBlueprintLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UDatasmithContentBlueprintLibrary* UDatasmithContentBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary");
    return (UDatasmithContentBlueprintLibrary*)res;
}
FString UDatasmithContentBlueprintLibrary::GetDatasmithUserDataValueForKey(UObject* Object, FName Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey"));
    struct Params_GetDatasmithUserDataValueForKey {
        UObject* Object; // 0x0
        FName Key; // 0x8
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetDatasmithUserDataValueForKey params{};
    params.Object = (UObject*)Object;
    params.Key = (FName)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UDatasmithContentBlueprintLibrary::GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue"));
    struct Params_GetDatasmithUserDataKeysAndValuesForValue {
        UObject* Object; // 0x0
        FString StringToMatch; // 0x8
        TArray<FName> OutKeys; // 0x18
        TArray<FString> OutValues; // 0x28
    }; // Size: 0x38
    Params_GetDatasmithUserDataKeysAndValuesForValue params{};
    params.Object = (UObject*)Object;
    params.StringToMatch = (FString)StringToMatch;
    params.OutKeys = (TArray<FName>)OutKeys;
    params.OutValues = (TArray<FString>)OutValues;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutKeys = params.OutKeys;
    OutValues = params.OutValues;
}
UDatasmithAssetUserData* UDatasmithContentBlueprintLibrary::GetDatasmithUserData(UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData"));
    struct Params_GetDatasmithUserData {
        UObject* Object; // 0x0
        UDatasmithAssetUserData* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDatasmithUserData params{};
    params.Object = (UObject*)Object;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDatasmithAssetUserData*)params.ReturnValue;
}
