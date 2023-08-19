#pragma once
#include <cstdint>
#include "FExplodingSkeletonPieceFX.hpp"
#include "FExplodingSkeletonPieceFXFade.hpp"
#include "FExplodingSkeletonPieceVFXTracker.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
struct FExplodingSkeletonPieceTracker {
    UStaticMeshComponent* Piece; // 0x0
    FExplodingSkeletonPieceFX FX; // 0x8
    FExplodingSkeletonPieceFXFade FadeFX; // 0x20
    FExplodingSkeletonPieceVFXTracker FXTracker; // 0x38
    FExplodingSkeletonPieceVFXTracker FadeFXTracker; // 0x48
    float ActivationDelay; // 0x58
    float CollisionDelay; // 0x5c
    float Timeout; // 0x60
    float FadeOut; // 0x64
    uint8_t bIsSimulatingPhysics : 1; // 0x68
    uint8_t bEnabledCollisions : 1; // 0x68
    uint8_t bFadingOut : 1; // 0x68
    uint8_t bSuspended : 1; // 0x68
    uint8_t pad_bitfield_68_4 : 4;
    char pad_69[0x7];
}; // Size: 0x70
#pragma pack(pop)
