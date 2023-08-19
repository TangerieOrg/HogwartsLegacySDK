#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMorphTargetInterface : public UInterface {
public:
    static UMorphTargetInterface* StaticClass();
    void OnMorphTargetsReceived();
}; // Size: 0x28
#pragma pack(pop)
