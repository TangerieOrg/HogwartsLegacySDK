#pragma once
#include <cstdint>
#include "FAnimTrack.hpp"
#include "UAnimCompositeBase.hpp"
#pragma pack(push, 1)
class UAnimComposite : public UAnimCompositeBase {
public:
    FAnimTrack AnimationTrack; // 0xa8
    static UAnimComposite* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
