#pragma once
#include <cstdint>
#include "ECameraShakePlaySpace.hpp"
#include "UObject.hpp"
class UCameraAnim;
class UInterpGroupInst;
class UInterpTrackMove;
class UInterpTrackInstMove;
#pragma pack(push, 1)
class UCameraAnimInst : public UObject {
public:
    UCameraAnim* CamAnim; // 0x28
    UInterpGroupInst* InterpGroupInst; // 0x30
    char pad_38[0x18];
    float PlayRate; // 0x50
    char pad_54[0x14];
    UInterpTrackMove* MoveTrack; // 0x68
    UInterpTrackInstMove* MoveInst; // 0x70
    ECameraShakePlaySpace PlaySpace; // 0x78
    char pad_79[0x97];
    static UCameraAnimInst* StaticClass();
    void Stop(bool bImmediate);
    void SetScale(float NewDuration);
    void SetDuration(float NewDuration);
}; // Size: 0x110
#pragma pack(pop)
