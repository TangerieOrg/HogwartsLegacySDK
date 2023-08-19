#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UInventoryAbilityManager : public UObject {
public:
    char pad_28[0x50];
    FName PolyJuiceCharacter; // 0x78
    float CurrentEffectiveness; // 0x80
    char pad_84[0xc];
    static UInventoryAbilityManager* StaticClass();
    void SetPolyJuiceCharacter(FName PolyJuiceCharacterName);
    void OnGameToBeSaved();
    void OnGameToBeLoaded();
    FName GetPolyJuiceCharacter();
    float GetItemeffectivenessMultiplier(AActor* OwnerActor, FName ItemName);
    float GetCurrentEffectivenessMultiplier();
    void AddWellRestedToPlayer();
    void AddWellFedToPlayer();
    void AddSocialNotorietyToPlayer();
    void AddSocialInfamousToPlayer();
    void AddPermenantWellRestedToPlayer();
    void AddPermenantWellFedToPlayer();
    void AddOrRefreshAbility(AActor* OwnerActor, FName ItemName, FName Name);
    void AddHouseLeaderToPlayer();
}; // Size: 0x90
#pragma pack(pop)
