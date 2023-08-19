#pragma once
#include <cstdint>
#include "EPlaneComponentDebugMode.hpp"
#include "FARPlaneUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARPlaneComponent : public UARComponent {
public:
    FARPlaneUpdatePayload ReplicatedPayload; // 0x2a0
    static UARPlaneComponent* StaticClass();
    static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    static void SetObjectClassificationDebugColors();
    void ServerUpdatePayload(FARPlaneUpdatePayload& NewPayload);
    void ReceiveUpdate(FARPlaneUpdatePayload& Payload);
    void ReceiveAdd(FARPlaneUpdatePayload& Payload);
    static void GetObjectClassificationDebugColors();
}; // Size: 0x320
#pragma pack(pop)
