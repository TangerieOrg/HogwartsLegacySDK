#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UParticleSystem;
#pragma pack(push, 1)
struct FSTR_TriggerVolumes_Particles {
    UParticleSystem* ParticleSystem_3_C16665F74028DE3281499F915AAC0CF6; // 0x0
    bool UseSpawnrate_21_770BB4544E84009300708BB17CD3443A; // 0x8
    char pad_9[0x3];
    float Spawnrate_7_5646BAA449F47A4C741009A7E63960C4; // 0xc
    bool UseParticleColor_23_5732CA26498E9E596596C9A77A49D668; // 0x10
    char pad_11[0x3];
    FLinearColor ParticleColor_22_9E086A924D96E9B027475BB6B2D03549; // 0x14
    bool VelocityBasedOnPlayerMovement_28_DDDAFE7141DCBF4976FDBD9D230038E2; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
