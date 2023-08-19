#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UBlendDomainVisibilityComponentBase : public USceneComponent {
public:
    float LastBlend; // 0x220
    char pad_224[0xc];
    static UBlendDomainVisibilityComponentBase* StaticClass();
    void SetEnabled(bool bNewEnabled);
    void ForceUpdate();
}; // Size: 0x230
#pragma pack(pop)
