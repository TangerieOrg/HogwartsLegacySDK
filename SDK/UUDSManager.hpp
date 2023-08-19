#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSStatManager;
class UUDSMechanicManager;
class UUDSIntentManager;
class UUDSActivityManager;
class UUDSLocationManager;
class UUDSFieldGuideManager;
class UUDSEventQueuer;
#pragma pack(push, 1)
class UUDSManager : public UObject {
public:
    char pad_28[0x50];
    UUDSStatManager* UDSStatManager; // 0x78
    UUDSIntentManager* UDSIntentManager; // 0x80
    UUDSMechanicManager* UDSMechanicManager; // 0x88
    UUDSActivityManager* UDSActivityManager; // 0x90
    UUDSFieldGuideManager* UDSFieldGuideManager; // 0x98
    UUDSLocationManager* UDSLocationManager; // 0xa0
    UUDSEventQueuer* UDSEventQueuer; // 0xa8
    char pad_b0[0x248];
    static UUDSManager* StaticClass();
    void SyncUDSWithGameData();
    void ResetPlayerStateIfCurrentSaveDeleted(int32_t DeletedCharacterId);
    void PreSyncUDSWithGameData();
    void InjectPlayerStateIntoSaveFile();
}; // Size: 0x2f8
#pragma pack(pop)
