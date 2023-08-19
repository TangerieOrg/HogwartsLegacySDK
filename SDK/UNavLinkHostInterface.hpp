#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavLinkHostInterface : public UInterface {
public:
    static UNavLinkHostInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
