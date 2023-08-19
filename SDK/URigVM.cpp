#include "FQuat.hpp"
#include "FRigVMByteCode.hpp"
#include "FRigVMExecuteContext.hpp"
#include "FRigVMInstructionArray.hpp"
#include "FRigVMMemoryContainer.hpp"
#include "FRigVMParameter.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URigVM.hpp"
#include "UScriptStruct.hpp"
void URigVM::SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueInt"));
    struct Params_SetParameterValueInt {
        FName InParameterName; // 0x0
        int32_t InValue; // 0x8
        int32_t InArrayIndex; // 0xc
    }; // Size: 0x10
    Params_SetParameterValueInt params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (int32_t)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
}
URigVM* URigVM::StaticClass() {
    static auto res = find_uobject("Class /Script/RigVM.RigVM");
    return (URigVM*)res;
}
void URigVM::SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueName"));
    struct Params_SetParameterValueName {
        FName InParameterName; // 0x0
        FName InValue; // 0x8
        int32_t InArrayIndex; // 0x10
    }; // Size: 0x14
    Params_SetParameterValueName params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FName)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    InValue = params.InValue;
}
void URigVM::SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueVector2D"));
    struct Params_SetParameterValueVector2D {
        FName InParameterName; // 0x0
        FVector2D InValue; // 0x8
        int32_t InArrayIndex; // 0x10
    }; // Size: 0x14
    Params_SetParameterValueVector2D params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FVector2D)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    InValue = params.InValue;
}
void URigVM::SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueVector"));
    struct Params_SetParameterValueVector {
        FName InParameterName; // 0x0
        FVector InValue; // 0x8
        int32_t InArrayIndex; // 0x14
    }; // Size: 0x18
    Params_SetParameterValueVector params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FVector)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    InValue = params.InValue;
}
void URigVM::SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueTransform"));
    struct Params_SetParameterValueTransform {
        FName InParameterName; // 0x0
        char pad_8[0x8];
        FTransform InValue; // 0x10
        int32_t InArrayIndex; // 0x40
    }; // Size: 0x44
    Params_SetParameterValueTransform params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FTransform)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InValue = params.InValue;
    InParameterName = params.InParameterName;
}
void URigVM::SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueString"));
    struct Params_SetParameterValueString {
        FName InParameterName; // 0x0
        FString InValue; // 0x8
        int32_t InArrayIndex; // 0x18
    }; // Size: 0x1c
    Params_SetParameterValueString params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FString)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
}
void URigVM::SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueQuat"));
    struct Params_SetParameterValueQuat {
        FName InParameterName; // 0x0
        char pad_8[0x8];
        FQuat InValue; // 0x10
        int32_t InArrayIndex; // 0x20
    }; // Size: 0x24
    Params_SetParameterValueQuat params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (FQuat)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    InValue = params.InValue;
}
bool URigVM::GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueBool"));
    struct Params_GetParameterValueBool {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetParameterValueBool params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (bool)params.ReturnValue;
}
void URigVM::SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueFloat"));
    struct Params_SetParameterValueFloat {
        FName InParameterName; // 0x0
        float InValue; // 0x8
        int32_t InArrayIndex; // 0xc
    }; // Size: 0x10
    Params_SetParameterValueFloat params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (float)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
}
void URigVM::SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.SetParameterValueBool"));
    struct Params_SetParameterValueBool {
        FName InParameterName; // 0x0
        bool InValue; // 0x8
        char pad_9[0x3];
        int32_t InArrayIndex; // 0xc
    }; // Size: 0x10
    Params_SetParameterValueBool params{};
    params.InParameterName = (FName)InParameterName;
    params.InValue = (bool)InValue;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
}
FName URigVM::GetParameterValueName(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueName"));
    struct Params_GetParameterValueName {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        FName ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetParameterValueName params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FName)params.ReturnValue;
}
FString URigVM::GetRigVMFunctionName(int32_t InFunctionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetRigVMFunctionName"));
    struct Params_GetRigVMFunctionName {
        int32_t InFunctionIndex; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetRigVMFunctionName params{};
    params.InFunctionIndex = (int32_t)InFunctionIndex;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FVector2D URigVM::GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueVector2D"));
    struct Params_GetParameterValueVector2D {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetParameterValueVector2D params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FVector2D)params.ReturnValue;
}
FVector URigVM::GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueVector"));
    struct Params_GetParameterValueVector {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_GetParameterValueVector params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FVector)params.ReturnValue;
}
FTransform URigVM::GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueTransform"));
    struct Params_GetParameterValueTransform {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        char pad_c[0x4];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetParameterValueTransform params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FTransform)params.ReturnValue;
}
FString URigVM::GetParameterValueString(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueString"));
    struct Params_GetParameterValueString {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        char pad_c[0x4];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetParameterValueString params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FString)params.ReturnValue;
}
FQuat URigVM::GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueQuat"));
    struct Params_GetParameterValueQuat {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        char pad_c[0x4];
        FQuat ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetParameterValueQuat params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (FQuat)params.ReturnValue;
}
int32_t URigVM::GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueInt"));
    struct Params_GetParameterValueInt {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetParameterValueInt params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (int32_t)params.ReturnValue;
}
float URigVM::GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterValueFloat"));
    struct Params_GetParameterValueFloat {
        FName InParameterName; // 0x0
        int32_t InArrayIndex; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetParameterValueFloat params{};
    params.InParameterName = (FName)InParameterName;
    params.InArrayIndex = (int32_t)InArrayIndex;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (float)params.ReturnValue;
}
int32_t URigVM::GetParameterArraySize(FName& InParameterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.GetParameterArraySize"));
    struct Params_GetParameterArraySize {
        FName InParameterName; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetParameterArraySize params{};
    params.InParameterName = (FName)InParameterName;
    ProcessEvent(func, &params);
    InParameterName = params.InParameterName;
    return (int32_t)params.ReturnValue;
}
bool URigVM::Execute(FName& InEntryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.Execute"));
    struct Params_Execute {
        FName InEntryName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_Execute params{};
    params.InEntryName = (FName)InEntryName;
    ProcessEvent(func, &params);
    InEntryName = params.InEntryName;
    return (bool)params.ReturnValue;
}
int32_t URigVM::AddRigVMFunction(UScriptStruct* InRigVMStruct, FName& InMethodName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/RigVM.RigVM.AddRigVMFunction"));
    struct Params_AddRigVMFunction {
        UScriptStruct* InRigVMStruct; // 0x0
        FName InMethodName; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_AddRigVMFunction params{};
    params.InRigVMStruct = (UScriptStruct*)InRigVMStruct;
    params.InMethodName = (FName)InMethodName;
    ProcessEvent(func, &params);
    InMethodName = params.InMethodName;
    return (int32_t)params.ReturnValue;
}
