#pragma once
#include <cstdint>
#include "UBTTask_MoveTo.hpp"
#pragma pack(push, 1)
class UBTT_MoveToWithRadius : public UBTTask_MoveTo {
public:
    static UBTT_MoveToWithRadius* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
