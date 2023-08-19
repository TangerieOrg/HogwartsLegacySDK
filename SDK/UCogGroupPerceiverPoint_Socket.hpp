#pragma once
#include <cstdint>
#include "UCogGroupPerceiverPoint.hpp"
#pragma pack(push, 1)
class UCogGroupPerceiverPoint_Socket : public UCogGroupPerceiverPoint {
public:
    FName SocketName; // 0x28
    static UCogGroupPerceiverPoint_Socket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
