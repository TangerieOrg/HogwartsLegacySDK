#include "UBlueprintFunctionLibrary.hpp"
#include "UCPPLib_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCPPLib_C* UCPPLib_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/CPP/CPPLib.CPPLib_C");
    return (UCPPLib_C*)res;
}
void UCPPLib_C::CPPBlueprintTest(bool BoolInput, FName NameInput, UObject* __WorldContext, FName& NameOutput, bool& BoolOutput, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_BuildString_Name_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPLib.CPPLib_C.CPPBlueprintTest"));
    struct Params_CPPBlueprintTest {
        bool BoolInput; // 0x0
        char pad_1[0x3];
        FName NameInput; // 0x4
        char pad_c[0x4];
        UObject* __WorldContext; // 0x10
        FName NameOutput; // 0x18
        bool BoolOutput; // 0x20
        bool CallFunc_Not_PreBool_ReturnValue; // 0x21
        char pad_22[0x6];
        FString CallFunc_BuildString_Name_ReturnValue; // 0x28
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x38
    }; // Size: 0x40
    Params_CPPBlueprintTest params{};
    params.BoolInput = (bool)BoolInput;
    params.NameInput = (FName)NameInput;
    params.__WorldContext = (UObject*)__WorldContext;
    params.NameOutput = (FName)NameOutput;
    params.BoolOutput = (bool)BoolOutput;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_BuildString_Name_ReturnValue = (FString)CallFunc_BuildString_Name_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
    NameOutput = params.NameOutput;
    BoolOutput = params.BoolOutput;
}
