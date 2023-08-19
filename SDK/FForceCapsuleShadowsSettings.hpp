#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FForceCapsuleShadowsSettings {
    float DynamicShadowEndDistanceMeters; // 0x0
    float CapsuleShadowStartDistanceMeters; // 0x4
    float CapsuleShadowEndDistanceMeters; // 0x8
    float CapsuleIndirectShadowStartDistanceMeters; // 0xc
    float CapsuleIndirectShadowEndDistanceMeters; // 0x10
    float CapsuleIndirectShadowMinVisibilityAtStart; // 0x14
    float CapsuleIndirectShadowMinVisibilityAtEnd; // 0x18
    uint8_t bControlDynamicShadow : 1; // 0x1c
    uint8_t bControlCapsuleShadow : 1; // 0x1c
    uint8_t bControlCapsuleIndirectShadow : 1; // 0x1c
    uint8_t pad_bitfield_1c_3 : 5;
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
