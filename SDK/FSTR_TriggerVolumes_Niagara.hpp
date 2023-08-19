#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FSTR_TriggerVolumes_Niagara {
    UNiagaraSystem* ParticleSystem_24_C16665F74028DE3281499F915AAC0CF6; // 0x0
    bool Useweathersystem_56_6D591FF442C8E0435494268560BBC8EF; // 0x8
    bool UseSpawnrate_21_770BB4544E84009300708BB17CD3443A; // 0x9
    char pad_a[0x2];
    float OverrideSpawnrate_36_5646BAA449F47A4C741009A7E63960C4; // 0xc
    bool UseParticleColor_23_5732CA26498E9E596596C9A77A49D668; // 0x10
    char pad_11[0x3];
    FLinearColor OverrideParticleColor_37_9E086A924D96E9B027475BB6B2D03549; // 0x14
    float SpriteSizeMultiplier_59_4DD0DB2E45AA56EC66D6628F7E873C71; // 0x24
}; // Size: 0x28
#pragma pack(pop)
