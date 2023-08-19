#pragma once
#include <cstdint>
#include "AStreamingPlaceholderChildActorBase.hpp"
#include "FStreamingPlaceholderLockState.hpp"
#pragma pack(push, 1)
class AStreamingPlaceholderUnlocked : public AStreamingPlaceholderChildActorBase {
public:
    TArray<FStreamingPlaceholderLockState> States; // 0x270
    char pad_280[0x28];
    bool bAutoSwapWhenLockChanges; // 0x2a8
    char pad_2a9[0x57];
    static AStreamingPlaceholderUnlocked* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
