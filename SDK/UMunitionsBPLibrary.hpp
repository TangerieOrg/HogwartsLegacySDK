#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
struct FTargetedByMunition;
class AMunitionType_Base;
struct FMunitionImpactData;
#pragma pack(push, 1)
class UMunitionsBPLibrary : public UBlueprintFunctionLibrary {
public:
    static UMunitionsBPLibrary* StaticClass();
    void HermesTargetedByMunitionWithDataDelegate__DelegateSignature(UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData);
    void HermesMunitionTypeDelegate__DelegateSignature(UObject* Caller, AMunitionType_Base* MunitionType);
    void HermesMunitionImpactDataDelegate__DelegateSignature(UObject* Caller, FMunitionImpactData& MunitionImpactData);
    static void HermesExecuteOwnedTargetedByMunitionWithData(FString Name, UObject* Owner, UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData);
    static void HermesExecuteOwnedMunitionType(FString Name, UObject* Owner, UObject* Caller, AMunitionType_Base* MunitionType);
    static void HermesExecuteOwnedMunitionImpactData(FString Name, UObject* Owner, UObject* Caller, FMunitionImpactData& MunitionImpactData);
    static void HermesExecuteAllTargetedByMunitionWithData(FString Name, UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData);
    static void HermesExecuteAllMunitionType(FString Name, UObject* Caller, AMunitionType_Base* MunitionType);
    static void HermesExecuteAllMunitionImpactData(FString Name, UObject* Caller, FMunitionImpactData& MunitionImpactData);
    static void HermesBindTargetedByMunitionWithData();
    static void HermesBindMunitionType();
    static void HermesBindMunitionImpactData();
}; // Size: 0x28
#pragma pack(pop)
