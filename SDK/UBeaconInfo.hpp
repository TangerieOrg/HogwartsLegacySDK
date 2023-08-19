#pragma once
#include <cstdint>
#include "EBeaconState.hpp"
#include "EBeaconSubType.hpp"
#include "EBeaconType.hpp"
#include "FBeaconDistanceRule.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UBeaconInfo : public UObject {
public:
    EBeaconType BeaconType; // 0x28
    EBeaconSubType BeaconSubType; // 0x29
    EBeaconType LastBeaconType; // 0x2a
    char pad_2b[0x5];
    FString BeaconName; // 0x30
    FString BeaconLocName; // 0x40
    FString BeaconIcon; // 0x50
    FString FastTravelLocationID; // 0x60
    FString BeaconID; // 0x70
    FName BeaconWorld; // 0x80
    FName SanctuarySubworld; // 0x88
    FName BeaconOwnerLocationID; // 0x90
    FString DescriptionShort; // 0x98
    FVector BeaconWorldPosition; // 0xa8
    char pad_b4[0x34];
    uint32_t BeaconHandle; // 0xe8
    uint32_t ActivationDistance; // 0xec
    uint32_t EnterExitDistance; // 0xf0
    uint8_t DisplayPriority; // 0xf4
    bool bIsBeaconActive; // 0xf5
    uint8_t BeaconFlags; // 0xf6
    char pad_f7[0x1];
    float BeaconScale; // 0xf8
    bool bHudIconSuppressed; // 0xfc
    bool bHasTracedInGameWorld; // 0xfd
    char pad_fe[0x32];
    uint32_t BeaconRuntimeFlags; // 0x130
    bool InEnterExitZone; // 0x134
    char pad_135[0x3];
    int32_t LastTransitionListIndex; // 0x138
    EBeaconState BeaconState; // 0x13c
    char pad_13d[0x7];
    FBeaconDistanceRule BeaconDistanceRules[3]; // 0x144
    char pad_18c[0x44];
    static UBeaconInfo* StaticClass();
    void SetupChestBeacon(FString pBeaconName, FVector pLocation, AActor* pParentActor);
}; // Size: 0x1d0
#pragma pack(pop)
