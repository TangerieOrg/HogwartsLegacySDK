#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UDatasmithAssetUserData;
#pragma pack(push, 1)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UDatasmithContentBlueprintLibrary* StaticClass();
    static FString GetDatasmithUserDataValueForKey(UObject* Object, FName Key);
    static void GetDatasmithUserDataKeysAndValuesForValue(UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    static UDatasmithAssetUserData* GetDatasmithUserData(UObject* Object);
}; // Size: 0x28
#pragma pack(pop)
