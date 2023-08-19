#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavRelevantInterface : public UInterface {
public:
    static UNavRelevantInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
