#pragma once
#include <cstdint>
#include "AStreamingPlaceholderBase.hpp"
#include "ESanctuaryIdentity.hpp"
class UParticleSystemComponent;
class UParticleSystem;
#pragma pack(push, 1)
class ASanctuaryIdentityParticleSystem : public AStreamingPlaceholderBase {
public:
    char pad_260[0x78];
    bool bAutoSwapWhenIdentityChanges; // 0x2d8
    char pad_2d9[0x7];
    UParticleSystemComponent* ParticleSystemComponent; // 0x2e0
    UParticleSystem* LoadedAsset; // 0x2e8
    static ASanctuaryIdentityParticleSystem* StaticClass();
    void OnIdentityChanged(ESanctuaryIdentity OldIdentity, ESanctuaryIdentity NewIdentity);
}; // Size: 0x2f0
#pragma pack(pop)
