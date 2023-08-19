#pragma once
#include <cstdint>
class UAblReactionData;
#pragma pack(push, 1)
struct FAblReactionsList {
    TArray<UAblReactionData*> Reactions; // 0x0
}; // Size: 0x10
#pragma pack(pop)
