#pragma once
#include <cstdint>
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStackVolume.hpp"
#include "USceneComponent.hpp"
class UEphemerisBasis;
class UEphemerisSubroutine;
#pragma pack(push, 1)
class UDayNightOverrideComponent : public USceneComponent {
public:
    UEphemerisBasis* OverrideBasis; // 0x220
    FTimeDateSourceStackVolume TimeSourceStack; // 0x228
    FTimeController TimeController; // 0x238
    TArray<UEphemerisSubroutine*> EphemerisProgram; // 0x2e8
    FEphemerisComputer EphemerisComputer; // 0x2f8
    float Priority; // 0x440
    float BlendRadius; // 0x444
    float BlendWeight; // 0x448
    uint8_t bEnabled : 1; // 0x44c
    uint8_t bUnbounded : 1; // 0x44c
    uint8_t bAppendToMasterEphemerisProgram : 1; // 0x44c
    uint8_t pad_bitfield_44c_3 : 5;
    char pad_44d[0x3];
    float LastUpdate; // 0x450
    int32_t InitializedComputer; // 0x454
    TArray<UEphemerisSubroutine*> AppendedEphemerisProgram; // 0x458
    char pad_468[0x8];
    static UDayNightOverrideComponent* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x470
#pragma pack(pop)
