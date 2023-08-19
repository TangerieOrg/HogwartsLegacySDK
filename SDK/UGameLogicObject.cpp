#include "FBitfield256.hpp"
#include "FGameLogicVarAndBitBitfield.hpp"
#include "FGameLogicVarAndValueBitfield.hpp"
#include "FGameLogicVarAndValueEnum.hpp"
#include "FName_GameLogicExpression.hpp"
#include "FName_GameLogicPropBitfield.hpp"
#include "FName_GameLogicPropEnum.hpp"
#include "FName_GameLogicPropFloat.hpp"
#include "FName_GameLogicPropInt32.hpp"
#include "FName_GameLogicPropString.hpp"
#include "FName_GameLogicVarBitfield.hpp"
#include "FName_GameLogicVarBool.hpp"
#include "FName_GameLogicVarEnum.hpp"
#include "FName_GameLogicVarFloat.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "FName_GameLogicVarString.hpp"
#include "FName_GameLogicVarTimer.hpp"
#include "UFunction.hpp"
#include "UGameLogicExpression.hpp"
#include "UGameLogicObject.hpp"
#include "UGameLogicPropositional_Bitfield.hpp"
#include "UGameLogicPropositional_Enum.hpp"
#include "UGameLogicPropositional_Float.hpp"
#include "UGameLogicPropositional_Int32.hpp"
#include "UGameLogicPropositional_String.hpp"
#include "UGameLogicVar_Bitfield.hpp"
#include "UGameLogicVar_Bool.hpp"
#include "UGameLogicVar_Enum.hpp"
#include "UGameLogicVar_Float.hpp"
#include "UGameLogicVar_Int32.hpp"
#include "UGameLogicVar_String.hpp"
#include "UGameLogicVar_Timer.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
void UGameLogicObject::SetStringVariable(FName_GameLogicVarString StringVarName, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetStringVariable"));
    struct Params_SetStringVariable {
        FName_GameLogicVarString StringVarName; // 0x0
        FString Value; // 0x8
    }; // Size: 0x18
    Params_SetStringVariable params{};
    params.StringVarName = (FName_GameLogicVarString)StringVarName;
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
}
UGameLogicObject* UGameLogicObject::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicObject");
    return (UGameLogicObject*)res;
}
UGameLogicVar_Float* UGameLogicObject::GetReferenceToFloatVariable(FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToFloatVariable"));
    struct Params_GetReferenceToFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        UGameLogicVar_Float* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Float*)params.ReturnValue;
}
void UGameLogicObject::XOrBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.XOrBitfieldVariable"));
    struct Params_XOrBitfieldVariable {
        FGameLogicVarAndValueBitfield VarAndValue; // 0x0
    }; // Size: 0x28
    Params_XOrBitfieldVariable params{};
    params.VarAndValue = (FGameLogicVarAndValueBitfield)VarAndValue;
    ProcessEvent(func, &params);
}
void UGameLogicObject::SetTimerVariablePauseAndValue(FName_GameLogicVarTimer TimerVarName, bool bFlag, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetTimerVariablePauseAndValue"));
    struct Params_SetTimerVariablePauseAndValue {
        FName_GameLogicVarTimer TimerVarName; // 0x0
        bool bFlag; // 0x8
        char pad_9[0x3];
        float Value; // 0xc
    }; // Size: 0x10
    Params_SetTimerVariablePauseAndValue params{};
    params.TimerVarName = (FName_GameLogicVarTimer)TimerVarName;
    params.bFlag = (bool)bFlag;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UGameLogicObject::BitfieldVariable_FlipBit(FGameLogicVarAndBitBitfield BitfieldVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.BitfieldVariable_FlipBit"));
    struct Params_BitfieldVariable_FlipBit {
        FGameLogicVarAndBitBitfield BitfieldVarName; // 0x0
    }; // Size: 0x28
    Params_BitfieldVariable_FlipBit params{};
    params.BitfieldVarName = (FGameLogicVarAndBitBitfield)BitfieldVarName;
    ProcessEvent(func, &params);
}
UGameLogicObject* UGameLogicObject::SpawnGameLogicObject(UObject* Outer, UWorld* World) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SpawnGameLogicObject"));
    struct Params_SpawnGameLogicObject {
        UObject* Outer; // 0x0
        UWorld* World; // 0x8
        UGameLogicObject* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SpawnGameLogicObject params{};
    params.Outer = (UObject*)Outer;
    params.World = (UWorld*)World;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
void UGameLogicObject::SetTimerVariable(FName_GameLogicVarTimer TimerVarName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetTimerVariable"));
    struct Params_SetTimerVariable {
        FName_GameLogicVarTimer TimerVarName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetTimerVariable params{};
    params.TimerVarName = (FName_GameLogicVarTimer)TimerVarName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UGameLogicObject::SetEnumVariableWithU8(FName_GameLogicVarEnum EnumVarName, uint8_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetEnumVariableWithU8"));
    struct Params_SetEnumVariableWithU8 {
        FName_GameLogicVarEnum EnumVarName; // 0x0
        uint8_t Value; // 0x8
    }; // Size: 0x9
    Params_SetEnumVariableWithU8 params{};
    params.EnumVarName = (FName_GameLogicVarEnum)EnumVarName;
    params.Value = (uint8_t)Value;
    ProcessEvent(func, &params);
}
void UGameLogicObject::SetTimerVariablePause(FName_GameLogicVarTimer TimerVarName, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetTimerVariablePause"));
    struct Params_SetTimerVariablePause {
        FName_GameLogicVarTimer TimerVarName; // 0x0
        bool bFlag; // 0x8
    }; // Size: 0x9
    Params_SetTimerVariablePause params{};
    params.TimerVarName = (FName_GameLogicVarTimer)TimerVarName;
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
UGameLogicPropositional_Bitfield* UGameLogicObject::GetReferenceToPropBitfield(FName_GameLogicPropBitfield PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToPropBitfield"));
    struct Params_GetReferenceToPropBitfield {
        FName_GameLogicPropBitfield PropName; // 0x0
        UGameLogicPropositional_Bitfield* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToPropBitfield params{};
    params.PropName = (FName_GameLogicPropBitfield)PropName;
    ProcessEvent(func, &params);
    return (UGameLogicPropositional_Bitfield*)params.ReturnValue;
}
void UGameLogicObject::SetInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetInt32Variable"));
    struct Params_SetInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_SetInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
bool UGameLogicObject::GetInt32Propositional(FName_GameLogicPropInt32 PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetInt32Propositional"));
    struct Params_GetInt32Propositional {
        FName_GameLogicPropInt32 PropName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetInt32Propositional params{};
    params.PropName = (FName_GameLogicPropInt32)PropName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameLogicObject::SetFloatVariable(FName_GameLogicVarFloat FloatVarName, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetFloatVariable"));
    struct Params_SetFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_SetFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
UGameLogicObject* UGameLogicObject::DestroyGameLogicObject(UGameLogicObject* InGameLogicObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.DestroyGameLogicObject"));
    struct Params_DestroyGameLogicObject {
        UGameLogicObject* InGameLogicObject; // 0x0
        UGameLogicObject* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_DestroyGameLogicObject params{};
    params.InGameLogicObject = (UGameLogicObject*)InGameLogicObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
void UGameLogicObject::SetEnumVariable(FGameLogicVarAndValueEnum VarAndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetEnumVariable"));
    struct Params_SetEnumVariable {
        FGameLogicVarAndValueEnum VarAndValue; // 0x0
    }; // Size: 0x28
    Params_SetEnumVariable params{};
    params.VarAndValue = (FGameLogicVarAndValueEnum)VarAndValue;
    ProcessEvent(func, &params);
}
void UGameLogicObject::SetBoolVariable(FName_GameLogicVarBool BoolVarName, bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetBoolVariable"));
    struct Params_SetBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        bool bValue; // 0x8
    }; // Size: 0x9
    Params_SetBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    params.bValue = (bool)bValue;
    ProcessEvent(func, &params);
}
void UGameLogicObject::SetBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.SetBitfieldVariable"));
    struct Params_SetBitfieldVariable {
        FGameLogicVarAndValueBitfield VarAndValue; // 0x0
    }; // Size: 0x28
    Params_SetBitfieldVariable params{};
    params.VarAndValue = (FGameLogicVarAndValueBitfield)VarAndValue;
    ProcessEvent(func, &params);
}
FBitfield256 UGameLogicObject::GetBitfieldVariable(FName_GameLogicVarBitfield BitfieldVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetBitfieldVariable"));
    struct Params_GetBitfieldVariable {
        FName_GameLogicVarBitfield BitfieldVarName; // 0x0
        FBitfield256 ReturnValue; // 0x8
    }; // Size: 0x28
    Params_GetBitfieldVariable params{};
    params.BitfieldVarName = (FName_GameLogicVarBitfield)BitfieldVarName;
    ProcessEvent(func, &params);
    return (FBitfield256)params.ReturnValue;
}
void UGameLogicObject::OrBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.OrBitfieldVariable"));
    struct Params_OrBitfieldVariable {
        FGameLogicVarAndValueBitfield VarAndValue; // 0x0
    }; // Size: 0x28
    Params_OrBitfieldVariable params{};
    params.VarAndValue = (FGameLogicVarAndValueBitfield)VarAndValue;
    ProcessEvent(func, &params);
}
void UGameLogicObject::IncrementInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.IncrementInt32Variable"));
    struct Params_IncrementInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t Delta; // 0x8
    }; // Size: 0xc
    Params_IncrementInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
float UGameLogicObject::GetTimerVariable(FName_GameLogicVarTimer TimerVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetTimerVariable"));
    struct Params_GetTimerVariable {
        FName_GameLogicVarTimer TimerVarName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTimerVariable params{};
    params.TimerVarName = (FName_GameLogicVarTimer)TimerVarName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UGameLogicObject::GetStringPropositional(FName_GameLogicPropString PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetStringPropositional"));
    struct Params_GetStringPropositional {
        FName_GameLogicPropString PropName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetStringPropositional params{};
    params.PropName = (FName_GameLogicPropString)PropName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UGameLogicObject::GetStringVariable(FName_GameLogicVarString StringVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetStringVariable"));
    struct Params_GetStringVariable {
        FName_GameLogicVarString StringVarName; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetStringVariable params{};
    params.StringVarName = (FName_GameLogicVarString)StringVarName;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UGameLogicObject::GetBitfieldPropositional(FName_GameLogicPropBitfield PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetBitfieldPropositional"));
    struct Params_GetBitfieldPropositional {
        FName_GameLogicPropBitfield PropName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetBitfieldPropositional params{};
    params.PropName = (FName_GameLogicPropBitfield)PropName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameLogicObject::GetExpression(FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetExpression"));
    struct Params_GetExpression {
        FName_GameLogicExpression ExpressionName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetExpression params{};
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UGameLogicVar_Timer* UGameLogicObject::GetReferenceToTimerVariable(FName_GameLogicVarTimer TimerVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToTimerVariable"));
    struct Params_GetReferenceToTimerVariable {
        FName_GameLogicVarTimer TimerVarName; // 0x0
        UGameLogicVar_Timer* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToTimerVariable params{};
    params.TimerVarName = (FName_GameLogicVarTimer)TimerVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Timer*)params.ReturnValue;
}
UGameLogicVar_String* UGameLogicObject::GetReferenceToStringVariable(FName_GameLogicVarString StringVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToStringVariable"));
    struct Params_GetReferenceToStringVariable {
        FName_GameLogicVarString StringVarName; // 0x0
        UGameLogicVar_String* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToStringVariable params{};
    params.StringVarName = (FName_GameLogicVarString)StringVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_String*)params.ReturnValue;
}
UGameLogicPropositional_String* UGameLogicObject::GetReferenceToPropString(FName_GameLogicPropString PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToPropString"));
    struct Params_GetReferenceToPropString {
        FName_GameLogicPropString PropName; // 0x0
        UGameLogicPropositional_String* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToPropString params{};
    params.PropName = (FName_GameLogicPropString)PropName;
    ProcessEvent(func, &params);
    return (UGameLogicPropositional_String*)params.ReturnValue;
}
void UGameLogicObject::BitfieldVariable_SetAllBits(FName_GameLogicVarBitfield VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.BitfieldVariable_SetAllBits"));
    struct Params_BitfieldVariable_SetAllBits {
        FName_GameLogicVarBitfield VarName; // 0x0
    }; // Size: 0x8
    Params_BitfieldVariable_SetAllBits params{};
    params.VarName = (FName_GameLogicVarBitfield)VarName;
    ProcessEvent(func, &params);
}
UGameLogicPropositional_Int32* UGameLogicObject::GetReferenceToPropInt32(FName_GameLogicPropInt32 PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToPropInt32"));
    struct Params_GetReferenceToPropInt32 {
        FName_GameLogicPropInt32 PropName; // 0x0
        UGameLogicPropositional_Int32* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToPropInt32 params{};
    params.PropName = (FName_GameLogicPropInt32)PropName;
    ProcessEvent(func, &params);
    return (UGameLogicPropositional_Int32*)params.ReturnValue;
}
UGameLogicPropositional_Float* UGameLogicObject::GetReferenceToPropFloat(FName_GameLogicPropFloat PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToPropFloat"));
    struct Params_GetReferenceToPropFloat {
        FName_GameLogicPropFloat PropName; // 0x0
        UGameLogicPropositional_Float* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToPropFloat params{};
    params.PropName = (FName_GameLogicPropFloat)PropName;
    ProcessEvent(func, &params);
    return (UGameLogicPropositional_Float*)params.ReturnValue;
}
UGameLogicPropositional_Enum* UGameLogicObject::GetReferenceToPropEnum(FName_GameLogicPropEnum PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToPropEnum"));
    struct Params_GetReferenceToPropEnum {
        FName_GameLogicPropEnum PropName; // 0x0
        UGameLogicPropositional_Enum* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToPropEnum params{};
    params.PropName = (FName_GameLogicPropEnum)PropName;
    ProcessEvent(func, &params);
    return (UGameLogicPropositional_Enum*)params.ReturnValue;
}
void UGameLogicObject::BitfieldVariable_ClearBit(FGameLogicVarAndBitBitfield BitfieldVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.BitfieldVariable_ClearBit"));
    struct Params_BitfieldVariable_ClearBit {
        FGameLogicVarAndBitBitfield BitfieldVarName; // 0x0
    }; // Size: 0x28
    Params_BitfieldVariable_ClearBit params{};
    params.BitfieldVarName = (FGameLogicVarAndBitBitfield)BitfieldVarName;
    ProcessEvent(func, &params);
}
UGameLogicVar_Int32* UGameLogicObject::GetReferenceToInt32Variable(FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToInt32Variable"));
    struct Params_GetReferenceToInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        UGameLogicVar_Int32* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Int32*)params.ReturnValue;
}
UGameLogicExpression* UGameLogicObject::GetReferenceToExpression(FName_GameLogicExpression ExpressionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToExpression"));
    struct Params_GetReferenceToExpression {
        FName_GameLogicExpression ExpressionName; // 0x0
        UGameLogicExpression* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToExpression params{};
    params.ExpressionName = (FName_GameLogicExpression)ExpressionName;
    ProcessEvent(func, &params);
    return (UGameLogicExpression*)params.ReturnValue;
}
UGameLogicVar_Enum* UGameLogicObject::GetReferenceToEnumVariable(FName_GameLogicVarEnum EnumVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToEnumVariable"));
    struct Params_GetReferenceToEnumVariable {
        FName_GameLogicVarEnum EnumVarName; // 0x0
        UGameLogicVar_Enum* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToEnumVariable params{};
    params.EnumVarName = (FName_GameLogicVarEnum)EnumVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Enum*)params.ReturnValue;
}
UGameLogicVar_Bool* UGameLogicObject::GetReferenceToBoolVariable(FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToBoolVariable"));
    struct Params_GetReferenceToBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        UGameLogicVar_Bool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Bool*)params.ReturnValue;
}
UGameLogicVar_Bitfield* UGameLogicObject::GetReferenceToBitfieldVariable(FName_GameLogicVarBitfield BitfieldVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetReferenceToBitfieldVariable"));
    struct Params_GetReferenceToBitfieldVariable {
        FName_GameLogicVarBitfield BitfieldVarName; // 0x0
        UGameLogicVar_Bitfield* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetReferenceToBitfieldVariable params{};
    params.BitfieldVarName = (FName_GameLogicVarBitfield)BitfieldVarName;
    ProcessEvent(func, &params);
    return (UGameLogicVar_Bitfield*)params.ReturnValue;
}
int32_t UGameLogicObject::GetInt32Variable(FName_GameLogicVarInt32 Int32VarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetInt32Variable"));
    struct Params_GetInt32Variable {
        FName_GameLogicVarInt32 Int32VarName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetInt32Variable params{};
    params.Int32VarName = (FName_GameLogicVarInt32)Int32VarName;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float UGameLogicObject::GetFloatVariable(FName_GameLogicVarFloat FloatVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetFloatVariable"));
    struct Params_GetFloatVariable {
        FName_GameLogicVarFloat FloatVarName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetFloatVariable params{};
    params.FloatVarName = (FName_GameLogicVarFloat)FloatVarName;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UGameLogicObject::GetFloatPropositional(FName_GameLogicPropFloat PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetFloatPropositional"));
    struct Params_GetFloatPropositional {
        FName_GameLogicPropFloat PropName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetFloatPropositional params{};
    params.PropName = (FName_GameLogicPropFloat)PropName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t UGameLogicObject::GetEnumVariable(FName_GameLogicVarEnum EnumVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetEnumVariable"));
    struct Params_GetEnumVariable {
        FName_GameLogicVarEnum EnumVarName; // 0x0
        uint8_t ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEnumVariable params{};
    params.EnumVarName = (FName_GameLogicVarEnum)EnumVarName;
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
bool UGameLogicObject::GetEnumPropositional(FName_GameLogicPropEnum PropName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetEnumPropositional"));
    struct Params_GetEnumPropositional {
        FName_GameLogicPropEnum PropName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEnumPropositional params{};
    params.PropName = (FName_GameLogicPropEnum)PropName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UGameLogicObject::GetBoolVariable(FName_GameLogicVarBool BoolVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.GetBoolVariable"));
    struct Params_GetBoolVariable {
        FName_GameLogicVarBool BoolVarName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetBoolVariable params{};
    params.BoolVarName = (FName_GameLogicVarBool)BoolVarName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameLogicObject::BitfieldVariable_SetBit(FGameLogicVarAndBitBitfield BitfieldVarName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.BitfieldVariable_SetBit"));
    struct Params_BitfieldVariable_SetBit {
        FGameLogicVarAndBitBitfield BitfieldVarName; // 0x0
    }; // Size: 0x28
    Params_BitfieldVariable_SetBit params{};
    params.BitfieldVarName = (FGameLogicVarAndBitBitfield)BitfieldVarName;
    ProcessEvent(func, &params);
}
void UGameLogicObject::AndBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicObject.AndBitfieldVariable"));
    struct Params_AndBitfieldVariable {
        FGameLogicVarAndValueBitfield VarAndValue; // 0x0
    }; // Size: 0x28
    Params_AndBitfieldVariable params{};
    params.VarAndValue = (FGameLogicVarAndValueBitfield)VarAndValue;
    ProcessEvent(func, &params);
}
