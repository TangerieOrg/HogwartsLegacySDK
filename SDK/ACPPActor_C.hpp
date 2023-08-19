#pragma once
#include <cstdint>
#include "ABaseActor_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UClass;
#pragma pack(push, 1)
class ACPPActor_C : public ABaseActor_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x258
    UClass* Tier; // 0x260
    static ACPPActor_C* StaticClass();
    void SomeInterfaceFunction(FString StringInput, FString& StringOutput, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
    void CPPImATest(bool BoolInput, FName NameInput, FName& NameOutput, bool& BoolOutput, FString CallFunc_BuildString_Name_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue);
    void ReceiveBeginPlay();
    void PrintToModLoader(FString Message);
    void Timer();
    void ExecuteUbergraph_CPPActor(int32_t EntryPoint, FString CallFunc_SomeInterfaceFunction_StringOutput);
}; // Size: 0x268
#pragma pack(pop)
