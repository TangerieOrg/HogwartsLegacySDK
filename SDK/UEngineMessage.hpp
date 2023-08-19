#pragma once
#include <cstdint>
#include "ULocalMessage.hpp"
#pragma pack(push, 1)
class UEngineMessage : public ULocalMessage {
public:
    FString FailedPlaceMessage; // 0x28
    FString MaxedOutMessage; // 0x38
    FString EnteredMessage; // 0x48
    FString LeftMessage; // 0x58
    FString GlobalNameChange; // 0x68
    FString SpecEnteredMessage; // 0x78
    FString NewPlayerMessage; // 0x88
    FString NewSpecMessage; // 0x98
    static UEngineMessage* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
