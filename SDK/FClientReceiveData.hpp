#pragma once
#include <cstdint>
class APlayerController;
class APlayerState;
class UObject;
#pragma pack(push, 1)
struct FClientReceiveData {
    APlayerController* LocalPC; // 0x0
    FName MessageType; // 0x8
    int32_t MessageIndex; // 0x10
    char pad_14[0x4];
    FString MessageString; // 0x18
    APlayerState* RelatedPlayerState_1; // 0x28
    APlayerState* RelatedPlayerState_2; // 0x30
    UObject* OptionalObject; // 0x38
}; // Size: 0x40
#pragma pack(pop)
