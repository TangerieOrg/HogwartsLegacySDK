#pragma once
#include <cstdint>
#include "UBlendDomainComponentVisibilityComponent.hpp"
class USceneComponent;
#pragma pack(push, 1)
class UBlendDomainParentVisibilityComponent : public UBlendDomainComponentVisibilityComponent {
public:
    static UBlendDomainParentVisibilityComponent* StaticClass();
    static UBlendDomainParentVisibilityComponent* CreateForParentComponent(USceneComponent* Parent, bool bTransient, bool bStartEnabled);
}; // Size: 0x270
#pragma pack(pop)
