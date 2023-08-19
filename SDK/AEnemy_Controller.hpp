#pragma once
#include <cstdint>
#include "ANPC_Controller.hpp"
#pragma pack(push, 1)
class AEnemy_Controller : public ANPC_Controller {
public:
    static AEnemy_Controller* StaticClass();
}; // Size: 0x460
#pragma pack(pop)
