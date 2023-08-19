#pragma once
#include <cstdint>
#include "FAkSurfacePoly.hpp"
#include "UAkAcousticTextureSetComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent {
public:
    uint8_t bEnableSurfaceReflectors : 1; // 0x230
    uint8_t pad_bitfield_230_1 : 7;
    char pad_231[0x7];
    TArray<FAkSurfacePoly> AcousticPolys; // 0x238
    uint8_t bEnableDiffraction : 1; // 0x248
    uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x248
    uint8_t pad_bitfield_248_2 : 6;
    char pad_249[0x7];
    AActor* AssociatedRoom; // 0x250
    char pad_258[0x8];
    static UAkSurfaceReflectorSetComponent* StaticClass();
    void UpdateSurfaceReflectorSet();
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
}; // Size: 0x260
#pragma pack(pop)
