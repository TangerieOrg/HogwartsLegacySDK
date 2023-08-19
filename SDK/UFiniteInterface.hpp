#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UFiniteInterface : public UInterface {
public:
    static UFiniteInterface* StaticClass();
    void StartFinite(AActor* Instigator, bool RemovedEffect);
}; // Size: 0x28
#pragma pack(pop)
