#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavLinkCustomInterface : public UInterface {
public:
    static UNavLinkCustomInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
