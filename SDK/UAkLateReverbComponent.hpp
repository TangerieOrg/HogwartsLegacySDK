#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class UAkAuxBus;
class UAkAcousticTextureSetComponent;
#pragma pack(push, 1)
class UAkLateReverbComponent : public USceneComponent {
public:
    float FadeRate; // 0x220
    float Priority; // 0x224
    bool AutoAssignAuxBus; // 0x228
    char pad_229[0x7];
    UAkAuxBus* AuxBus; // 0x230
    FString AuxBusName; // 0x238
    char pad_248[0x8];
    UAkAuxBus* AuxBusManual; // 0x250
    char pad_258[0x3e];
    bool bIsSimpleBox; // 0x296
    char pad_297[0x29];
    static UAkLateReverbComponent* StaticClass();
    void AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent);
}; // Size: 0x2c0
#pragma pack(pop)
