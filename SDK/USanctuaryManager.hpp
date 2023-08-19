#pragma once
#include <cstdint>
#include "ESanctuaryIdentity.hpp"
#include "FGameplayProperty_Float.hpp"
#include "FSanctuaryExpansionDefinition.hpp"
#include "FTimespan.hpp"
#include "UObject.hpp"
class USanctuaryExpansionManager;
struct FTimeEvent;
class AActor;
class ASanctuaryItemGenerator;
#pragma pack(push, 1)
class USanctuaryManager : public UObject {
public:
    char pad_28[0x20];
    USanctuaryExpansionManager* ExpansionManager; // 0x48
    char pad_50[0x168];
    FGameplayProperty_Float GeneratorTimeMultiplier; // 0x1b8
    char pad_248[0x18];
    static USanctuaryManager* StaticClass();
    void SetInitialSanctuaryCustomizationChoice(UObject* WorldContextObject, FString InChoice);
    void SetCustomNameForChest(int32_t ObjectUID, FString NewName);
    void RemoveCreatureToyFromBiome(AActor* ToyActor);
    void OnToyChestEndPlay(AActor* ToyChestActor);
    void OnToyChestBeginPlay(AActor* ToyChestActor);
    void OnStartNewInterval(FTimeEvent& InTimeEvent);
    void OnSaveGameLoaded();
    void OnSanctuaryItemGeneratorFinished(FTimeEvent& InTimeEvent);
    void OnNewGame();
    FTimespan GetSanctuaryItemGeneratorTimeRemaining(ASanctuaryItemGenerator* ItemGenerator);
    float GetSanctuaryItemGeneratorProgress(ASanctuaryItemGenerator* ItemGenerator);
    void GetSanctuaryItemGeneratorItemHeld(ASanctuaryItemGenerator* ItemGenerator, FName& OutItemHeld, int32_t& OutQuantity);
    FName GetSanctuaryItemGeneratorGuaranteedOutputItem(ASanctuaryItemGenerator* ItemGenerator);
    TArray<FSanctuaryExpansionDefinition> GetSanctuaryExpansions(FName AreaID);
    FName GetNurturingSpaceIDFromBiomeLevel(FString LevelPath);
    FName GetNurturingSpaceIDFromBiomeID(FName BiomeID);
    void GetNurtureSpacesContainingCreatures(bool bIncludeInventory, bool bIncludeSanctuaryBiomes, bool bIncludeOther);
    ESanctuaryIdentity GetInitialSanctuaryLightingIdentity();
    USanctuaryExpansionManager* GetExpansionManager();
    FString GetCustomNameForChest(int32_t ObjectUID);
    FName GetBiomeIDFromNurturingSpaceID(FName NurturingSpaceID);
    FName GetBiomeIDFromLevel(FString LevelPath);
    static USanctuaryManager* Get(bool bCreateIfNull);
    void AddCreatureToyToBiome(AActor* ToyActor);
}; // Size: 0x260
#pragma pack(pop)
