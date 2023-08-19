#include "FDecalPointLightInfo.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UPointLightComponent.hpp"
#include "UPointLightDecalLibrary.hpp"
UPointLightDecalLibrary* UPointLightDecalLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.PointLightDecalLibrary");
    return (UPointLightDecalLibrary*)res;
}
FDecalPointLightInfo UPointLightDecalLibrary::MakeDecalPointLightInfo(UPointLightComponent* PointLightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.PointLightDecalLibrary.MakeDecalPointLightInfo"));
    struct Params_MakeDecalPointLightInfo {
        UPointLightComponent* PointLightComponent; // 0x0
        FDecalPointLightInfo ReturnValue; // 0x8
    }; // Size: 0x30
    Params_MakeDecalPointLightInfo params{};
    params.PointLightComponent = (UPointLightComponent*)PointLightComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FDecalPointLightInfo)params.ReturnValue;
}
