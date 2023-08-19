#pragma once
#include <cstdint>
#include "UObject.hpp"
class UNetConnection;
#pragma pack(push, 1)
class UChannel : public UObject {
public:
    UNetConnection* Connection; // 0x28
    char pad_30[0x38];
    static UChannel* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
