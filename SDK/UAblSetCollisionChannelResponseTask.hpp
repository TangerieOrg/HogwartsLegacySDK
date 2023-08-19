#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ECollisionResponse.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblSetCollisionChannelResponseTask : public UAblAbilityTask {
public:
    ECollisionChannel m_Channel; // 0x70
    ECollisionResponse m_Response; // 0x71
    bool m_SetAllChannelsToResponse; // 0x72
    bool m_RestoreOnEnd; // 0x73
    char pad_74[0x4];
    static UAblSetCollisionChannelResponseTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
