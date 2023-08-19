#include "FAkBoolPropertyToControl.hpp"
#include "UAkItemBoolPropertiesConv.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAkItemBoolPropertiesConv* UAkItemBoolPropertiesConv::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkItemBoolPropertiesConv");
    return (UAkItemBoolPropertiesConv*)res;
}
void UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl) {}
FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString"));
    struct Params_Conv_FAkBoolPropertyToControlToString {
        FAkBoolPropertyToControl INAkBoolPropertyToControl; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_FAkBoolPropertyToControlToString params{};
    params.INAkBoolPropertyToControl = (FAkBoolPropertyToControl)INAkBoolPropertyToControl;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    INAkBoolPropertyToControl = params.INAkBoolPropertyToControl;
    return (FString)params.ReturnValue;
}
