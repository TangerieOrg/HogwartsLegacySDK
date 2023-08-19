#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetCollisionChannelTask : public UAblAbilityTask {
public:
    ECollisionChannel m_Channel; // 0x70
    bool m_RestoreOnEnd; // 0x71
    char pad_72[0x6];
    static UAblSetCollisionChannelTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
