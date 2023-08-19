#pragma once
#include <cstdint>
#include "EPerkState.hpp"
#include "FPerkTreeEntry.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPerksTree : public UObject {
public:
    char pad_28[0x68];
    static UPerksTree* StaticClass();
    bool UpgradePerk(FString PerkID);
    static bool UpdatePerkPoints(int32_t Amount);
    static void ResetPerks();
    void RemovePerk(FString InPerkID);
    static FPerkTreeEntry RefreshDataForSlot(FString PerkCategory, int32_t Row, int32_t Column);
    bool PurchasePerk(FString PerkID);
    void PerkUpdatePoints(int32_t Amount);
    void PerkShowPurchasedCount();
    void PerkShowPoints();
    void PerkSetLevel(FString PerkID, int32_t Level);
    void PerkResetAllPerks();
    void PerkPurchase(FString PerkID);
    void PerkIsUpgradeable(FString PerkID);
    void PerkIsAvailable(FString PerkID);
    void PerkIsActive(FString PerkID);
    void PerkCurriculumRefresh(FString Curriculum, int32_t Year);
    void PerkActivateAllInCategory(FString Category);
    void PerkActivateAll();
    void PerkActivate(FString PerkID);
    void OnSaveGameLoaded();
    bool IsPerkUpgradeable(FString PerkID);
    bool IsPerkAvailable(FString PerkID);
    static int32_t GetTotalPerks(FString CategoryID);
    static int32_t GetPurchasedPerkCount(FString CategoryID);
    EPerkState GetPerkState(FString PerkID);
    static int32_t GetPerkPoints();
    int32_t GetPerkLevel(FString PerkID);
    static TArray<FPerkTreeEntry> GetAllPerks(bool UIDisplayOnly, FString CategoryID);
    static UPerksTree* Get();
}; // Size: 0x90
#pragma pack(pop)
