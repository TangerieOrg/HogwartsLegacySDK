#pragma once
#include <cstdint>
#include "AItemTool.hpp"
#include "EEnemyShieldBreaker.hpp"
#include "FVector.hpp"
class UToolSetComponent;
class AMunitionType_Base;
class AActor;
class USpellToolRecord;
struct FRotator;
#pragma pack(push, 1)
class ASpellCasterTool : public AItemTool {
public:
    FVector AttachOffset; // 0x2f0
    char pad_2fc[0x4];
    UToolSetComponent* ToolSetComponent; // 0x300
    char pad_308[0x50];
    static ASpellCasterTool* StaticClass();
    void StopSpell(AMunitionType_Base* InMunition);
    void CastSpell(USpellToolRecord* SpellToolRecord, AActor* Target, FVector InSourceLocation, FRotator& Orientation, float AccuracyOffset, float InObjDamage, float InCharDamage, bool bAffectTarget, float SpellTime, int32_t SpellLevel, bool bAlwaysHitTargetActor, bool bVelocityIncludeTarget, bool bUnblockableAgainstPlayer, EEnemyShieldBreaker UnblockableLByNPCLevel);
}; // Size: 0x358
#pragma pack(pop)
