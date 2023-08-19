#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UObject_GameplayCamera : public UActorProvider {
public:
    static UObject_GameplayCamera* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
