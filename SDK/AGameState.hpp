#pragma once
#include <cstdint>
#include "AGameStateBase.hpp"
#pragma pack(push, 1)
class AGameState : public AGameStateBase {
public:
    FName MatchState; // 0x298
    FName PreviousMatchState; // 0x2a0
    int32_t ElapsedTime; // 0x2a8
    char pad_2ac[0xc];
    static AGameState* StaticClass();
    void OnRep_MatchState();
    void OnRep_ElapsedTime();
}; // Size: 0x2b8
#pragma pack(pop)
