#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFieldNodeBase : public UActorComponent {
public:
    static UFieldNodeBase* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
