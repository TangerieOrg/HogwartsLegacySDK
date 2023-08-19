#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigVMByteCode.hpp"
#include "FRigVMExecuteContext.hpp"
#include "FRigVMInstructionArray.hpp"
#include "FRigVMMemoryContainer.hpp"
#include "FRigVMParameter.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UScriptStruct;
#pragma pack(push, 1)
class URigVM : public UObject {
public:
    FRigVMMemoryContainer WorkMemoryStorage; // 0x28
    char pad_c8[0x8];
    FRigVMMemoryContainer LiteralMemoryStorage; // 0xd0
    char pad_170[0x8];
    FRigVMByteCode ByteCodeStorage; // 0x178
    char pad_1a8[0x8];
    FRigVMInstructionArray Instructions; // 0x1b0
    FRigVMExecuteContext Context; // 0x1c0
    TArray<FName> FunctionNamesStorage; // 0x218
    char pad_228[0x20];
    TArray<FRigVMParameter> Parameters; // 0x248
    char pad_258[0x98];
    URigVM* DeferredVMToCopy; // 0x2f0
    static URigVM* StaticClass();
    void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);
    void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);
    void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);
    void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);
    void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);
    void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);
    void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);
    void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);
    void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);
    FString GetRigVMFunctionName(int32_t InFunctionIndex);
    FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);
    FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);
    FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);
    FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);
    FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);
    FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);
    int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);
    float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);
    bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);
    int32_t GetParameterArraySize(FName& InParameterName);
    bool Execute(FName& InEntryName);
    int32_t AddRigVMFunction(UScriptStruct* InRigVMStruct, FName& InMethodName);
}; // Size: 0x2f8
#pragma pack(pop)
