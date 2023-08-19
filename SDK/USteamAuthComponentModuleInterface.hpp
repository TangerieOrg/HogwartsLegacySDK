#pragma once
#include <cstdint>
#include "UHandlerComponentFactory.hpp"
#pragma pack(push, 1)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory {
public:
    static USteamAuthComponentModuleInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
