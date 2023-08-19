#include "FAkWaapiFieldNames.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USAkWaapiFieldNamesConv.hpp"
USAkWaapiFieldNamesConv* USAkWaapiFieldNamesConv::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.SAkWaapiFieldNamesConv");
    return (USAkWaapiFieldNamesConv*)res;
}
void USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames) {}
FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString"));
    struct Params_Conv_FAkWaapiFieldNamesToString {
        FAkWaapiFieldNames INAkWaapiFieldNames; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_FAkWaapiFieldNamesToString params{};
    params.INAkWaapiFieldNames = (FAkWaapiFieldNames)INAkWaapiFieldNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    INAkWaapiFieldNames = params.INAkWaapiFieldNames;
    return (FString)params.ReturnValue;
}
