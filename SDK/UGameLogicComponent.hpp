#pragma once
#include <cstdint>
#include "FName_GameLogicExpression.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarFloat.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "UActorComponent.hpp"
class UGameLogicObject;
class UGameLogicVar_Float;
class AActor;
class UGameLogicVar_Int32;
class UGameLogicExpression;
class UGameLogicVar_Bool;
#pragma pack(push, 1)
class UGameLogicComponent : public UActorComponent {
public:
    UGameLogicObject* GameLogicObject; // 0xc8
    static UGameLogicComponent* StaticClass();
    static void SetInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName, int32_t Value);
    void SetInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Value);
    static void SetFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName, float Value);
    void SetFloatVariable(FName_GameLogicVarFloat FloatVarName, float Value);
    static void SetBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName, bool bValue);
    void SetBoolVariable(FName_GameLogicVarBool BoolVarName, bool bValue);
    static void IncrementInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName, int32_t Delta);
    void IncrementInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Delta);
    static UGameLogicVar_Int32* GetReferenceToInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName);
    UGameLogicVar_Int32* GetReferenceToInt32Variable(FName_GameLogicVarInt32 Int32VarName);
    static UGameLogicVar_Float* GetReferenceToFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName);
    UGameLogicVar_Float* GetReferenceToFloatVariable(FName_GameLogicVarFloat FloatVarName);
    static UGameLogicExpression* GetReferenceToExpression_OnActor(AActor* InActor, FName_GameLogicExpression ExpressionName);
    UGameLogicExpression* GetReferenceToExpression(FName_GameLogicExpression ExpressionName);
    static UGameLogicVar_Bool* GetReferenceToBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName);
    UGameLogicVar_Bool* GetReferenceToBoolVariable(FName_GameLogicVarBool BoolVarName);
    static int32_t GetInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName);
    int32_t GetInt32Variable(FName_GameLogicVarInt32 Int32VarName);
    UGameLogicObject* GetGameLogicObject();
    static float GetFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName);
    float GetFloatVariable(FName_GameLogicVarFloat FloatVarName);
    static bool GetExpression_OnActor(AActor* InActor, FName_GameLogicExpression ExpressionName);
    bool GetExpression(FName_GameLogicExpression ExpressionName);
    static bool GetBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName);
    bool GetBoolVariable(FName_GameLogicVarBool BoolVarName);
}; // Size: 0xd0
#pragma pack(pop)
