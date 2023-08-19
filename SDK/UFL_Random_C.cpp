#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFL_Random_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFL_Random_C* UFL_Random_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/FunctionLibrary/FL_Random.FL_Random_C");
    return (UFL_Random_C*)res;
}
void UFL_Random_C::MakeRandomStream(FVector Vector, UObject* __WorldContext, FRandomStream& RandomStream, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32_t K2Node_MathExpression_ReturnValue, int32_t CallFunc_Xor_IntInt_ReturnValue_1, FRandomStream CallFunc_MakeRandomStream_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/FunctionLibrary/FL_Random.FL_Random_C.MakeRandomStream"));
    struct Params_MakeRandomStream {
        FVector Vector; // 0x0
        char pad_c[0x4];
        UObject* __WorldContext; // 0x10
        FRandomStream RandomStream; // 0x18
        float CallFunc_BreakVector_X; // 0x20
        float CallFunc_BreakVector_Y; // 0x24
        float CallFunc_BreakVector_Z; // 0x28
        int32_t K2Node_MathExpression_ReturnValue; // 0x2c
        int32_t CallFunc_Xor_IntInt_ReturnValue_1; // 0x30
        FRandomStream CallFunc_MakeRandomStream_ReturnValue; // 0x34
    }; // Size: 0x3c
    Params_MakeRandomStream params{};
    params.Vector = (FVector)Vector;
    params.__WorldContext = (UObject*)__WorldContext;
    params.RandomStream = (FRandomStream)RandomStream;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.K2Node_MathExpression_ReturnValue = (int32_t)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Xor_IntInt_ReturnValue_1 = (int32_t)CallFunc_Xor_IntInt_ReturnValue_1;
    params.CallFunc_MakeRandomStream_ReturnValue = (FRandomStream)CallFunc_MakeRandomStream_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RandomStream = params.RandomStream;
}
