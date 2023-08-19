#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FURL {
    FString Protocol; // 0x0
    FString Host; // 0x10
    int32_t Port; // 0x20
    int32_t Valid; // 0x24
    FString Map; // 0x28
    FString RedirectURL; // 0x38
    TArray<FString> Op; // 0x48
    FString Portal; // 0x58
}; // Size: 0x68
#pragma pack(pop)
