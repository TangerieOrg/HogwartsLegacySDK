#include "EBulletinBoardType.hpp"
#include "EMailType.hpp"
#include "FMailEntry.hpp"
#include "FUIMailInfo.hpp"
#include "UFunction.hpp"
#include "UMailManager.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
void UMailManager::MailAvailableDelegate__DelegateSignature(FMailEntry Entry, int32_t DisplayPriority) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.MailManager.MailAvailableDelegate__DelegateSignature"));
    struct Params_MailAvailableDelegate__DelegateSignature {
        FMailEntry Entry; // 0x0
        int32_t DisplayPriority; // 0x58
    }; // Size: 0x5c
    Params_MailAvailableDelegate__DelegateSignature params{};
    params.Entry = (FMailEntry)Entry;
    params.DisplayPriority = (int32_t)DisplayPriority;
    ProcessEvent(func, &params);
}
UMailManager* UMailManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MailManager");
    return (UMailManager*)res;
}
void UMailManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UMailManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UMailManager::UpdateMailArchiveAndDeleteBP(FString MailKey, FString sender, bool& o_canArchive, bool& o_canDelete) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.UpdateMailArchiveAndDeleteBP"));
    struct Params_UpdateMailArchiveAndDeleteBP {
        FString MailKey; // 0x0
        FString sender; // 0x10
        bool o_canArchive; // 0x20
        bool o_canDelete; // 0x21
    }; // Size: 0x22
    Params_UpdateMailArchiveAndDeleteBP params{};
    params.MailKey = (FString)MailKey;
    params.sender = (FString)sender;
    params.o_canArchive = (bool)o_canArchive;
    params.o_canDelete = (bool)o_canDelete;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_canArchive = params.o_canArchive;
    o_canDelete = params.o_canDelete;
}
bool UMailManager::StationKnownByMailManagerBP(UStationComponent* Station) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.StationKnownByMailManagerBP"));
    struct Params_StationKnownByMailManagerBP {
        UStationComponent* Station; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StationKnownByMailManagerBP params{};
    params.Station = (UStationComponent*)Station;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMailManager* UMailManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.Get"));
    struct Params_Get {
        UMailManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMailManager*)params.ReturnValue;
}
void UMailManager::MailUIEventBP(bool bStart, EMailType mailType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.MailUIEventBP"));
    struct Params_MailUIEventBP {
        bool bStart; // 0x0
        EMailType mailType; // 0x1
    }; // Size: 0x2
    Params_MailUIEventBP params{};
    params.bStart = (bool)bStart;
    params.mailType = (EMailType)mailType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMailManager::HandleMailUIButtonBP(int32_t Button, FString MailKey, FString sender, bool bFromArchive, bool& o_bMailListChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.HandleMailUIButtonBP"));
    struct Params_HandleMailUIButtonBP {
        int32_t Button; // 0x0
        char pad_4[0x4];
        FString MailKey; // 0x8
        FString sender; // 0x18
        bool bFromArchive; // 0x28
        bool o_bMailListChanged; // 0x29
    }; // Size: 0x2a
    Params_HandleMailUIButtonBP params{};
    params.Button = (int32_t)Button;
    params.MailKey = (FString)MailKey;
    params.sender = (FString)sender;
    params.bFromArchive = (bool)bFromArchive;
    params.o_bMailListChanged = (bool)o_bMailListChanged;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_bMailListChanged = params.o_bMailListChanged;
}
int32_t UMailManager::GetUnreadMailCountBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetUnreadMailCountBP"));
    struct Params_GetUnreadMailCountBP {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetUnreadMailCountBP params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UMailManager::GetRadiantTaskTextBP(TArray<FString>& o_iconNames, TArray<int32_t>& o_taskQuantities) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetRadiantTaskTextBP"));
    struct Params_GetRadiantTaskTextBP {
        TArray<FString> o_iconNames; // 0x0
        TArray<int32_t> o_taskQuantities; // 0x10
    }; // Size: 0x20
    Params_GetRadiantTaskTextBP params{};
    params.o_iconNames = (TArray<FString>)o_iconNames;
    params.o_taskQuantities = (TArray<int32_t>)o_taskQuantities;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_iconNames = params.o_iconNames;
    o_taskQuantities = params.o_taskQuantities;
}
void UMailManager::GetRadiantRewardIconsBP(TArray<FString>& o_rewardIcons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetRadiantRewardIconsBP"));
    struct Params_GetRadiantRewardIconsBP {
        TArray<FString> o_rewardIcons; // 0x0
    }; // Size: 0x10
    Params_GetRadiantRewardIconsBP params{};
    params.o_rewardIcons = (TArray<FString>)o_rewardIcons;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_rewardIcons = params.o_rewardIcons;
}
bool UMailManager::GetMailOwlVisibilityBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetMailOwlVisibilityBP"));
    struct Params_GetMailOwlVisibilityBP {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetMailOwlVisibilityBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMailManager::GetMailItemsBP(bool bFromArchive, TArray<FUIMailInfo>& MailInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetMailItemsBP"));
    struct Params_GetMailItemsBP {
        bool bFromArchive; // 0x0
        char pad_1[0x7];
        TArray<FUIMailInfo> MailInfo; // 0x8
    }; // Size: 0x18
    Params_GetMailItemsBP params{};
    params.bFromArchive = (bool)bFromArchive;
    params.MailInfo = (TArray<FUIMailInfo>)MailInfo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MailInfo = params.MailInfo;
}
EBulletinBoardType UMailManager::GetBulletinBoardTypeBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetBulletinBoardTypeBP"));
    struct Params_GetBulletinBoardTypeBP {
        EBulletinBoardType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBulletinBoardTypeBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EBulletinBoardType)params.ReturnValue;
}
void UMailManager::GetBulletinBoardTextBP(TArray<int32_t>& o_mailIndexes, TArray<FString>& o_senders, TArray<bool>& o_acceptRadiantVisibles, TArray<FString>& o_descriptions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.GetBulletinBoardTextBP"));
    struct Params_GetBulletinBoardTextBP {
        TArray<int32_t> o_mailIndexes; // 0x0
        TArray<FString> o_senders; // 0x10
        TArray<bool> o_acceptRadiantVisibles; // 0x20
        TArray<FString> o_descriptions; // 0x30
    }; // Size: 0x40
    Params_GetBulletinBoardTextBP params{};
    params.o_mailIndexes = (TArray<int32_t>)o_mailIndexes;
    params.o_senders = (TArray<FString>)o_senders;
    params.o_acceptRadiantVisibles = (TArray<bool>)o_acceptRadiantVisibles;
    params.o_descriptions = (TArray<FString>)o_descriptions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_senders = params.o_senders;
    o_mailIndexes = params.o_mailIndexes;
    o_acceptRadiantVisibles = params.o_acceptRadiantVisibles;
    o_descriptions = params.o_descriptions;
}
void UMailManager::BulletinItemClickedBP(int32_t ItemIndex, bool bRadiantVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.BulletinItemClickedBP"));
    struct Params_BulletinItemClickedBP {
        int32_t ItemIndex; // 0x0
        bool bRadiantVisible; // 0x4
    }; // Size: 0x5
    Params_BulletinItemClickedBP params{};
    params.ItemIndex = (int32_t)ItemIndex;
    params.bRadiantVisible = (bool)bRadiantVisible;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMailManager::AcceptBulletinBoardRadiantMissionBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MailManager.AcceptBulletinBoardRadiantMissionBP"));
    struct Params_AcceptBulletinBoardRadiantMissionBP {
    }; // Size: 0x0
    Params_AcceptBulletinBoardRadiantMissionBP params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
