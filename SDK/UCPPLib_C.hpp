#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UCPPLib_C : public UBlueprintFunctionLibrary {
public:
    static UCPPLib_C* StaticClass();
    void CPPBlueprintTest(bool BoolInput, FName NameInput, UObject* __WorldContext, FName& NameOutput, bool& BoolOutput, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_BuildString_Name_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue);
}; // Size: 0x28
#pragma pack(pop)
