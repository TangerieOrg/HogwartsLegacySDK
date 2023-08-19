#pragma once
#include <cstdint>
#include "EEnemyShieldBreaker.hpp"
#include "UInterface.hpp"
class AActor;
class ASpellTool;
#pragma pack(push, 1)
class UMunitionSpellInterface : public UInterface {
public:
    static UMunitionSpellInterface* StaticClass();
    void SetPlayerShieldBreaker(bool ShieldBreaker);
    void SetEnemyShieldBreaker(EEnemyShieldBreaker ShieldBreaker);
    bool IsUnblockable(AActor* SpellTarget);
    bool IsPlayerShieldBreaker();
    EEnemyShieldBreaker IsEnemyShieldBreaker();
    ASpellTool* GetSpellTool();
}; // Size: 0x28
#pragma pack(pop)
