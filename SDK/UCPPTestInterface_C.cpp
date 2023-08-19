#include "UCPPTestInterface_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UCPPTestInterface_C* UCPPTestInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/CPP/CPPTestInterface.CPPTestInterface_C");
    return (UCPPTestInterface_C*)res;
}
void UCPPTestInterface_C::SomeInterfaceFunction(FString StringInput, FString& StringOutput) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPTestInterface.CPPTestInterface_C.SomeInterfaceFunction"));
    struct Params_SomeInterfaceFunction {
        FString StringInput; // 0x0
        FString StringOutput; // 0x10
    }; // Size: 0x20
    Params_SomeInterfaceFunction params{};
    params.StringInput = (FString)StringInput;
    params.StringOutput = (FString)StringOutput;
    ProcessEvent(func, &params);
    StringOutput = params.StringOutput;
}
