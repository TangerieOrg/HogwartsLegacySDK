#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UOnlineSession : public UObject {
public:
    static UOnlineSession* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
