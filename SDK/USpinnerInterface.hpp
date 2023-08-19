#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class USpinnerInterface : public UInterface {
public:
    static USpinnerInterface* StaticClass();
    float LoadingComplete();
}; // Size: 0x28
#pragma pack(pop)
