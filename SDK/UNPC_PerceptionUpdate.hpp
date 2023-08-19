#pragma once
#include <cstdint>
#include "UNPC_Update.hpp"
#pragma pack(push, 1)
class UNPC_PerceptionUpdate : public UNPC_Update {
public:
    static UNPC_PerceptionUpdate* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
