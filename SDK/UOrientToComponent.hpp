#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UOrientToComponent : public USceneComponent {
public:
    static UOrientToComponent* StaticClass();
    void ForceUpdate(bool& bSuccess);
}; // Size: 0x220
#pragma pack(pop)
