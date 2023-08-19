#pragma once
#include <cstdint>
#include "EBulletinBoardType.hpp"
#include "EMailType.hpp"
#include "FMailEntry.hpp"
#include "FUIMailInfo.hpp"
#include "UObject.hpp"
class UStationComponent;
#pragma pack(push, 1)
class UMailManager : public UObject {
public:
    char pad_28[0xc8];
    static UMailManager* StaticClass();
    static void UpdateMailArchiveAndDeleteBP(FString MailKey, FString sender, bool& o_canArchive, bool& o_canDelete);
    static bool StationKnownByMailManagerBP(UStationComponent* Station);
    void OnSaveGameLoaded();
    void OnNewGame();
    static void MailUIEventBP(bool bStart, EMailType mailType);
    void MailAvailableDelegate__DelegateSignature(FMailEntry Entry, int32_t DisplayPriority);
    static void HandleMailUIButtonBP(int32_t Button, FString MailKey, FString sender, bool bFromArchive, bool& o_bMailListChanged);
    int32_t GetUnreadMailCountBP();
    static void GetRadiantTaskTextBP(TArray<FString>& o_iconNames, TArray<int32_t>& o_taskQuantities);
    static void GetRadiantRewardIconsBP(TArray<FString>& o_rewardIcons);
    static bool GetMailOwlVisibilityBP();
    static void GetMailItemsBP(bool bFromArchive, TArray<FUIMailInfo>& MailInfo);
    static EBulletinBoardType GetBulletinBoardTypeBP();
    static void GetBulletinBoardTextBP(TArray<int32_t>& o_mailIndexes, TArray<FString>& o_senders, TArray<bool>& o_acceptRadiantVisibles, TArray<FString>& o_descriptions);
    static UMailManager* Get();
    static void BulletinItemClickedBP(int32_t ItemIndex, bool bRadiantVisible);
    static void AcceptBulletinBoardRadiantMissionBP();
}; // Size: 0xf0
#pragma pack(pop)
