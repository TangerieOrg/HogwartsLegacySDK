#include "EHandKeypoint.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UHandKeypointConversion.hpp"
int32_t UHandKeypointConversion::Conv_HandKeypointToInt32(EHandKeypoint Input) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32"));
    struct Params_Conv_HandKeypointToInt32 {
        EHandKeypoint Input; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_Conv_HandKeypointToInt32 params{};
    params.Input = (EHandKeypoint)Input;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UHandKeypointConversion* UHandKeypointConversion::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.HandKeypointConversion");
    return (UHandKeypointConversion*)res;
}
