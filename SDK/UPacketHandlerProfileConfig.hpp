#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPacketHandlerProfileConfig : public UObject {
public:
    TArray<FString> Components; // 0x28
    static UPacketHandlerProfileConfig* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
