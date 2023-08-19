#pragma once
#include <cstdint>
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
#pragma pack(push, 1)
class UFL_Random_C : public UBlueprintFunctionLibrary {
public:
    static UFL_Random_C* StaticClass();
    static void MakeRandomStream(FVector Vector, UObject* __WorldContext, FRandomStream& RandomStream, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t K2Node_MathExpression_ReturnValue, int32_t CallFunc_Xor_IntInt_ReturnValue_1, FRandomStream CallFunc_MakeRandomStream_ReturnValue);
}; // Size: 0x28
#pragma pack(pop)
