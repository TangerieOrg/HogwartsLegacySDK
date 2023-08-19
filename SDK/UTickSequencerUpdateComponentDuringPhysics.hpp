#pragma once
#include <cstdint>
#include "UTickSequencerUpdateComponent.hpp"
#pragma pack(push, 1)
class UTickSequencerUpdateComponentDuringPhysics : public UTickSequencerUpdateComponent {
public:
    static UTickSequencerUpdateComponentDuringPhysics* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
