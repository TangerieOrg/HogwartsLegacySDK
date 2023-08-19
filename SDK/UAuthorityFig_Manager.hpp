#pragma once
#include <cstdint>
#include "UNPC_Manager.hpp"
#pragma pack(push, 1)
class UAuthorityFig_Manager : public UNPC_Manager {
public:
    char pad_e0[0x10];
    static UAuthorityFig_Manager* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
