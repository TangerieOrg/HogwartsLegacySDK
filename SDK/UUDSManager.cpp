#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUDSActivityManager.hpp"
#include "UUDSEventQueuer.hpp"
#include "UUDSFieldGuideManager.hpp"
#include "UUDSIntentManager.hpp"
#include "UUDSLocationManager.hpp"
#include "UUDSManager.hpp"
#include "UUDSMechanicManager.hpp"
#include "UUDSStatManager.hpp"
UUDSManager* UUDSManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSManager");
    return (UUDSManager*)res;
}
void UUDSManager::InjectPlayerStateIntoSaveFile() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSManager.InjectPlayerStateIntoSaveFile"));
    struct Params_InjectPlayerStateIntoSaveFile {
    }; // Size: 0x0
    Params_InjectPlayerStateIntoSaveFile params{};
    ProcessEvent(func, &params);
}
void UUDSManager::SyncUDSWithGameData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSManager.SyncUDSWithGameData"));
    struct Params_SyncUDSWithGameData {
    }; // Size: 0x0
    Params_SyncUDSWithGameData params{};
    ProcessEvent(func, &params);
}
void UUDSManager::ResetPlayerStateIfCurrentSaveDeleted(int32_t DeletedCharacterId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSManager.ResetPlayerStateIfCurrentSaveDeleted"));
    struct Params_ResetPlayerStateIfCurrentSaveDeleted {
        int32_t DeletedCharacterId; // 0x0
    }; // Size: 0x4
    Params_ResetPlayerStateIfCurrentSaveDeleted params{};
    params.DeletedCharacterId = (int32_t)DeletedCharacterId;
    ProcessEvent(func, &params);
}
void UUDSManager::PreSyncUDSWithGameData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSManager.PreSyncUDSWithGameData"));
    struct Params_PreSyncUDSWithGameData {
    }; // Size: 0x0
    Params_PreSyncUDSWithGameData params{};
    ProcessEvent(func, &params);
}
