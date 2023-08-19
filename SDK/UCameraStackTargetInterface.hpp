#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UCameraStackTargetInterface : public UInterface {
public:
    static UCameraStackTargetInterface* StaticClass();
    AActor* GetRuntimeTarget();
}; // Size: 0x28
#pragma pack(pop)
