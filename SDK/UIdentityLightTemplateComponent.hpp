#pragma once
#include <cstdint>
#include "ESanctuaryIdentity.hpp"
#include "ULightTemplateComponent.hpp"
#pragma pack(push, 1)
class UIdentityLightTemplateComponent : public ULightTemplateComponent {
public:
    char pad_240[0x60];
    static UIdentityLightTemplateComponent* StaticClass();
    void OnUpdateIdentity(ESanctuaryIdentity PreviousIdentity, ESanctuaryIdentity CurrentIdentity, float BlendWeight);
}; // Size: 0x2a0
#pragma pack(pop)
