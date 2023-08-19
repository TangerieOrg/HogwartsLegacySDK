#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_LocalPlayer : public UActorProvider {
public:
    static UObject_LocalPlayer* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
