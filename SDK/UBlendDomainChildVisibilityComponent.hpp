#pragma once
#include <cstdint>
#include "UBlendDomainComponentVisibilityComponent.hpp"
class USceneComponent;
#pragma pack(push, 1)
class UBlendDomainChildVisibilityComponent : public UBlendDomainComponentVisibilityComponent {
public:
    static UBlendDomainChildVisibilityComponent* StaticClass();
    static UBlendDomainChildVisibilityComponent* CreateForChildComponents(USceneComponent* Parent, bool bTransient, bool bStartEnabled);
}; // Size: 0x270
#pragma pack(pop)
