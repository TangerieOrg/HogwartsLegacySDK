#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UBPI_Reset_C : public UInterface {
public:
    static UBPI_Reset_C* StaticClass();
    void ResetBlueprint(AActor* Actor);
}; // Size: 0x28
#pragma pack(pop)
