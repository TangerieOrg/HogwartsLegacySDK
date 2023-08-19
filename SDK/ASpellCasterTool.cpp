#include "AActor.hpp"
#include "AItemTool.hpp"
#include "AMunitionType_Base.hpp"
#include "ASpellCasterTool.hpp"
#include "EEnemyShieldBreaker.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "USpellToolRecord.hpp"
#include "UToolSetComponent.hpp"
ASpellCasterTool* ASpellCasterTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellCasterTool");
    return (ASpellCasterTool*)res;
}
void ASpellCasterTool::StopSpell(AMunitionType_Base* InMunition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCasterTool.StopSpell"));
    struct Params_StopSpell {
        AMunitionType_Base* InMunition; // 0x0
    }; // Size: 0x8
    Params_StopSpell params{};
    params.InMunition = (AMunitionType_Base*)InMunition;
    ProcessEvent(func, &params);
}
void ASpellCasterTool::CastSpell(USpellToolRecord* SpellToolRecord, AActor* Target, FVector InSourceLocation, FRotator& Orientation, float AccuracyOffset, float InObjDamage, float InCharDamage, bool bAffectTarget, float SpellTime, int32_t SpellLevel, bool bAlwaysHitTargetActor, bool bVelocityIncludeTarget, bool bUnblockableAgainstPlayer, EEnemyShieldBreaker UnblockableLByNPCLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellCasterTool.CastSpell"));
    struct Params_CastSpell {
        USpellToolRecord* SpellToolRecord; // 0x0
        AActor* Target; // 0x8
        FVector InSourceLocation; // 0x10
        FRotator Orientation; // 0x1c
        float AccuracyOffset; // 0x28
        float InObjDamage; // 0x2c
        float InCharDamage; // 0x30
        bool bAffectTarget; // 0x34
        char pad_35[0x3];
        float SpellTime; // 0x38
        int32_t SpellLevel; // 0x3c
        bool bAlwaysHitTargetActor; // 0x40
        bool bVelocityIncludeTarget; // 0x41
        bool bUnblockableAgainstPlayer; // 0x42
        EEnemyShieldBreaker UnblockableLByNPCLevel; // 0x43
    }; // Size: 0x44
    Params_CastSpell params{};
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.Target = (AActor*)Target;
    params.InSourceLocation = (FVector)InSourceLocation;
    params.Orientation = (FRotator)Orientation;
    params.AccuracyOffset = (float)AccuracyOffset;
    params.InObjDamage = (float)InObjDamage;
    params.InCharDamage = (float)InCharDamage;
    params.bAffectTarget = (bool)bAffectTarget;
    params.SpellTime = (float)SpellTime;
    params.SpellLevel = (int32_t)SpellLevel;
    params.bAlwaysHitTargetActor = (bool)bAlwaysHitTargetActor;
    params.bVelocityIncludeTarget = (bool)bVelocityIncludeTarget;
    params.bUnblockableAgainstPlayer = (bool)bUnblockableAgainstPlayer;
    params.UnblockableLByNPCLevel = (EEnemyShieldBreaker)UnblockableLByNPCLevel;
    ProcessEvent(func, &params);
    Orientation = params.Orientation;
}
