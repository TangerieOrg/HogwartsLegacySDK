#pragma once
#include <cstdint>
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
#include "UObject.hpp"
class UWorld;
class UGameLogicPropositional_Int32;
class UGameLogicVar_String;
class UGameLogicVar_Timer;
class UGameLogicPropositional_Float;
class UGameLogicPropositional_String;
class UGameLogicPropositional_Enum;
class UGameLogicPropositional_Bitfield;
class UGameLogicVar_Int32;
class UGameLogicVar_Float;
class UGameLogicExpression;
class UGameLogicVar_Enum;
class UGameLogicVar_Bool;
class UGameLogicVar_Bitfield;
#pragma pack(push, 1)
class UGameLogicObject : public UObject {
public:
    char pad_28[0x438];
    static UGameLogicObject* StaticClass();
    void XOrBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue);
    static UGameLogicObject* SpawnGameLogicObject(UObject* Outer, UWorld* World);
    void SetTimerVariablePauseAndValue(FName_GameLogicVarTimer TimerVarName, bool bFlag, float Value);
    void SetTimerVariablePause(FName_GameLogicVarTimer TimerVarName, bool bFlag);
    void SetTimerVariable(FName_GameLogicVarTimer TimerVarName, float Value);
    void SetStringVariable(FName_GameLogicVarString StringVarName, FString Value);
    void SetInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Value);
    void SetFloatVariable(FName_GameLogicVarFloat FloatVarName, float Value);
    void SetEnumVariableWithU8(FName_GameLogicVarEnum EnumVarName, uint8_t Value);
    void SetEnumVariable(FGameLogicVarAndValueEnum VarAndValue);
    void SetBoolVariable(FName_GameLogicVarBool BoolVarName, bool bValue);
    void SetBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue);
    void OrBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue);
    void IncrementInt32Variable(FName_GameLogicVarInt32 Int32VarName, int32_t Delta);
    float GetTimerVariable(FName_GameLogicVarTimer TimerVarName);
    FString GetStringVariable(FName_GameLogicVarString StringVarName);
    bool GetStringPropositional(FName_GameLogicPropString PropName);
    UGameLogicVar_Timer* GetReferenceToTimerVariable(FName_GameLogicVarTimer TimerVarName);
    UGameLogicVar_String* GetReferenceToStringVariable(FName_GameLogicVarString StringVarName);
    UGameLogicPropositional_String* GetReferenceToPropString(FName_GameLogicPropString PropName);
    UGameLogicPropositional_Int32* GetReferenceToPropInt32(FName_GameLogicPropInt32 PropName);
    UGameLogicPropositional_Float* GetReferenceToPropFloat(FName_GameLogicPropFloat PropName);
    UGameLogicPropositional_Enum* GetReferenceToPropEnum(FName_GameLogicPropEnum PropName);
    UGameLogicPropositional_Bitfield* GetReferenceToPropBitfield(FName_GameLogicPropBitfield PropName);
    UGameLogicVar_Int32* GetReferenceToInt32Variable(FName_GameLogicVarInt32 Int32VarName);
    UGameLogicVar_Float* GetReferenceToFloatVariable(FName_GameLogicVarFloat FloatVarName);
    UGameLogicExpression* GetReferenceToExpression(FName_GameLogicExpression ExpressionName);
    UGameLogicVar_Enum* GetReferenceToEnumVariable(FName_GameLogicVarEnum EnumVarName);
    UGameLogicVar_Bool* GetReferenceToBoolVariable(FName_GameLogicVarBool BoolVarName);
    UGameLogicVar_Bitfield* GetReferenceToBitfieldVariable(FName_GameLogicVarBitfield BitfieldVarName);
    int32_t GetInt32Variable(FName_GameLogicVarInt32 Int32VarName);
    bool GetInt32Propositional(FName_GameLogicPropInt32 PropName);
    float GetFloatVariable(FName_GameLogicVarFloat FloatVarName);
    bool GetFloatPropositional(FName_GameLogicPropFloat PropName);
    bool GetExpression(FName_GameLogicExpression ExpressionName);
    uint8_t GetEnumVariable(FName_GameLogicVarEnum EnumVarName);
    bool GetEnumPropositional(FName_GameLogicPropEnum PropName);
    bool GetBoolVariable(FName_GameLogicVarBool BoolVarName);
    FBitfield256 GetBitfieldVariable(FName_GameLogicVarBitfield BitfieldVarName);
    bool GetBitfieldPropositional(FName_GameLogicPropBitfield PropName);
    static UGameLogicObject* DestroyGameLogicObject(UGameLogicObject* InGameLogicObject);
    void BitfieldVariable_SetBit(FGameLogicVarAndBitBitfield BitfieldVarName);
    void BitfieldVariable_SetAllBits(FName_GameLogicVarBitfield VarName);
    void BitfieldVariable_FlipBit(FGameLogicVarAndBitBitfield BitfieldVarName);
    void BitfieldVariable_ClearBit(FGameLogicVarAndBitBitfield BitfieldVarName);
    void AndBitfieldVariable(FGameLogicVarAndValueBitfield VarAndValue);
}; // Size: 0x460
#pragma pack(pop)
