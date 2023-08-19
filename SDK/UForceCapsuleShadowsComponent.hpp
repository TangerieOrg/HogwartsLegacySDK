#pragma once
#include <cstdint>
#include "FForceCapsuleShadowsSettings.hpp"
#include "UActorComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UForceCapsuleShadowsComponent : public UActorComponent {
public:
    FForceCapsuleShadowsSettings Settings; // 0xc8
    uint8_t bDisable : 1; // 0xe8
    uint8_t pad_bitfield_e8_1 : 7;
    char pad_e9[0x7];
    static UForceCapsuleShadowsComponent* StaticClass();
    void UpdateSettings(FForceCapsuleShadowsSettings NewSettings);
    void Enabled(bool& bEnabled);
    void Enable(bool bEnable);
    static void DetachAndDestroyForceCapsuleShadows(AActor* Owner, UForceCapsuleShadowsComponent* ExistingForceCapsuleShadowsComponent);
    void DestroyForceCapsuleShadows();
    static void CreateAndAttachForceCapsuleShadows(AActor* Owner, FForceCapsuleShadowsSettings NewSettings, UForceCapsuleShadowsComponent*& NewForceCapsuleShadowsComponent, bool bTransient);
}; // Size: 0xf0
#pragma pack(pop)
