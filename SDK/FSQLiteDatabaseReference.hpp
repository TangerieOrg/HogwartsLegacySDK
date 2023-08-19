#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSQLiteDatabaseReference {
    FString DatabaseName; // 0x0
    TArray<FString> Tables; // 0x10
}; // Size: 0x20
#pragma pack(pop)
