#pragma once
#include <cstdint>
#include "FInputContextWithType.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UToolRecord : public UDataAsset {
public:
    FName LookupName; // 0x30
    FName LockName; // 0x38
    TArray<FInputContextWithType> Contexts; // 0x40
    static UToolRecord* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
