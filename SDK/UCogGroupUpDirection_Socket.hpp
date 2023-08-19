#pragma once
#include <cstdint>
#include "UCogGroupUpDirection.hpp"
#pragma pack(push, 1)
class UCogGroupUpDirection_Socket : public UCogGroupUpDirection {
public:
    FName SocketName; // 0x28
    static UCogGroupUpDirection_Socket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
