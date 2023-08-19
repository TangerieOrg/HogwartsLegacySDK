#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FEphemerisComputer.hpp"
#include "FTimeController.hpp"
#include "FTimeDateSourceStackVolume.hpp"
class UEphemerisBasis;
class UEphemerisSubroutine;
#pragma pack(push, 1)
class ADayNightVolume : public AVolume {
public:
    char pad_280[0x8];
    UEphemerisBasis* OverrideBasis; // 0x288
    FTimeDateSourceStackVolume TimeSourceStack; // 0x290
    FTimeController TimeController; // 0x2a0
    TArray<UEphemerisSubroutine*> EphemerisProgram; // 0x350
    FEphemerisComputer EphemerisComputer; // 0x360
    float Priority; // 0x4a8
    float BlendRadius; // 0x4ac
    float BlendWeight; // 0x4b0
    bool bUnbounded; // 0x4b4
    bool bEnabled; // 0x4b5
    bool bAppendToMasterEphemerisProgram; // 0x4b6
    char pad_4b7[0x1];
    float LastUpdate; // 0x4b8
    int32_t InitializedComputer; // 0x4bc
    TArray<UEphemerisSubroutine*> AppendedEphemerisProgram; // 0x4c0
    static ADayNightVolume* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x4d0
#pragma pack(pop)
