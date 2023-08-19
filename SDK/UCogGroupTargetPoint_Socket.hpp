#pragma once
#include <cstdint>
#include "UCogGroupTargetPoint.hpp"
#pragma pack(push, 1)
class UCogGroupTargetPoint_Socket : public UCogGroupTargetPoint {
public:
    FName SocketName; // 0x28
    static UCogGroupTargetPoint_Socket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
