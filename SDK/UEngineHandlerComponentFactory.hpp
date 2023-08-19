#pragma once
#include <cstdint>
#include "UHandlerComponentFactory.hpp"
#pragma pack(push, 1)
class UEngineHandlerComponentFactory : public UHandlerComponentFactory {
public:
    static UEngineHandlerComponentFactory* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
