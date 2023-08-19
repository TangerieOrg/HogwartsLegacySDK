#pragma once
#include <cstdint>
#include "UTimeSourceLocal.hpp"
#pragma pack(push, 1)
class UTimeSourceSanctuaryIdentity : public UTimeSourceLocal {
public:
    static UTimeSourceSanctuaryIdentity* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
