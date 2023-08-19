#pragma once
#include <cstdint>
#include "EImageComponentDebugMode.hpp"
#include "FARImageUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARImageComponent : public UARComponent {
public:
    FARImageUpdatePayload ReplicatedPayload; // 0x2a0
    static UARImageComponent* StaticClass();
    static void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(FARImageUpdatePayload& NewPayload);
    void ReceiveUpdate(FARImageUpdatePayload& Payload);
    void ReceiveAdd(FARImageUpdatePayload& Payload);
}; // Size: 0x300
#pragma pack(pop)
