#pragma once
#include <cstdint>
#include "EQRCodeComponentDebugMode.hpp"
#include "FARQRCodeUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARQRCodeComponent : public UARComponent {
public:
    FARQRCodeUpdatePayload ReplicatedPayload; // 0x2a0
    static UARQRCodeComponent* StaticClass();
    static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(FARQRCodeUpdatePayload& NewPayload);
    void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);
    void ReceiveAdd(FARQRCodeUpdatePayload& Payload);
}; // Size: 0x310
#pragma pack(pop)
