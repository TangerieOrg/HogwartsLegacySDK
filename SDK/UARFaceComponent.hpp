#pragma once
#include <cstdint>
#include "EARFaceTransformMixing.hpp"
#include "EFaceComponentDebugMode.hpp"
#include "FARFaceUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARFaceComponent : public UARComponent {
public:
    FARFaceUpdatePayload ReplicatedPayload; // 0x2a0
    char pad_2e0[0x20];
    static UARFaceComponent* StaticClass();
    static void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(FARFaceUpdatePayload& NewPayload);
    void ReceiveUpdate(FARFaceUpdatePayload& Payload);
    void ReceiveAdd(FARFaceUpdatePayload& Payload);
}; // Size: 0x300
#pragma pack(pop)
