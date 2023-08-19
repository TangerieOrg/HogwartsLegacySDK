#pragma once
#include <cstdint>
#include "USaveReceivesWeatherDecalsStateMesh.hpp"
class AActor;
#pragma pack(push, 1)
class USaveReceivesWeatherDecalsStateActor : public USaveReceivesWeatherDecalsStateMesh {
public:
    char pad_80[0x8];
    static USaveReceivesWeatherDecalsStateActor* StaticClass();
    void Update(bool markRenderStateDirty);
    static USaveReceivesWeatherDecalsStateActor* CreateActor(AActor* Actor, bool ReceivesWeatherDecals, bool markRenderStateDirty);
}; // Size: 0x88
#pragma pack(pop)
