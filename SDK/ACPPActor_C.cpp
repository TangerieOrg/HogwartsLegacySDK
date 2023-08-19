#include "ABaseActor_C.hpp"
#include "ACPPActor_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void ACPPActor_C::Timer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPActor.CPPActor_C.Timer"));
    struct Params_Timer {
    }; // Size: 0x0
    Params_Timer params{};
    ProcessEvent(func, &params);
}
ACPPActor_C* ACPPActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/CPP/CPPActor.CPPActor_C");
    return (ACPPActor_C*)res;
}
void ACPPActor_C::SomeInterfaceFunction(FString StringInput, FString& StringOutput, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPActor.CPPActor_C.SomeInterfaceFunction"));
    struct Params_SomeInterfaceFunction {
        FString StringInput; // 0x0
        FString StringOutput; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x30
    }; // Size: 0x40
    Params_SomeInterfaceFunction params{};
    params.StringInput = (FString)StringInput;
    params.StringOutput = (FString)StringOutput;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    ProcessEvent(func, &params);
    StringOutput = params.StringOutput;
}
void ACPPActor_C::CPPImATest(bool BoolInput, FName NameInput, FName& NameOutput, bool& BoolOutput, FString CallFunc_BuildString_Name_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPActor.CPPActor_C.CPPImATest"));
    struct Params_CPPImATest {
        bool BoolInput; // 0x0
        char pad_1[0x3];
        FName NameInput; // 0x4
        FName NameOutput; // 0xc
        bool BoolOutput; // 0x14
        char pad_15[0x3];
        FString CallFunc_BuildString_Name_ReturnValue; // 0x18
        bool CallFunc_Not_PreBool_ReturnValue; // 0x28
        char pad_29[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x2c
    }; // Size: 0x34
    Params_CPPImATest params{};
    params.BoolInput = (bool)BoolInput;
    params.NameInput = (FName)NameInput;
    params.NameOutput = (FName)NameOutput;
    params.BoolOutput = (bool)BoolOutput;
    params.CallFunc_BuildString_Name_ReturnValue = (FString)CallFunc_BuildString_Name_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
    NameOutput = params.NameOutput;
    BoolOutput = params.BoolOutput;
}
void ACPPActor_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPActor.CPPActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ACPPActor_C::PrintToModLoader(FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/CPP/CPPActor.CPPActor_C.PrintToModLoader"));
    struct Params_PrintToModLoader {
        FString Message; // 0x0
    }; // Size: 0x10
    Params_PrintToModLoader params{};
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
void ACPPActor_C::ExecuteUbergraph_CPPActor(int32_t EntryPoint, FString CallFunc_SomeInterfaceFunction_StringOutput) {}
