#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UWarmUpComponent : public UActorComponent {
public:
    TArray<FName> Tags; // 0xc8
    static UWarmUpComponent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
