#pragma once
#include <cstdint>
#include "UNPC_Manager.hpp"
#pragma pack(push, 1)
class UDead_Manager : public UNPC_Manager {
public:
    static UDead_Manager* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
