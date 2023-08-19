#pragma once
#include <cstdint>
#include "FARObjectUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARObjectComponent : public UARComponent {
public:
    FARObjectUpdatePayload ReplicatedPayload; // 0x2a0
    static UARObjectComponent* StaticClass();
    void ServerUpdatePayload(FARObjectUpdatePayload& NewPayload);
    void ReceiveUpdate(FARObjectUpdatePayload& Payload);
    void ReceiveAdd(FARObjectUpdatePayload& Payload);
}; // Size: 0x2d0
#pragma pack(pop)
