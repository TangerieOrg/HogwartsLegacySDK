#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UPreferredNavDataPathFollowingComponent.hpp"
class USocialAgentPawnComponent;
#pragma pack(push, 1)
class USocialFollowingComponent : public UPreferredNavDataPathFollowingComponent {
public:
    USocialAgentPawnComponent* m_agent; // 0x298
    char pad_2a0[0x4a8];
    static USocialFollowingComponent* StaticClass();
    void OnMovementUpdated(float i_deltaSeconds, FVector i_oldLocation, FVector i_oldVelocity);
}; // Size: 0x748
#pragma pack(pop)
