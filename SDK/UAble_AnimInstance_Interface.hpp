#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UAble_AnimInstance_Interface : public UInterface {
public:
    static UAble_AnimInstance_Interface* StaticClass();
    void Set_LastDesiredWorldDirection(FVector InWorldDirection);
    void Set_DesiredWorldSpeed(float InSpeed);
    void Set_DesiredWorldDirection(FVector InWorldDirection);
    void GoToLoco2();
    void GoToLoco1();
    void Get_LastDesiredWorldDirection(FVector& OutWorldDirection);
    void Get_DesiredWorldSpeed(float& OutSpeed);
    void Get_DesiredWorldDirection(FVector& OutWorldDirection);
}; // Size: 0x28
#pragma pack(pop)
