#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EMountTypes.hpp"
#include "EPrerequisiteType.hpp"
#include "FDbSingleColumnInfo.hpp"
class APawn;
class UCreature_MountComponent;
class AFlyingBroom;
#pragma pack(push, 1)
class AMountZoneVolumeBase : public AVolume {
public:
    bool bDisableOnHighEndPlatforms; // 0x280
    uint8_t IgnoredMounts; // 0x281
    EPrerequisiteType PrerequisiteType; // 0x282
    char pad_283[0x5];
    FDbSingleColumnInfo MissionID; // 0x288
    uint8_t MissionStates; // 0x310
    char pad_311[0x7];
    FDbSingleColumnInfo LockId; // 0x318
    char pad_3a0[0x18];
    static AMountZoneVolumeBase* StaticClass();
    bool IsIgnored(EMountTypes InType);
    static bool GetMountType(APawn* InPawn, EMountTypes& OutType);
    static UCreature_MountComponent* GetMount(APawn* InPawn);
    static bool GetEquivalentGroundType(EMountTypes InType, EMountTypes& OutType);
    static bool GetEquivalentFlyingType(EMountTypes InType, EMountTypes& OutType);
    static AFlyingBroom* GetBroom(APawn* InPawn);
    void EnableZone(bool Enable);
}; // Size: 0x3b8
#pragma pack(pop)
