#pragma once
#include <cstdint>
#include "EPoseComponentDebugMode.hpp"
#include "FARPoseUpdatePayload.hpp"
#include "UARComponent.hpp"
#pragma pack(push, 1)
class UARPoseComponent : public UARComponent {
public:
    FARPoseUpdatePayload ReplicatedPayload; // 0x2a0
    static UARPoseComponent* StaticClass();
    static void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
    void ServerUpdatePayload(FARPoseUpdatePayload& NewPayload);
    void ReceiveUpdate(FARPoseUpdatePayload& Payload);
    void ReceiveAdd(FARPoseUpdatePayload& Payload);
}; // Size: 0x2e0
#pragma pack(pop)
