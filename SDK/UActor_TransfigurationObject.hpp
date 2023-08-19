#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_TransfigurationObject : public UActorProvider {
public:
    uint32_t TransfigurationUID; // 0x38
    char pad_3c[0x4];
    static UActor_TransfigurationObject* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
