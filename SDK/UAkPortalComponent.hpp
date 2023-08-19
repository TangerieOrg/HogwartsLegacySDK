#pragma once
#include <cstdint>
#include "AkAcousticPortalState.hpp"
#include "ECollisionChannel.hpp"
#include "USceneComponent.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class UAkPortalComponent : public USceneComponent {
public:
    ECollisionChannel ObstructionCollisionChannel; // 0x220
    char pad_221[0xbf];
    static UAkPortalComponent* StaticClass();
    bool PortalPlacementValid();
    void OpenPortal();
    UPrimitiveComponent* GetPrimitiveParent();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}; // Size: 0x2e0
#pragma pack(pop)
