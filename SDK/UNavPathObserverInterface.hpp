#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavPathObserverInterface : public UInterface {
public:
    static UNavPathObserverInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
