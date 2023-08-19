#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UGameplayTaskOwnerInterface : public UInterface {
public:
    static UGameplayTaskOwnerInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
