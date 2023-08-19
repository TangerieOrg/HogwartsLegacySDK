#include "AActor.hpp"
#include "FName_GameLogicExpression.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarFloat.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UGameLogicComponent.hpp"
#include "UGameLogicExpression.hpp"
#include "UGameLogicObject.hpp"
#include "UGameLogicVar_Bool.hpp"
#include "UGameLogicVar_Float.hpp"
#include "UGameLogicVar_Int32.hpp"
void UGameLogicComponent::SetFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetFloatVariable_OnActor"));
    struct Params_SetFloatVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarFloat FloatVarName; // 0x8
        float Value; // 0x10
    }; // Size: 0x14
    Params_SetFloatVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UGameLogicComponent* UGameLogicComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicComponent");
    return (UGameLogicComponent*)res;
}
bool UGameLogicComponent::GetExpression_OnActor(AActor* InActor, FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetExpression_OnActor"));
    struct Params_GetExpression_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicExpression ExpressionName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetExpression_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UGameLogicExpression* UGameLogicComponent::GetReferenceToExpression_OnActor(AActor* InActor, FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToExpression_OnActor"));
    struct Params_GetReferenceToExpression_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicExpression ExpressionName; // 0x8
        UGameLogicExpression* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetReferenceToExpression_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicExpression*)params.ReturnValue;
}
void UGameLogicComponent::SetInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetInt32Variable_OnActor"));
    struct Params_SetInt32Variable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarInt32 Int32VarName; // 0x8
        int32_t Value; // 0x10
    }; // Size: 0x14
    Params_SetInt32Variable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameLogicComponent::SetInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetInt32Variable"));
    struct Params_SetInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_SetInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UGameLogicComponent::SetFloatVariable(FName_GameLogicVarFloat FloatVarName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetFloatVariable"));
    struct Params_SetFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
bool UGameLogicComponent::GetBoolVariable(FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetBoolVariable"));
    struct Params_GetBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameLogicComponent::SetBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName, bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetBoolVariable_OnActor"));
    struct Params_SetBoolVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarBool BoolVarName; // 0x8
        bool bValue; // 0x10
    }; // Size: 0x11
    Params_SetBoolVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    params.bValue = (bool)bValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameLogicComponent::SetBoolVariable(FName_GameLogicVarBool BoolVarName, bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.SetBoolVariable"));
    struct Params_SetBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        bool bValue; // 0x8
    }; // Size: 0x9
    Params_SetBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UGameLogicComponent::IncrementInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.IncrementInt32Variable_OnActor"));
    struct Params_IncrementInt32Variable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarInt32 Int32VarName; // 0x8
        int32_t Delta; // 0x10
    }; // Size: 0x14
    Params_IncrementInt32Variable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Delta = (int32_t)Delta;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UGameLogicComponent::GetInt32Variable(FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetInt32Variable"));
    struct Params_GetInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UGameLogicComponent::IncrementInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.IncrementInt32Variable"));
    struct Params_IncrementInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t Delta; // 0x8
    }; // Size: 0xc
    Params_IncrementInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
UGameLogicVar_Int32* UGameLogicComponent::GetReferenceToInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToInt32Variable_OnActor"));
    struct Params_GetReferenceToInt32Variable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarInt32 Int32VarName; // 0x8
        UGameLogicVar_Int32* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetReferenceToInt32Variable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicVar_Int32*)params.ReturnValue;
}
UGameLogicObject* UGameLogicComponent::GetGameLogicObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetGameLogicObject"));
    struct Params_GetGameLogicObject {
        UGameLogicObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameLogicObject params{};
    ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
UGameLogicVar_Int32* UGameLogicComponent::GetReferenceToInt32Variable(FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToInt32Variable"));
    struct Params_GetReferenceToInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        UGameLogicVar_Int32* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Int32*)params.ReturnValue;
}
UGameLogicVar_Float* UGameLogicComponent::GetReferenceToFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToFloatVariable_OnActor"));
    struct Params_GetReferenceToFloatVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarFloat FloatVarName; // 0x8
        UGameLogicVar_Float* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetReferenceToFloatVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicVar_Float*)params.ReturnValue;
}
UGameLogicVar_Float* UGameLogicComponent::GetReferenceToFloatVariable(FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToFloatVariable"));
    struct Params_GetReferenceToFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        UGameLogicVar_Float* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Float*)params.ReturnValue;
}
UGameLogicExpression* UGameLogicComponent::GetReferenceToExpression(FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToExpression"));
    struct Params_GetReferenceToExpression {
        FName_GameLogicExpression ExpressionName; // 0x0
        UGameLogicExpression* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToExpression params{};
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ProcessEvent(func, &params);
    return (UGameLogicExpression*)params.ReturnValue;
}
UGameLogicVar_Bool* UGameLogicComponent::GetReferenceToBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToBoolVariable_OnActor"));
    struct Params_GetReferenceToBoolVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarBool BoolVarName; // 0x8
        UGameLogicVar_Bool* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetReferenceToBoolVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicVar_Bool*)params.ReturnValue;
}
UGameLogicVar_Bool* UGameLogicComponent::GetReferenceToBoolVariable(FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetReferenceToBoolVariable"));
    struct Params_GetReferenceToBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        UGameLogicVar_Bool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Bool*)params.ReturnValue;
}
int32_t UGameLogicComponent::GetInt32Variable_OnActor(AActor* InActor, FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetInt32Variable_OnActor"));
    struct Params_GetInt32Variable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarInt32 Int32VarName; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetInt32Variable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UGameLogicComponent::GetFloatVariable_OnActor(AActor* InActor, FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetFloatVariable_OnActor"));
    struct Params_GetFloatVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarFloat FloatVarName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetFloatVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
float UGameLogicComponent::GetFloatVariable(FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetFloatVariable"));
    struct Params_GetFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UGameLogicComponent::GetExpression(FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetExpression"));
    struct Params_GetExpression {
        FName_GameLogicExpression ExpressionName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetExpression params{};
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameLogicComponent::GetBoolVariable_OnActor(AActor* InActor, FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicComponent.GetBoolVariable_OnActor"));
    struct Params_GetBoolVariable_OnActor {
        AActor* InActor; // 0x0
        FName_GameLogicVarBool BoolVarName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetBoolVariable_OnActor params{};
    params.InActor = (AActor*)InActor;
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
