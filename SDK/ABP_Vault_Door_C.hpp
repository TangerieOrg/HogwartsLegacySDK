#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_Vault_Door_C : public AActor {
public:
    USceneComponent* DefaultSceneRoot; // 0x248
    static ABP_Vault_Door_C* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
