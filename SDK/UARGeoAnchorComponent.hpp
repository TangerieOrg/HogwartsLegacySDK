#pragma once
#include <cstdint>
#include "EGeoAnchorComponentDebugMode.hpp"
#include "FARGeoAnchorUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARGeoAnchorComponent : public UARComponent {
public:
    FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x2a0
    static UARGeoAnchorComponent* StaticClass();
    static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(FARGeoAnchorUpdatePayload& NewPayload);
    void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);
    void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);
}; // Size: 0x310
#pragma pack(pop)
