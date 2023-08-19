#include "AActor.hpp"
#include "EUtilityTrackedErrorType.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUtilityTrackedErrorManager.hpp"
UUtilityTrackedErrorManager* UUtilityTrackedErrorManager::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.UtilityTrackedErrorManager");
    return (UUtilityTrackedErrorManager*)res;
}
void UUtilityTrackedErrorManager::ResetError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError"));
    struct Params_ResetError {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        AActor* InAccessory; // 0x10
        EUtilityTrackedErrorType InType; // 0x18
    }; // Size: 0x19
    Params_ResetError params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InAccessory = (AActor*)InAccessory;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_Accessory(AActor* InOwner, AActor* InAccessory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_Accessory"));
    struct Params_ResetError_Accessory {
        AActor* InOwner; // 0x0
        AActor* InAccessory; // 0x8
    }; // Size: 0x10
    Params_ResetError_Accessory params{};
    params.InOwner = (AActor*)InOwner;
    params.InAccessory = (AActor*)InAccessory;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_Type(AActor* InOwner, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_Type"));
    struct Params_ResetError_Type {
        AActor* InOwner; // 0x0
        EUtilityTrackedErrorType InType; // 0x8
    }; // Size: 0x9
    Params_ResetError_Type params{};
    params.InOwner = (AActor*)InOwner;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_NameType"));
    struct Params_ResetError_NameType {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        EUtilityTrackedErrorType InType; // 0x10
    }; // Size: 0x11
    Params_ResetError_NameType params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_NameAccessory(AActor* InOwner, FName InName, AActor* InAccessory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_NameAccessory"));
    struct Params_ResetError_NameAccessory {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        AActor* InAccessory; // 0x10
    }; // Size: 0x18
    Params_ResetError_NameAccessory params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InAccessory = (AActor*)InAccessory;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_Name(AActor* InOwner, FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_Name"));
    struct Params_ResetError_Name {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
    }; // Size: 0x10
    Params_ResetError_Name params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ResetError_AccessoryType(AActor* InOwner, AActor* InAccessory, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ResetError_AccessoryType"));
    struct Params_ResetError_AccessoryType {
        AActor* InOwner; // 0x0
        AActor* InAccessory; // 0x8
        EUtilityTrackedErrorType InType; // 0x10
    }; // Size: 0x11
    Params_ResetError_AccessoryType params{};
    params.InOwner = (AActor*)InOwner;
    params.InAccessory = (AActor*)InAccessory;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
}
void UUtilityTrackedErrorManager::ReportError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType, float InTimeToReset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.ReportError"));
    struct Params_ReportError {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        AActor* InAccessory; // 0x10
        EUtilityTrackedErrorType InType; // 0x18
        char pad_19[0x3];
        float InTimeToReset; // 0x1c
    }; // Size: 0x20
    Params_ReportError params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InAccessory = (AActor*)InAccessory;
    params.InType = (EUtilityTrackedErrorType)InType;
    params.InTimeToReset = (float)InTimeToReset;
    ProcessEvent(func, &params);
}
bool UUtilityTrackedErrorManager::IsReportedError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError"));
    struct Params_IsReportedError {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        AActor* InAccessory; // 0x10
        EUtilityTrackedErrorType InType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_IsReportedError params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InAccessory = (AActor*)InAccessory;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_Type(AActor* InOwner, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Type"));
    struct Params_IsReportedError_Type {
        AActor* InOwner; // 0x0
        EUtilityTrackedErrorType InType; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_IsReportedError_Type params{};
    params.InOwner = (AActor*)InOwner;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_NameType"));
    struct Params_IsReportedError_NameType {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        EUtilityTrackedErrorType InType; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_IsReportedError_NameType params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_NameAccessory(AActor* InOwner, FName InName, AActor* InAccessory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_NameAccessory"));
    struct Params_IsReportedError_NameAccessory {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        AActor* InAccessory; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsReportedError_NameAccessory params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    params.InAccessory = (AActor*)InAccessory;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_Name(AActor* InOwner, FName InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Name"));
    struct Params_IsReportedError_Name {
        AActor* InOwner; // 0x0
        FName InName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsReportedError_Name params{};
    params.InOwner = (AActor*)InOwner;
    params.InName = (FName)InName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_AccessoryType(AActor* InOwner, AActor* InAccessory, EUtilityTrackedErrorType InType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_AccessoryType"));
    struct Params_IsReportedError_AccessoryType {
        AActor* InOwner; // 0x0
        AActor* InAccessory; // 0x8
        EUtilityTrackedErrorType InType; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_IsReportedError_AccessoryType params{};
    params.InOwner = (AActor*)InOwner;
    params.InAccessory = (AActor*)InAccessory;
    params.InType = (EUtilityTrackedErrorType)InType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUtilityTrackedErrorManager::IsReportedError_Accessory(AActor* InOwner, AActor* InAccessory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.IsReportedError_Accessory"));
    struct Params_IsReportedError_Accessory {
        AActor* InOwner; // 0x0
        AActor* InAccessory; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsReportedError_Accessory params{};
    params.InOwner = (AActor*)InOwner;
    params.InAccessory = (AActor*)InAccessory;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUtilityTrackedErrorManager::GetAccessories_Type(AActor* InOwner, EUtilityTrackedErrorType InType) {}
void UUtilityTrackedErrorManager::GetAccessories_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType) {}
UUtilityTrackedErrorManager* UUtilityTrackedErrorManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTUtilityAI.UtilityTrackedErrorManager.Get"));
    struct Params_Get {
        UUtilityTrackedErrorManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUtilityTrackedErrorManager*)params.ReturnValue;
}
