#include "AMunitionType_Base.hpp"
#include "FMunitionImpactData.hpp"
#include "FTargetedByMunition.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMunitionsBPLibrary.hpp"
#include "UObject.hpp"
void UMunitionsBPLibrary::HermesMunitionTypeDelegate__DelegateSignature(UObject* Caller, AMunitionType_Base* MunitionType) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionsBPLibrary.HermesMunitionTypeDelegate__DelegateSignature"));
    struct Params_HermesMunitionTypeDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        AMunitionType_Base* MunitionType; // 0x8
    }; // Size: 0x10
    Params_HermesMunitionTypeDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.MunitionType = (AMunitionType_Base*)MunitionType;
    ProcessEvent(func, &params);
}
UMunitionsBPLibrary* UMunitionsBPLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionsBPLibrary");
    return (UMunitionsBPLibrary*)res;
}
void UMunitionsBPLibrary::HermesBindTargetedByMunitionWithData() {}
void UMunitionsBPLibrary::HermesTargetedByMunitionWithDataDelegate__DelegateSignature(UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionsBPLibrary.HermesTargetedByMunitionWithDataDelegate__DelegateSignature"));
    struct Params_HermesTargetedByMunitionWithDataDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FTargetedByMunition TargetedByMunitionWithData; // 0x8
    }; // Size: 0x38
    Params_HermesTargetedByMunitionWithDataDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.TargetedByMunitionWithData = (FTargetedByMunition)TargetedByMunitionWithData;
    ProcessEvent(func, &params);
    TargetedByMunitionWithData = params.TargetedByMunitionWithData;
}
void UMunitionsBPLibrary::HermesMunitionImpactDataDelegate__DelegateSignature(UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Munitions.MunitionsBPLibrary.HermesMunitionImpactDataDelegate__DelegateSignature"));
    struct Params_HermesMunitionImpactDataDelegate__DelegateSignature {
        UObject* Caller; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_HermesMunitionImpactDataDelegate__DelegateSignature params{};
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UMunitionsBPLibrary::HermesExecuteAllTargetedByMunitionWithData(FString Name, UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteAllTargetedByMunitionWithData"));
    struct Params_HermesExecuteAllTargetedByMunitionWithData {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FTargetedByMunition TargetedByMunitionWithData; // 0x18
    }; // Size: 0x48
    Params_HermesExecuteAllTargetedByMunitionWithData params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.TargetedByMunitionWithData = (FTargetedByMunition)TargetedByMunitionWithData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetedByMunitionWithData = params.TargetedByMunitionWithData;
}
void UMunitionsBPLibrary::HermesExecuteOwnedTargetedByMunitionWithData(FString Name, UObject* Owner, UObject* Caller, FTargetedByMunition& TargetedByMunitionWithData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteOwnedTargetedByMunitionWithData"));
    struct Params_HermesExecuteOwnedTargetedByMunitionWithData {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FTargetedByMunition TargetedByMunitionWithData; // 0x20
    }; // Size: 0x50
    Params_HermesExecuteOwnedTargetedByMunitionWithData params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.TargetedByMunitionWithData = (FTargetedByMunition)TargetedByMunitionWithData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetedByMunitionWithData = params.TargetedByMunitionWithData;
}
void UMunitionsBPLibrary::HermesExecuteOwnedMunitionType(FString Name, UObject* Owner, UObject* Caller, AMunitionType_Base* MunitionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteOwnedMunitionType"));
    struct Params_HermesExecuteOwnedMunitionType {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        AMunitionType_Base* MunitionType; // 0x20
    }; // Size: 0x28
    Params_HermesExecuteOwnedMunitionType params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.MunitionType = (AMunitionType_Base*)MunitionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMunitionsBPLibrary::HermesExecuteOwnedMunitionImpactData(FString Name, UObject* Owner, UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteOwnedMunitionImpactData"));
    struct Params_HermesExecuteOwnedMunitionImpactData {
        FString Name; // 0x0
        UObject* Owner; // 0x10
        UObject* Caller; // 0x18
        FMunitionImpactData MunitionImpactData; // 0x20
    }; // Size: 0x110
    Params_HermesExecuteOwnedMunitionImpactData params{};
    params.Name = (FString)Name;
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UMunitionsBPLibrary::HermesExecuteAllMunitionType(FString Name, UObject* Caller, AMunitionType_Base* MunitionType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteAllMunitionType"));
    struct Params_HermesExecuteAllMunitionType {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        AMunitionType_Base* MunitionType; // 0x18
    }; // Size: 0x20
    Params_HermesExecuteAllMunitionType params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.MunitionType = (AMunitionType_Base*)MunitionType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMunitionsBPLibrary::HermesBindMunitionImpactData() {}
void UMunitionsBPLibrary::HermesExecuteAllMunitionImpactData(FString Name, UObject* Caller, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsBPLibrary.HermesExecuteAllMunitionImpactData"));
    struct Params_HermesExecuteAllMunitionImpactData {
        FString Name; // 0x0
        UObject* Caller; // 0x10
        FMunitionImpactData MunitionImpactData; // 0x18
    }; // Size: 0x108
    Params_HermesExecuteAllMunitionImpactData params{};
    params.Name = (FString)Name;
    params.Caller = (UObject*)Caller;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void UMunitionsBPLibrary::HermesBindMunitionType() {}
