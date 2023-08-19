#pragma once
#include <cstdint>
#include "UNPC_Manager.hpp"
#pragma pack(push, 1)
class UStudent_Manager : public UNPC_Manager {
public:
    static UStudent_Manager* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
