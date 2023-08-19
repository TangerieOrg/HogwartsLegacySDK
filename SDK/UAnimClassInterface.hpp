#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UAnimClassInterface : public UInterface {
public:
    static UAnimClassInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
