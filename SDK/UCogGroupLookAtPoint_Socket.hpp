#pragma once
#include <cstdint>
#include "UCogGroupLookAtPoint.hpp"
#pragma pack(push, 1)
class UCogGroupLookAtPoint_Socket : public UCogGroupLookAtPoint {
public:
    FName SocketName; // 0x28
    static UCogGroupLookAtPoint_Socket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
