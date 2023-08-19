#pragma once
#include <cstdint>
#include "UGameViewportClient.hpp"
#pragma pack(push, 1)
class UPhoenixGameViewportClient : public UGameViewportClient {
public:
    char pad_360[0x30];
    static UPhoenixGameViewportClient* StaticClass();
}; // Size: 0x390
#pragma pack(pop)
