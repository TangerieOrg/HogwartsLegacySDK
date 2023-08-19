#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRemoteControlInterceptionFunctionParamStruct {
    int32_t Int32Value; // 0x0
    char pad_4[0x4];
    TArray<int32_t> IntArray; // 0x8
    FString IntString; // 0x18
}; // Size: 0x28
#pragma pack(pop)
