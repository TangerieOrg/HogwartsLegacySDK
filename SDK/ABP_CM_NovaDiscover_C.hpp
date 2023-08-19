#pragma once
#include <cstdint>
#include "AAncientMagicNova.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UStaticMeshComponent;
class USceneComponent;
class UAncientMagicEffect_Nova;
#pragma pack(push, 1)
class ABP_CM_NovaDiscover_C : public AAncientMagicNova {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UStaticMeshComponent* Sphere; // 0x270
    USceneComponent* DefaultSceneRoot; // 0x278
    UAncientMagicEffect_Nova* Parent; // 0x280
    char pad_288[0x10];
    static ABP_CM_NovaDiscover_C* StaticClass();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CM_NovaDiscover(int32_t EntryPoint, float K2Node_Event_DeltaSeconds);
    void OnCollide__DelegateSignature();
}; // Size: 0x298
#pragma pack(pop)
