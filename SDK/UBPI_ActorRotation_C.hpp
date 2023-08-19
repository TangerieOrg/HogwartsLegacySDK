#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBPI_ActorRotation_C : public UInterface {
public:
    static UBPI_ActorRotation_C* StaticClass();
    void UpdateRotation();
}; // Size: 0x28
#pragma pack(pop)
