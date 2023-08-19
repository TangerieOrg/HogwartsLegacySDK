#include "AActor.hpp"
#include "AMunitionType_Base.hpp"
#include "APawn.hpp"
#include "FMunitionImpactData.hpp"
#include "FMunitionToInstigatorData.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMunitionsSystem.hpp"
#include "UObject.hpp"
void UMunitionsSystem::SendMunitionImpact(UObject* Owner, UObject* Caller, FMunitionImpactData& miData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SendMunitionImpact"));
    struct Params_SendMunitionImpact {
        UObject* Owner; // 0x0
        UObject* Caller; // 0x8
        FMunitionImpactData miData; // 0x10
    }; // Size: 0x100
    Params_SendMunitionImpact params{};
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.miData = (FMunitionImpactData)miData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    miData = params.miData;
}
UMunitionsSystem* UMunitionsSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Munitions.MunitionsSystem");
    return (UMunitionsSystem*)res;
}
void UMunitionsSystem::SendSpellMadeContact(UObject* Owner, UObject* Caller, FMunitionImpactData& miData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SendSpellMadeContact"));
    struct Params_SendSpellMadeContact {
        UObject* Owner; // 0x0
        UObject* Caller; // 0x8
        FMunitionImpactData miData; // 0x10
    }; // Size: 0x100
    Params_SendSpellMadeContact params{};
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.miData = (FMunitionImpactData)miData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    miData = params.miData;
}
AMunitionType_Base* UMunitionsSystem::SpawnMunition(UClass* MunitionClass, AActor* MunitionOwner, APawn* Instigator, FVector& SourcePos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SpawnMunition"));
    struct Params_SpawnMunition {
        UClass* MunitionClass; // 0x0
        AActor* MunitionOwner; // 0x8
        APawn* Instigator; // 0x10
        FVector SourcePos; // 0x18
        char pad_24[0x4];
        AMunitionType_Base* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_SpawnMunition params{};
    params.MunitionClass = (UClass*)MunitionClass;
    params.MunitionOwner = (AActor*)MunitionOwner;
    params.Instigator = (APawn*)Instigator;
    params.SourcePos = (FVector)SourcePos;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourcePos = params.SourcePos;
    return (AMunitionType_Base*)params.ReturnValue;
}
void UMunitionsSystem::SetMunitionImpactFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SetMunitionImpactFailed"));
    struct Params_SetMunitionImpactFailed {
    }; // Size: 0x0
    Params_SetMunitionImpactFailed params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMunitionsSystem::SendMunitionImpactDamage(UObject* Owner, UObject* Caller, FMunitionImpactData& miData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SendMunitionImpactDamage"));
    struct Params_SendMunitionImpactDamage {
        UObject* Owner; // 0x0
        UObject* Caller; // 0x8
        FMunitionImpactData miData; // 0x10
    }; // Size: 0x100
    Params_SendMunitionImpactDamage params{};
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.miData = (FMunitionImpactData)miData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    miData = params.miData;
}
bool UMunitionsSystem::SendMunitionImpactCombined(UObject* Owner, UObject* Caller, FMunitionImpactData& miData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.SendMunitionImpactCombined"));
    struct Params_SendMunitionImpactCombined {
        UObject* Owner; // 0x0
        UObject* Caller; // 0x8
        FMunitionImpactData miData; // 0x10
        bool ReturnValue; // 0x100
    }; // Size: 0x101
    Params_SendMunitionImpactCombined params{};
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.miData = (FMunitionImpactData)miData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    miData = params.miData;
    return (bool)params.ReturnValue;
}
void UMunitionsSystem::MunitionToInstigator(UObject* Owner, UObject* Caller, FMunitionToInstigatorData& mtoIData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.MunitionToInstigator"));
    struct Params_MunitionToInstigator {
        UObject* Owner; // 0x0
        UObject* Caller; // 0x8
        FMunitionToInstigatorData mtoIData; // 0x10
    }; // Size: 0x28
    Params_MunitionToInstigator params{};
    params.Owner = (UObject*)Owner;
    params.Caller = (UObject*)Caller;
    params.mtoIData = (FMunitionToInstigatorData)mtoIData;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    mtoIData = params.mtoIData;
}
void UMunitionsSystem::DestroySpawnedMunition(AMunitionType_Base* Munition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Munitions.MunitionsSystem.DestroySpawnedMunition"));
    struct Params_DestroySpawnedMunition {
        AMunitionType_Base* Munition; // 0x0
    }; // Size: 0x8
    Params_DestroySpawnedMunition params{};
    params.Munition = (AMunitionType_Base*)Munition;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
