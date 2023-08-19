#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UFontProviderInterface : public UInterface {
public:
    static UFontProviderInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
