#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UTurnBasedMatchInterface : public UInterface {
public:
    static UTurnBasedMatchInterface* StaticClass();
    void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);
    void OnMatchEnded(FString Match);
}; // Size: 0x28
#pragma pack(pop)
