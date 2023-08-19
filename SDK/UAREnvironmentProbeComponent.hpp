#pragma once
#include <cstdint>
#include "FAREnvironmentProbeUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UAREnvironmentProbeComponent : public UARComponent {
public:
    FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x2a0
    static UAREnvironmentProbeComponent* StaticClass();
    void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload& NewPayload);
    void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);
    void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);
}; // Size: 0x2d0
#pragma pack(pop)
