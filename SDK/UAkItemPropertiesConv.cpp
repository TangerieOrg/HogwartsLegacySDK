#include "FAkPropertyToControl.hpp"
#include "UAkItemPropertiesConv.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAkItemPropertiesConv* UAkItemPropertiesConv::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkItemPropertiesConv");
    return (UAkItemPropertiesConv*)res;
}
void UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl) {}
FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString"));
    struct Params_Conv_FAkPropertyToControlToString {
        FAkPropertyToControl INAkPropertyToControl; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_FAkPropertyToControlToString params{};
    params.INAkPropertyToControl = (FAkPropertyToControl)INAkPropertyToControl;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    INAkPropertyToControl = params.INAkPropertyToControl;
    return (FString)params.ReturnValue;
}
