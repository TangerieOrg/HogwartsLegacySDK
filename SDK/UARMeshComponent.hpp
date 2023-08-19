#pragma once
#include <cstdint>
#include "FARMeshUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARMeshComponent : public UARComponent {
public:
    FARMeshUpdatePayload ReplicatedPayload; // 0x2a0
    static UARMeshComponent* StaticClass();
    void ServerUpdatePayload(FARMeshUpdatePayload& NewPayload);
    void ReceiveUpdate(FARMeshUpdatePayload& Payload);
    void ReceiveAdd(FARMeshUpdatePayload& Payload);
}; // Size: 0x300
#pragma pack(pop)
