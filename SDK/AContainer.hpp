#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FDatabaseLockList.hpp"
#include "FStatList.hpp"
#include "FTransform.hpp"
class AActor;
class UPadlockComponent;
#pragma pack(push, 1)
class AContainer : public AWorldObject {
public:
    char pad_2b0[0x10];
    bool Open; // 0x2c0
    char pad_2c1[0x3];
    int32_t PropIndex; // 0x2c4
    char pad_2c8[0x8];
    FTransform Lid_Transform; // 0x2d0
    float Lid_Rot_X; // 0x300
    float RandomZRotation; // 0x304
    char pad_308[0x50];
    int32_t EnvInt; // 0x358
    bool SimulatePhysics; // 0x35c
    bool AutoSelectLoot; // 0x35d
    char pad_35e[0x2];
    int32_t LockLevel; // 0x360
    FName KeyName; // 0x364
    FDatabaseLockList Lock_KeyName; // 0x36c
    FName Stat_KeyName; // 0x374
    FStatList Stat_KeyName2; // 0x37c
    int32_t Stat_MinValue; // 0x384
    int64_t ExpiryTime; // 0x388
    TArray<AActor*> Target; // 0x390
    FName BeaconableObjectID; // 0x3a0
    int32_t SerializedContainerVersion; // 0x3a8
    char pad_3ac[0x4];
    UPadlockComponent* PadlockComponent; // 0x3b0
    char pad_3b8[0x8];
    static AContainer* StaticClass();
}; // Size: 0x3c0
#pragma pack(pop)
