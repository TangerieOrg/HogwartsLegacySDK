#pragma once
#include <cstdint>
#include "FTransform.hpp"
class AActor;
class UCurveFloat;
#pragma pack(push, 1)
struct FSTR_CaveIn_AnimMeshElement {
    bool PhysicsOnly_14_B6A547B541BAF4688E7D4BB07B6AA5F7; // 0x0
    char pad_1[0x7];
    AActor* AnimActor_2_7BBF7F404F7B24EF712D219F42AB9C85; // 0x8
    FTransform EndTransform_5_69648695444896C97FF9F8AED0241BEE; // 0x10
    float ElementDelay_15_E1B74EB142A543D33C7DAAB7EC9C8F9D; // 0x40
    char pad_44[0x4];
    UCurveFloat* AnimCurve_11_4DA234D5444EC3FD93570F891C11ABF0; // 0x48
    float PlayRate_18_14DFA21E4EB4500EF37189A038F88ADD; // 0x50
    bool UseCameraShake_20_31965C294DDC70302C9A6598D85B3B75; // 0x54
    char pad_55[0xb];
}; // Size: 0x60
#pragma pack(pop)
