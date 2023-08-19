#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
class UNiagaraSystem;
#pragma pack(push, 1)
struct FSTR_AccentVFX {
    UNiagaraSystem* AccentVFX_8_E77FF54348CFC9D830FAEEBE3B3A1407; // 0x0
    FName Accent_Parent_13_F0A78F6A4E0ABF4F5932169F73150FE4; // 0x8
    FVector Accent_Offset_14_5A7F7B484D6FCC68D3A27B8FE3D9F597; // 0x10
    FRotator Accent_Offset_Rot_31_8F778D364CA84FFAF2634298B75A15CF; // 0x1c
    char pad_28[0xa0];
    int32_t VFX_MaterialSlot_47_1FC027FF4DA4A3D6B10C02B828367700; // 0xc8
    char pad_cc[0x4];
}; // Size: 0xd0
#pragma pack(pop)
