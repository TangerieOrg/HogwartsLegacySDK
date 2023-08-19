#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FAkWaapiFieldNames;
#pragma pack(push, 1)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary {
public:
    static USAkWaapiFieldNamesConv* StaticClass();
    static void Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);
    static FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);
}; // Size: 0x28
#pragma pack(pop)
