#pragma once
#include <cstdint>
#include "FARPointUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARPointComponent : public UARComponent {
public:
    static UARPointComponent* StaticClass();
    void ServerUpdatePayload(FARPointUpdatePayload& NewPayload);
    void ReceiveUpdate(FARPointUpdatePayload& Payload);
    void ReceiveAdd(FARPointUpdatePayload& Payload);
}; // Size: 0x2a0
#pragma pack(pop)
