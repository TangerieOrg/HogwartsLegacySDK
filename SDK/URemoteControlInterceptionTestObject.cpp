#include "FRemoteControlInterceptionFunctionParamStruct.hpp"
#include "FRemoteControlInterceptionTestStruct.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URemoteControlInterceptionTestObject.hpp"
FRemoteControlInterceptionFunctionParamStruct URemoteControlInterceptionTestObject::TestFunction(FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RemoteControl.RemoteControlInterceptionTestObject.TestFunction"));
    struct Params_TestFunction {
        FRemoteControlInterceptionFunctionParamStruct InStruct; // 0x0
        int32_t InTestFactor; // 0x28
        char pad_2c[0x4];
        FRemoteControlInterceptionFunctionParamStruct ReturnValue; // 0x30
    }; // Size: 0x58
    Params_TestFunction params{};
    params.InStruct = (FRemoteControlInterceptionFunctionParamStruct)InStruct;
    params.InTestFactor = (int32_t)InTestFactor;
    ProcessEvent(func, &params);
    InStruct = params.InStruct;
    return (FRemoteControlInterceptionFunctionParamStruct)params.ReturnValue;
}
URemoteControlInterceptionTestObject* URemoteControlInterceptionTestObject::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlInterceptionTestObject");
    return (URemoteControlInterceptionTestObject*)res;
}
