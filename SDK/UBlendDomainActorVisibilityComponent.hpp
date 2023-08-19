#pragma once
#include <cstdint>
#include "UBlendDomainComponentVisibilityComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UBlendDomainActorVisibilityComponent : public UBlendDomainComponentVisibilityComponent {
public:
    static UBlendDomainActorVisibilityComponent* StaticClass();
    static UBlendDomainActorVisibilityComponent* CreateForActor(AActor* Actor, bool bTransient, bool bStartEnabled);
}; // Size: 0x270
#pragma pack(pop)
