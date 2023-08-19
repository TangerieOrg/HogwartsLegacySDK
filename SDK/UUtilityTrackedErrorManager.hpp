#pragma once
#include <cstdint>
#include "EUtilityTrackedErrorType.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UUtilityTrackedErrorManager : public UObject {
public:
    char pad_28[0xf8];
    static UUtilityTrackedErrorManager* StaticClass();
    void ResetError_Type(AActor* InOwner, EUtilityTrackedErrorType InType);
    void ResetError_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType);
    void ResetError_NameAccessory(AActor* InOwner, FName InName, AActor* InAccessory);
    void ResetError_Name(AActor* InOwner, FName InName);
    void ResetError_AccessoryType(AActor* InOwner, AActor* InAccessory, EUtilityTrackedErrorType InType);
    void ResetError_Accessory(AActor* InOwner, AActor* InAccessory);
    void ResetError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType);
    void ReportError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType, float InTimeToReset);
    bool IsReportedError_Type(AActor* InOwner, EUtilityTrackedErrorType InType);
    bool IsReportedError_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType);
    bool IsReportedError_NameAccessory(AActor* InOwner, FName InName, AActor* InAccessory);
    bool IsReportedError_Name(AActor* InOwner, FName InName);
    bool IsReportedError_AccessoryType(AActor* InOwner, AActor* InAccessory, EUtilityTrackedErrorType InType);
    bool IsReportedError_Accessory(AActor* InOwner, AActor* InAccessory);
    bool IsReportedError(AActor* InOwner, FName InName, AActor* InAccessory, EUtilityTrackedErrorType InType);
    void GetAccessories_Type(AActor* InOwner, EUtilityTrackedErrorType InType);
    void GetAccessories_NameType(AActor* InOwner, FName InName, EUtilityTrackedErrorType InType);
    static UUtilityTrackedErrorManager* Get();
}; // Size: 0x120
#pragma pack(pop)
