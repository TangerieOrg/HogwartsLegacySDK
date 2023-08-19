#pragma once
#include <cstdint>
#include "ERemoteControlEvent.hpp"
#include "FRCRequest.hpp"
#pragma pack(push, 1)
struct FRemoteControlObjectEventHookRequest : public FRCRequest {
    ERemoteControlEvent EventType; // 0x68
    char pad_69[0x7];
    FString ObjectPath; // 0x70
    FString PropertyName; // 0x80
}; // Size: 0x90
#pragma pack(pop)
