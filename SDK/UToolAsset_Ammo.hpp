#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UAkAudioEvent;
class UAnimMontage;
#pragma pack(push, 1)
class UToolAsset_Ammo : public UDataAsset {
public:
    FString m_ammoUpgrade; // 0x30
    int32_t m_clipSize; // 0x40
    bool m_autoReload; // 0x44
    char pad_45[0x3];
    float m_reloadDelay; // 0x48
    char pad_4c[0x4];
    UAkAudioEvent* m_reloadSfx; // 0x50
    UAnimMontage* m_reloadAnim; // 0x58
    bool m_limitedAmmo; // 0x60
    char pad_61[0x3];
    int32_t m_startingAmmo; // 0x64
    int32_t m_maxAmmo; // 0x68
    char pad_6c[0x4];
    UAkAudioEvent* m_emptySfx; // 0x70
    static UToolAsset_Ammo* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
