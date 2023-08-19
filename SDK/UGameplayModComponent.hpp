#pragma once
#include <cstdint>
#include "FModEntry.hpp"
#include "UActorComponent.hpp"
struct FGameplayTag;
class UGameplayPropertyMod;
class UGameplayPropertyModGroup;
class UObject;
#pragma pack(push, 1)
class UGameplayModComponent : public UActorComponent {
public:
    TArray<FModEntry> ModEntries; // 0xc8
    TArray<FModEntry> LocalModEntries; // 0xd8
    TArray<FModEntry> UnreplicatedModEntries; // 0xe8
    char pad_f8[0xa0];
    static UGameplayModComponent* StaticClass();
    void SetModBlackboardValue(FGameplayTag& Tag, float Value, bool bForceRecomputeProperties);
    void ServerRemoveMod(UGameplayPropertyMod* InMod);
    void ServerRemoveGroup(UGameplayPropertyModGroup* InModGroup);
    void ServerAddMod(UGameplayPropertyMod* InMod);
    void ServerAddGroup(UGameplayPropertyModGroup* InModGroup);
    void RemoveTargetModdable(UObject* InTarget);
    void RemoveModReplicated(UGameplayPropertyMod* InMod);
    void RemoveMod(UGameplayPropertyMod* InMod);
    void RemoveGroupReplicated(UGameplayPropertyModGroup* InModGroup);
    void RemoveGroup(UGameplayPropertyModGroup* InModGroup);
    void OnRep_ModEntries();
    bool GetModBlackboardValue(FGameplayTag& Tag, float& OutValue);
    void ExpungeTargetModdable(UObject* InTarget);
    void DelayedRemoveMod(UGameplayPropertyMod* InMod);
    void ClientRemoveModManualReplication(UGameplayPropertyMod* InMod);
    void ClientRemoveGroupManualReplication(UGameplayPropertyModGroup* InModGroup);
    void ClientAddModManualReplication(UGameplayPropertyMod* InMod);
    void ClientAddGroupManualReplication(UGameplayPropertyModGroup* InModGroup);
    void AutoDetectModdables();
    void AddTargetModdable(UObject* InTarget);
    void AddModReplicated(UGameplayPropertyMod* InMod);
    void AddMod(UGameplayPropertyMod* InMod);
    void AddGroupReplicated(UGameplayPropertyModGroup* InModGroup);
    void AddGroup(UGameplayPropertyModGroup* InModGroup);
}; // Size: 0x198
#pragma pack(pop)
