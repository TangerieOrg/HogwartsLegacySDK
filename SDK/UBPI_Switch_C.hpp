#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UBPI_Switch_C : public UInterface {
public:
    static UBPI_Switch_C* StaticClass();
    void SwitchOff(AActor* SwitchActor);
    void SwitchOn(AActor* SwitchActor);
}; // Size: 0x28
#pragma pack(pop)
