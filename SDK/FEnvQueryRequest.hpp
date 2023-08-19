#pragma once
#include <cstdint>
class UEnvQuery;
class UObject;
class UWorld;
#pragma pack(push, 1)
struct FEnvQueryRequest {
    UEnvQuery* QueryTemplate; // 0x0
    UObject* Owner; // 0x8
    UWorld* World; // 0x10
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
