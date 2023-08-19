#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UOnlineEngineInterface : public UObject {
public:
    static UOnlineEngineInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
