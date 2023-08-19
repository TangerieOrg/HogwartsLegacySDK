#pragma once
#include <cstdint>
#include "FWBPNFriendDetails.hpp"
#pragma pack(push, 1)
struct FWBPNPaginatedFriendDetails {
    int32_t m_total; // 0x0
    int32_t m_page; // 0x4
    int32_t m_pageSize; // 0x8
    char pad_c[0x4];
    TArray<FWBPNFriendDetails> m_friends; // 0x10
}; // Size: 0x20
#pragma pack(pop)
