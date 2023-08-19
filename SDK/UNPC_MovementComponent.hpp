#pragma once
#include <cstdint>
#include "UAmbulatory_MovementComponent.hpp"
#pragma pack(push, 1)
class UNPC_MovementComponent : public UAmbulatory_MovementComponent {
public:
    char pad_fb0[0x40];
    static UNPC_MovementComponent* StaticClass();
}; // Size: 0xff0
#pragma pack(pop)
