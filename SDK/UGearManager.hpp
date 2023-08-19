#pragma once
#include <cstdint>
#include "EGearSlotIDEnum.hpp"
#include "EGenderEnum.hpp"
#include "FGearItemID.hpp"
#include "FGearStatRecipeData.hpp"
#include "FGearTraitRecipeData.hpp"
#include "FGearUI.hpp"
#include "FObjectHandles.hpp"
#include "GearStatType.hpp"
#include "UObject.hpp"
class AActor;
struct FGearItem;
#pragma pack(push, 1)
class UGearManager : public UObject {
public:
    char pad_28[0x58];
    static UGearManager* StaticClass();
    static int32_t UpgradeGearStatOnLoom(FGearItemID itemToUpgrade, FGearStatRecipeData UpgradeData, bool bIgnoreIngredients);
    static bool UpdateGearOutfitItems(AActor* Actor, bool UpdateIfNothingEquipped, bool bIncludeSlotDefaultGear, FString GearActorID);
    static bool UnequipSlotID(FString ActorId, EGearSlotIDEnum SlotID);
    static bool UnequipActorSlotID(AActor* Actor, EGearSlotIDEnum SlotID, bool bIncludeSlotDefaultGear);
    static EGearSlotIDEnum StringToGearSlotID(FString SlotID);
    static void SetHoodPosition(AActor* Actor, FGearItemID& GearItemID, bool bHoodUp, bool bRebuildCharacter);
    static bool SetGearStat(FName& GearID, FName& Variation, FName& StatName, int32_t StatValue);
    static void SetForcedGearAppearances();
    static bool SetEquippedGearItemID(FString ActorId, FGearItemID& GearItemID);
    static bool SetEquippedGearAppearanceOverrideID(FString ActorId, FString GearAppearanceID);
    static bool SetActorsEquippedGearAppearanceOverrideID(AActor* Actor, FString GearAppearanceOverrideID);
    static bool SetActorEquippedGearItemID(AActor* Actor, FGearItemID& GearItemID, bool bIncludeSlotDefaultGear);
    static bool RemoveGearAppearanceOverride(FString ActorId, FGearItemID GearItemID);
    static bool RemoveForcedGearAppearances(TArray<EGearSlotIDEnum>& GearSlotIDs);
    static void RemoveAllForcedGearAppearances();
    static bool RemoveActorGearAppearanceOverride(AActor* Actor, FGearItemID GearItemID);
    static bool PreviewGear(AActor* Actor, FName GearID);
    static FObjectHandles PreloadGearIds(EGenderEnum Gender, TArray<FName>& GearIDs);
    void OnSaveGameLoaded();
    static bool IsHoodUp(AActor* Actor);
    static bool IsHooded(AActor* Actor, EGearSlotIDEnum SlotID);
    static bool IsGearItemHoodUp(FGearItemID& GearItemID);
    static bool IsGearItemEquippable(FGearItemID GearID);
    static bool IsGear(FName ItemId);
    static TArray<FGearItemID> IdentifyAllItems();
    static TArray<FGearItemID> GetUnidentifiedGear();
    static EGearSlotIDEnum GetSlotIDFromGearID(FName& GearID);
    static FName GetRarityFromGearItemID(FName GearID);
    static TArray<FString> GetOutFitItemTypesBySlotID(EGearSlotIDEnum SlotID);
    static int32_t GetNumOfStatUpgradeForGearItem(FGearItemID itemToCheck);
    static int32_t GetMaxUpgradeForGearItem(FGearItem& GearItem);
    static EGearSlotIDEnum GetLastPreviewedGearSlot();
    static void GetGearTraitRecipes(TArray<FGearTraitRecipeData>& AllRecipes, FName RarityTier);
    static FGearStatRecipeData GetGearStatsUpgradeRecipe(FGearItem& GearItem, GearStatType StatType, int32_t NewLevel);
    static int32_t GetGearMaxTraitSlots(FName& GearID);
    static bool GetGearItemDynamic(FGearItemID& GearItemID, FGearItem& GearItem);
    static bool GetGearItem(FGearItemID& GearItemID, FGearItem& OutGearItem);
    static FName GetGearIconID(EGenderEnum Gender, FName& GearID);
    static int32_t GetGearEmptyTraitSlots(FName& GearID, FName& Variation);
    static TArray<void*> GetGearAppearanceItemDefinitions(EGenderEnum Gender, TArray<FName>& GearAppearanceIDs);
    static void GetGearAppearanceFromGearIDs(TArray<FName>& GearIDs);
    static void GetGearAbilityUIInfo(FGearItem& Item, TArray<FGearUI>& OutGearUI);
    static FGearItemID GetEquippedGearItemID(FString ActorId, EGearSlotIDEnum SlotID);
    static FString GetEquippedGearAppearanceOverrideID(FString ActorId, EGearSlotIDEnum SlotID);
    static void GetDefaultPlayerGearAndAppearance();
    static bool GetCanApplyGearTraitToGear(FGearTraitRecipeData& Trait, FName& GearID, FName& GearVariation, FString& OutErrorStringKey);
    static TArray<FGearItemID> GetAvailableGearItemIDs(FString ActorId, EGearSlotIDEnum SlotID);
    static TArray<FString> GetAvailableGearAppearanceOverrideIDs(FString ActorId, EGearSlotIDEnum SlotID);
    static TArray<FGearItemID> GetAvailableAndEquippedGearItemIDs(FString ActorId, EGearSlotIDEnum SlotID);
    static TArray<FString> GetAllGearSlotIDs();
    static void GetAllGearIDs(EGearSlotIDEnum SlotID, TArray<FName>& GearIDs);
    static TArray<FGearItemID> GetAllEquippedGearItemIDs(FString ActorId);
    static TArray<FGearItemID> GetAllAvailableGearItemIDsSorted(FString ActorId, EGearSlotIDEnum SortedSlotID);
    static TArray<FGearItemID> GetAllActorEquippedGearItemID(AActor* Actor);
    static FName GetActorGearIconID(AActor* Actor, FName& GearID);
    static FGearItemID GetActorEquippedGearItemID(AActor* Actor, EGearSlotIDEnum SlotID);
    static UGearManager* Get();
    static void GenerateGearAndEquip(FName GearID);
    static FGearItemID GenerateGearAndAddToInventory(FName GearID, bool IsIdentified);
    static FString GearSlotIDToString(EGearSlotIDEnum SlotID);
    static bool EditorLoadGearAppearance(AActor* Actor, FString GearAppearanceID, FString HouseIDOverride);
    static bool EditorLoadGear(AActor* Actor, FString GearID, bool bResetToEquipped);
    static bool EditorDoesGearAppearanceHaveHouseOverrides(AActor* Actor, FString GearAppearanceID);
    static bool EditorClearSlot(AActor* Actor, EGearSlotIDEnum SlotID);
    static bool DoesGearHaveAppearanceOverride(FGearItemID Gear);
    static GearStatType DefineSecondaryGearStatTypeFromSlot(EGearSlotIDEnum SlotID);
    static GearStatType DefineGearStatTypeFromSlot(EGearSlotIDEnum SlotID);
    static bool CanUnequipSlotID(FString ActorId, EGearSlotIDEnum SlotID);
    static bool CanUnequipActorSlotID(AActor* Actor, EGearSlotIDEnum SlotID);
    static int32_t CalculateUpgradeAmountForGearItem(FGearItemID itemToUpgrade, int32_t Upgrade);
    void AddGearUpgradeItems(FName Rarity, GearStatType StatType, int32_t Level);
    static bool AddGearTrait(FName& GearID, FName& Variation, FName& TraitID);
    void AddGearAbilityItems(FName GearAbility);
    static bool AddCraftGearTrait(FGearTraitRecipeData& Trait, FGearItemID GearItemID, FString& ErrorString);
}; // Size: 0x80
#pragma pack(pop)
