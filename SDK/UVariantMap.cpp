#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVariantMap.hpp"
int32_t UVariantMap::GetVariantInt32_FromHandle(FVariantMapHandle VarMapHandle, FName Name, int32_t DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantInt32_FromHandle"));
    struct Params_GetVariantInt32_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        int32_t DefaultValue; // 0xc
        bool bFound; // 0x10
        char pad_11[0x3];
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetVariantInt32_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (int32_t)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (int32_t)params.ReturnValue;
}
UVariantMap* UVariantMap::RetrieveVariantMap(FVariantMapHandle VarMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.RetrieveVariantMap"));
    struct Params_RetrieveVariantMap {
        FVariantMapHandle VarMapHandle; // 0x0
        char pad_4[0x4];
        UVariantMap* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RetrieveVariantMap params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UVariantMap*)params.ReturnValue;
}
FVariantMapHandle UVariantMap::GetHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetHandle"));
    struct Params_GetHandle {
        FVariantMapHandle ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHandle params{};
    ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
UVariantMap* UVariantMap::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.VariantMap");
    return (UVariantMap*)res;
}
void UVariantMap::AddVariantName(FName Name, FName Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantName"));
    struct Params_AddVariantName {
        FName Name; // 0x0
        FName Value; // 0x8
    }; // Size: 0x10
    Params_AddVariantName params{};
    params.Name = (FName)Name;
    params.Value = (FName)Value;
    ProcessEvent(func, &params);
}
FRotator UVariantMap::GetVariantFRotator_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FRotator DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFRotator_FromHandle"));
    struct Params_GetVariantFRotator_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FRotator DefaultValue; // 0xc
        bool bFound; // 0x18
        char pad_19[0x3];
        FRotator ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_GetVariantFRotator_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FRotator)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FRotator)params.ReturnValue;
}
bool UVariantMap::VariantExists_FromHandle(FVariantMapHandle VarMapHandle, FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.VariantExists_FromHandle"));
    struct Params_VariantExists_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_VariantExists_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UVariantMap::GetVariantName(FName Name, FName DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantName"));
    struct Params_GetVariantName {
        FName Name; // 0x0
        FName DefaultValue; // 0x8
        bool bFound; // 0x10
        char pad_11[0x3];
        FName ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_GetVariantName params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FName)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FName)params.ReturnValue;
}
void UVariantMap::AddVariantFTransform_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FTransform Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFTransform_FromHandle"));
    struct Params_AddVariantFTransform_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        char pad_c[0x4];
        FTransform Value; // 0x10
    }; // Size: 0x40
    Params_AddVariantFTransform_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FTransform)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UVariantMap::GetVariantFString(FName Name, FString DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFString"));
    struct Params_GetVariantFString {
        FName Name; // 0x0
        FString DefaultValue; // 0x8
        bool bFound; // 0x18
        char pad_19[0x7];
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetVariantFString params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FString)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FString)params.ReturnValue;
}
bool UVariantMap::VariantExists(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.VariantExists"));
    struct Params_VariantExists {
        FName Name; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_VariantExists params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UVariantMap::AddVariantFTransform(FName Name, FTransform Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFTransform"));
    struct Params_AddVariantFTransform {
        FName Name; // 0x0
        char pad_8[0x8];
        FTransform Value; // 0x10
    }; // Size: 0x40
    Params_AddVariantFTransform params{};
    params.Name = (FName)Name;
    params.Value = (FTransform)Value;
    ProcessEvent(func, &params);
}
FName UVariantMap::GetVariantName_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FName DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantName_FromHandle"));
    struct Params_GetVariantName_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FName DefaultValue; // 0xc
        bool bFound; // 0x14
        char pad_15[0x3];
        FName ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetVariantName_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FName)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FName)params.ReturnValue;
}
int32_t UVariantMap::GetVariantInt32(FName Name, int32_t DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantInt32"));
    struct Params_GetVariantInt32 {
        FName Name; // 0x0
        int32_t DefaultValue; // 0x8
        bool bFound; // 0xc
        char pad_d[0x3];
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetVariantInt32 params{};
    params.Name = (FName)Name;
    params.DefaultValue = (int32_t)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (int32_t)params.ReturnValue;
}
float UVariantMap::GetVariantFloat(FName Name, float DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFloat"));
    struct Params_GetVariantFloat {
        FName Name; // 0x0
        float DefaultValue; // 0x8
        bool bFound; // 0xc
        char pad_d[0x3];
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetVariantFloat params{};
    params.Name = (FName)Name;
    params.DefaultValue = (float)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (float)params.ReturnValue;
}
FVector UVariantMap::GetVariantFVector_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFVector_FromHandle"));
    struct Params_GetVariantFVector_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FVector DefaultValue; // 0xc
        bool bFound; // 0x18
        char pad_19[0x3];
        FVector ReturnValue; // 0x1c
    }; // Size: 0x28
    Params_GetVariantFVector_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FVector)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FVector)params.ReturnValue;
}
FVector2D UVariantMap::GetVariantFVector2D_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector2D DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFVector2D_FromHandle"));
    struct Params_GetVariantFVector2D_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FVector2D DefaultValue; // 0xc
        bool bFound; // 0x14
        char pad_15[0x3];
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetVariantFVector2D_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FVector2D)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FVector2D)params.ReturnValue;
}
FVector2D UVariantMap::GetVariantFVector2D(FName Name, FVector2D DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFVector2D"));
    struct Params_GetVariantFVector2D {
        FName Name; // 0x0
        FVector2D DefaultValue; // 0x8
        bool bFound; // 0x10
        char pad_11[0x3];
        FVector2D ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_GetVariantFVector2D params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FVector2D)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FVector2D)params.ReturnValue;
}
FVector UVariantMap::GetVariantFVector(FName Name, FVector DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFVector"));
    struct Params_GetVariantFVector {
        FName Name; // 0x0
        FVector DefaultValue; // 0x8
        bool bFound; // 0x14
        char pad_15[0x3];
        FVector ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetVariantFVector params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FVector)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FVector)params.ReturnValue;
}
FTransform UVariantMap::GetVariantFTransform_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FTransform DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFTransform_FromHandle"));
    struct Params_GetVariantFTransform_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        char pad_c[0x4];
        FTransform DefaultValue; // 0x10
        bool bFound; // 0x40
        char pad_41[0xf];
        FTransform ReturnValue; // 0x50
    }; // Size: 0x80
    Params_GetVariantFTransform_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FTransform)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FTransform)params.ReturnValue;
}
FTransform UVariantMap::GetVariantFTransform(FName Name, FTransform DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFTransform"));
    struct Params_GetVariantFTransform {
        FName Name; // 0x0
        char pad_8[0x8];
        FTransform DefaultValue; // 0x10
        bool bFound; // 0x40
        char pad_41[0xf];
        FTransform ReturnValue; // 0x50
    }; // Size: 0x80
    Params_GetVariantFTransform params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FTransform)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FTransform)params.ReturnValue;
}
FString UVariantMap::GetVariantFString_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FString DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFString_FromHandle"));
    struct Params_GetVariantFString_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        char pad_c[0x4];
        FString DefaultValue; // 0x10
        bool bFound; // 0x20
        char pad_21[0x7];
        FString ReturnValue; // 0x28
    }; // Size: 0x38
    Params_GetVariantFString_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (FString)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FString)params.ReturnValue;
}
FRotator UVariantMap::GetVariantFRotator(FName Name, FRotator DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFRotator"));
    struct Params_GetVariantFRotator {
        FName Name; // 0x0
        FRotator DefaultValue; // 0x8
        bool bFound; // 0x14
        char pad_15[0x3];
        FRotator ReturnValue; // 0x18
    }; // Size: 0x24
    Params_GetVariantFRotator params{};
    params.Name = (FName)Name;
    params.DefaultValue = (FRotator)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (FRotator)params.ReturnValue;
}
FVariantMapHandle UVariantMap::DuplicateVariantMap(FVariantMapHandle VarMapHandle, bool bDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.DuplicateVariantMap"));
    struct Params_DuplicateVariantMap {
        FVariantMapHandle VarMapHandle; // 0x0
        bool bDestroy; // 0x4
        char pad_5[0x3];
        FVariantMapHandle ReturnValue; // 0x8
    }; // Size: 0xc
    Params_DuplicateVariantMap params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.bDestroy = (bool)bDestroy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
float UVariantMap::GetVariantFloat_FromHandle(FVariantMapHandle VarMapHandle, FName Name, float DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantFloat_FromHandle"));
    struct Params_GetVariantFloat_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        float DefaultValue; // 0xc
        bool bFound; // 0x10
        char pad_11[0x3];
        float ReturnValue; // 0x14
    }; // Size: 0x18
    Params_GetVariantFloat_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (float)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (float)params.ReturnValue;
}
bool UVariantMap::GetVariantBool_FromHandle(FVariantMapHandle VarMapHandle, FName Name, bool DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantBool_FromHandle"));
    struct Params_GetVariantBool_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        bool DefaultValue; // 0xc
        bool bFound; // 0xd
        bool ReturnValue; // 0xe
    }; // Size: 0xf
    Params_GetVariantBool_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.DefaultValue = (bool)DefaultValue;
    params.bFound = (bool)bFound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bFound = params.bFound;
    return (bool)params.ReturnValue;
}
bool UVariantMap::GetVariantBool(FName Name, bool DefaultValue, bool& bFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetVariantBool"));
    struct Params_GetVariantBool {
        FName Name; // 0x0
        bool DefaultValue; // 0x8
        bool bFound; // 0x9
        bool ReturnValue; // 0xa
    }; // Size: 0xb
    Params_GetVariantBool params{};
    params.Name = (FName)Name;
    params.DefaultValue = (bool)DefaultValue;
    params.bFound = (bool)bFound;
    ProcessEvent(func, &params);
    bFound = params.bFound;
    return (bool)params.ReturnValue;
}
void UVariantMap::AddVariantFloat(FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFloat"));
    struct Params_AddVariantFloat {
        FName Name; // 0x0
        float Value; // 0x8
    }; // Size: 0xc
    Params_AddVariantFloat params{};
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
FVariantMapHandle UVariantMap::GetHandle_FromObject(UObject* InObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.GetHandle_FromObject"));
    struct Params_GetHandle_FromObject {
        UObject* InObject; // 0x0
        FVariantMapHandle ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetHandle_FromObject params{};
    params.InObject = (UObject*)InObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
FVariantMapHandle UVariantMap::DestroyVariantMap(FVariantMapHandle VarMapHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.DestroyVariantMap"));
    struct Params_DestroyVariantMap {
        FVariantMapHandle VarMapHandle; // 0x0
        FVariantMapHandle ReturnValue; // 0x4
    }; // Size: 0x8
    Params_DestroyVariantMap params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
FVariantMapHandle UVariantMap::CreateVariantMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.CreateVariantMap"));
    struct Params_CreateVariantMap {
        FVariantMapHandle ReturnValue; // 0x0
    }; // Size: 0x4
    Params_CreateVariantMap params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
void UVariantMap::AddVariantInt32_FromHandle(FVariantMapHandle VarMapHandle, FName Name, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantInt32_FromHandle"));
    struct Params_AddVariantInt32_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        int32_t Value; // 0xc
    }; // Size: 0x10
    Params_AddVariantInt32_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantName_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FName Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantName_FromHandle"));
    struct Params_AddVariantName_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FName Value; // 0xc
    }; // Size: 0x14
    Params_AddVariantName_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FName)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantBool(FName Name, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantBool"));
    struct Params_AddVariantBool {
        FName Name; // 0x0
        bool Value; // 0x8
    }; // Size: 0x9
    Params_AddVariantBool params{};
    params.Name = (FName)Name;
    params.Value = (bool)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFVector(FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFVector"));
    struct Params_AddVariantFVector {
        FName Name; // 0x0
        FVector Value; // 0x8
    }; // Size: 0x14
    Params_AddVariantFVector params{};
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantInt32(FName Name, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantInt32"));
    struct Params_AddVariantInt32 {
        FName Name; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_AddVariantInt32 params{};
    params.Name = (FName)Name;
    params.Value = (int32_t)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFVector_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFVector_FromHandle"));
    struct Params_AddVariantFVector_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FVector Value; // 0xc
    }; // Size: 0x18
    Params_AddVariantFVector_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FVector)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFVector2D(FName Name, FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFVector2D"));
    struct Params_AddVariantFVector2D {
        FName Name; // 0x0
        FVector2D Value; // 0x8
    }; // Size: 0x10
    Params_AddVariantFVector2D params{};
    params.Name = (FName)Name;
    params.Value = (FVector2D)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFVector2D_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FVector2D Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFVector2D_FromHandle"));
    struct Params_AddVariantFVector2D_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FVector2D Value; // 0xc
    }; // Size: 0x14
    Params_AddVariantFVector2D_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FVector2D)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFRotator_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FRotator Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFRotator_FromHandle"));
    struct Params_AddVariantFRotator_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        FRotator Value; // 0xc
    }; // Size: 0x18
    Params_AddVariantFRotator_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FRotator)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFString_FromHandle(FVariantMapHandle VarMapHandle, FName Name, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFString_FromHandle"));
    struct Params_AddVariantFString_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        char pad_c[0x4];
        FString Value; // 0x10
    }; // Size: 0x20
    Params_AddVariantFString_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFString(FName Name, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFString"));
    struct Params_AddVariantFString {
        FName Name; // 0x0
        FString Value; // 0x8
    }; // Size: 0x18
    Params_AddVariantFString params{};
    params.Name = (FName)Name;
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFRotator(FName Name, FRotator Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFRotator"));
    struct Params_AddVariantFRotator {
        FName Name; // 0x0
        FRotator Value; // 0x8
    }; // Size: 0x14
    Params_AddVariantFRotator params{};
    params.Name = (FName)Name;
    params.Value = (FRotator)Value;
    ProcessEvent(func, &params);
}
void UVariantMap::AddVariantFloat_FromHandle(FVariantMapHandle VarMapHandle, FName Name, float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantFloat_FromHandle"));
    struct Params_AddVariantFloat_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        float Value; // 0xc
    }; // Size: 0x10
    Params_AddVariantFloat_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (float)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AddVariantBool_FromHandle(FVariantMapHandle VarMapHandle, FName Name, bool Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AddVariantBool_FromHandle"));
    struct Params_AddVariantBool_FromHandle {
        FVariantMapHandle VarMapHandle; // 0x0
        FName Name; // 0x4
        bool Value; // 0xc
    }; // Size: 0xd
    Params_AddVariantBool_FromHandle params{};
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.Name = (FName)Name;
    params.Value = (bool)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AbsorbVariantMap_FromHandle(FVariantMapHandle MasterVarMapHandle, FVariantMapHandle VarMapHandleToAbsorb) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AbsorbVariantMap_FromHandle"));
    struct Params_AbsorbVariantMap_FromHandle {
        FVariantMapHandle MasterVarMapHandle; // 0x0
        FVariantMapHandle VarMapHandleToAbsorb; // 0x4
    }; // Size: 0x8
    Params_AbsorbVariantMap_FromHandle params{};
    params.MasterVarMapHandle = (FVariantMapHandle)MasterVarMapHandle;
    params.VarMapHandleToAbsorb = (FVariantMapHandle)VarMapHandleToAbsorb;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVariantMap::AbsorbVariantMap(UVariantMap* VarMapHandleToAbsorb) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.VariantMap.AbsorbVariantMap"));
    struct Params_AbsorbVariantMap {
        UVariantMap* VarMapHandleToAbsorb; // 0x0
    }; // Size: 0x8
    Params_AbsorbVariantMap params{};
    params.VarMapHandleToAbsorb = (UVariantMap*)VarMapHandleToAbsorb;
    ProcessEvent(func, &params);
}
