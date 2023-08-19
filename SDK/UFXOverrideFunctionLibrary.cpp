#include "FFXOverride.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFXOverrideFunctionLibrary.hpp"
#include "UFunction.hpp"
UFXOverrideFunctionLibrary* UFXOverrideFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.FXOverrideFunctionLibrary");
    return (UFXOverrideFunctionLibrary*)res;
}
bool UFXOverrideFunctionLibrary::IsMatch(FFXOverride& FXOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.FXOverrideFunctionLibrary.IsMatch"));
    struct Params_IsMatch {
        FFXOverride FXOverride; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsMatch params{};
    params.FXOverride = (FFXOverride)FXOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FXOverride = params.FXOverride;
    return (bool)params.ReturnValue;
}
