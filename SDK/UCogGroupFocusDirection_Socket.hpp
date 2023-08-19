#pragma once
#include <cstdint>
#include "UCogGroupFocusDirection.hpp"
#pragma pack(push, 1)
class UCogGroupFocusDirection_Socket : public UCogGroupFocusDirection {
public:
    FName SocketName; // 0x28
    static UCogGroupFocusDirection_Socket* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
