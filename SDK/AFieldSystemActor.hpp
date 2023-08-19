#pragma once
#include <cstdint>
#include "AActor.hpp"
class UFieldSystemComponent;
#pragma pack(push, 1)
class AFieldSystemActor : public AActor {
public:
    UFieldSystemComponent* FieldSystemComponent; // 0x248
    static AFieldSystemActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
