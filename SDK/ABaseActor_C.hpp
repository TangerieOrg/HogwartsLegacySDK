#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABaseActor_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* DefaultSceneRoot; // 0x250
    static ABaseActor_C* StaticClass();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BaseActor(int32_t EntryPoint, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x258
#pragma pack(pop)
