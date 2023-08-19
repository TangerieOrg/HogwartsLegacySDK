#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class APawn;
struct FVector;
#pragma pack(push, 1)
class UPawnSensingComponent : public UActorComponent {
public:
    float HearingThreshold; // 0xc8
    float LOSHearingThreshold; // 0xcc
    float SightRadius; // 0xd0
    float SensingInterval; // 0xd4
    float HearingMaxSoundAge; // 0xd8
    uint8_t bEnableSensingUpdates : 1; // 0xdc
    uint8_t bOnlySensePlayers : 1; // 0xdc
    uint8_t bSeePawns : 1; // 0xdc
    uint8_t bHearNoises : 1; // 0xdc
    uint8_t pad_bitfield_dc_4 : 4;
    char pad_dd[0x2b];
    float PeripheralVisionAngle; // 0x108
    float PeripheralVisionCosine; // 0x10c
    static UPawnSensingComponent* StaticClass();
    void SetSensingUpdatesEnabled(bool bEnabled);
    void SetSensingInterval(float NewSensingInterval);
    void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
    void SeePawnDelegate__DelegateSignature(APawn* Pawn);
    void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
}; // Size: 0x110
#pragma pack(pop)
