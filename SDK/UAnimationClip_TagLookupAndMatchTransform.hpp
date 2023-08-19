#pragma once
#include <cstdint>
#include "AnimationMatchFlags.hpp"
#include "AnimationTypeToFetch.hpp"
#include "UAnimationClip_TagLookup.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UAnimationClip_TagLookupAndMatchTransform : public UAnimationClip_TagLookup {
public:
    UTransformProvider* TransformToMatchProvider; // 0x70
    UTransformProvider* AnchorTransformProvider; // 0x78
    AnimationMatchFlags AnimationMatchFlag; // 0x80
    AnimationTypeToFetch FetchAnims; // 0x81
    bool bSearchAnimationArchitect; // 0x82
    char pad_83[0x5];
    static UAnimationClip_TagLookupAndMatchTransform* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
