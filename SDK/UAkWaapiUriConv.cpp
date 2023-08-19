#include "FAkWaapiUri.hpp"
#include "UAkWaapiUriConv.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString"));
    struct Params_Conv_FAkWaapiUriToString {
        FAkWaapiUri INAkWaapiUri; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_FAkWaapiUriToString params{};
    params.INAkWaapiUri = (FAkWaapiUri)INAkWaapiUri;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    INAkWaapiUri = params.INAkWaapiUri;
    return (FString)params.ReturnValue;
}
UAkWaapiUriConv* UAkWaapiUriConv::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkWaapiUriConv");
    return (UAkWaapiUriConv*)res;
}
void UAkWaapiUriConv::Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri) {}
