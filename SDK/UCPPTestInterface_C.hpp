#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UCPPTestInterface_C : public UInterface {
public:
    static UCPPTestInterface_C* StaticClass();
    void SomeInterfaceFunction(FString StringInput, FString& StringOutput);
}; // Size: 0x28
#pragma pack(pop)
