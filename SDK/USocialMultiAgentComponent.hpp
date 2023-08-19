#pragma once
#include <cstdint>
#include "FSocialMultiAgentMember.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class USocialMultiAgentComponent : public UActorComponent {
public:
    TArray<FSocialMultiAgentMember> MemberAgents; // 0xc8
    static USocialMultiAgentComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
