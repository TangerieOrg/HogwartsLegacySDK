#pragma once
#include <cstdint>
#include "FFluidSimEmitterParams.hpp"
#include "FVector4.hpp"
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UFluidSimEmitterComponent : public UStaticMeshComponent {
public:
    FFluidSimEmitterParams EmitterParams; // 0x510
    static UFluidSimEmitterComponent* StaticClass();
    void SetMotionVectorStrength(float MotionVectorStrengthIn);
    void SetEmitterPos(FVector4& EmitterPosIn);
    void SetEmitterMultiplier(float EmitterMultiplierIn);
    void SetEmitterDir(FVector4& EmitterDirIn);
    void SetEmitterBias(float EmitterBiasIn);
    float GetMotionVectorStrength();
    float GetEmitterMultiplier();
    FVector4 GetEmitterDir();
    float GetEmitterBias();
}; // Size: 0x550
#pragma pack(pop)
